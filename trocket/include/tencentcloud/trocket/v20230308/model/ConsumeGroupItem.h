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
#include <tencentcloud/trocket/v20230308/model/Tag.h>
#include <tencentcloud/trocket/v20230308/model/RetryPolicy.h>


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
                     * 获取<p>实例ID</p>
                     * @return InstanceId <p>实例ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例ID</p>
                     * @param _instanceId <p>实例ID</p>
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
                     * 获取<p>消费组名称</p>
                     * @return ConsumerGroup <p>消费组名称</p>
                     * 
                     */
                    std::string GetConsumerGroup() const;

                    /**
                     * 设置<p>消费组名称</p>
                     * @param _consumerGroup <p>消费组名称</p>
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
                     * 获取<p>是否开启消费</p>
                     * @return ConsumeEnable <p>是否开启消费</p>
                     * 
                     */
                    bool GetConsumeEnable() const;

                    /**
                     * 设置<p>是否开启消费</p>
                     * @param _consumeEnable <p>是否开启消费</p>
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
                     * 获取<p>顺序投递：true<br>并发投递：false</p>
                     * @return ConsumeMessageOrderly <p>顺序投递：true<br>并发投递：false</p>
                     * 
                     */
                    bool GetConsumeMessageOrderly() const;

                    /**
                     * 设置<p>顺序投递：true<br>并发投递：false</p>
                     * @param _consumeMessageOrderly <p>顺序投递：true<br>并发投递：false</p>
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
                     * 获取<p>最大重试次数</p>
                     * @return MaxRetryTimes <p>最大重试次数</p>
                     * 
                     */
                    int64_t GetMaxRetryTimes() const;

                    /**
                     * 设置<p>最大重试次数</p>
                     * @param _maxRetryTimes <p>最大重试次数</p>
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
                     * 获取<p>备注</p>
                     * @return Remark <p>备注</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>备注</p>
                     * @param _remark <p>备注</p>
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
                     * 获取<p>4.x的集群ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterIdV4 <p>4.x的集群ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterIdV4() const;

                    /**
                     * 设置<p>4.x的集群ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterIdV4 <p>4.x的集群ID</p>
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
                     * 获取<p>4.x的命名空间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NamespaceV4 <p>4.x的命名空间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNamespaceV4() const;

                    /**
                     * 设置<p>4.x的命名空间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _namespaceV4 <p>4.x的命名空间</p>
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
                     * 获取<p>4.x的消费组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConsumerGroupV4 <p>4.x的消费组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetConsumerGroupV4() const;

                    /**
                     * 设置<p>4.x的消费组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _consumerGroupV4 <p>4.x的消费组名称</p>
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
                     * 获取<p>4.x的完整命名空间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FullNamespaceV4 <p>4.x的完整命名空间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFullNamespaceV4() const;

                    /**
                     * 设置<p>4.x的完整命名空间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fullNamespaceV4 <p>4.x的完整命名空间</p>
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

                    /**
                     * 获取<p>订阅的主题个数</p>
                     * @return SubscribeTopicNum <p>订阅的主题个数</p>
                     * 
                     */
                    int64_t GetSubscribeTopicNum() const;

                    /**
                     * 设置<p>订阅的主题个数</p>
                     * @param _subscribeTopicNum <p>订阅的主题个数</p>
                     * 
                     */
                    void SetSubscribeTopicNum(const int64_t& _subscribeTopicNum);

                    /**
                     * 判断参数 SubscribeTopicNum 是否已赋值
                     * @return SubscribeTopicNum 是否已赋值
                     * 
                     */
                    bool SubscribeTopicNumHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime <p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime <p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>绑定的标签列表</p>
                     * @return TagList <p>绑定的标签列表</p>
                     * 
                     */
                    std::vector<Tag> GetTagList() const;

                    /**
                     * 设置<p>绑定的标签列表</p>
                     * @param _tagList <p>绑定的标签列表</p>
                     * 
                     */
                    void SetTagList(const std::vector<Tag>& _tagList);

                    /**
                     * 判断参数 TagList 是否已赋值
                     * @return TagList 是否已赋值
                     * 
                     */
                    bool TagListHasBeenSet() const;

                    /**
                     * 获取<p>重试策略</p>
                     * @return RetryPolicy <p>重试策略</p>
                     * 
                     */
                    RetryPolicy GetRetryPolicy() const;

                    /**
                     * 设置<p>重试策略</p>
                     * @param _retryPolicy <p>重试策略</p>
                     * 
                     */
                    void SetRetryPolicy(const RetryPolicy& _retryPolicy);

                    /**
                     * 判断参数 RetryPolicy 是否已赋值
                     * @return RetryPolicy 是否已赋值
                     * 
                     */
                    bool RetryPolicyHasBeenSet() const;

                    /**
                     * 获取<p>消费模式，枚举值如下：</p><ul><li>CLUSTERING：集群/广播消费</li><li>LITE：LiteTopic 消费</li></ul>
                     * @return ConsumeModel <p>消费模式，枚举值如下：</p><ul><li>CLUSTERING：集群/广播消费</li><li>LITE：LiteTopic 消费</li></ul>
                     * 
                     */
                    std::string GetConsumeModel() const;

                    /**
                     * 设置<p>消费模式，枚举值如下：</p><ul><li>CLUSTERING：集群/广播消费</li><li>LITE：LiteTopic 消费</li></ul>
                     * @param _consumeModel <p>消费模式，枚举值如下：</p><ul><li>CLUSTERING：集群/广播消费</li><li>LITE：LiteTopic 消费</li></ul>
                     * 
                     */
                    void SetConsumeModel(const std::string& _consumeModel);

                    /**
                     * 判断参数 ConsumeModel 是否已赋值
                     * @return ConsumeModel 是否已赋值
                     * 
                     */
                    bool ConsumeModelHasBeenSet() const;

                    /**
                     * 获取<p>自定义的死信Topic名称</p>
                     * @return DeadLetterTargetTopic <p>自定义的死信Topic名称</p>
                     * 
                     */
                    std::string GetDeadLetterTargetTopic() const;

                    /**
                     * 设置<p>自定义的死信Topic名称</p>
                     * @param _deadLetterTargetTopic <p>自定义的死信Topic名称</p>
                     * 
                     */
                    void SetDeadLetterTargetTopic(const std::string& _deadLetterTargetTopic);

                    /**
                     * 判断参数 DeadLetterTargetTopic 是否已赋值
                     * @return DeadLetterTargetTopic 是否已赋值
                     * 
                     */
                    bool DeadLetterTargetTopicHasBeenSet() const;

                private:

                    /**
                     * <p>实例ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>消费组名称</p>
                     */
                    std::string m_consumerGroup;
                    bool m_consumerGroupHasBeenSet;

                    /**
                     * <p>是否开启消费</p>
                     */
                    bool m_consumeEnable;
                    bool m_consumeEnableHasBeenSet;

                    /**
                     * <p>顺序投递：true<br>并发投递：false</p>
                     */
                    bool m_consumeMessageOrderly;
                    bool m_consumeMessageOrderlyHasBeenSet;

                    /**
                     * <p>最大重试次数</p>
                     */
                    int64_t m_maxRetryTimes;
                    bool m_maxRetryTimesHasBeenSet;

                    /**
                     * <p>备注</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>4.x的集群ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterIdV4;
                    bool m_clusterIdV4HasBeenSet;

                    /**
                     * <p>4.x的命名空间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_namespaceV4;
                    bool m_namespaceV4HasBeenSet;

                    /**
                     * <p>4.x的消费组名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_consumerGroupV4;
                    bool m_consumerGroupV4HasBeenSet;

                    /**
                     * <p>4.x的完整命名空间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fullNamespaceV4;
                    bool m_fullNamespaceV4HasBeenSet;

                    /**
                     * <p>订阅的主题个数</p>
                     */
                    int64_t m_subscribeTopicNum;
                    bool m_subscribeTopicNumHasBeenSet;

                    /**
                     * <p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>绑定的标签列表</p>
                     */
                    std::vector<Tag> m_tagList;
                    bool m_tagListHasBeenSet;

                    /**
                     * <p>重试策略</p>
                     */
                    RetryPolicy m_retryPolicy;
                    bool m_retryPolicyHasBeenSet;

                    /**
                     * <p>消费模式，枚举值如下：</p><ul><li>CLUSTERING：集群/广播消费</li><li>LITE：LiteTopic 消费</li></ul>
                     */
                    std::string m_consumeModel;
                    bool m_consumeModelHasBeenSet;

                    /**
                     * <p>自定义的死信Topic名称</p>
                     */
                    std::string m_deadLetterTargetTopic;
                    bool m_deadLetterTargetTopicHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_CONSUMEGROUPITEM_H_
