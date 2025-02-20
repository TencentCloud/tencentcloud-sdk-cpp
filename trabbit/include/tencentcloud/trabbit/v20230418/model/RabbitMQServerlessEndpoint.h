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

#ifndef TENCENTCLOUD_TRABBIT_V20230418_MODEL_RABBITMQSERVERLESSENDPOINT_H_
#define TENCENTCLOUD_TRABBIT_V20230418_MODEL_RABBITMQSERVERLESSENDPOINT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trabbit
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * 接入点
                */
                class RabbitMQServerlessEndpoint : public AbstractModel
                {
                public:
                    RabbitMQServerlessEndpoint();
                    ~RabbitMQServerlessEndpoint() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取vpc id
                     * @return VpcId vpc id
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置vpc id
                     * @param _vpcId vpc id
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取subnet id
                     * @return SubnetId subnet id
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置subnet id
                     * @param _subnetId subnet id
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取接入地址
                     * @return VpcEndpoint 接入地址
                     * 
                     */
                    std::string GetVpcEndpoint() const;

                    /**
                     * 设置接入地址
                     * @param _vpcEndpoint 接入地址
                     * 
                     */
                    void SetVpcEndpoint(const std::string& _vpcEndpoint);

                    /**
                     * 判断参数 VpcEndpoint 是否已赋值
                     * @return VpcEndpoint 是否已赋值
                     * 
                     */
                    bool VpcEndpointHasBeenSet() const;

                    /**
                     * 获取接入地址状态
                     * @return VpcDataStreamEndpointStatus 接入地址状态
                     * 
                     */
                    std::string GetVpcDataStreamEndpointStatus() const;

                    /**
                     * 设置接入地址状态
                     * @param _vpcDataStreamEndpointStatus 接入地址状态
                     * 
                     */
                    void SetVpcDataStreamEndpointStatus(const std::string& _vpcDataStreamEndpointStatus);

                    /**
                     * 判断参数 VpcDataStreamEndpointStatus 是否已赋值
                     * @return VpcDataStreamEndpointStatus 是否已赋值
                     * 
                     */
                    bool VpcDataStreamEndpointStatusHasBeenSet() const;

                    /**
                     * 获取是否是公网
                     * @return PublicNetwork 是否是公网
                     * 
                     */
                    bool GetPublicNetwork() const;

                    /**
                     * 设置是否是公网
                     * @param _publicNetwork 是否是公网
                     * 
                     */
                    void SetPublicNetwork(const bool& _publicNetwork);

                    /**
                     * 判断参数 PublicNetwork 是否已赋值
                     * @return PublicNetwork 是否已赋值
                     * 
                     */
                    bool PublicNetworkHasBeenSet() const;

                    /**
                     * 获取访问策略
                     * @return AccessStrategy 访问策略
                     * 
                     */
                    std::string GetAccessStrategy() const;

                    /**
                     * 设置访问策略
                     * @param _accessStrategy 访问策略
                     * 
                     */
                    void SetAccessStrategy(const std::string& _accessStrategy);

                    /**
                     * 判断参数 AccessStrategy 是否已赋值
                     * @return AccessStrategy 是否已赋值
                     * 
                     */
                    bool AccessStrategyHasBeenSet() const;

                    /**
                     * 获取带宽
                     * @return Bandwidth 带宽
                     * 
                     */
                    int64_t GetBandwidth() const;

                    /**
                     * 设置带宽
                     * @param _bandwidth 带宽
                     * 
                     */
                    void SetBandwidth(const int64_t& _bandwidth);

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     * 
                     */
                    bool BandwidthHasBeenSet() const;

                private:

                    /**
                     * vpc id
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * subnet id
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 接入地址
                     */
                    std::string m_vpcEndpoint;
                    bool m_vpcEndpointHasBeenSet;

                    /**
                     * 接入地址状态
                     */
                    std::string m_vpcDataStreamEndpointStatus;
                    bool m_vpcDataStreamEndpointStatusHasBeenSet;

                    /**
                     * 是否是公网
                     */
                    bool m_publicNetwork;
                    bool m_publicNetworkHasBeenSet;

                    /**
                     * 访问策略
                     */
                    std::string m_accessStrategy;
                    bool m_accessStrategyHasBeenSet;

                    /**
                     * 带宽
                     */
                    int64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRABBIT_V20230418_MODEL_RABBITMQSERVERLESSENDPOINT_H_
