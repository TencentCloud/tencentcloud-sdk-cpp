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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_GROUPINFO_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_GROUPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/MonitorInfo.h>
#include <tencentcloud/dts/v20211206/model/PartitionAssignment.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * kafka消费者组详情
                */
                class GroupInfo : public AbstractModel
                {
                public:
                    GroupInfo();
                    ~GroupInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取消费者组账号
                     * @return Account 消费者组账号
                     * 
                     */
                    std::string GetAccount() const;

                    /**
                     * 设置消费者组账号
                     * @param _account 消费者组账号
                     * 
                     */
                    void SetAccount(const std::string& _account);

                    /**
                     * 判断参数 Account 是否已赋值
                     * @return Account 是否已赋值
                     * 
                     */
                    bool AccountHasBeenSet() const;

                    /**
                     * 获取消费者组名称
                     * @return ConsumerGroupName 消费者组名称
                     * 
                     */
                    std::string GetConsumerGroupName() const;

                    /**
                     * 设置消费者组名称
                     * @param _consumerGroupName 消费者组名称
                     * 
                     */
                    void SetConsumerGroupName(const std::string& _consumerGroupName);

                    /**
                     * 判断参数 ConsumerGroupName 是否已赋值
                     * @return ConsumerGroupName 是否已赋值
                     * 
                     */
                    bool ConsumerGroupNameHasBeenSet() const;

                    /**
                     * 获取消费者组备注
                     * @return Description 消费者组备注
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置消费者组备注
                     * @param _description 消费者组备注
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取消费组偏移量。该字段是为了兼容以前单Partition的情况，取值为最后一个分区的偏移量。各分区的偏移量详见StateOfPartition字段
                     * @return ConsumerGroupOffset 消费组偏移量。该字段是为了兼容以前单Partition的情况，取值为最后一个分区的偏移量。各分区的偏移量详见StateOfPartition字段
                     * 
                     */
                    int64_t GetConsumerGroupOffset() const;

                    /**
                     * 设置消费组偏移量。该字段是为了兼容以前单Partition的情况，取值为最后一个分区的偏移量。各分区的偏移量详见StateOfPartition字段
                     * @param _consumerGroupOffset 消费组偏移量。该字段是为了兼容以前单Partition的情况，取值为最后一个分区的偏移量。各分区的偏移量详见StateOfPartition字段
                     * 
                     */
                    void SetConsumerGroupOffset(const int64_t& _consumerGroupOffset);

                    /**
                     * 判断参数 ConsumerGroupOffset 是否已赋值
                     * @return ConsumerGroupOffset 是否已赋值
                     * 
                     */
                    bool ConsumerGroupOffsetHasBeenSet() const;

                    /**
                     * 获取消费组未消费的数据量。该字段是为了兼容以前单Partition的情况，取值为最后一个分区未消费的数据量。各分区未消费数据量详见StateOfPartition字段
                     * @return ConsumerGroupLag 消费组未消费的数据量。该字段是为了兼容以前单Partition的情况，取值为最后一个分区未消费的数据量。各分区未消费数据量详见StateOfPartition字段
                     * 
                     */
                    int64_t GetConsumerGroupLag() const;

                    /**
                     * 设置消费组未消费的数据量。该字段是为了兼容以前单Partition的情况，取值为最后一个分区未消费的数据量。各分区未消费数据量详见StateOfPartition字段
                     * @param _consumerGroupLag 消费组未消费的数据量。该字段是为了兼容以前单Partition的情况，取值为最后一个分区未消费的数据量。各分区未消费数据量详见StateOfPartition字段
                     * 
                     */
                    void SetConsumerGroupLag(const int64_t& _consumerGroupLag);

                    /**
                     * 判断参数 ConsumerGroupLag 是否已赋值
                     * @return ConsumerGroupLag 是否已赋值
                     * 
                     */
                    bool ConsumerGroupLagHasBeenSet() const;

                    /**
                     * 获取消费延迟(单位为秒)
                     * @return Latency 消费延迟(单位为秒)
                     * 
                     */
                    int64_t GetLatency() const;

                    /**
                     * 设置消费延迟(单位为秒)
                     * @param _latency 消费延迟(单位为秒)
                     * 
                     */
                    void SetLatency(const int64_t& _latency);

                    /**
                     * 判断参数 Latency 是否已赋值
                     * @return Latency 是否已赋值
                     * 
                     */
                    bool LatencyHasBeenSet() const;

                    /**
                     * 获取各分区的消费状态
                     * @return StateOfPartition 各分区的消费状态
                     * 
                     */
                    std::vector<MonitorInfo> GetStateOfPartition() const;

                    /**
                     * 设置各分区的消费状态
                     * @param _stateOfPartition 各分区的消费状态
                     * 
                     */
                    void SetStateOfPartition(const std::vector<MonitorInfo>& _stateOfPartition);

                    /**
                     * 判断参数 StateOfPartition 是否已赋值
                     * @return StateOfPartition 是否已赋值
                     * 
                     */
                    bool StateOfPartitionHasBeenSet() const;

                    /**
                     * 获取消费者组创建时间，格式为YYYY-MM-DD hh:mm:ss
                     * @return CreatedAt 消费者组创建时间，格式为YYYY-MM-DD hh:mm:ss
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置消费者组创建时间，格式为YYYY-MM-DD hh:mm:ss
                     * @param _createdAt 消费者组创建时间，格式为YYYY-MM-DD hh:mm:ss
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取消费者组修改时间，格式为YYYY-MM-DD hh:mm:ss
                     * @return UpdatedAt 消费者组修改时间，格式为YYYY-MM-DD hh:mm:ss
                     * 
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 设置消费者组修改时间，格式为YYYY-MM-DD hh:mm:ss
                     * @param _updatedAt 消费者组修改时间，格式为YYYY-MM-DD hh:mm:ss
                     * 
                     */
                    void SetUpdatedAt(const std::string& _updatedAt);

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     * 
                     */
                    bool UpdatedAtHasBeenSet() const;

                    /**
                     * 获取消费者组状态，包括Dead、Empty、Stable等，只有Dead和Empty两种状态可以执行reset操作
                     * @return ConsumerGroupState 消费者组状态，包括Dead、Empty、Stable等，只有Dead和Empty两种状态可以执行reset操作
                     * 
                     */
                    std::string GetConsumerGroupState() const;

                    /**
                     * 设置消费者组状态，包括Dead、Empty、Stable等，只有Dead和Empty两种状态可以执行reset操作
                     * @param _consumerGroupState 消费者组状态，包括Dead、Empty、Stable等，只有Dead和Empty两种状态可以执行reset操作
                     * 
                     */
                    void SetConsumerGroupState(const std::string& _consumerGroupState);

                    /**
                     * 判断参数 ConsumerGroupState 是否已赋值
                     * @return ConsumerGroupState 是否已赋值
                     * 
                     */
                    bool ConsumerGroupStateHasBeenSet() const;

                    /**
                     * 获取每个消费者正在消费的分区
                     * @return PartitionAssignment 每个消费者正在消费的分区
                     * 
                     */
                    std::vector<PartitionAssignment> GetPartitionAssignment() const;

                    /**
                     * 设置每个消费者正在消费的分区
                     * @param _partitionAssignment 每个消费者正在消费的分区
                     * 
                     */
                    void SetPartitionAssignment(const std::vector<PartitionAssignment>& _partitionAssignment);

                    /**
                     * 判断参数 PartitionAssignment 是否已赋值
                     * @return PartitionAssignment 是否已赋值
                     * 
                     */
                    bool PartitionAssignmentHasBeenSet() const;

                private:

                    /**
                     * 消费者组账号
                     */
                    std::string m_account;
                    bool m_accountHasBeenSet;

                    /**
                     * 消费者组名称
                     */
                    std::string m_consumerGroupName;
                    bool m_consumerGroupNameHasBeenSet;

                    /**
                     * 消费者组备注
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 消费组偏移量。该字段是为了兼容以前单Partition的情况，取值为最后一个分区的偏移量。各分区的偏移量详见StateOfPartition字段
                     */
                    int64_t m_consumerGroupOffset;
                    bool m_consumerGroupOffsetHasBeenSet;

                    /**
                     * 消费组未消费的数据量。该字段是为了兼容以前单Partition的情况，取值为最后一个分区未消费的数据量。各分区未消费数据量详见StateOfPartition字段
                     */
                    int64_t m_consumerGroupLag;
                    bool m_consumerGroupLagHasBeenSet;

                    /**
                     * 消费延迟(单位为秒)
                     */
                    int64_t m_latency;
                    bool m_latencyHasBeenSet;

                    /**
                     * 各分区的消费状态
                     */
                    std::vector<MonitorInfo> m_stateOfPartition;
                    bool m_stateOfPartitionHasBeenSet;

                    /**
                     * 消费者组创建时间，格式为YYYY-MM-DD hh:mm:ss
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * 消费者组修改时间，格式为YYYY-MM-DD hh:mm:ss
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                    /**
                     * 消费者组状态，包括Dead、Empty、Stable等，只有Dead和Empty两种状态可以执行reset操作
                     */
                    std::string m_consumerGroupState;
                    bool m_consumerGroupStateHasBeenSet;

                    /**
                     * 每个消费者正在消费的分区
                     */
                    std::vector<PartitionAssignment> m_partitionAssignment;
                    bool m_partitionAssignmentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_GROUPINFO_H_
