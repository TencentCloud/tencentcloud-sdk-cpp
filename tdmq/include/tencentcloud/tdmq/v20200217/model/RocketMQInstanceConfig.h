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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQINSTANCECONFIG_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQINSTANCECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/InstanceNodeDistribution.h>
#include <tencentcloud/tdmq/v20200217/model/RocketMQTopicDistribution.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * RocketMQ专享集群实例配置
                */
                class RocketMQInstanceConfig : public AbstractModel
                {
                public:
                    RocketMQInstanceConfig();
                    ~RocketMQInstanceConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取单命名空间TPS上线
                     * @return MaxTpsPerNamespace 单命名空间TPS上线
                     * 
                     */
                    uint64_t GetMaxTpsPerNamespace() const;

                    /**
                     * 设置单命名空间TPS上线
                     * @param _maxTpsPerNamespace 单命名空间TPS上线
                     * 
                     */
                    void SetMaxTpsPerNamespace(const uint64_t& _maxTpsPerNamespace);

                    /**
                     * 判断参数 MaxTpsPerNamespace 是否已赋值
                     * @return MaxTpsPerNamespace 是否已赋值
                     * 
                     */
                    bool MaxTpsPerNamespaceHasBeenSet() const;

                    /**
                     * 获取最大命名空间数量
                     * @return MaxNamespaceNum 最大命名空间数量
                     * 
                     */
                    uint64_t GetMaxNamespaceNum() const;

                    /**
                     * 设置最大命名空间数量
                     * @param _maxNamespaceNum 最大命名空间数量
                     * 
                     */
                    void SetMaxNamespaceNum(const uint64_t& _maxNamespaceNum);

                    /**
                     * 判断参数 MaxNamespaceNum 是否已赋值
                     * @return MaxNamespaceNum 是否已赋值
                     * 
                     */
                    bool MaxNamespaceNumHasBeenSet() const;

                    /**
                     * 获取已使用命名空间数量
                     * @return UsedNamespaceNum 已使用命名空间数量
                     * 
                     */
                    uint64_t GetUsedNamespaceNum() const;

                    /**
                     * 设置已使用命名空间数量
                     * @param _usedNamespaceNum 已使用命名空间数量
                     * 
                     */
                    void SetUsedNamespaceNum(const uint64_t& _usedNamespaceNum);

                    /**
                     * 判断参数 UsedNamespaceNum 是否已赋值
                     * @return UsedNamespaceNum 是否已赋值
                     * 
                     */
                    bool UsedNamespaceNumHasBeenSet() const;

                    /**
                     * 获取最大Topic数量
                     * @return MaxTopicNum 最大Topic数量
                     * 
                     */
                    uint64_t GetMaxTopicNum() const;

                    /**
                     * 设置最大Topic数量
                     * @param _maxTopicNum 最大Topic数量
                     * 
                     */
                    void SetMaxTopicNum(const uint64_t& _maxTopicNum);

                    /**
                     * 判断参数 MaxTopicNum 是否已赋值
                     * @return MaxTopicNum 是否已赋值
                     * 
                     */
                    bool MaxTopicNumHasBeenSet() const;

                    /**
                     * 获取已使用Topic数量
                     * @return UsedTopicNum 已使用Topic数量
                     * 
                     */
                    uint64_t GetUsedTopicNum() const;

                    /**
                     * 设置已使用Topic数量
                     * @param _usedTopicNum 已使用Topic数量
                     * 
                     */
                    void SetUsedTopicNum(const uint64_t& _usedTopicNum);

                    /**
                     * 判断参数 UsedTopicNum 是否已赋值
                     * @return UsedTopicNum 是否已赋值
                     * 
                     */
                    bool UsedTopicNumHasBeenSet() const;

                    /**
                     * 获取最大Group数量
                     * @return MaxGroupNum 最大Group数量
                     * 
                     */
                    uint64_t GetMaxGroupNum() const;

                    /**
                     * 设置最大Group数量
                     * @param _maxGroupNum 最大Group数量
                     * 
                     */
                    void SetMaxGroupNum(const uint64_t& _maxGroupNum);

                    /**
                     * 判断参数 MaxGroupNum 是否已赋值
                     * @return MaxGroupNum 是否已赋值
                     * 
                     */
                    bool MaxGroupNumHasBeenSet() const;

                    /**
                     * 获取已使用Group数量
                     * @return UsedGroupNum 已使用Group数量
                     * 
                     */
                    uint64_t GetUsedGroupNum() const;

                    /**
                     * 设置已使用Group数量
                     * @param _usedGroupNum 已使用Group数量
                     * 
                     */
                    void SetUsedGroupNum(const uint64_t& _usedGroupNum);

                    /**
                     * 判断参数 UsedGroupNum 是否已赋值
                     * @return UsedGroupNum 是否已赋值
                     * 
                     */
                    bool UsedGroupNumHasBeenSet() const;

                    /**
                     * 获取集群类型
                     * @return ConfigDisplay 集群类型
                     * 
                     */
                    std::string GetConfigDisplay() const;

                    /**
                     * 设置集群类型
                     * @param _configDisplay 集群类型
                     * 
                     */
                    void SetConfigDisplay(const std::string& _configDisplay);

                    /**
                     * 判断参数 ConfigDisplay 是否已赋值
                     * @return ConfigDisplay 是否已赋值
                     * 
                     */
                    bool ConfigDisplayHasBeenSet() const;

                    /**
                     * 获取集群节点数
                     * @return NodeCount 集群节点数
                     * 
                     */
                    uint64_t GetNodeCount() const;

                    /**
                     * 设置集群节点数
                     * @param _nodeCount 集群节点数
                     * 
                     */
                    void SetNodeCount(const uint64_t& _nodeCount);

                    /**
                     * 判断参数 NodeCount 是否已赋值
                     * @return NodeCount 是否已赋值
                     * 
                     */
                    bool NodeCountHasBeenSet() const;

                    /**
                     * 获取节点分布情况
                     * @return NodeDistribution 节点分布情况
                     * 
                     */
                    std::vector<InstanceNodeDistribution> GetNodeDistribution() const;

                    /**
                     * 设置节点分布情况
                     * @param _nodeDistribution 节点分布情况
                     * 
                     */
                    void SetNodeDistribution(const std::vector<InstanceNodeDistribution>& _nodeDistribution);

                    /**
                     * 判断参数 NodeDistribution 是否已赋值
                     * @return NodeDistribution 是否已赋值
                     * 
                     */
                    bool NodeDistributionHasBeenSet() const;

                    /**
                     * 获取topic分布情况
                     * @return TopicDistribution topic分布情况
                     * 
                     */
                    std::vector<RocketMQTopicDistribution> GetTopicDistribution() const;

                    /**
                     * 设置topic分布情况
                     * @param _topicDistribution topic分布情况
                     * 
                     */
                    void SetTopicDistribution(const std::vector<RocketMQTopicDistribution>& _topicDistribution);

                    /**
                     * 判断参数 TopicDistribution 是否已赋值
                     * @return TopicDistribution 是否已赋值
                     * 
                     */
                    bool TopicDistributionHasBeenSet() const;

                    /**
                     * 获取每个主题最大队列数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxQueuesPerTopic 每个主题最大队列数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetMaxQueuesPerTopic() const;

                    /**
                     * 设置每个主题最大队列数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxQueuesPerTopic 每个主题最大队列数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaxQueuesPerTopic(const uint64_t& _maxQueuesPerTopic);

                    /**
                     * 判断参数 MaxQueuesPerTopic 是否已赋值
                     * @return MaxQueuesPerTopic 是否已赋值
                     * 
                     */
                    bool MaxQueuesPerTopicHasBeenSet() const;

                    /**
                     * 获取最大可设置消息保留时间，小时为单位	
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxRetention 最大可设置消息保留时间，小时为单位	
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMaxRetention() const;

                    /**
                     * 设置最大可设置消息保留时间，小时为单位	
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxRetention 最大可设置消息保留时间，小时为单位	
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaxRetention(const int64_t& _maxRetention);

                    /**
                     * 判断参数 MaxRetention 是否已赋值
                     * @return MaxRetention 是否已赋值
                     * 
                     */
                    bool MaxRetentionHasBeenSet() const;

                    /**
                     * 获取最小可设置消息保留时间，小时为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MinRetention 最小可设置消息保留时间，小时为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMinRetention() const;

                    /**
                     * 设置最小可设置消息保留时间，小时为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _minRetention 最小可设置消息保留时间，小时为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMinRetention(const int64_t& _minRetention);

                    /**
                     * 判断参数 MinRetention 是否已赋值
                     * @return MinRetention 是否已赋值
                     * 
                     */
                    bool MinRetentionHasBeenSet() const;

                    /**
                     * 获取实例消息保留时间，小时为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Retention 实例消息保留时间，小时为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRetention() const;

                    /**
                     * 设置实例消息保留时间，小时为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _retention 实例消息保留时间，小时为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRetention(const int64_t& _retention);

                    /**
                     * 判断参数 Retention 是否已赋值
                     * @return Retention 是否已赋值
                     * 
                     */
                    bool RetentionHasBeenSet() const;

                    /**
                     * 获取Topic个数最小配额，即免费额度，默认为集群规格单节点最小配额*节点个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TopicNumLowerLimit Topic个数最小配额，即免费额度，默认为集群规格单节点最小配额*节点个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTopicNumLowerLimit() const;

                    /**
                     * 设置Topic个数最小配额，即免费额度，默认为集群规格单节点最小配额*节点个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _topicNumLowerLimit Topic个数最小配额，即免费额度，默认为集群规格单节点最小配额*节点个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTopicNumLowerLimit(const int64_t& _topicNumLowerLimit);

                    /**
                     * 判断参数 TopicNumLowerLimit 是否已赋值
                     * @return TopicNumLowerLimit 是否已赋值
                     * 
                     */
                    bool TopicNumLowerLimitHasBeenSet() const;

                    /**
                     * 获取Topic个数最大配额，默认为集群规格单节点最大配额*节点个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TopicNumUpperLimit Topic个数最大配额，默认为集群规格单节点最大配额*节点个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTopicNumUpperLimit() const;

                    /**
                     * 设置Topic个数最大配额，默认为集群规格单节点最大配额*节点个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _topicNumUpperLimit Topic个数最大配额，默认为集群规格单节点最大配额*节点个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTopicNumUpperLimit(const int64_t& _topicNumUpperLimit);

                    /**
                     * 判断参数 TopicNumUpperLimit 是否已赋值
                     * @return TopicNumUpperLimit 是否已赋值
                     * 
                     */
                    bool TopicNumUpperLimitHasBeenSet() const;

                private:

                    /**
                     * 单命名空间TPS上线
                     */
                    uint64_t m_maxTpsPerNamespace;
                    bool m_maxTpsPerNamespaceHasBeenSet;

                    /**
                     * 最大命名空间数量
                     */
                    uint64_t m_maxNamespaceNum;
                    bool m_maxNamespaceNumHasBeenSet;

                    /**
                     * 已使用命名空间数量
                     */
                    uint64_t m_usedNamespaceNum;
                    bool m_usedNamespaceNumHasBeenSet;

                    /**
                     * 最大Topic数量
                     */
                    uint64_t m_maxTopicNum;
                    bool m_maxTopicNumHasBeenSet;

                    /**
                     * 已使用Topic数量
                     */
                    uint64_t m_usedTopicNum;
                    bool m_usedTopicNumHasBeenSet;

                    /**
                     * 最大Group数量
                     */
                    uint64_t m_maxGroupNum;
                    bool m_maxGroupNumHasBeenSet;

                    /**
                     * 已使用Group数量
                     */
                    uint64_t m_usedGroupNum;
                    bool m_usedGroupNumHasBeenSet;

                    /**
                     * 集群类型
                     */
                    std::string m_configDisplay;
                    bool m_configDisplayHasBeenSet;

                    /**
                     * 集群节点数
                     */
                    uint64_t m_nodeCount;
                    bool m_nodeCountHasBeenSet;

                    /**
                     * 节点分布情况
                     */
                    std::vector<InstanceNodeDistribution> m_nodeDistribution;
                    bool m_nodeDistributionHasBeenSet;

                    /**
                     * topic分布情况
                     */
                    std::vector<RocketMQTopicDistribution> m_topicDistribution;
                    bool m_topicDistributionHasBeenSet;

                    /**
                     * 每个主题最大队列数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_maxQueuesPerTopic;
                    bool m_maxQueuesPerTopicHasBeenSet;

                    /**
                     * 最大可设置消息保留时间，小时为单位	
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_maxRetention;
                    bool m_maxRetentionHasBeenSet;

                    /**
                     * 最小可设置消息保留时间，小时为单位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_minRetention;
                    bool m_minRetentionHasBeenSet;

                    /**
                     * 实例消息保留时间，小时为单位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_retention;
                    bool m_retentionHasBeenSet;

                    /**
                     * Topic个数最小配额，即免费额度，默认为集群规格单节点最小配额*节点个数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_topicNumLowerLimit;
                    bool m_topicNumLowerLimitHasBeenSet;

                    /**
                     * Topic个数最大配额，默认为集群规格单节点最大配额*节点个数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_topicNumUpperLimit;
                    bool m_topicNumUpperLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQINSTANCECONFIG_H_
