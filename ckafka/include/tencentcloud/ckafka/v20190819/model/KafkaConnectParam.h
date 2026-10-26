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
                     * 获取<p>Kafka连接源的实例资源, 非自建时必填，NetworkType=VPC时传clb实例id</p>
                     * @return Resource <p>Kafka连接源的实例资源, 非自建时必填，NetworkType=VPC时传clb实例id</p>
                     * 
                     */
                    std::string GetResource() const;

                    /**
                     * 设置<p>Kafka连接源的实例资源, 非自建时必填，NetworkType=VPC时传clb实例id</p>
                     * @param _resource <p>Kafka连接源的实例资源, 非自建时必填，NetworkType=VPC时传clb实例id</p>
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
                     * 获取<p>是否为自建集群</p>
                     * @return SelfBuilt <p>是否为自建集群</p>
                     * 
                     */
                    bool GetSelfBuilt() const;

                    /**
                     * 设置<p>是否为自建集群</p>
                     * @param _selfBuilt <p>是否为自建集群</p>
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
                     * 获取<p>是否更新到关联的Dip任务</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsUpdate <p>是否更新到关联的Dip任务</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsUpdate() const;

                    /**
                     * 设置<p>是否更新到关联的Dip任务</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isUpdate <p>是否更新到关联的Dip任务</p>
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
                     * 获取<p>Kafka连接的broker地址, NetworkType=PUBLIC公网时必填</p>
                     * @return BrokerAddress <p>Kafka连接的broker地址, NetworkType=PUBLIC公网时必填</p>
                     * 
                     */
                    std::string GetBrokerAddress() const;

                    /**
                     * 设置<p>Kafka连接的broker地址, NetworkType=PUBLIC公网时必填</p>
                     * @param _brokerAddress <p>Kafka连接的broker地址, NetworkType=PUBLIC公网时必填</p>
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
                     * 获取<p>CKafka连接源的实例资源地域, 跨地域时必填</p>
                     * @return Region <p>CKafka连接源的实例资源地域, 跨地域时必填</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>CKafka连接源的实例资源地域, 跨地域时必填</p>
                     * @param _region <p>CKafka连接源的实例资源地域, 跨地域时必填</p>
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
                     * 获取<p>网络类型：PUBLIC公网；VPC</p>
                     * @return NetworkType <p>网络类型：PUBLIC公网；VPC</p>
                     * 
                     */
                    std::string GetNetworkType() const;

                    /**
                     * 设置<p>网络类型：PUBLIC公网；VPC</p>
                     * @param _networkType <p>网络类型：PUBLIC公网；VPC</p>
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
                     * 获取<p>vpcId，NetworkType=VPC时必传</p>
                     * @return UniqVpcId <p>vpcId，NetworkType=VPC时必传</p>
                     * 
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置<p>vpcId，NetworkType=VPC时必传</p>
                     * @param _uniqVpcId <p>vpcId，NetworkType=VPC时必传</p>
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
                     * 获取<p>vip，NetworkType=VPC时必传</p>
                     * @return ServiceVip <p>vip，NetworkType=VPC时必传</p>
                     * 
                     */
                    std::string GetServiceVip() const;

                    /**
                     * 设置<p>vip，NetworkType=VPC时必传</p>
                     * @param _serviceVip <p>vip，NetworkType=VPC时必传</p>
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
                     * 获取<p>端口，NetworkType=VPC时必传</p>
                     * @return Port <p>端口，NetworkType=VPC时必传</p>
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置<p>端口，NetworkType=VPC时必传</p>
                     * @param _port <p>端口，NetworkType=VPC时必传</p>
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
                     * 获取<p>跨云同步下需要客户传递唯一Id标志一组资源</p>
                     * @return CrossNetResourceUniqueId <p>跨云同步下需要客户传递唯一Id标志一组资源</p>
                     * 
                     */
                    std::string GetCrossNetResourceUniqueId() const;

                    /**
                     * 设置<p>跨云同步下需要客户传递唯一Id标志一组资源</p>
                     * @param _crossNetResourceUniqueId <p>跨云同步下需要客户传递唯一Id标志一组资源</p>
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
                     * 获取<p>跨云子网ID</p>
                     * @return CrossNetVpcSubNetId <p>跨云子网ID</p>
                     * 
                     */
                    std::string GetCrossNetVpcSubNetId() const;

                    /**
                     * 设置<p>跨云子网ID</p>
                     * @param _crossNetVpcSubNetId <p>跨云子网ID</p>
                     * 
                     */
                    void SetCrossNetVpcSubNetId(const std::string& _crossNetVpcSubNetId);

                    /**
                     * 判断参数 CrossNetVpcSubNetId 是否已赋值
                     * @return CrossNetVpcSubNetId 是否已赋值
                     * 
                     */
                    bool CrossNetVpcSubNetIdHasBeenSet() const;

                    /**
                     * 获取<p>用户输入原始broker接入点地址</p>
                     * @return OriginalBrokerAddresses <p>用户输入原始broker接入点地址</p>
                     * 
                     */
                    std::string GetOriginalBrokerAddresses() const;

                    /**
                     * 设置<p>用户输入原始broker接入点地址</p>
                     * @param _originalBrokerAddresses <p>用户输入原始broker接入点地址</p>
                     * 
                     */
                    void SetOriginalBrokerAddresses(const std::string& _originalBrokerAddresses);

                    /**
                     * 判断参数 OriginalBrokerAddresses 是否已赋值
                     * @return OriginalBrokerAddresses 是否已赋值
                     * 
                     */
                    bool OriginalBrokerAddressesHasBeenSet() const;

                private:

                    /**
                     * <p>Kafka连接源的实例资源, 非自建时必填，NetworkType=VPC时传clb实例id</p>
                     */
                    std::string m_resource;
                    bool m_resourceHasBeenSet;

                    /**
                     * <p>是否为自建集群</p>
                     */
                    bool m_selfBuilt;
                    bool m_selfBuiltHasBeenSet;

                    /**
                     * <p>是否更新到关联的Dip任务</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isUpdate;
                    bool m_isUpdateHasBeenSet;

                    /**
                     * <p>Kafka连接的broker地址, NetworkType=PUBLIC公网时必填</p>
                     */
                    std::string m_brokerAddress;
                    bool m_brokerAddressHasBeenSet;

                    /**
                     * <p>CKafka连接源的实例资源地域, 跨地域时必填</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>网络类型：PUBLIC公网；VPC</p>
                     */
                    std::string m_networkType;
                    bool m_networkTypeHasBeenSet;

                    /**
                     * <p>vpcId，NetworkType=VPC时必传</p>
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * <p>vip，NetworkType=VPC时必传</p>
                     */
                    std::string m_serviceVip;
                    bool m_serviceVipHasBeenSet;

                    /**
                     * <p>端口，NetworkType=VPC时必传</p>
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * <p>跨云同步下需要客户传递唯一Id标志一组资源</p>
                     */
                    std::string m_crossNetResourceUniqueId;
                    bool m_crossNetResourceUniqueIdHasBeenSet;

                    /**
                     * <p>跨云子网ID</p>
                     */
                    std::string m_crossNetVpcSubNetId;
                    bool m_crossNetVpcSubNetIdHasBeenSet;

                    /**
                     * <p>用户输入原始broker接入点地址</p>
                     */
                    std::string m_originalBrokerAddresses;
                    bool m_originalBrokerAddressesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_KAFKACONNECTPARAM_H_
