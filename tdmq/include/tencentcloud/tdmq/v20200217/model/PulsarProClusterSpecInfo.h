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
                     * 获取<p>集群规格名称</p>
                     * @return SpecName <p>集群规格名称</p>
                     * 
                     */
                    std::string GetSpecName() const;

                    /**
                     * 设置<p>集群规格名称</p>
                     * @param _specName <p>集群规格名称</p>
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
                     * 获取<p>峰值tps</p>
                     * @return MaxTps <p>峰值tps</p>
                     * 
                     */
                    uint64_t GetMaxTps() const;

                    /**
                     * 设置<p>峰值tps</p>
                     * @param _maxTps <p>峰值tps</p>
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
                     * 获取<p>峰值带宽。单位：mbps</p>
                     * @return MaxBandWidth <p>峰值带宽。单位：mbps</p>
                     * 
                     */
                    uint64_t GetMaxBandWidth() const;

                    /**
                     * 设置<p>峰值带宽。单位：mbps</p>
                     * @param _maxBandWidth <p>峰值带宽。单位：mbps</p>
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
                     * 获取<p>最大命名空间个数</p>
                     * @return MaxNamespaces <p>最大命名空间个数</p>
                     * 
                     */
                    uint64_t GetMaxNamespaces() const;

                    /**
                     * 设置<p>最大命名空间个数</p>
                     * @param _maxNamespaces <p>最大命名空间个数</p>
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
                     * 获取<p>可以创建的最大主题数</p>
                     * @return MaxTopics <p>可以创建的最大主题数</p>
                     * 
                     */
                    uint64_t GetMaxTopics() const;

                    /**
                     * 设置<p>可以创建的最大主题数</p>
                     * @param _maxTopics <p>可以创建的最大主题数</p>
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
                     * 获取<p>规格外弹性TPS</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScalableTps <p>规格外弹性TPS</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetScalableTps() const;

                    /**
                     * 设置<p>规格外弹性TPS</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scalableTps <p>规格外弹性TPS</p>
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
                     * 获取<p>32或者128<br>当前集群topic的最大分区数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxPartitions <p>32或者128<br>当前集群topic的最大分区数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetMaxPartitions() const;

                    /**
                     * 设置<p>32或者128<br>当前集群topic的最大分区数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxPartitions <p>32或者128<br>当前集群topic的最大分区数</p>
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
                     * 获取<p>最大延迟消息数量。0代表没有限制</p>
                     * @return MaxDelayedMessages <p>最大延迟消息数量。0代表没有限制</p>
                     * 
                     */
                    int64_t GetMaxDelayedMessages() const;

                    /**
                     * 设置<p>最大延迟消息数量。0代表没有限制</p>
                     * @param _maxDelayedMessages <p>最大延迟消息数量。0代表没有限制</p>
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
                     * 获取<p>可以创建的最大主题分区数</p>
                     * @return MaxTopicsPartitioned <p>可以创建的最大主题分区数</p>
                     * 
                     */
                    int64_t GetMaxTopicsPartitioned() const;

                    /**
                     * 设置<p>可以创建的最大主题分区数</p>
                     * @param _maxTopicsPartitioned <p>可以创建的最大主题分区数</p>
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
                     * 获取<p>单broker最大链接数</p>
                     * @return BrokerMaxConnections <p>单broker最大链接数</p>
                     * 
                     */
                    int64_t GetBrokerMaxConnections() const;

                    /**
                     * 设置<p>单broker最大链接数</p>
                     * @param _brokerMaxConnections <p>单broker最大链接数</p>
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
                     * 获取<p>单IP最大链接数</p>
                     * @return BrokerMaxConnectionsPerIp <p>单IP最大链接数</p>
                     * 
                     */
                    int64_t GetBrokerMaxConnectionsPerIp() const;

                    /**
                     * 设置<p>单IP最大链接数</p>
                     * @param _brokerMaxConnectionsPerIp <p>单IP最大链接数</p>
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
                     * 获取<p>弹性存储集群最大存储规格；固定存储该值为0</p>
                     * @return MaximumElasticStorage <p>弹性存储集群最大存储规格；固定存储该值为0</p>
                     * 
                     */
                    int64_t GetMaximumElasticStorage() const;

                    /**
                     * 设置<p>弹性存储集群最大存储规格；固定存储该值为0</p>
                     * @param _maximumElasticStorage <p>弹性存储集群最大存储规格；固定存储该值为0</p>
                     * 
                     */
                    void SetMaximumElasticStorage(const int64_t& _maximumElasticStorage);

                    /**
                     * 判断参数 MaximumElasticStorage 是否已赋值
                     * @return MaximumElasticStorage 是否已赋值
                     * 
                     */
                    bool MaximumElasticStorageHasBeenSet() const;

                    /**
                     * 获取<p>当前集群可使用的全量TPS，包括弹性TPS</p>
                     * @return TotalTps <p>当前集群可使用的全量TPS，包括弹性TPS</p>
                     * 
                     */
                    int64_t GetTotalTps() const;

                    /**
                     * 设置<p>当前集群可使用的全量TPS，包括弹性TPS</p>
                     * @param _totalTps <p>当前集群可使用的全量TPS，包括弹性TPS</p>
                     * 
                     */
                    void SetTotalTps(const int64_t& _totalTps);

                    /**
                     * 判断参数 TotalTps 是否已赋值
                     * @return TotalTps 是否已赋值
                     * 
                     */
                    bool TotalTpsHasBeenSet() const;

                private:

                    /**
                     * <p>集群规格名称</p>
                     */
                    std::string m_specName;
                    bool m_specNameHasBeenSet;

                    /**
                     * <p>峰值tps</p>
                     */
                    uint64_t m_maxTps;
                    bool m_maxTpsHasBeenSet;

                    /**
                     * <p>峰值带宽。单位：mbps</p>
                     */
                    uint64_t m_maxBandWidth;
                    bool m_maxBandWidthHasBeenSet;

                    /**
                     * <p>最大命名空间个数</p>
                     */
                    uint64_t m_maxNamespaces;
                    bool m_maxNamespacesHasBeenSet;

                    /**
                     * <p>可以创建的最大主题数</p>
                     */
                    uint64_t m_maxTopics;
                    bool m_maxTopicsHasBeenSet;

                    /**
                     * <p>规格外弹性TPS</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_scalableTps;
                    bool m_scalableTpsHasBeenSet;

                    /**
                     * <p>32或者128<br>当前集群topic的最大分区数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_maxPartitions;
                    bool m_maxPartitionsHasBeenSet;

                    /**
                     * <p>最大延迟消息数量。0代表没有限制</p>
                     */
                    int64_t m_maxDelayedMessages;
                    bool m_maxDelayedMessagesHasBeenSet;

                    /**
                     * <p>可以创建的最大主题分区数</p>
                     */
                    int64_t m_maxTopicsPartitioned;
                    bool m_maxTopicsPartitionedHasBeenSet;

                    /**
                     * <p>单broker最大链接数</p>
                     */
                    int64_t m_brokerMaxConnections;
                    bool m_brokerMaxConnectionsHasBeenSet;

                    /**
                     * <p>单IP最大链接数</p>
                     */
                    int64_t m_brokerMaxConnectionsPerIp;
                    bool m_brokerMaxConnectionsPerIpHasBeenSet;

                    /**
                     * <p>弹性存储集群最大存储规格；固定存储该值为0</p>
                     */
                    int64_t m_maximumElasticStorage;
                    bool m_maximumElasticStorageHasBeenSet;

                    /**
                     * <p>当前集群可使用的全量TPS，包括弹性TPS</p>
                     */
                    int64_t m_totalTps;
                    bool m_totalTpsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_PULSARPROCLUSTERSPECINFO_H_
