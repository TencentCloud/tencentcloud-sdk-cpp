/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_HASIM_V20210716_MODEL_TACTIC_H_
#define TENCENTCLOUD_HASIM_V20210716_MODEL_TACTIC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Hasim
    {
        namespace V20210716
        {
            namespace Model
            {
                /**
                * 策略信息
                */
                class Tactic : public AbstractModel
                {
                public:
                    Tactic();
                    ~Tactic() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取策略ID
                     * @return ID 策略ID
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置策略ID
                     * @param _iD 策略ID
                     * 
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatedAt 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createdAt 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取是否自动执行策略
                     * @return IsAuto 是否自动执行策略
                     * 
                     */
                    int64_t GetIsAuto() const;

                    /**
                     * 设置是否自动执行策略
                     * @param _isAuto 是否自动执行策略
                     * 
                     */
                    void SetIsAuto(const int64_t& _isAuto);

                    /**
                     * 判断参数 IsAuto 是否已赋值
                     * @return IsAuto 是否已赋值
                     * 
                     */
                    bool IsAutoHasBeenSet() const;

                    /**
                     * 获取设备上报信息间隔
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PingInterval 设备上报信息间隔
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPingInterval() const;

                    /**
                     * 设置设备上报信息间隔
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pingInterval 设备上报信息间隔
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPingInterval(const int64_t& _pingInterval);

                    /**
                     * 判断参数 PingInterval 是否已赋值
                     * @return PingInterval 是否已赋值
                     * 
                     */
                    bool PingIntervalHasBeenSet() const;

                    /**
                     * 获取是否开启弱信号检查
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsWeak 是否开启弱信号检查
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsWeak() const;

                    /**
                     * 设置是否开启弱信号检查
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isWeak 是否开启弱信号检查
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsWeak(const int64_t& _isWeak);

                    /**
                     * 判断参数 IsWeak 是否已赋值
                     * @return IsWeak 是否已赋值
                     * 
                     */
                    bool IsWeakHasBeenSet() const;

                    /**
                     * 获取弱信号阈值（-dbm）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WeakThreshold 弱信号阈值（-dbm）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetWeakThreshold() const;

                    /**
                     * 设置弱信号阈值（-dbm）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _weakThreshold 弱信号阈值（-dbm）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWeakThreshold(const int64_t& _weakThreshold);

                    /**
                     * 判断参数 WeakThreshold 是否已赋值
                     * @return WeakThreshold 是否已赋值
                     * 
                     */
                    bool WeakThresholdHasBeenSet() const;

                    /**
                     * 获取忘了时延切换
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsDelay 忘了时延切换
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsDelay() const;

                    /**
                     * 设置忘了时延切换
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isDelay 忘了时延切换
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsDelay(const int64_t& _isDelay);

                    /**
                     * 判断参数 IsDelay 是否已赋值
                     * @return IsDelay 是否已赋值
                     * 
                     */
                    bool IsDelayHasBeenSet() const;

                    /**
                     * 获取时延阈值（ms）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DelayThreshold 时延阈值（ms）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDelayThreshold() const;

                    /**
                     * 设置时延阈值（ms）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _delayThreshold 时延阈值（ms）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDelayThreshold(const int64_t& _delayThreshold);

                    /**
                     * 判断参数 DelayThreshold 是否已赋值
                     * @return DelayThreshold 是否已赋值
                     * 
                     */
                    bool DelayThresholdHasBeenSet() const;

                    /**
                     * 获取是否开启假信号检测
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsFake 是否开启假信号检测
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsFake() const;

                    /**
                     * 设置是否开启假信号检测
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isFake 是否开启假信号检测
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsFake(const int64_t& _isFake);

                    /**
                     * 判断参数 IsFake 是否已赋值
                     * @return IsFake 是否已赋值
                     * 
                     */
                    bool IsFakeHasBeenSet() const;

                    /**
                     * 获取假信号检测IP字符串，用逗号分隔
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FakeIP 假信号检测IP字符串，用逗号分隔
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFakeIP() const;

                    /**
                     * 设置假信号检测IP字符串，用逗号分隔
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fakeIP 假信号检测IP字符串，用逗号分隔
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFakeIP(const std::string& _fakeIP);

                    /**
                     * 判断参数 FakeIP 是否已赋值
                     * @return FakeIP 是否已赋值
                     * 
                     */
                    bool FakeIPHasBeenSet() const;

                    /**
                     * 获取假信号检测间隔（s）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FakeInterval 假信号检测间隔（s）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetFakeInterval() const;

                    /**
                     * 设置假信号检测间隔（s）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fakeInterval 假信号检测间隔（s）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFakeInterval(const int64_t& _fakeInterval);

                    /**
                     * 判断参数 FakeInterval 是否已赋值
                     * @return FakeInterval 是否已赋值
                     * 
                     */
                    bool FakeIntervalHasBeenSet() const;

                    /**
                     * 获取是否开启网络制式检测
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsNet 是否开启网络制式检测
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsNet() const;

                    /**
                     * 设置是否开启网络制式检测
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isNet 是否开启网络制式检测
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsNet(const int64_t& _isNet);

                    /**
                     * 判断参数 IsNet 是否已赋值
                     * @return IsNet 是否已赋值
                     * 
                     */
                    bool IsNetHasBeenSet() const;

                    /**
                     * 获取网络回落制式 1: 2G、 2: 3G 、 3: 2/3G
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Network 网络回落制式 1: 2G、 2: 3G 、 3: 2/3G
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetNetwork() const;

                    /**
                     * 设置网络回落制式 1: 2G、 2: 3G 、 3: 2/3G
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _network 网络回落制式 1: 2G、 2: 3G 、 3: 2/3G
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNetwork(const int64_t& _network);

                    /**
                     * 判断参数 Network 是否已赋值
                     * @return Network 是否已赋值
                     * 
                     */
                    bool NetworkHasBeenSet() const;

                    /**
                     * 获取是否开启移动检测
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsMove 是否开启移动检测
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsMove() const;

                    /**
                     * 设置是否开启移动检测
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isMove 是否开启移动检测
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsMove(const int64_t& _isMove);

                    /**
                     * 判断参数 IsMove 是否已赋值
                     * @return IsMove 是否已赋值
                     * 
                     */
                    bool IsMoveHasBeenSet() const;

                    /**
                     * 获取策略名称
                     * @return Name 策略名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置策略名称
                     * @param _name 策略名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取是否开启最优先运营商
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsPriorityTele 是否开启最优先运营商
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsPriorityTele() const;

                    /**
                     * 设置是否开启最优先运营商
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isPriorityTele 是否开启最优先运营商
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsPriorityTele(const int64_t& _isPriorityTele);

                    /**
                     * 判断参数 IsPriorityTele 是否已赋值
                     * @return IsPriorityTele 是否已赋值
                     * 
                     */
                    bool IsPriorityTeleHasBeenSet() const;

                    /**
                     * 获取最优先运营商 1 移动、 2 联通、 3 电信 4 上次在线运营商
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PriorityTele 最优先运营商 1 移动、 2 联通、 3 电信 4 上次在线运营商
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPriorityTele() const;

                    /**
                     * 设置最优先运营商 1 移动、 2 联通、 3 电信 4 上次在线运营商
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _priorityTele 最优先运营商 1 移动、 2 联通、 3 电信 4 上次在线运营商
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPriorityTele(const int64_t& _priorityTele);

                    /**
                     * 判断参数 PriorityTele 是否已赋值
                     * @return PriorityTele 是否已赋值
                     * 
                     */
                    bool PriorityTeleHasBeenSet() const;

                    /**
                     * 获取是否开启最不优先运营商
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsBottomTele 是否开启最不优先运营商
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsBottomTele() const;

                    /**
                     * 设置是否开启最不优先运营商
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isBottomTele 是否开启最不优先运营商
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsBottomTele(const int64_t& _isBottomTele);

                    /**
                     * 判断参数 IsBottomTele 是否已赋值
                     * @return IsBottomTele 是否已赋值
                     * 
                     */
                    bool IsBottomTeleHasBeenSet() const;

                    /**
                     * 获取最不优先运营商 1 移动、 2 联通、 3 电信
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BottomTele 最不优先运营商 1 移动、 2 联通、 3 电信
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetBottomTele() const;

                    /**
                     * 设置最不优先运营商 1 移动、 2 联通、 3 电信
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bottomTele 最不优先运营商 1 移动、 2 联通、 3 电信
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBottomTele(const int64_t& _bottomTele);

                    /**
                     * 判断参数 BottomTele 是否已赋值
                     * @return BottomTele 是否已赋值
                     * 
                     */
                    bool BottomTeleHasBeenSet() const;

                    /**
                     * 获取是否开启最优先信号选取策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsBestSignal 是否开启最优先信号选取策略
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsBestSignal() const;

                    /**
                     * 设置是否开启最优先信号选取策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isBestSignal 是否开启最优先信号选取策略
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsBestSignal(const int64_t& _isBestSignal);

                    /**
                     * 判断参数 IsBestSignal 是否已赋值
                     * @return IsBestSignal 是否已赋值
                     * 
                     */
                    bool IsBestSignalHasBeenSet() const;

                private:

                    /**
                     * 策略ID
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * 是否自动执行策略
                     */
                    int64_t m_isAuto;
                    bool m_isAutoHasBeenSet;

                    /**
                     * 设备上报信息间隔
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_pingInterval;
                    bool m_pingIntervalHasBeenSet;

                    /**
                     * 是否开启弱信号检查
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isWeak;
                    bool m_isWeakHasBeenSet;

                    /**
                     * 弱信号阈值（-dbm）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_weakThreshold;
                    bool m_weakThresholdHasBeenSet;

                    /**
                     * 忘了时延切换
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isDelay;
                    bool m_isDelayHasBeenSet;

                    /**
                     * 时延阈值（ms）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_delayThreshold;
                    bool m_delayThresholdHasBeenSet;

                    /**
                     * 是否开启假信号检测
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isFake;
                    bool m_isFakeHasBeenSet;

                    /**
                     * 假信号检测IP字符串，用逗号分隔
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fakeIP;
                    bool m_fakeIPHasBeenSet;

                    /**
                     * 假信号检测间隔（s）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_fakeInterval;
                    bool m_fakeIntervalHasBeenSet;

                    /**
                     * 是否开启网络制式检测
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isNet;
                    bool m_isNetHasBeenSet;

                    /**
                     * 网络回落制式 1: 2G、 2: 3G 、 3: 2/3G
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_network;
                    bool m_networkHasBeenSet;

                    /**
                     * 是否开启移动检测
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isMove;
                    bool m_isMoveHasBeenSet;

                    /**
                     * 策略名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 是否开启最优先运营商
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isPriorityTele;
                    bool m_isPriorityTeleHasBeenSet;

                    /**
                     * 最优先运营商 1 移动、 2 联通、 3 电信 4 上次在线运营商
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_priorityTele;
                    bool m_priorityTeleHasBeenSet;

                    /**
                     * 是否开启最不优先运营商
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isBottomTele;
                    bool m_isBottomTeleHasBeenSet;

                    /**
                     * 最不优先运营商 1 移动、 2 联通、 3 电信
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_bottomTele;
                    bool m_bottomTeleHasBeenSet;

                    /**
                     * 是否开启最优先信号选取策略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isBestSignal;
                    bool m_isBestSignalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HASIM_V20210716_MODEL_TACTIC_H_
