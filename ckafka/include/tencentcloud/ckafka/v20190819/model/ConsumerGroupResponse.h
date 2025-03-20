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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_CONSUMERGROUPRESPONSE_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_CONSUMERGROUPRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/ConsumerGroupTopic.h>
#include <tencentcloud/ckafka/v20190819/model/ConsumerGroup.h>
#include <tencentcloud/ckafka/v20190819/model/Partition.h>
#include <tencentcloud/ckafka/v20190819/model/Group.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * 消费组返回结果实体
                */
                class ConsumerGroupResponse : public AbstractModel
                {
                public:
                    ConsumerGroupResponse();
                    ~ConsumerGroupResponse() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取符合条件的消费组数量
                     * @return TotalCount 符合条件的消费组数量
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置符合条件的消费组数量
                     * @param _totalCount 符合条件的消费组数量
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取主题列表
                     * @return TopicList 主题列表
                     * 
                     */
                    std::vector<ConsumerGroupTopic> GetTopicList() const;

                    /**
                     * 设置主题列表
                     * @param _topicList 主题列表
                     * 
                     */
                    void SetTopicList(const std::vector<ConsumerGroupTopic>& _topicList);

                    /**
                     * 判断参数 TopicList 是否已赋值
                     * @return TopicList 是否已赋值
                     * 
                     */
                    bool TopicListHasBeenSet() const;

                    /**
                     * 获取消费分组List
                     * @return GroupList 消费分组List
                     * 
                     */
                    std::vector<ConsumerGroup> GetGroupList() const;

                    /**
                     * 设置消费分组List
                     * @param _groupList 消费分组List
                     * 
                     */
                    void SetGroupList(const std::vector<ConsumerGroup>& _groupList);

                    /**
                     * 判断参数 GroupList 是否已赋值
                     * @return GroupList 是否已赋值
                     * 
                     */
                    bool GroupListHasBeenSet() const;

                    /**
                     * 获取所有分区数量
                     * @return TotalPartition 所有分区数量
                     * 
                     */
                    int64_t GetTotalPartition() const;

                    /**
                     * 设置所有分区数量
                     * @param _totalPartition 所有分区数量
                     * 
                     */
                    void SetTotalPartition(const int64_t& _totalPartition);

                    /**
                     * 判断参数 TotalPartition 是否已赋值
                     * @return TotalPartition 是否已赋值
                     * 
                     */
                    bool TotalPartitionHasBeenSet() const;

                    /**
                     * 获取监控的分区列表
                     * @return PartitionListForMonitor 监控的分区列表
                     * 
                     */
                    std::vector<Partition> GetPartitionListForMonitor() const;

                    /**
                     * 设置监控的分区列表
                     * @param _partitionListForMonitor 监控的分区列表
                     * 
                     */
                    void SetPartitionListForMonitor(const std::vector<Partition>& _partitionListForMonitor);

                    /**
                     * 判断参数 PartitionListForMonitor 是否已赋值
                     * @return PartitionListForMonitor 是否已赋值
                     * 
                     */
                    bool PartitionListForMonitorHasBeenSet() const;

                    /**
                     * 获取主题总数
                     * @return TotalTopic 主题总数
                     * 
                     */
                    int64_t GetTotalTopic() const;

                    /**
                     * 设置主题总数
                     * @param _totalTopic 主题总数
                     * 
                     */
                    void SetTotalTopic(const int64_t& _totalTopic);

                    /**
                     * 判断参数 TotalTopic 是否已赋值
                     * @return TotalTopic 是否已赋值
                     * 
                     */
                    bool TotalTopicHasBeenSet() const;

                    /**
                     * 获取监控的主题列表
                     * @return TopicListForMonitor 监控的主题列表
                     * 
                     */
                    std::vector<ConsumerGroupTopic> GetTopicListForMonitor() const;

                    /**
                     * 设置监控的主题列表
                     * @param _topicListForMonitor 监控的主题列表
                     * 
                     */
                    void SetTopicListForMonitor(const std::vector<ConsumerGroupTopic>& _topicListForMonitor);

                    /**
                     * 判断参数 TopicListForMonitor 是否已赋值
                     * @return TopicListForMonitor 是否已赋值
                     * 
                     */
                    bool TopicListForMonitorHasBeenSet() const;

                    /**
                     * 获取监控的组列表
                     * @return GroupListForMonitor 监控的组列表
                     * 
                     */
                    std::vector<Group> GetGroupListForMonitor() const;

                    /**
                     * 设置监控的组列表
                     * @param _groupListForMonitor 监控的组列表
                     * 
                     */
                    void SetGroupListForMonitor(const std::vector<Group>& _groupListForMonitor);

                    /**
                     * 判断参数 GroupListForMonitor 是否已赋值
                     * @return GroupListForMonitor 是否已赋值
                     * 
                     */
                    bool GroupListForMonitorHasBeenSet() const;

                private:

                    /**
                     * 符合条件的消费组数量
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 主题列表
                     */
                    std::vector<ConsumerGroupTopic> m_topicList;
                    bool m_topicListHasBeenSet;

                    /**
                     * 消费分组List
                     */
                    std::vector<ConsumerGroup> m_groupList;
                    bool m_groupListHasBeenSet;

                    /**
                     * 所有分区数量
                     */
                    int64_t m_totalPartition;
                    bool m_totalPartitionHasBeenSet;

                    /**
                     * 监控的分区列表
                     */
                    std::vector<Partition> m_partitionListForMonitor;
                    bool m_partitionListForMonitorHasBeenSet;

                    /**
                     * 主题总数
                     */
                    int64_t m_totalTopic;
                    bool m_totalTopicHasBeenSet;

                    /**
                     * 监控的主题列表
                     */
                    std::vector<ConsumerGroupTopic> m_topicListForMonitor;
                    bool m_topicListForMonitorHasBeenSet;

                    /**
                     * 监控的组列表
                     */
                    std::vector<Group> m_groupListForMonitor;
                    bool m_groupListForMonitorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_CONSUMERGROUPRESPONSE_H_
