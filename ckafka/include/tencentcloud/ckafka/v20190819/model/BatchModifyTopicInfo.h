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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_BATCHMODIFYTOPICINFO_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_BATCHMODIFYTOPICINFO_H_

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
                * 批量修改topic参数
                */
                class BatchModifyTopicInfo : public AbstractModel
                {
                public:
                    BatchModifyTopicInfo();
                    ~BatchModifyTopicInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取主题名
                     * @return TopicName 主题名
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置主题名
                     * @param _topicName 主题名
                     * 
                     */
                    void SetTopicName(const std::string& _topicName);

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     * 
                     */
                    bool TopicNameHasBeenSet() const;

                    /**
                     * 获取分区数
                     * @return PartitionNum 分区数
                     * 
                     */
                    int64_t GetPartitionNum() const;

                    /**
                     * 设置分区数
                     * @param _partitionNum 分区数
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
                     * 获取备注
                     * @return Note 备注
                     * 
                     */
                    std::string GetNote() const;

                    /**
                     * 设置备注
                     * @param _note 备注
                     * 
                     */
                    void SetNote(const std::string& _note);

                    /**
                     * 判断参数 Note 是否已赋值
                     * @return Note 是否已赋值
                     * 
                     */
                    bool NoteHasBeenSet() const;

                    /**
                     * 获取副本数
                     * @return ReplicaNum 副本数
                     * 
                     */
                    int64_t GetReplicaNum() const;

                    /**
                     * 设置副本数
                     * @param _replicaNum 副本数
                     * 
                     */
                    void SetReplicaNum(const int64_t& _replicaNum);

                    /**
                     * 判断参数 ReplicaNum 是否已赋值
                     * @return ReplicaNum 是否已赋值
                     * 
                     */
                    bool ReplicaNumHasBeenSet() const;

                    /**
                     * 获取消息删除策略，可以选择delete 或者compact
                     * @return CleanUpPolicy 消息删除策略，可以选择delete 或者compact
                     * 
                     */
                    std::string GetCleanUpPolicy() const;

                    /**
                     * 设置消息删除策略，可以选择delete 或者compact
                     * @param _cleanUpPolicy 消息删除策略，可以选择delete 或者compact
                     * 
                     */
                    void SetCleanUpPolicy(const std::string& _cleanUpPolicy);

                    /**
                     * 判断参数 CleanUpPolicy 是否已赋值
                     * @return CleanUpPolicy 是否已赋值
                     * 
                     */
                    bool CleanUpPolicyHasBeenSet() const;

                    /**
                     * 获取当producer设置request.required.acks为-1时，min.insync.replicas指定replicas的最小数目
                     * @return MinInsyncReplicas 当producer设置request.required.acks为-1时，min.insync.replicas指定replicas的最小数目
                     * 
                     */
                    int64_t GetMinInsyncReplicas() const;

                    /**
                     * 设置当producer设置request.required.acks为-1时，min.insync.replicas指定replicas的最小数目
                     * @param _minInsyncReplicas 当producer设置request.required.acks为-1时，min.insync.replicas指定replicas的最小数目
                     * 
                     */
                    void SetMinInsyncReplicas(const int64_t& _minInsyncReplicas);

                    /**
                     * 判断参数 MinInsyncReplicas 是否已赋值
                     * @return MinInsyncReplicas 是否已赋值
                     * 
                     */
                    bool MinInsyncReplicasHasBeenSet() const;

                    /**
                     * 获取是否允许非ISR的副本成为Leader
                     * @return UncleanLeaderElectionEnable 是否允许非ISR的副本成为Leader
                     * 
                     */
                    bool GetUncleanLeaderElectionEnable() const;

                    /**
                     * 设置是否允许非ISR的副本成为Leader
                     * @param _uncleanLeaderElectionEnable 是否允许非ISR的副本成为Leader
                     * 
                     */
                    void SetUncleanLeaderElectionEnable(const bool& _uncleanLeaderElectionEnable);

                    /**
                     * 判断参数 UncleanLeaderElectionEnable 是否已赋值
                     * @return UncleanLeaderElectionEnable 是否已赋值
                     * 
                     */
                    bool UncleanLeaderElectionEnableHasBeenSet() const;

                    /**
                     * 获取topic维度的消息保留时间（毫秒）范围1 分钟到90 天
                     * @return RetentionMs topic维度的消息保留时间（毫秒）范围1 分钟到90 天
                     * 
                     */
                    int64_t GetRetentionMs() const;

                    /**
                     * 设置topic维度的消息保留时间（毫秒）范围1 分钟到90 天
                     * @param _retentionMs topic维度的消息保留时间（毫秒）范围1 分钟到90 天
                     * 
                     */
                    void SetRetentionMs(const int64_t& _retentionMs);

                    /**
                     * 判断参数 RetentionMs 是否已赋值
                     * @return RetentionMs 是否已赋值
                     * 
                     */
                    bool RetentionMsHasBeenSet() const;

                    /**
                     * 获取topic维度的消息保留大小，范围1 MB到1024 GB
                     * @return RetentionBytes topic维度的消息保留大小，范围1 MB到1024 GB
                     * 
                     */
                    int64_t GetRetentionBytes() const;

                    /**
                     * 设置topic维度的消息保留大小，范围1 MB到1024 GB
                     * @param _retentionBytes topic维度的消息保留大小，范围1 MB到1024 GB
                     * 
                     */
                    void SetRetentionBytes(const int64_t& _retentionBytes);

                    /**
                     * 判断参数 RetentionBytes 是否已赋值
                     * @return RetentionBytes 是否已赋值
                     * 
                     */
                    bool RetentionBytesHasBeenSet() const;

                    /**
                     * 获取Segment分片滚动的时长（毫秒），范围1 到90 天
                     * @return SegmentMs Segment分片滚动的时长（毫秒），范围1 到90 天
                     * 
                     */
                    int64_t GetSegmentMs() const;

                    /**
                     * 设置Segment分片滚动的时长（毫秒），范围1 到90 天
                     * @param _segmentMs Segment分片滚动的时长（毫秒），范围1 到90 天
                     * 
                     */
                    void SetSegmentMs(const int64_t& _segmentMs);

                    /**
                     * 判断参数 SegmentMs 是否已赋值
                     * @return SegmentMs 是否已赋值
                     * 
                     */
                    bool SegmentMsHasBeenSet() const;

                    /**
                     * 获取批次的消息大小，范围1 KB到12 MB
                     * @return MaxMessageBytes 批次的消息大小，范围1 KB到12 MB
                     * 
                     */
                    int64_t GetMaxMessageBytes() const;

                    /**
                     * 设置批次的消息大小，范围1 KB到12 MB
                     * @param _maxMessageBytes 批次的消息大小，范围1 KB到12 MB
                     * 
                     */
                    void SetMaxMessageBytes(const int64_t& _maxMessageBytes);

                    /**
                     * 判断参数 MaxMessageBytes 是否已赋值
                     * @return MaxMessageBytes 是否已赋值
                     * 
                     */
                    bool MaxMessageBytesHasBeenSet() const;

                    /**
                     * 获取消息保存的时间类型：CreateTime/LogAppendTime
                     * @return LogMsgTimestampType 消息保存的时间类型：CreateTime/LogAppendTime
                     * 
                     */
                    std::string GetLogMsgTimestampType() const;

                    /**
                     * 设置消息保存的时间类型：CreateTime/LogAppendTime
                     * @param _logMsgTimestampType 消息保存的时间类型：CreateTime/LogAppendTime
                     * 
                     */
                    void SetLogMsgTimestampType(const std::string& _logMsgTimestampType);

                    /**
                     * 判断参数 LogMsgTimestampType 是否已赋值
                     * @return LogMsgTimestampType 是否已赋值
                     * 
                     */
                    bool LogMsgTimestampTypeHasBeenSet() const;

                private:

                    /**
                     * 主题名
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * 分区数
                     */
                    int64_t m_partitionNum;
                    bool m_partitionNumHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_note;
                    bool m_noteHasBeenSet;

                    /**
                     * 副本数
                     */
                    int64_t m_replicaNum;
                    bool m_replicaNumHasBeenSet;

                    /**
                     * 消息删除策略，可以选择delete 或者compact
                     */
                    std::string m_cleanUpPolicy;
                    bool m_cleanUpPolicyHasBeenSet;

                    /**
                     * 当producer设置request.required.acks为-1时，min.insync.replicas指定replicas的最小数目
                     */
                    int64_t m_minInsyncReplicas;
                    bool m_minInsyncReplicasHasBeenSet;

                    /**
                     * 是否允许非ISR的副本成为Leader
                     */
                    bool m_uncleanLeaderElectionEnable;
                    bool m_uncleanLeaderElectionEnableHasBeenSet;

                    /**
                     * topic维度的消息保留时间（毫秒）范围1 分钟到90 天
                     */
                    int64_t m_retentionMs;
                    bool m_retentionMsHasBeenSet;

                    /**
                     * topic维度的消息保留大小，范围1 MB到1024 GB
                     */
                    int64_t m_retentionBytes;
                    bool m_retentionBytesHasBeenSet;

                    /**
                     * Segment分片滚动的时长（毫秒），范围1 到90 天
                     */
                    int64_t m_segmentMs;
                    bool m_segmentMsHasBeenSet;

                    /**
                     * 批次的消息大小，范围1 KB到12 MB
                     */
                    int64_t m_maxMessageBytes;
                    bool m_maxMessageBytesHasBeenSet;

                    /**
                     * 消息保存的时间类型：CreateTime/LogAppendTime
                     */
                    std::string m_logMsgTimestampType;
                    bool m_logMsgTimestampTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_BATCHMODIFYTOPICINFO_H_
