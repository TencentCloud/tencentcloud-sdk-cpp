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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_PULSARPROCLUSTERSPECINFO_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_PULSARPROCLUSTERSPECINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * Pulsar专业版集群规格信息
                */
                class PulsarProClusterSpecInfo : public AbstractModel
                {
                public:
                    PulsarProClusterSpecInfo();
                    ~PulsarProClusterSpecInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取集群规格名称
                     * @return SpecName 集群规格名称
                     * 
                     */
                    std::string GetSpecName() const;

                    /**
                     * 设置集群规格名称
                     * @param _specName 集群规格名称
                     * 
                     */
                    void SetSpecName(const std::string& _specName);

                    /**
                     * 判断参数 SpecName 是否已赋值
                     * @return SpecName 是否已赋值
                     * 
                     */
                    bool SpecNameHasBeenSet() const;

                    /**
                     * 获取峰值tps
                     * @return MaxTps 峰值tps
                     * 
                     */
                    uint64_t GetMaxTps() const;

                    /**
                     * 设置峰值tps
                     * @param _maxTps 峰值tps
                     * 
                     */
                    void SetMaxTps(const uint64_t& _maxTps);

                    /**
                     * 判断参数 MaxTps 是否已赋值
                     * @return MaxTps 是否已赋值
                     * 
                     */
                    bool MaxTpsHasBeenSet() const;

                    /**
                     * 获取峰值带宽。单位：mbps
                     * @return MaxBandWidth 峰值带宽。单位：mbps
                     * 
                     */
                    uint64_t GetMaxBandWidth() const;

                    /**
                     * 设置峰值带宽。单位：mbps
                     * @param _maxBandWidth 峰值带宽。单位：mbps
                     * 
                     */
                    void SetMaxBandWidth(const uint64_t& _maxBandWidth);

                    /**
                     * 判断参数 MaxBandWidth 是否已赋值
                     * @return MaxBandWidth 是否已赋值
                     * 
                     */
                    bool MaxBandWidthHasBeenSet() const;

                    /**
                     * 获取最大命名空间个数
                     * @return MaxNamespaces 最大命名空间个数
                     * 
                     */
                    uint64_t GetMaxNamespaces() const;

                    /**
                     * 设置最大命名空间个数
                     * @param _maxNamespaces 最大命名空间个数
                     * 
                     */
                    void SetMaxNamespaces(const uint64_t& _maxNamespaces);

                    /**
                     * 判断参数 MaxNamespaces 是否已赋值
                     * @return MaxNamespaces 是否已赋值
                     * 
                     */
                    bool MaxNamespacesHasBeenSet() const;

                    /**
                     * 获取可以创建的最大主题数
                     * @return MaxTopics 可以创建的最大主题数
                     * 
                     */
                    uint64_t GetMaxTopics() const;

                    /**
                     * 设置可以创建的最大主题数
                     * @param _maxTopics 可以创建的最大主题数
                     * 
                     */
                    void SetMaxTopics(const uint64_t& _maxTopics);

                    /**
                     * 判断参数 MaxTopics 是否已赋值
                     * @return MaxTopics 是否已赋值
                     * 
                     */
                    bool MaxTopicsHasBeenSet() const;

                    /**
                     * 获取规格外弹性TPS
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScalableTps 规格外弹性TPS
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetScalableTps() const;

                    /**
                     * 设置规格外弹性TPS
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scalableTps 规格外弹性TPS
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScalableTps(const uint64_t& _scalableTps);

                    /**
                     * 判断参数 ScalableTps 是否已赋值
                     * @return ScalableTps 是否已赋值
                     * 
                     */
                    bool ScalableTpsHasBeenSet() const;

                    /**
                     * 获取32或者128
当前集群topic的最大分区数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxPartitions 32或者128
当前集群topic的最大分区数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetMaxPartitions() const;

                    /**
                     * 设置32或者128
当前集群topic的最大分区数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxPartitions 32或者128
当前集群topic的最大分区数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaxPartitions(const uint64_t& _maxPartitions);

                    /**
                     * 判断参数 MaxPartitions 是否已赋值
                     * @return MaxPartitions 是否已赋值
                     * 
                     */
                    bool MaxPartitionsHasBeenSet() const;

                    /**
                     * 获取最大延迟消息数量。0代表没有限制	
                     * @return MaxDelayedMessages 最大延迟消息数量。0代表没有限制	
                     * 
                     */
                    int64_t GetMaxDelayedMessages() const;

                    /**
                     * 设置最大延迟消息数量。0代表没有限制	
                     * @param _maxDelayedMessages 最大延迟消息数量。0代表没有限制	
                     * 
                     */
                    void SetMaxDelayedMessages(const int64_t& _maxDelayedMessages);

                    /**
                     * 判断参数 MaxDelayedMessages 是否已赋值
                     * @return MaxDelayedMessages 是否已赋值
                     * 
                     */
                    bool MaxDelayedMessagesHasBeenSet() const;

                    /**
                     * 获取可以创建的最大主题分区数
                     * @return MaxTopicsPartitioned 可以创建的最大主题分区数
                     * 
                     */
                    int64_t GetMaxTopicsPartitioned() const;

                    /**
                     * 设置可以创建的最大主题分区数
                     * @param _maxTopicsPartitioned 可以创建的最大主题分区数
                     * 
                     */
                    void SetMaxTopicsPartitioned(const int64_t& _maxTopicsPartitioned);

                    /**
                     * 判断参数 MaxTopicsPartitioned 是否已赋值
                     * @return MaxTopicsPartitioned 是否已赋值
                     * 
                     */
                    bool MaxTopicsPartitionedHasBeenSet() const;

                    /**
                     * 获取单broker最大链接数
                     * @return BrokerMaxConnections 单broker最大链接数
                     * 
                     */
                    int64_t GetBrokerMaxConnections() const;

                    /**
                     * 设置单broker最大链接数
                     * @param _brokerMaxConnections 单broker最大链接数
                     * 
                     */
                    void SetBrokerMaxConnections(const int64_t& _brokerMaxConnections);

                    /**
                     * 判断参数 BrokerMaxConnections 是否已赋值
                     * @return BrokerMaxConnections 是否已赋值
                     * 
                     */
                    bool BrokerMaxConnectionsHasBeenSet() const;

                    /**
                     * 获取单IP最大链接数
                     * @return BrokerMaxConnectionsPerIp 单IP最大链接数
                     * 
                     */
                    int64_t GetBrokerMaxConnectionsPerIp() const;

                    /**
                     * 设置单IP最大链接数
                     * @param _brokerMaxConnectionsPerIp 单IP最大链接数
                     * 
                     */
                    void SetBrokerMaxConnectionsPerIp(const int64_t& _brokerMaxConnectionsPerIp);

                    /**
                     * 判断参数 BrokerMaxConnectionsPerIp 是否已赋值
                     * @return BrokerMaxConnectionsPerIp 是否已赋值
                     * 
                     */
                    bool BrokerMaxConnectionsPerIpHasBeenSet() const;

                    /**
                     * 获取弹性存储集群最大存储规格；固定存储该值为0
                     * @return MaximumElasticStorage 弹性存储集群最大存储规格；固定存储该值为0
                     * 
                     */
                    int64_t GetMaximumElasticStorage() const;

                    /**
                     * 设置弹性存储集群最大存储规格；固定存储该值为0
                     * @param _maximumElasticStorage 弹性存储集群最大存储规格；固定存储该值为0
                     * 
                     */
                    void SetMaximumElasticStorage(const int64_t& _maximumElasticStorage);

                    /**
                     * 判断参数 MaximumElasticStorage 是否已赋值
                     * @return MaximumElasticStorage 是否已赋值
                     * 
                     */
                    bool MaximumElasticStorageHasBeenSet() const;

                private:

                    /**
                     * 集群规格名称
                     */
                    std::string m_specName;
                    bool m_specNameHasBeenSet;

                    /**
                     * 峰值tps
                     */
                    uint64_t m_maxTps;
                    bool m_maxTpsHasBeenSet;

                    /**
                     * 峰值带宽。单位：mbps
                     */
                    uint64_t m_maxBandWidth;
                    bool m_maxBandWidthHasBeenSet;

                    /**
                     * 最大命名空间个数
                     */
                    uint64_t m_maxNamespaces;
                    bool m_maxNamespacesHasBeenSet;

                    /**
                     * 可以创建的最大主题数
                     */
                    uint64_t m_maxTopics;
                    bool m_maxTopicsHasBeenSet;

                    /**
                     * 规格外弹性TPS
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_scalableTps;
                    bool m_scalableTpsHasBeenSet;

                    /**
                     * 32或者128
当前集群topic的最大分区数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_maxPartitions;
                    bool m_maxPartitionsHasBeenSet;

                    /**
                     * 最大延迟消息数量。0代表没有限制	
                     */
                    int64_t m_maxDelayedMessages;
                    bool m_maxDelayedMessagesHasBeenSet;

                    /**
                     * 可以创建的最大主题分区数
                     */
                    int64_t m_maxTopicsPartitioned;
                    bool m_maxTopicsPartitionedHasBeenSet;

                    /**
                     * 单broker最大链接数
                     */
                    int64_t m_brokerMaxConnections;
                    bool m_brokerMaxConnectionsHasBeenSet;

                    /**
                     * 单IP最大链接数
                     */
                    int64_t m_brokerMaxConnectionsPerIp;
                    bool m_brokerMaxConnectionsPerIpHasBeenSet;

                    /**
                     * 弹性存储集群最大存储规格；固定存储该值为0
                     */
                    int64_t m_maximumElasticStorage;
                    bool m_maximumElasticStorageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_PULSARPROCLUSTERSPECINFO_H_
