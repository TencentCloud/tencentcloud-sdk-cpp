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
                     * 获取<p>消费者组账号</p>
                     * @return Account <p>消费者组账号</p>
                     * 
                     */
                    std::string GetAccount() const;

                    /**
                     * 设置<p>消费者组账号</p>
                     * @param _account <p>消费者组账号</p>
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
                     * 获取<p>消费者组名称</p>
                     * @return ConsumerGroupName <p>消费者组名称</p>
                     * 
                     */
                    std::string GetConsumerGroupName() const;

                    /**
                     * 设置<p>消费者组名称</p>
                     * @param _consumerGroupName <p>消费者组名称</p>
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
                     * 获取<p>消费者组备注</p>
                     * @return Description <p>消费者组备注</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>消费者组备注</p>
                     * @param _description <p>消费者组备注</p>
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
                     * 获取<p>消费组偏移量。该字段是为了兼容以前单Partition的情况，取值为最后一个分区的偏移量。各分区的偏移量详见StateOfPartition字段</p>
                     * @return ConsumerGroupOffset <p>消费组偏移量。该字段是为了兼容以前单Partition的情况，取值为最后一个分区的偏移量。各分区的偏移量详见StateOfPartition字段</p>
                     * 
                     */
                    int64_t GetConsumerGroupOffset() const;

                    /**
                     * 设置<p>消费组偏移量。该字段是为了兼容以前单Partition的情况，取值为最后一个分区的偏移量。各分区的偏移量详见StateOfPartition字段</p>
                     * @param _consumerGroupOffset <p>消费组偏移量。该字段是为了兼容以前单Partition的情况，取值为最后一个分区的偏移量。各分区的偏移量详见StateOfPartition字段</p>
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
                     * 获取<p>消费组未消费的数据量。该字段是为了兼容以前单Partition的情况，取值为最后一个分区未消费的数据量。各分区未消费数据量详见StateOfPartition字段</p>
                     * @return ConsumerGroupLag <p>消费组未消费的数据量。该字段是为了兼容以前单Partition的情况，取值为最后一个分区未消费的数据量。各分区未消费数据量详见StateOfPartition字段</p>
                     * 
                     */
                    int64_t GetConsumerGroupLag() const;

                    /**
                     * 设置<p>消费组未消费的数据量。该字段是为了兼容以前单Partition的情况，取值为最后一个分区未消费的数据量。各分区未消费数据量详见StateOfPartition字段</p>
                     * @param _consumerGroupLag <p>消费组未消费的数据量。该字段是为了兼容以前单Partition的情况，取值为最后一个分区未消费的数据量。各分区未消费数据量详见StateOfPartition字段</p>
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
                     * 获取<p>消费延迟(单位为秒)</p>
                     * @return Latency <p>消费延迟(单位为秒)</p>
                     * 
                     */
                    int64_t GetLatency() const;

                    /**
                     * 设置<p>消费延迟(单位为秒)</p>
                     * @param _latency <p>消费延迟(单位为秒)</p>
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
                     * 获取<p>各分区的消费状态</p>
                     * @return StateOfPartition <p>各分区的消费状态</p>
                     * 
                     */
                    std::vector<MonitorInfo> GetStateOfPartition() const;

                    /**
                     * 设置<p>各分区的消费状态</p>
                     * @param _stateOfPartition <p>各分区的消费状态</p>
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
                     * 获取<p>消费者组创建时间。</p>
                     * @return CreatedAt <p>消费者组创建时间。</p>
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置<p>消费者组创建时间。</p>
                     * @param _createdAt <p>消费者组创建时间。</p>
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
                     * 获取<p>消费者组修改时间。</p>
                     * @return UpdatedAt <p>消费者组修改时间。</p>
                     * 
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 设置<p>消费者组修改时间。</p>
                     * @param _updatedAt <p>消费者组修改时间。</p>
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
                     * 获取<p>消费者组状态，包括Dead、Empty、Stable等，只有Dead和Empty两种状态可以执行reset操作</p>
                     * @return ConsumerGroupState <p>消费者组状态，包括Dead、Empty、Stable等，只有Dead和Empty两种状态可以执行reset操作</p>
                     * 
                     */
                    std::string GetConsumerGroupState() const;

                    /**
                     * 设置<p>消费者组状态，包括Dead、Empty、Stable等，只有Dead和Empty两种状态可以执行reset操作</p>
                     * @param _consumerGroupState <p>消费者组状态，包括Dead、Empty、Stable等，只有Dead和Empty两种状态可以执行reset操作</p>
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
                     * 获取<p>每个消费者正在消费的分区</p>
                     * @return PartitionAssignment <p>每个消费者正在消费的分区</p>
                     * 
                     */
                    std::vector<PartitionAssignment> GetPartitionAssignment() const;

                    /**
                     * 设置<p>每个消费者正在消费的分区</p>
                     * @param _partitionAssignment <p>每个消费者正在消费的分区</p>
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
                     * <p>消费者组账号</p>
                     */
                    std::string m_account;
                    bool m_accountHasBeenSet;

                    /**
                     * <p>消费者组名称</p>
                     */
                    std::string m_consumerGroupName;
                    bool m_consumerGroupNameHasBeenSet;

                    /**
                     * <p>消费者组备注</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>消费组偏移量。该字段是为了兼容以前单Partition的情况，取值为最后一个分区的偏移量。各分区的偏移量详见StateOfPartition字段</p>
                     */
                    int64_t m_consumerGroupOffset;
                    bool m_consumerGroupOffsetHasBeenSet;

                    /**
                     * <p>消费组未消费的数据量。该字段是为了兼容以前单Partition的情况，取值为最后一个分区未消费的数据量。各分区未消费数据量详见StateOfPartition字段</p>
                     */
                    int64_t m_consumerGroupLag;
                    bool m_consumerGroupLagHasBeenSet;

                    /**
                     * <p>消费延迟(单位为秒)</p>
                     */
                    int64_t m_latency;
                    bool m_latencyHasBeenSet;

                    /**
                     * <p>各分区的消费状态</p>
                     */
                    std::vector<MonitorInfo> m_stateOfPartition;
                    bool m_stateOfPartitionHasBeenSet;

                    /**
                     * <p>消费者组创建时间。</p>
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * <p>消费者组修改时间。</p>
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                    /**
                     * <p>消费者组状态，包括Dead、Empty、Stable等，只有Dead和Empty两种状态可以执行reset操作</p>
                     */
                    std::string m_consumerGroupState;
                    bool m_consumerGroupStateHasBeenSet;

                    /**
                     * <p>每个消费者正在消费的分区</p>
                     */
                    std::vector<PartitionAssignment> m_partitionAssignment;
                    bool m_partitionAssignmentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_GROUPINFO_H_
