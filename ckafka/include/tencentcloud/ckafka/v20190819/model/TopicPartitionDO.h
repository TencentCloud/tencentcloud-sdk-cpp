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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_TOPICPARTITIONDO_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_TOPICPARTITIONDO_H_

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
                * 分区详情
                */
                class TopicPartitionDO : public AbstractModel
                {
                public:
                    TopicPartitionDO();
                    ~TopicPartitionDO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Partition 分区ID
                     * @return Partition Partition 分区ID
                     * 
                     */
                    int64_t GetPartition() const;

                    /**
                     * 设置Partition 分区ID
                     * @param _partition Partition 分区ID
                     * 
                     */
                    void SetPartition(const int64_t& _partition);

                    /**
                     * 判断参数 Partition 是否已赋值
                     * @return Partition 是否已赋值
                     * 
                     */
                    bool PartitionHasBeenSet() const;

                    /**
                     * 获取Leader 运行状态
                     * @return LeaderStatus Leader 运行状态
                     * 
                     */
                    int64_t GetLeaderStatus() const;

                    /**
                     * 设置Leader 运行状态
                     * @param _leaderStatus Leader 运行状态
                     * 
                     */
                    void SetLeaderStatus(const int64_t& _leaderStatus);

                    /**
                     * 判断参数 LeaderStatus 是否已赋值
                     * @return LeaderStatus 是否已赋值
                     * 
                     */
                    bool LeaderStatusHasBeenSet() const;

                    /**
                     * 获取ISR 个数
                     * @return IsrNum ISR 个数
                     * 
                     */
                    int64_t GetIsrNum() const;

                    /**
                     * 设置ISR 个数
                     * @param _isrNum ISR 个数
                     * 
                     */
                    void SetIsrNum(const int64_t& _isrNum);

                    /**
                     * 判断参数 IsrNum 是否已赋值
                     * @return IsrNum 是否已赋值
                     * 
                     */
                    bool IsrNumHasBeenSet() const;

                    /**
                     * 获取副本个数
                     * @return ReplicaNum 副本个数
                     * 
                     */
                    int64_t GetReplicaNum() const;

                    /**
                     * 设置副本个数
                     * @param _replicaNum 副本个数
                     * 
                     */
                    void SetReplicaNum(const int64_t& _replicaNum);

                    /**
                     * 判断参数 ReplicaNum 是否已赋值
                     * @return ReplicaNum 是否已赋值
                     * 
                     */
                    bool ReplicaNumHasBeenSet() const;

                private:

                    /**
                     * Partition 分区ID
                     */
                    int64_t m_partition;
                    bool m_partitionHasBeenSet;

                    /**
                     * Leader 运行状态
                     */
                    int64_t m_leaderStatus;
                    bool m_leaderStatusHasBeenSet;

                    /**
                     * ISR 个数
                     */
                    int64_t m_isrNum;
                    bool m_isrNumHasBeenSet;

                    /**
                     * 副本个数
                     */
                    int64_t m_replicaNum;
                    bool m_replicaNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_TOPICPARTITIONDO_H_
