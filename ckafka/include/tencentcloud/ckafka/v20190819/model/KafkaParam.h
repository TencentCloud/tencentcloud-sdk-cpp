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
                     * 获取ckafka集群实例Id
                     * @return Resource ckafka集群实例Id
                     * 
                     */
                    std::string GetResource() const;

                    /**
                     * 设置ckafka集群实例Id
                     * @param _resource ckafka集群实例Id
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
                     * 获取主题名，多个以“,”分隔
                     * @return Topic 主题名，多个以“,”分隔
                     * 
                     */
                    std::string GetTopic() const;

                    /**
                     * 设置主题名，多个以“,”分隔
                     * @param _topic 主题名，多个以“,”分隔
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
                     * 获取Offset类型，最开始位置earliest，最新位置latest，时间点位置timestamp
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OffsetType Offset类型，最开始位置earliest，最新位置latest，时间点位置timestamp
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOffsetType() const;

                    /**
                     * 设置Offset类型，最开始位置earliest，最新位置latest，时间点位置timestamp
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _offsetType Offset类型，最开始位置earliest，最新位置latest，时间点位置timestamp
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
                     * 获取Offset类型为timestamp时必传，传时间戳，精确到秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime Offset类型为timestamp时必传，传时间戳，精确到秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置Offset类型为timestamp时必传，传时间戳，精确到秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startTime Offset类型为timestamp时必传，传时间戳，精确到秒
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
                     * 获取实例资源名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceName 实例资源名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceName() const;

                    /**
                     * 设置实例资源名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceName 实例资源名称
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
                     * 获取可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ZoneId 可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _zoneId 可用区
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
                     * 获取主题Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TopicId 主题Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置主题Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _topicId 主题Id
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
                     * 获取Topic的分区数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PartitionNum Topic的分区数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPartitionNum() const;

                    /**
                     * 设置Topic的分区数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _partitionNum Topic的分区数
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
                     * 获取启用容错实例/开启死信队列
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnableToleration 启用容错实例/开启死信队列
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetEnableToleration() const;

                    /**
                     * 设置启用容错实例/开启死信队列
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enableToleration 启用容错实例/开启死信队列
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
                     * 获取Qps 限制
                     * @return QpsLimit Qps 限制
                     * 
                     */
                    uint64_t GetQpsLimit() const;

                    /**
                     * 设置Qps 限制
                     * @param _qpsLimit Qps 限制
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
                     * 获取Table到Topic的路由，「分发到多个topic」开关打开时必传
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableMappings Table到Topic的路由，「分发到多个topic」开关打开时必传
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TableMapping> GetTableMappings() const;

                    /**
                     * 设置Table到Topic的路由，「分发到多个topic」开关打开时必传
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableMappings Table到Topic的路由，「分发到多个topic」开关打开时必传
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
                     * 获取「分发到多个topic」开关，默认为false
                     * @return UseTableMapping 「分发到多个topic」开关，默认为false
                     * 
                     */
                    bool GetUseTableMapping() const;

                    /**
                     * 设置「分发到多个topic」开关，默认为false
                     * @param _useTableMapping 「分发到多个topic」开关，默认为false
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
                     * 获取使用的Topic是否需要自动创建（目前只支持SOURCE流入任务，如果不使用分发到多个topic，需要在Topic字段填写需要自动创建的topic名）
                     * @return UseAutoCreateTopic 使用的Topic是否需要自动创建（目前只支持SOURCE流入任务，如果不使用分发到多个topic，需要在Topic字段填写需要自动创建的topic名）
                     * 
                     */
                    bool GetUseAutoCreateTopic() const;

                    /**
                     * 设置使用的Topic是否需要自动创建（目前只支持SOURCE流入任务，如果不使用分发到多个topic，需要在Topic字段填写需要自动创建的topic名）
                     * @param _useAutoCreateTopic 使用的Topic是否需要自动创建（目前只支持SOURCE流入任务，如果不使用分发到多个topic，需要在Topic字段填写需要自动创建的topic名）
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
                     * 获取写入Topic时是否进行压缩，不开启填"none"，开启的话，填写"open"。
                     * @return CompressionType 写入Topic时是否进行压缩，不开启填"none"，开启的话，填写"open"。
                     * 
                     */
                    std::string GetCompressionType() const;

                    /**
                     * 设置写入Topic时是否进行压缩，不开启填"none"，开启的话，填写"open"。
                     * @param _compressionType 写入Topic时是否进行压缩，不开启填"none"，开启的话，填写"open"。
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
                     * 获取源topic消息1条扩增成msgMultiple条写入目标topic(该参数目前只有ckafka流入ckafka适用)
                     * @return MsgMultiple 源topic消息1条扩增成msgMultiple条写入目标topic(该参数目前只有ckafka流入ckafka适用)
                     * 
                     */
                    int64_t GetMsgMultiple() const;

                    /**
                     * 设置源topic消息1条扩增成msgMultiple条写入目标topic(该参数目前只有ckafka流入ckafka适用)
                     * @param _msgMultiple 源topic消息1条扩增成msgMultiple条写入目标topic(该参数目前只有ckafka流入ckafka适用)
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
                     * 获取数据同步专用参数, 正常数据处理可为空, 实例级别同步: 仅同步元数据填写"META_SYNC_INSTANCE_TYPE", 同步元数据及全部topic内消息的填写"META_AND_DATA_SYNC_INSTANCE_TYPE"; topic级别同步: 选中的源和目标topic中的消息(需要目标实例也包含该topic)填写"DATA_SYNC_TYPE"
                     * @return ConnectorSyncType 数据同步专用参数, 正常数据处理可为空, 实例级别同步: 仅同步元数据填写"META_SYNC_INSTANCE_TYPE", 同步元数据及全部topic内消息的填写"META_AND_DATA_SYNC_INSTANCE_TYPE"; topic级别同步: 选中的源和目标topic中的消息(需要目标实例也包含该topic)填写"DATA_SYNC_TYPE"
                     * 
                     */
                    std::string GetConnectorSyncType() const;

                    /**
                     * 设置数据同步专用参数, 正常数据处理可为空, 实例级别同步: 仅同步元数据填写"META_SYNC_INSTANCE_TYPE", 同步元数据及全部topic内消息的填写"META_AND_DATA_SYNC_INSTANCE_TYPE"; topic级别同步: 选中的源和目标topic中的消息(需要目标实例也包含该topic)填写"DATA_SYNC_TYPE"
                     * @param _connectorSyncType 数据同步专用参数, 正常数据处理可为空, 实例级别同步: 仅同步元数据填写"META_SYNC_INSTANCE_TYPE", 同步元数据及全部topic内消息的填写"META_AND_DATA_SYNC_INSTANCE_TYPE"; topic级别同步: 选中的源和目标topic中的消息(需要目标实例也包含该topic)填写"DATA_SYNC_TYPE"
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
                     * 获取数据同步专用参数, 当通过时,希望下游的消息写入分区与上游的一致,则填true,但下游分区小于上游时,会报错; 不需要一致则为false, 默认为false
                     * @return KeepPartition 数据同步专用参数, 当通过时,希望下游的消息写入分区与上游的一致,则填true,但下游分区小于上游时,会报错; 不需要一致则为false, 默认为false
                     * 
                     */
                    bool GetKeepPartition() const;

                    /**
                     * 设置数据同步专用参数, 当通过时,希望下游的消息写入分区与上游的一致,则填true,但下游分区小于上游时,会报错; 不需要一致则为false, 默认为false
                     * @param _keepPartition 数据同步专用参数, 当通过时,希望下游的消息写入分区与上游的一致,则填true,但下游分区小于上游时,会报错; 不需要一致则为false, 默认为false
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
                     * 获取正则匹配Topic列表
                     * @return TopicRegularExpression 正则匹配Topic列表
                     * 
                     */
                    std::string GetTopicRegularExpression() const;

                    /**
                     * 设置正则匹配Topic列表
                     * @param _topicRegularExpression 正则匹配Topic列表
                     * 
                     */
                    void SetTopicRegularExpression(const std::string& _topicRegularExpression);

                    /**
                     * 判断参数 TopicRegularExpression 是否已赋值
                     * @return TopicRegularExpression 是否已赋值
                     * 
                     */
                    bool TopicRegularExpressionHasBeenSet() const;

                private:

                    /**
                     * 是否为自建集群
                     */
                    bool m_selfBuilt;
                    bool m_selfBuiltHasBeenSet;

                    /**
                     * ckafka集群实例Id
                     */
                    std::string m_resource;
                    bool m_resourceHasBeenSet;

                    /**
                     * 主题名，多个以“,”分隔
                     */
                    std::string m_topic;
                    bool m_topicHasBeenSet;

                    /**
                     * Offset类型，最开始位置earliest，最新位置latest，时间点位置timestamp
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_offsetType;
                    bool m_offsetTypeHasBeenSet;

                    /**
                     * Offset类型为timestamp时必传，传时间戳，精确到秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 实例资源名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceName;
                    bool m_resourceNameHasBeenSet;

                    /**
                     * 可用区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 主题Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * Topic的分区数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_partitionNum;
                    bool m_partitionNumHasBeenSet;

                    /**
                     * 启用容错实例/开启死信队列
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_enableToleration;
                    bool m_enableTolerationHasBeenSet;

                    /**
                     * Qps 限制
                     */
                    uint64_t m_qpsLimit;
                    bool m_qpsLimitHasBeenSet;

                    /**
                     * Table到Topic的路由，「分发到多个topic」开关打开时必传
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TableMapping> m_tableMappings;
                    bool m_tableMappingsHasBeenSet;

                    /**
                     * 「分发到多个topic」开关，默认为false
                     */
                    bool m_useTableMapping;
                    bool m_useTableMappingHasBeenSet;

                    /**
                     * 使用的Topic是否需要自动创建（目前只支持SOURCE流入任务，如果不使用分发到多个topic，需要在Topic字段填写需要自动创建的topic名）
                     */
                    bool m_useAutoCreateTopic;
                    bool m_useAutoCreateTopicHasBeenSet;

                    /**
                     * 写入Topic时是否进行压缩，不开启填"none"，开启的话，填写"open"。
                     */
                    std::string m_compressionType;
                    bool m_compressionTypeHasBeenSet;

                    /**
                     * 源topic消息1条扩增成msgMultiple条写入目标topic(该参数目前只有ckafka流入ckafka适用)
                     */
                    int64_t m_msgMultiple;
                    bool m_msgMultipleHasBeenSet;

                    /**
                     * 数据同步专用参数, 正常数据处理可为空, 实例级别同步: 仅同步元数据填写"META_SYNC_INSTANCE_TYPE", 同步元数据及全部topic内消息的填写"META_AND_DATA_SYNC_INSTANCE_TYPE"; topic级别同步: 选中的源和目标topic中的消息(需要目标实例也包含该topic)填写"DATA_SYNC_TYPE"
                     */
                    std::string m_connectorSyncType;
                    bool m_connectorSyncTypeHasBeenSet;

                    /**
                     * 数据同步专用参数, 当通过时,希望下游的消息写入分区与上游的一致,则填true,但下游分区小于上游时,会报错; 不需要一致则为false, 默认为false
                     */
                    bool m_keepPartition;
                    bool m_keepPartitionHasBeenSet;

                    /**
                     * 正则匹配Topic列表
                     */
                    std::string m_topicRegularExpression;
                    bool m_topicRegularExpressionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_KAFKAPARAM_H_
