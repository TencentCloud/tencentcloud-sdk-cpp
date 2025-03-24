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

#ifndef TENCENTCLOUD_HAI_V20230812_MODEL_NETWORKSTATUS_H_
#define TENCENTCLOUD_HAI_V20230812_MODEL_NETWORKSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Hai
    {
        namespace V20230812
        {
            namespace Model
            {
                /**
                * HAI 实例的网络配置和消耗情况
                */
                class NetworkStatus : public AbstractModel
                {
                public:
                    NetworkStatus();
                    ~NetworkStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取HAI 的实例 ID
                     * @return InstanceId HAI 的实例 ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置HAI 的实例 ID
                     * @param _instanceId HAI 的实例 ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取公网 IP 地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AddressIp 公网 IP 地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAddressIp() const;

                    /**
                     * 设置公网 IP 地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _addressIp 公网 IP 地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAddressIp(const std::string& _addressIp);

                    /**
                     * 判断参数 AddressIp 是否已赋值
                     * @return AddressIp 是否已赋值
                     * 
                     */
                    bool AddressIpHasBeenSet() const;

                    /**
                     * 获取出带宽上限，单位Mbps
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Bandwidth 出带宽上限，单位Mbps
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetBandwidth() const;

                    /**
                     * 设置出带宽上限，单位Mbps
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bandwidth 出带宽上限，单位Mbps
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBandwidth(const uint64_t& _bandwidth);

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     * 
                     */
                    bool BandwidthHasBeenSet() const;

                    /**
                     * 获取流量包总量，单位GB
                     * @return TotalTrafficAmount 流量包总量，单位GB
                     * 
                     */
                    double GetTotalTrafficAmount() const;

                    /**
                     * 设置流量包总量，单位GB
                     * @param _totalTrafficAmount 流量包总量，单位GB
                     * 
                     */
                    void SetTotalTrafficAmount(const double& _totalTrafficAmount);

                    /**
                     * 判断参数 TotalTrafficAmount 是否已赋值
                     * @return TotalTrafficAmount 是否已赋值
                     * 
                     */
                    bool TotalTrafficAmountHasBeenSet() const;

                    /**
                     * 获取流量包剩余量，单位GB
                     * @return RemainingTrafficAmount 流量包剩余量，单位GB
                     * 
                     */
                    double GetRemainingTrafficAmount() const;

                    /**
                     * 设置流量包剩余量，单位GB
                     * @param _remainingTrafficAmount 流量包剩余量，单位GB
                     * 
                     */
                    void SetRemainingTrafficAmount(const double& _remainingTrafficAmount);

                    /**
                     * 判断参数 RemainingTrafficAmount 是否已赋值
                     * @return RemainingTrafficAmount 是否已赋值
                     * 
                     */
                    bool RemainingTrafficAmountHasBeenSet() const;

                private:

                    /**
                     * HAI 的实例 ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 公网 IP 地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_addressIp;
                    bool m_addressIpHasBeenSet;

                    /**
                     * 出带宽上限，单位Mbps
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * 流量包总量，单位GB
                     */
                    double m_totalTrafficAmount;
                    bool m_totalTrafficAmountHasBeenSet;

                    /**
                     * 流量包剩余量，单位GB
                     */
                    double m_remainingTrafficAmount;
                    bool m_remainingTrafficAmountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HAI_V20230812_MODEL_NETWORKSTATUS_H_
