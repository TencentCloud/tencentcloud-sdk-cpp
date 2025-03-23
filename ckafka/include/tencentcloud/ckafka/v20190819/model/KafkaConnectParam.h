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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_KAFKACONNECTPARAM_H_
