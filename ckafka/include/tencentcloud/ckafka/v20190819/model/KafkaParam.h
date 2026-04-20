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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_KAFKAPARAM_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_KAFKAPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/TableMapping.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * Ckafka配置
                */
                class KafkaParam : public AbstractModel
                {
                public:
                    KafkaParam();
                    ~KafkaParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取<p>ckafka集群实例Id</p>
                     * @return Resource <p>ckafka集群实例Id</p>
                     * 
                     */
                    std::string GetResource() const;

                    /**
                     * 设置<p>ckafka集群实例Id</p>
                     * @param _resource <p>ckafka集群实例Id</p>
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
                     * 获取<p>主题名，多个以“,”分隔</p>
                     * @return Topic <p>主题名，多个以“,”分隔</p>
                     * 
                     */
                    std::string GetTopic() const;

                    /**
                     * 设置<p>主题名，多个以“,”分隔</p>
                     * @param _topic <p>主题名，多个以“,”分隔</p>
                     * 
                     */
                    void SetTopic(const std::string& _topic);

                    /**
                     * 判断参数 Topic 是否已赋值
                     * @return Topic 是否已赋值
                     * 
                     */
                    bool TopicHasBeenSet() const;

                    /**
                     * 获取<p>Offset类型，最开始位置earliest，最新位置latest，时间点位置timestamp</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OffsetType <p>Offset类型，最开始位置earliest，最新位置latest，时间点位置timestamp</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOffsetType() const;

                    /**
                     * 设置<p>Offset类型，最开始位置earliest，最新位置latest，时间点位置timestamp</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _offsetType <p>Offset类型，最开始位置earliest，最新位置latest，时间点位置timestamp</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOffsetType(const std::string& _offsetType);

                    /**
                     * 判断参数 OffsetType 是否已赋值
                     * @return OffsetType 是否已赋值
                     * 
                     */
                    bool OffsetTypeHasBeenSet() const;

                    /**
                     * 获取<p>Offset类型为timestamp时必传，传时间戳，精确到秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime <p>Offset类型为timestamp时必传，传时间戳，精确到秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置<p>Offset类型为timestamp时必传，传时间戳，精确到秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startTime <p>Offset类型为timestamp时必传，传时间戳，精确到秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>实例资源名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceName <p>实例资源名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceName() const;

                    /**
                     * 设置<p>实例资源名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceName <p>实例资源名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceName(const std::string& _resourceName);

                    /**
                     * 判断参数 ResourceName 是否已赋值
                     * @return ResourceName 是否已赋值
                     * 
                     */
                    bool ResourceNameHasBeenSet() const;

                    /**
                     * 获取<p>可用区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ZoneId <p>可用区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置<p>可用区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _zoneId <p>可用区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetZoneId(const int64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取<p>主题Id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TopicId <p>主题Id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置<p>主题Id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _topicId <p>主题Id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取<p>Topic的分区数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PartitionNum <p>Topic的分区数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPartitionNum() const;

                    /**
                     * 设置<p>Topic的分区数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _partitionNum <p>Topic的分区数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPartitionNum(const int64_t& _partitionNum);

                    /**
                     * 判断参数 PartitionNum 是否已赋值
                     * @return PartitionNum 是否已赋值
                     * 
                     */
                    bool PartitionNumHasBeenSet() const;

                    /**
                     * 获取<p>启用容错实例/开启死信队列</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnableToleration <p>启用容错实例/开启死信队列</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetEnableToleration() const;

                    /**
                     * 设置<p>启用容错实例/开启死信队列</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enableToleration <p>启用容错实例/开启死信队列</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnableToleration(const bool& _enableToleration);

                    /**
                     * 判断参数 EnableToleration 是否已赋值
                     * @return EnableToleration 是否已赋值
                     * 
                     */
                    bool EnableTolerationHasBeenSet() const;

                    /**
                     * 获取<p>Qps 限制</p>
                     * @return QpsLimit <p>Qps 限制</p>
                     * 
                     */
                    uint64_t GetQpsLimit() const;

                    /**
                     * 设置<p>Qps 限制</p>
                     * @param _qpsLimit <p>Qps 限制</p>
                     * 
                     */
                    void SetQpsLimit(const uint64_t& _qpsLimit);

                    /**
                     * 判断参数 QpsLimit 是否已赋值
                     * @return QpsLimit 是否已赋值
                     * 
                     */
                    bool QpsLimitHasBeenSet() const;

                    /**
                     * 获取<p>Table到Topic的路由，「分发到多个topic」开关打开时必传</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableMappings <p>Table到Topic的路由，「分发到多个topic」开关打开时必传</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TableMapping> GetTableMappings() const;

                    /**
                     * 设置<p>Table到Topic的路由，「分发到多个topic」开关打开时必传</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableMappings <p>Table到Topic的路由，「分发到多个topic」开关打开时必传</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTableMappings(const std::vector<TableMapping>& _tableMappings);

                    /**
                     * 判断参数 TableMappings 是否已赋值
                     * @return TableMappings 是否已赋值
                     * 
                     */
                    bool TableMappingsHasBeenSet() const;

                    /**
                     * 获取<p>「分发到多个topic」开关，默认为false</p>
                     * @return UseTableMapping <p>「分发到多个topic」开关，默认为false</p>
                     * 
                     */
                    bool GetUseTableMapping() const;

                    /**
                     * 设置<p>「分发到多个topic」开关，默认为false</p>
                     * @param _useTableMapping <p>「分发到多个topic」开关，默认为false</p>
                     * 
                     */
                    void SetUseTableMapping(const bool& _useTableMapping);

                    /**
                     * 判断参数 UseTableMapping 是否已赋值
                     * @return UseTableMapping 是否已赋值
                     * 
                     */
                    bool UseTableMappingHasBeenSet() const;

                    /**
                     * 获取<p>使用的Topic是否需要自动创建（目前只支持SOURCE流入任务，如果不使用分发到多个topic，需要在Topic字段填写需要自动创建的topic名）</p>
                     * @return UseAutoCreateTopic <p>使用的Topic是否需要自动创建（目前只支持SOURCE流入任务，如果不使用分发到多个topic，需要在Topic字段填写需要自动创建的topic名）</p>
                     * 
                     */
                    bool GetUseAutoCreateTopic() const;

                    /**
                     * 设置<p>使用的Topic是否需要自动创建（目前只支持SOURCE流入任务，如果不使用分发到多个topic，需要在Topic字段填写需要自动创建的topic名）</p>
                     * @param _useAutoCreateTopic <p>使用的Topic是否需要自动创建（目前只支持SOURCE流入任务，如果不使用分发到多个topic，需要在Topic字段填写需要自动创建的topic名）</p>
                     * 
                     */
                    void SetUseAutoCreateTopic(const bool& _useAutoCreateTopic);

                    /**
                     * 判断参数 UseAutoCreateTopic 是否已赋值
                     * @return UseAutoCreateTopic 是否已赋值
                     * 
                     */
                    bool UseAutoCreateTopicHasBeenSet() const;

                    /**
                     * 获取<p>写入Topic时是否进行压缩，不开启填&quot;none&quot;，开启的话，填写&quot;open&quot;。</p>
                     * @return CompressionType <p>写入Topic时是否进行压缩，不开启填&quot;none&quot;，开启的话，填写&quot;open&quot;。</p>
                     * 
                     */
                    std::string GetCompressionType() const;

                    /**
                     * 设置<p>写入Topic时是否进行压缩，不开启填&quot;none&quot;，开启的话，填写&quot;open&quot;。</p>
                     * @param _compressionType <p>写入Topic时是否进行压缩，不开启填&quot;none&quot;，开启的话，填写&quot;open&quot;。</p>
                     * 
                     */
                    void SetCompressionType(const std::string& _compressionType);

                    /**
                     * 判断参数 CompressionType 是否已赋值
                     * @return CompressionType 是否已赋值
                     * 
                     */
                    bool CompressionTypeHasBeenSet() const;

                    /**
                     * 获取<p>源topic消息1条扩增成msgMultiple条写入目标topic(该参数目前只有ckafka流入ckafka适用)</p>
                     * @return MsgMultiple <p>源topic消息1条扩增成msgMultiple条写入目标topic(该参数目前只有ckafka流入ckafka适用)</p>
                     * 
                     */
                    int64_t GetMsgMultiple() const;

                    /**
                     * 设置<p>源topic消息1条扩增成msgMultiple条写入目标topic(该参数目前只有ckafka流入ckafka适用)</p>
                     * @param _msgMultiple <p>源topic消息1条扩增成msgMultiple条写入目标topic(该参数目前只有ckafka流入ckafka适用)</p>
                     * 
                     */
                    void SetMsgMultiple(const int64_t& _msgMultiple);

                    /**
                     * 判断参数 MsgMultiple 是否已赋值
                     * @return MsgMultiple 是否已赋值
                     * 
                     */
                    bool MsgMultipleHasBeenSet() const;

                    /**
                     * 获取<p>数据同步专用参数, 正常数据处理可为空, 实例级别同步: 仅同步元数据填写&quot;META_SYNC_INSTANCE_TYPE&quot;, 同步元数据及全部topic内消息的填写&quot;META_AND_DATA_SYNC_INSTANCE_TYPE&quot;; topic级别同步: 选中的源和目标topic中的消息(需要目标实例也包含该topic)填写&quot;DATA_SYNC_TYPE&quot;</p>
                     * @return ConnectorSyncType <p>数据同步专用参数, 正常数据处理可为空, 实例级别同步: 仅同步元数据填写&quot;META_SYNC_INSTANCE_TYPE&quot;, 同步元数据及全部topic内消息的填写&quot;META_AND_DATA_SYNC_INSTANCE_TYPE&quot;; topic级别同步: 选中的源和目标topic中的消息(需要目标实例也包含该topic)填写&quot;DATA_SYNC_TYPE&quot;</p>
                     * 
                     */
                    std::string GetConnectorSyncType() const;

                    /**
                     * 设置<p>数据同步专用参数, 正常数据处理可为空, 实例级别同步: 仅同步元数据填写&quot;META_SYNC_INSTANCE_TYPE&quot;, 同步元数据及全部topic内消息的填写&quot;META_AND_DATA_SYNC_INSTANCE_TYPE&quot;; topic级别同步: 选中的源和目标topic中的消息(需要目标实例也包含该topic)填写&quot;DATA_SYNC_TYPE&quot;</p>
                     * @param _connectorSyncType <p>数据同步专用参数, 正常数据处理可为空, 实例级别同步: 仅同步元数据填写&quot;META_SYNC_INSTANCE_TYPE&quot;, 同步元数据及全部topic内消息的填写&quot;META_AND_DATA_SYNC_INSTANCE_TYPE&quot;; topic级别同步: 选中的源和目标topic中的消息(需要目标实例也包含该topic)填写&quot;DATA_SYNC_TYPE&quot;</p>
                     * 
                     */
                    void SetConnectorSyncType(const std::string& _connectorSyncType);

                    /**
                     * 判断参数 ConnectorSyncType 是否已赋值
                     * @return ConnectorSyncType 是否已赋值
                     * 
                     */
                    bool ConnectorSyncTypeHasBeenSet() const;

                    /**
                     * 获取<p>数据同步专用参数, 当通过时,希望下游的消息写入分区与上游的一致,则填true,但下游分区小于上游时,会报错; 不需要一致则为false, 默认为false</p>
                     * @return KeepPartition <p>数据同步专用参数, 当通过时,希望下游的消息写入分区与上游的一致,则填true,但下游分区小于上游时,会报错; 不需要一致则为false, 默认为false</p>
                     * 
                     */
                    bool GetKeepPartition() const;

                    /**
                     * 设置<p>数据同步专用参数, 当通过时,希望下游的消息写入分区与上游的一致,则填true,但下游分区小于上游时,会报错; 不需要一致则为false, 默认为false</p>
                     * @param _keepPartition <p>数据同步专用参数, 当通过时,希望下游的消息写入分区与上游的一致,则填true,但下游分区小于上游时,会报错; 不需要一致则为false, 默认为false</p>
                     * 
                     */
                    void SetKeepPartition(const bool& _keepPartition);

                    /**
                     * 判断参数 KeepPartition 是否已赋值
                     * @return KeepPartition 是否已赋值
                     * 
                     */
                    bool KeepPartitionHasBeenSet() const;

                    /**
                     * 获取<p>正则匹配Topic列表</p>
                     * @return TopicRegularExpression <p>正则匹配Topic列表</p>
                     * 
                     */
                    std::string GetTopicRegularExpression() const;

                    /**
                     * 设置<p>正则匹配Topic列表</p>
                     * @param _topicRegularExpression <p>正则匹配Topic列表</p>
                     * 
                     */
                    void SetTopicRegularExpression(const std::string& _topicRegularExpression);

                    /**
                     * 判断参数 TopicRegularExpression 是否已赋值
                     * @return TopicRegularExpression 是否已赋值
                     * 
                     */
                    bool TopicRegularExpressionHasBeenSet() const;

                    /**
                     * 获取<p>Topic 前缀</p>
                     * @return Prefix <p>Topic 前缀</p>
                     * 
                     */
                    std::string GetPrefix() const;

                    /**
                     * 设置<p>Topic 前缀</p>
                     * @param _prefix <p>Topic 前缀</p>
                     * 
                     */
                    void SetPrefix(const std::string& _prefix);

                    /**
                     * 判断参数 Prefix 是否已赋值
                     * @return Prefix 是否已赋值
                     * 
                     */
                    bool PrefixHasBeenSet() const;

                    /**
                     * 获取<p>Topic前缀分隔符</p>
                     * @return Separator <p>Topic前缀分隔符</p>
                     * 
                     */
                    std::string GetSeparator() const;

                    /**
                     * 设置<p>Topic前缀分隔符</p>
                     * @param _separator <p>Topic前缀分隔符</p>
                     * 
                     */
                    void SetSeparator(const std::string& _separator);

                    /**
                     * 判断参数 Separator 是否已赋值
                     * @return Separator 是否已赋值
                     * 
                     */
                    bool SeparatorHasBeenSet() const;

                    /**
                     * 获取<p>多选topic列表</p>
                     * @return TopicList <p>多选topic列表</p>
                     * 
                     */
                    std::vector<std::string> GetTopicList() const;

                    /**
                     * 设置<p>多选topic列表</p>
                     * @param _topicList <p>多选topic列表</p>
                     * 
                     */
                    void SetTopicList(const std::vector<std::string>& _topicList);

                    /**
                     * 判断参数 TopicList 是否已赋值
                     * @return TopicList 是否已赋值
                     * 
                     */
                    bool TopicListHasBeenSet() const;

                private:

                    /**
                     * <p>是否为自建集群</p>
                     */
                    bool m_selfBuilt;
                    bool m_selfBuiltHasBeenSet;

                    /**
                     * <p>ckafka集群实例Id</p>
                     */
                    std::string m_resource;
                    bool m_resourceHasBeenSet;

                    /**
                     * <p>主题名，多个以“,”分隔</p>
                     */
                    std::string m_topic;
                    bool m_topicHasBeenSet;

                    /**
                     * <p>Offset类型，最开始位置earliest，最新位置latest，时间点位置timestamp</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_offsetType;
                    bool m_offsetTypeHasBeenSet;

                    /**
                     * <p>Offset类型为timestamp时必传，传时间戳，精确到秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>实例资源名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceName;
                    bool m_resourceNameHasBeenSet;

                    /**
                     * <p>可用区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>主题Id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * <p>Topic的分区数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_partitionNum;
                    bool m_partitionNumHasBeenSet;

                    /**
                     * <p>启用容错实例/开启死信队列</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_enableToleration;
                    bool m_enableTolerationHasBeenSet;

                    /**
                     * <p>Qps 限制</p>
                     */
                    uint64_t m_qpsLimit;
                    bool m_qpsLimitHasBeenSet;

                    /**
                     * <p>Table到Topic的路由，「分发到多个topic」开关打开时必传</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TableMapping> m_tableMappings;
                    bool m_tableMappingsHasBeenSet;

                    /**
                     * <p>「分发到多个topic」开关，默认为false</p>
                     */
                    bool m_useTableMapping;
                    bool m_useTableMappingHasBeenSet;

                    /**
                     * <p>使用的Topic是否需要自动创建（目前只支持SOURCE流入任务，如果不使用分发到多个topic，需要在Topic字段填写需要自动创建的topic名）</p>
                     */
                    bool m_useAutoCreateTopic;
                    bool m_useAutoCreateTopicHasBeenSet;

                    /**
                     * <p>写入Topic时是否进行压缩，不开启填&quot;none&quot;，开启的话，填写&quot;open&quot;。</p>
                     */
                    std::string m_compressionType;
                    bool m_compressionTypeHasBeenSet;

                    /**
                     * <p>源topic消息1条扩增成msgMultiple条写入目标topic(该参数目前只有ckafka流入ckafka适用)</p>
                     */
                    int64_t m_msgMultiple;
                    bool m_msgMultipleHasBeenSet;

                    /**
                     * <p>数据同步专用参数, 正常数据处理可为空, 实例级别同步: 仅同步元数据填写&quot;META_SYNC_INSTANCE_TYPE&quot;, 同步元数据及全部topic内消息的填写&quot;META_AND_DATA_SYNC_INSTANCE_TYPE&quot;; topic级别同步: 选中的源和目标topic中的消息(需要目标实例也包含该topic)填写&quot;DATA_SYNC_TYPE&quot;</p>
                     */
                    std::string m_connectorSyncType;
                    bool m_connectorSyncTypeHasBeenSet;

                    /**
                     * <p>数据同步专用参数, 当通过时,希望下游的消息写入分区与上游的一致,则填true,但下游分区小于上游时,会报错; 不需要一致则为false, 默认为false</p>
                     */
                    bool m_keepPartition;
                    bool m_keepPartitionHasBeenSet;

                    /**
                     * <p>正则匹配Topic列表</p>
                     */
                    std::string m_topicRegularExpression;
                    bool m_topicRegularExpressionHasBeenSet;

                    /**
                     * <p>Topic 前缀</p>
                     */
                    std::string m_prefix;
                    bool m_prefixHasBeenSet;

                    /**
                     * <p>Topic前缀分隔符</p>
                     */
                    std::string m_separator;
                    bool m_separatorHasBeenSet;

                    /**
                     * <p>多选topic列表</p>
                     */
                    std::vector<std::string> m_topicList;
                    bool m_topicListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_KAFKAPARAM_H_
