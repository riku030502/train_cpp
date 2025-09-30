# train_cpp

C++ の基礎学習用リポジトリです。  
変数・関数・ファイル分割・クラスなど、C++ プログラミングの基本を学ぶためのサンプルコードをまとめています。  
ROS2 のビルドシステム（colcon / ament_cmake）を利用していますが、内容は純粋な C++ の学習が目的です。　　


ROS2 ワークスペースから以下を実行します。

```bash
cd ~/kobayashi_ws
colcon build --packages-select train_cpp
source install/setup.bash
