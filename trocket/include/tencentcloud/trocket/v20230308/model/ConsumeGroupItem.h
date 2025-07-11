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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_CONSUMEGROUPITEM_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_CONSUMEGROUPITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trocket
    {
        namespace V20230308
        {
            namespace Model
            {
                /**
                * 消费组信息
                */
                class ConsumeGroupItem : public AbstractModel
                {
                public:
                    ConsumeGroupItem();
                    ~ConsumeGroupItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
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
                     * 获取消费组名称
                     * @return ConsumerGroup 消费组名称
                     * 
                     */
                    std::string GetConsumerGroup() const;

                    /**
                     * 设置消费组名称
                     * @param _consumerGroup 消费组名称
                     * 
                     */
                    void SetConsumerGroup(const std::string& _consumerGroup);

                    /**
                     * 判断参数 ConsumerGroup 是否已赋值
                     * @return ConsumerGroup 是否已赋值
                     * 
                     */
                    bool ConsumerGroupHasBeenSet() const;

                    /**
                     * 获取是否开启消费
                     * @return ConsumeEnable 是否开启消费
                     * 
                     */
                    bool GetConsumeEnable() const;

                    /**
                     * 设置是否开启消费
                     * @param _consumeEnable 是否开启消费
                     * 
                     */
                    void SetConsumeEnable(const bool& _consumeEnable);

                    /**
                     * 判断参数 ConsumeEnable 是否已赋值
                     * @return ConsumeEnable 是否已赋值
                     * 
                     */
                    bool ConsumeEnableHasBeenSet() const;

                    /**
                     * 获取顺序投递：true
并发投递：false
                     * @return ConsumeMessageOrderly 顺序投递：true
并发投递：false
                     * 
                     */
                    bool GetConsumeMessageOrderly() const;

                    /**
                     * 设置顺序投递：true
并发投递：false
                     * @param _consumeMessageOrderly 顺序投递：true
并发投递：false
                     * 
                     */
                    void SetConsumeMessageOrderly(const bool& _consumeMessageOrderly);

                    /**
                     * 判断参数 ConsumeMessageOrderly 是否已赋值
                     * @return ConsumeMessageOrderly 是否已赋值
                     * 
                     */
                    bool ConsumeMessageOrderlyHasBeenSet() const;

                    /**
                     * 获取最大重试次数
                     * @return MaxRetryTimes 最大重试次数
                     * 
                     */
                    int64_t GetMaxRetryTimes() const;

                    /**
                     * 设置最大重试次数
                     * @param _maxRetryTimes 最大重试次数
                     * 
                     */
                    void SetMaxRetryTimes(const int64_t& _maxRetryTimes);

                    /**
                     * 判断参数 MaxRetryTimes 是否已赋值
                     * @return MaxRetryTimes 是否已赋值
                     * 
                     */
                    bool MaxRetryTimesHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Remark 备注
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注
                     * @param _remark 备注
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取4.x的集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterIdV4 4.x的集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterIdV4() const;

                    /**
                     * 设置4.x的集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterIdV4 4.x的集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClusterIdV4(const std::string& _clusterIdV4);

                    /**
                     * 判断参数 ClusterIdV4 是否已赋值
                     * @return ClusterIdV4 是否已赋值
                     * 
                     */
                    bool ClusterIdV4HasBeenSet() const;

                    /**
                     * 获取4.x的命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NamespaceV4 4.x的命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNamespaceV4() const;

                    /**
                     * 设置4.x的命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _namespaceV4 4.x的命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNamespaceV4(const std::string& _namespaceV4);

                    /**
                     * 判断参数 NamespaceV4 是否已赋值
                     * @return NamespaceV4 是否已赋值
                     * 
                     */
                    bool NamespaceV4HasBeenSet() const;

                    /**
                     * 获取4.x的消费组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConsumerGroupV4 4.x的消费组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetConsumerGroupV4() const;

                    /**
                     * 设置4.x的消费组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _consumerGroupV4 4.x的消费组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConsumerGroupV4(const std::string& _consumerGroupV4);

                    /**
                     * 判断参数 ConsumerGroupV4 是否已赋值
                     * @return ConsumerGroupV4 是否已赋值
                     * 
                     */
                    bool ConsumerGroupV4HasBeenSet() const;

                    /**
                     * 获取4.x的完整命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FullNamespaceV4 4.x的完整命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFullNamespaceV4() const;

                    /**
                     * 设置4.x的完整命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fullNamespaceV4 4.x的完整命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFullNamespaceV4(const std::string& _fullNamespaceV4);

                    /**
                     * 判断参数 FullNamespaceV4 是否已赋值
                     * @return FullNamespaceV4 是否已赋值
                     * 
                     */
                    bool FullNamespaceV4HasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 消费组名称
                     */
                    std::string m_consumerGroup;
                    bool m_consumerGroupHasBeenSet;

                    /**
                     * 是否开启消费
                     */
                    bool m_consumeEnable;
                    bool m_consumeEnableHasBeenSet;

                    /**
                     * 顺序投递：true
并发投递：false
                     */
                    bool m_consumeMessageOrderly;
                    bool m_consumeMessageOrderlyHasBeenSet;

                    /**
                     * 最大重试次数
                     */
                    int64_t m_maxRetryTimes;
                    bool m_maxRetryTimesHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 4.x的集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterIdV4;
                    bool m_clusterIdV4HasBeenSet;

                    /**
                     * 4.x的命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_namespaceV4;
                    bool m_namespaceV4HasBeenSet;

                    /**
                     * 4.x的消费组名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_consumerGroupV4;
                    bool m_consumerGroupV4HasBeenSet;

                    /**
                     * 4.x的完整命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fullNamespaceV4;
                    bool m_fullNamespaceV4HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_CONSUMEGROUPITEM_H_
