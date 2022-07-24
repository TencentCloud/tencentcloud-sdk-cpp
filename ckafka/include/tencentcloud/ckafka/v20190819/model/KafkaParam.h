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
                     */
                    bool GetSelfBuilt() const;

                    /**
                     * 设置是否为自建集群
                     * @param SelfBuilt 是否为自建集群
                     */
                    void SetSelfBuilt(const bool& _selfBuilt);

                    /**
                     * 判断参数 SelfBuilt 是否已赋值
                     * @return SelfBuilt 是否已赋值
                     */
                    bool SelfBuiltHasBeenSet() const;

                    /**
                     * 获取实例资源
                     * @return Resource 实例资源
                     */
                    std::string GetResource() const;

                    /**
                     * 设置实例资源
                     * @param Resource 实例资源
                     */
                    void SetResource(const std::string& _resource);

                    /**
                     * 判断参数 Resource 是否已赋值
                     * @return Resource 是否已赋值
                     */
                    bool ResourceHasBeenSet() const;

                    /**
                     * 获取Topic名称，多个以“,”分隔
                     * @return Topic Topic名称，多个以“,”分隔
                     */
                    std::string GetTopic() const;

                    /**
                     * 设置Topic名称，多个以“,”分隔
                     * @param Topic Topic名称，多个以“,”分隔
                     */
                    void SetTopic(const std::string& _topic);

                    /**
                     * 判断参数 Topic 是否已赋值
                     * @return Topic 是否已赋值
                     */
                    bool TopicHasBeenSet() const;

                    /**
                     * 获取Offset类型，最开始位置earliest，最新位置latest，时间点位置timestamp
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OffsetType Offset类型，最开始位置earliest，最新位置latest，时间点位置timestamp
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetOffsetType() const;

                    /**
                     * 设置Offset类型，最开始位置earliest，最新位置latest，时间点位置timestamp
注意：此字段可能返回 null，表示取不到有效值。
                     * @param OffsetType Offset类型，最开始位置earliest，最新位置latest，时间点位置timestamp
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOffsetType(const std::string& _offsetType);

                    /**
                     * 判断参数 OffsetType 是否已赋值
                     * @return OffsetType 是否已赋值
                     */
                    bool OffsetTypeHasBeenSet() const;

                    /**
                     * 获取Offset类型为timestamp时必传，传时间戳，精确到秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime Offset类型为timestamp时必传，传时间戳，精确到秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置Offset类型为timestamp时必传，传时间戳，精确到秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param StartTime Offset类型为timestamp时必传，传时间戳，精确到秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取实例资源名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceName 实例资源名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetResourceName() const;

                    /**
                     * 设置实例资源名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ResourceName 实例资源名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetResourceName(const std::string& _resourceName);

                    /**
                     * 判断参数 ResourceName 是否已赋值
                     * @return ResourceName 是否已赋值
                     */
                    bool ResourceNameHasBeenSet() const;

                    /**
                     * 获取Zone ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ZoneId Zone ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置Zone ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ZoneId Zone ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetZoneId(const int64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Topic的Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TopicId Topic的Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置Topic的Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TopicId Topic的Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取Topic的分区数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PartitionNum Topic的分区数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetPartitionNum() const;

                    /**
                     * 设置Topic的分区数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PartitionNum Topic的分区数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPartitionNum(const int64_t& _partitionNum);

                    /**
                     * 判断参数 PartitionNum 是否已赋值
                     * @return PartitionNum 是否已赋值
                     */
                    bool PartitionNumHasBeenSet() const;

                    /**
                     * 获取启用容错实例/开启死信队列
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnableToleration 启用容错实例/开启死信队列
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetEnableToleration() const;

                    /**
                     * 设置启用容错实例/开启死信队列
注意：此字段可能返回 null，表示取不到有效值。
                     * @param EnableToleration 启用容错实例/开启死信队列
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEnableToleration(const bool& _enableToleration);

                    /**
                     * 判断参数 EnableToleration 是否已赋值
                     * @return EnableToleration 是否已赋值
                     */
                    bool EnableTolerationHasBeenSet() const;

                    /**
                     * 获取Qps 限制
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QpsLimit Qps 限制
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetQpsLimit() const;

                    /**
                     * 设置Qps 限制
注意：此字段可能返回 null，表示取不到有效值。
                     * @param QpsLimit Qps 限制
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetQpsLimit(const uint64_t& _qpsLimit);

                    /**
                     * 判断参数 QpsLimit 是否已赋值
                     * @return QpsLimit 是否已赋值
                     */
                    bool QpsLimitHasBeenSet() const;

                private:

                    /**
                     * 是否为自建集群
                     */
                    bool m_selfBuilt;
                    bool m_selfBuiltHasBeenSet;

                    /**
                     * 实例资源
                     */
                    std::string m_resource;
                    bool m_resourceHasBeenSet;

                    /**
                     * Topic名称，多个以“,”分隔
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
                     * Zone ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Topic的Id
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
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_qpsLimit;
                    bool m_qpsLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_KAFKAPARAM_H_
