# train_cpp

変数・関数・ファイル分割・クラスなど、C++ プログラミングの基本を学ぶために実行していたリポジトリ．  
ROS2 のビルドシステム（colcon / ament_cmake）を利用していますが、内容は純粋な C++ の学習．　　


ROS2 ワークスペースから以下を実行．

```bash
cd ~/kobayashi_ws
colcon build --packages-select train_cpp
source install/setup.bash
