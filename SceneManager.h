#pragma once
class SceneManager final{
private:
	//コンストラクタをprivateにする
	SceneManager();
	//デストラクタをprivateにする
	~SceneManager();

public://メンバ関数

	/// <summary>
	/// シーンを変える関数
	/// </summary>
	/// <param name="sceneNo">シーン番号</param>
	void ChangeScene(int &sceneNo);

	//コピーコンストラクタを無効にする
	SceneManager(const SceneManager& obj) = delete;
	//代入演算子を無効にする
	SceneManager& operator=(const SceneManager& obj) = delete;

	/// <summary>
	/// シングルトンインスタンスの取得
	/// </summary>
	/// <returns>シングルトンインスタンス</returns>
	static SceneManager* GetInstance();
};

