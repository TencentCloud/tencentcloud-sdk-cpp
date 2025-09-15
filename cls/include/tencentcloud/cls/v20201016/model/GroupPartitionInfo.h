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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_GROUPPARTITIONINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_GROUPPARTITIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * kafka协议消费组区分信息
                */
                class GroupPartitionInfo : public AbstractModel
                {
                public:
                    GroupPartitionInfo();
                    ~GroupPartitionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取分区id
                     * @return PartitionId 分区id
                     * 
                     */
                    int64_t GetPartitionId() const;

                    /**
                     * 设置分区id
                     * @param _partitionId 分区id
                     * 
                     */
                    void SetPartitionId(const int64_t& _partitionId);

                    /**
                     * 判断参数 PartitionId 是否已赋值
                     * @return PartitionId 是否已赋值
                     * 
                     */
                    bool PartitionIdHasBeenSet() const;

                    /**
                     * 获取分区最新数据时间戳，单位：s
                     * @return CommitTimestamp 分区最新数据时间戳，单位：s
                     * 
                     */
                    int64_t GetCommitTimestamp() const;

                    /**
                     * 设置分区最新数据时间戳，单位：s
                     * @param _commitTimestamp 分区最新数据时间戳，单位：s
                     * 
                     */
                    void SetCommitTimestamp(const int64_t& _commitTimestamp);

                    /**
                     * 判断参数 CommitTimestamp 是否已赋值
                     * @return CommitTimestamp 是否已赋值
                     * 
                     */
                    bool CommitTimestampHasBeenSet() const;

                    /**
                     * 获取消费者
                     * @return Consumer 消费者
                     * 
                     */
                    std::string GetConsumer() const;

                    /**
                     * 设置消费者
                     * @param _consumer 消费者
                     * 
                     */
                    void SetConsumer(const std::string& _consumer);

                    /**
                     * 判断参数 Consumer 是否已赋值
                     * @return Consumer 是否已赋值
                     * 
                     */
                    bool ConsumerHasBeenSet() const;

                private:

                    /**
                     * 分区id
                     */
                    int64_t m_partitionId;
                    bool m_partitionIdHasBeenSet;

                    /**
                     * 分区最新数据时间戳，单位：s
                     */
                    int64_t m_commitTimestamp;
                    bool m_commitTimestampHasBeenSet;

                    /**
                     * 消费者
                     */
                    std::string m_consumer;
                    bool m_consumerHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_GROUPPARTITIONINFO_H_
