/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_KAFKACONNECTPARAM_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_KAFKACONNECTPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * Kafka连接源参数
                */
                class KafkaConnectParam : public AbstractModel
                {
                public:
                    KafkaConnectParam();
                    ~KafkaConnectParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Kafka连接源的实例资源, 非自建时必填，NetworkType=VPC时传clb实例id
                     * @return Resource Kafka连接源的实例资源, 非自建时必填，NetworkType=VPC时传clb实例id
                     * 
                     */
                    std::string GetResource() const;

                    /**
                     * 设置Kafka连接源的实例资源, 非自建时必填，NetworkType=VPC时传clb实例id
                     * @param _resource Kafka连接源的实例资源, 非自建时必填，NetworkType=VPC时传clb实例id
                     * 
                     */
                    void SetResource(const std::string& _resource);

                    /**
                     * 判断参数 Resource 是否已赋值
                     * @return Resource 是否已赋值
                     * 
                     */
                    bool ResourceHasBeenSet() const;

                    /**
                     * 获取是否为自建集群
                     * @return SelfBuilt 是否为自建集群
                     * 
                     */
                    bool GetSelfBuilt() const;

                    /**
                     * 设置是否为自建集群
                     * @param _selfBuilt 是否为自建集群
                     * 
                     */
                    void SetSelfBuilt(const bool& _selfBuilt);

                    /**
                     * 判断参数 SelfBuilt 是否已赋值
                     * @return SelfBuilt 是否已赋值
                     * 
                     */
                    bool SelfBuiltHasBeenSet() const;

                    /**
                     * 获取是否更新到关联的Dip任务
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsUpdate 是否更新到关联的Dip任务
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsUpdate() const;

                    /**
                     * 设置是否更新到关联的Dip任务
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isUpdate 是否更新到关联的Dip任务
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsUpdate(const bool& _isUpdate);

                    /**
                     * 判断参数 IsUpdate 是否已赋值
                     * @return IsUpdate 是否已赋值
                     * 
                     */
                    bool IsUpdateHasBeenSet() const;

                    /**
                     * 获取Kafka连接的broker地址, NetworkType=PUBLIC公网时必填
                     * @return BrokerAddress Kafka连接的broker地址, NetworkType=PUBLIC公网时必填
                     * 
                     */
                    std::string GetBrokerAddress() const;

                    /**
                     * 设置Kafka连接的broker地址, NetworkType=PUBLIC公网时必填
                     * @param _brokerAddress Kafka连接的broker地址, NetworkType=PUBLIC公网时必填
                     * 
                     */
                    void SetBrokerAddress(const std::string& _brokerAddress);

                    /**
                     * 判断参数 BrokerAddress 是否已赋值
                     * @return BrokerAddress 是否已赋值
                     * 
                     */
                    bool BrokerAddressHasBeenSet() const;

                    /**
                     * 获取CKafka连接源的实例资源地域, 跨地域时必填
                     * @return Region CKafka连接源的实例资源地域, 跨地域时必填
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置CKafka连接源的实例资源地域, 跨地域时必填
                     * @param _region CKafka连接源的实例资源地域, 跨地域时必填
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取网络类型：PUBLIC公网；VPC
                     * @return NetworkType 网络类型：PUBLIC公网；VPC
                     * 
                     */
                    std::string GetNetworkType() const;

                    /**
                     * 设置网络类型：PUBLIC公网；VPC
                     * @param _networkType 网络类型：PUBLIC公网；VPC
                     * 
                     */
                    void SetNetworkType(const std::string& _networkType);

                    /**
                     * 判断参数 NetworkType 是否已赋值
                     * @return NetworkType 是否已赋值
                     * 
                     */
                    bool NetworkTypeHasBeenSet() const;

                    /**
                     * 获取vpcId，NetworkType=VPC时必传
                     * @return UniqVpcId vpcId，NetworkType=VPC时必传
                     * 
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置vpcId，NetworkType=VPC时必传
                     * @param _uniqVpcId vpcId，NetworkType=VPC时必传
                     * 
                     */
                    void SetUniqVpcId(const std::string& _uniqVpcId);

                    /**
                     * 判断参数 UniqVpcId 是否已赋值
                     * @return UniqVpcId 是否已赋值
                     * 
                     */
                    bool UniqVpcIdHasBeenSet() const;

                    /**
                     * 获取vip，NetworkType=VPC时必传
                     * @return ServiceVip vip，NetworkType=VPC时必传
                     * 
                     */
                    std::string GetServiceVip() const;

                    /**
                     * 设置vip，NetworkType=VPC时必传
                     * @param _serviceVip vip，NetworkType=VPC时必传
                     * 
                     */
                    void SetServiceVip(const std::string& _serviceVip);

                    /**
                     * 判断参数 ServiceVip 是否已赋值
                     * @return ServiceVip 是否已赋值
                     * 
                     */
                    bool ServiceVipHasBeenSet() const;

                    /**
                     * 获取端口，NetworkType=VPC时必传
                     * @return Port 端口，NetworkType=VPC时必传
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置端口，NetworkType=VPC时必传
                     * @param _port 端口，NetworkType=VPC时必传
                     * 
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取跨云同步下需要客户传递唯一Id标志一组资源
                     * @return CrossNetResourceUniqueId 跨云同步下需要客户传递唯一Id标志一组资源
                     * 
                     */
                    std::string GetCrossNetResourceUniqueId() const;

                    /**
                     * 设置跨云同步下需要客户传递唯一Id标志一组资源
                     * @param _crossNetResourceUniqueId 跨云同步下需要客户传递唯一Id标志一组资源
                     * 
                     */
                    void SetCrossNetResourceUniqueId(const std::string& _crossNetResourceUniqueId);

                    /**
                     * 判断参数 CrossNetResourceUniqueId 是否已赋值
                     * @return CrossNetResourceUniqueId 是否已赋值
                     * 
                     */
                    bool CrossNetResourceUniqueIdHasBeenSet() const;

                    /**
                     * 获取跨云子网ID
                     * @return CrossNetVpcSubNetId 跨云子网ID
                     * 
                     */
                    std::string GetCrossNetVpcSubNetId() const;

                    /**
                     * 设置跨云子网ID
                     * @param _crossNetVpcSubNetId 跨云子网ID
                     * 
                     */
                    void SetCrossNetVpcSubNetId(const std::string& _crossNetVpcSubNetId);

                    /**
                     * 判断参数 CrossNetVpcSubNetId 是否已赋值
                     * @return CrossNetVpcSubNetId 是否已赋值
                     * 
                     */
                    bool CrossNetVpcSubNetIdHasBeenSet() const;

                private:

                    /**
                     * Kafka连接源的实例资源, 非自建时必填，NetworkType=VPC时传clb实例id
                     */
                    std::string m_resource;
                    bool m_resourceHasBeenSet;

                    /**
                     * 是否为自建集群
                     */
                    bool m_selfBuilt;
                    bool m_selfBuiltHasBeenSet;

                    /**
                     * 是否更新到关联的Dip任务
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isUpdate;
                    bool m_isUpdateHasBeenSet;

                    /**
                     * Kafka连接的broker地址, NetworkType=PUBLIC公网时必填
                     */
                    std::string m_brokerAddress;
                    bool m_brokerAddressHasBeenSet;

                    /**
                     * CKafka连接源的实例资源地域, 跨地域时必填
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 网络类型：PUBLIC公网；VPC
                     */
                    std::string m_networkType;
                    bool m_networkTypeHasBeenSet;

                    /**
                     * vpcId，NetworkType=VPC时必传
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * vip，NetworkType=VPC时必传
                     */
                    std::string m_serviceVip;
                    bool m_serviceVipHasBeenSet;

                    /**
                     * 端口，NetworkType=VPC时必传
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 跨云同步下需要客户传递唯一Id标志一组资源
                     */
                    std::string m_crossNetResourceUniqueId;
                    bool m_crossNetResourceUniqueIdHasBeenSet;

                    /**
                     * 跨云子网ID
                     */
                    std::string m_crossNetVpcSubNetId;
                    bool m_crossNetVpcSubNetIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_KAFKACONNECTPARAM_H_
