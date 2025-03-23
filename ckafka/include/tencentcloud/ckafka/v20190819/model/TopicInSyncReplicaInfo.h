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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_TOPICINSYNCREPLICAINFO_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_TOPICINSYNCREPLICAINFO_H_

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
                * topic副本及详细信息
                */
                class TopicInSyncReplicaInfo : public AbstractModel
                {
                public:
                    TopicInSyncReplicaInfo();
                    ~TopicInSyncReplicaInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取分区名称
                     * @return Partition 分区名称
                     * 
                     */
                    std::string GetPartition() const;

                    /**
                     * 设置分区名称
                     * @param _partition 分区名称
                     * 
                     */
                    void SetPartition(const std::string& _partition);

                    /**
                     * 判断参数 Partition 是否已赋值
                     * @return Partition 是否已赋值
                     * 
                     */
                    bool PartitionHasBeenSet() const;

                    /**
                     * 获取Leader Id
                     * @return Leader Leader Id
                     * 
                     */
                    uint64_t GetLeader() const;

                    /**
                     * 设置Leader Id
                     * @param _leader Leader Id
                     * 
                     */
                    void SetLeader(const uint64_t& _leader);

                    /**
                     * 判断参数 Leader 是否已赋值
                     * @return Leader 是否已赋值
                     * 
                     */
                    bool LeaderHasBeenSet() const;

                    /**
                     * 获取副本集
                     * @return Replica 副本集
                     * 
                     */
                    std::string GetReplica() const;

                    /**
                     * 设置副本集
                     * @param _replica 副本集
                     * 
                     */
                    void SetReplica(const std::string& _replica);

                    /**
                     * 判断参数 Replica 是否已赋值
                     * @return Replica 是否已赋值
                     * 
                     */
                    bool ReplicaHasBeenSet() const;

                    /**
                     * 获取ISR
                     * @return InSyncReplica ISR
                     * 
                     */
                    std::string GetInSyncReplica() const;

                    /**
                     * 设置ISR
                     * @param _inSyncReplica ISR
                     * 
                     */
                    void SetInSyncReplica(const std::string& _inSyncReplica);

                    /**
                     * 判断参数 InSyncReplica 是否已赋值
                     * @return InSyncReplica 是否已赋值
                     * 
                     */
                    bool InSyncReplicaHasBeenSet() const;

                    /**
                     * 获取起始Offset
                     * @return BeginOffset 起始Offset
                     * 
                     */
                    uint64_t GetBeginOffset() const;

                    /**
                     * 设置起始Offset
                     * @param _beginOffset 起始Offset
                     * 
                     */
                    void SetBeginOffset(const uint64_t& _beginOffset);

                    /**
                     * 判断参数 BeginOffset 是否已赋值
                     * @return BeginOffset 是否已赋值
                     * 
                     */
                    bool BeginOffsetHasBeenSet() const;

                    /**
                     * 获取末端Offset
                     * @return EndOffset 末端Offset
                     * 
                     */
                    uint64_t GetEndOffset() const;

                    /**
                     * 设置末端Offset
                     * @param _endOffset 末端Offset
                     * 
                     */
                    void SetEndOffset(const uint64_t& _endOffset);

                    /**
                     * 判断参数 EndOffset 是否已赋值
                     * @return EndOffset 是否已赋值
                     * 
                     */
                    bool EndOffsetHasBeenSet() const;

                    /**
                     * 获取消息数
                     * @return MessageCount 消息数
                     * 
                     */
                    uint64_t GetMessageCount() const;

                    /**
                     * 设置消息数
                     * @param _messageCount 消息数
                     * 
                     */
                    void SetMessageCount(const uint64_t& _messageCount);

                    /**
                     * 判断参数 MessageCount 是否已赋值
                     * @return MessageCount 是否已赋值
                     * 
                     */
                    bool MessageCountHasBeenSet() const;

                    /**
                     * 获取未同步副本集
                     * @return OutOfSyncReplica 未同步副本集
                     * 
                     */
                    std::string GetOutOfSyncReplica() const;

                    /**
                     * 设置未同步副本集
                     * @param _outOfSyncReplica 未同步副本集
                     * 
                     */
                    void SetOutOfSyncReplica(const std::string& _outOfSyncReplica);

                    /**
                     * 判断参数 OutOfSyncReplica 是否已赋值
                     * @return OutOfSyncReplica 是否已赋值
                     * 
                     */
                    bool OutOfSyncReplicaHasBeenSet() const;

                private:

                    /**
                     * 分区名称
                     */
                    std::string m_partition;
                    bool m_partitionHasBeenSet;

                    /**
                     * Leader Id
                     */
                    uint64_t m_leader;
                    bool m_leaderHasBeenSet;

                    /**
                     * 副本集
                     */
                    std::string m_replica;
                    bool m_replicaHasBeenSet;

                    /**
                     * ISR
                     */
                    std::string m_inSyncReplica;
                    bool m_inSyncReplicaHasBeenSet;

                    /**
                     * 起始Offset
                     */
                    uint64_t m_beginOffset;
                    bool m_beginOffsetHasBeenSet;

                    /**
                     * 末端Offset
                     */
                    uint64_t m_endOffset;
                    bool m_endOffsetHasBeenSet;

                    /**
                     * 消息数
                     */
                    uint64_t m_messageCount;
                    bool m_messageCountHasBeenSet;

                    /**
                     * 未同步副本集
                     */
                    std::string m_outOfSyncReplica;
                    bool m_outOfSyncReplicaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_TOPICINSYNCREPLICAINFO_H_
