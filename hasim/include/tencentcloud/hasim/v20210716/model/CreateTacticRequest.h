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

#ifndef TENCENTCLOUD_HASIM_V20210716_MODEL_CREATETACTICREQUEST_H_
#define TENCENTCLOUD_HASIM_V20210716_MODEL_CREATETACTICREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateTactic请求参数结构体
                */
                class CreateTacticRequest : public AbstractModel
                {
                public:
                    CreateTacticRequest();
                    ~CreateTacticRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取是否自动执行
                     * @return IsAuto 是否自动执行
                     * 
                     */
                    int64_t GetIsAuto() const;

                    /**
                     * 设置是否自动执行
                     * @param _isAuto 是否自动执行
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
                     * 获取心跳上报间隔(s)
                     * @return PingInterval 心跳上报间隔(s)
                     * 
                     */
                    int64_t GetPingInterval() const;

                    /**
                     * 设置心跳上报间隔(s)
                     * @param _pingInterval 心跳上报间隔(s)
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
                     * 获取是否开启弱信号检测
                     * @return IsWeak 是否开启弱信号检测
                     * 
                     */
                    int64_t GetIsWeak() const;

                    /**
                     * 设置是否开启弱信号检测
                     * @param _isWeak 是否开启弱信号检测
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
                     * @return WeakThreshold 弱信号阈值（-dbm）
                     * 
                     */
                    int64_t GetWeakThreshold() const;

                    /**
                     * 设置弱信号阈值（-dbm）
                     * @param _weakThreshold 弱信号阈值（-dbm）
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
                     * 获取是否开启时延切换
                     * @return IsDelay 是否开启时延切换
                     * 
                     */
                    int64_t GetIsDelay() const;

                    /**
                     * 设置是否开启时延切换
                     * @param _isDelay 是否开启时延切换
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
                     * 获取网络时延阈值（ms）
                     * @return DelayThreshold 网络时延阈值（ms）
                     * 
                     */
                    int64_t GetDelayThreshold() const;

                    /**
                     * 设置网络时延阈值（ms）
                     * @param _delayThreshold 网络时延阈值（ms）
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
                     * @return IsFake 是否开启假信号检测
                     * 
                     */
                    int64_t GetIsFake() const;

                    /**
                     * 设置是否开启假信号检测
                     * @param _isFake 是否开启假信号检测
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
                     * @return FakeIP 假信号检测IP字符串，用逗号分隔
                     * 
                     */
                    std::string GetFakeIP() const;

                    /**
                     * 设置假信号检测IP字符串，用逗号分隔
                     * @param _fakeIP 假信号检测IP字符串，用逗号分隔
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
                     * @return FakeInterval 假信号检测间隔（s）
                     * 
                     */
                    int64_t GetFakeInterval() const;

                    /**
                     * 设置假信号检测间隔（s）
                     * @param _fakeInterval 假信号检测间隔（s）
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
                     * @return IsNet 是否开启网络制式检测
                     * 
                     */
                    int64_t GetIsNet() const;

                    /**
                     * 设置是否开启网络制式检测
                     * @param _isNet 是否开启网络制式检测
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
                     * 获取网络回落制式 1 2G、 2 3G 、 3 2/3G
                     * @return Network 网络回落制式 1 2G、 2 3G 、 3 2/3G
                     * 
                     */
                    int64_t GetNetwork() const;

                    /**
                     * 设置网络回落制式 1 2G、 2 3G 、 3 2/3G
                     * @param _network 网络回落制式 1 2G、 2 3G 、 3 2/3G
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
                     * @return IsMove 是否开启移动检测
                     * 
                     */
                    int64_t GetIsMove() const;

                    /**
                     * 设置是否开启移动检测
                     * @param _isMove 是否开启移动检测
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
                     * 获取是否开启最优先运营商
                     * @return IsPriorityTele 是否开启最优先运营商
                     * 
                     */
                    int64_t GetIsPriorityTele() const;

                    /**
                     * 设置是否开启最优先运营商
                     * @param _isPriorityTele 是否开启最优先运营商
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
                     * @return PriorityTele 最优先运营商 1 移动、 2 联通、 3 电信 4 上次在线运营商
                     * 
                     */
                    int64_t GetPriorityTele() const;

                    /**
                     * 设置最优先运营商 1 移动、 2 联通、 3 电信 4 上次在线运营商
                     * @param _priorityTele 最优先运营商 1 移动、 2 联通、 3 电信 4 上次在线运营商
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
                     * @return IsBottomTele 是否开启最不优先运营商
                     * 
                     */
                    int64_t GetIsBottomTele() const;

                    /**
                     * 设置是否开启最不优先运营商
                     * @param _isBottomTele 是否开启最不优先运营商
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
                     * @return BottomTele 最不优先运营商 1 移动、 2 联通、 3 电信
                     * 
                     */
                    int64_t GetBottomTele() const;

                    /**
                     * 设置最不优先运营商 1 移动、 2 联通、 3 电信
                     * @param _bottomTele 最不优先运营商 1 移动、 2 联通、 3 电信
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
                     * 获取最优先信号选取策略
                     * @return IsBestSignal 最优先信号选取策略
                     * 
                     */
                    int64_t GetIsBestSignal() const;

                    /**
                     * 设置最优先信号选取策略
                     * @param _isBestSignal 最优先信号选取策略
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
                     * 策略名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 是否自动执行
                     */
                    int64_t m_isAuto;
                    bool m_isAutoHasBeenSet;

                    /**
                     * 心跳上报间隔(s)
                     */
                    int64_t m_pingInterval;
                    bool m_pingIntervalHasBeenSet;

                    /**
                     * 是否开启弱信号检测
                     */
                    int64_t m_isWeak;
                    bool m_isWeakHasBeenSet;

                    /**
                     * 弱信号阈值（-dbm）
                     */
                    int64_t m_weakThreshold;
                    bool m_weakThresholdHasBeenSet;

                    /**
                     * 是否开启时延切换
                     */
                    int64_t m_isDelay;
                    bool m_isDelayHasBeenSet;

                    /**
                     * 网络时延阈值（ms）
                     */
                    int64_t m_delayThreshold;
                    bool m_delayThresholdHasBeenSet;

                    /**
                     * 是否开启假信号检测
                     */
                    int64_t m_isFake;
                    bool m_isFakeHasBeenSet;

                    /**
                     * 假信号检测IP字符串，用逗号分隔
                     */
                    std::string m_fakeIP;
                    bool m_fakeIPHasBeenSet;

                    /**
                     * 假信号检测间隔（s）
                     */
                    int64_t m_fakeInterval;
                    bool m_fakeIntervalHasBeenSet;

                    /**
                     * 是否开启网络制式检测
                     */
                    int64_t m_isNet;
                    bool m_isNetHasBeenSet;

                    /**
                     * 网络回落制式 1 2G、 2 3G 、 3 2/3G
                     */
                    int64_t m_network;
                    bool m_networkHasBeenSet;

                    /**
                     * 是否开启移动检测
                     */
                    int64_t m_isMove;
                    bool m_isMoveHasBeenSet;

                    /**
                     * 是否开启最优先运营商
                     */
                    int64_t m_isPriorityTele;
                    bool m_isPriorityTeleHasBeenSet;

                    /**
                     * 最优先运营商 1 移动、 2 联通、 3 电信 4 上次在线运营商
                     */
                    int64_t m_priorityTele;
                    bool m_priorityTeleHasBeenSet;

                    /**
                     * 是否开启最不优先运营商
                     */
                    int64_t m_isBottomTele;
                    bool m_isBottomTeleHasBeenSet;

                    /**
                     * 最不优先运营商 1 移动、 2 联通、 3 电信
                     */
                    int64_t m_bottomTele;
                    bool m_bottomTeleHasBeenSet;

                    /**
                     * 最优先信号选取策略
                     */
                    int64_t m_isBestSignal;
                    bool m_isBestSignalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HASIM_V20210716_MODEL_CREATETACTICREQUEST_H_
