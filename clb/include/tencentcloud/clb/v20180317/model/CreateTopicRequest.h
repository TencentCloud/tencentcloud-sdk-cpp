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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_CREATETOPICREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_CREATETOPICREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * CreateTopic请求参数结构体
                */
                class CreateTopicRequest : public AbstractModel
                {
                public:
                    CreateTopicRequest();
                    ~CreateTopicRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取日志主题的名称。
                     * @return TopicName 日志主题的名称。
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置日志主题的名称。
                     * @param TopicName 日志主题的名称。
                     */
                    void SetTopicName(const std::string& _topicName);

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     */
                    bool TopicNameHasBeenSet() const;

                    /**
                     * 获取主题分区Partition的数量，不传参默认创建1个，最大创建允许10个，分裂/合并操作会改变分区数量，整体上限50个。
                     * @return PartitionCount 主题分区Partition的数量，不传参默认创建1个，最大创建允许10个，分裂/合并操作会改变分区数量，整体上限50个。
                     */
                    uint64_t GetPartitionCount() const;

                    /**
                     * 设置主题分区Partition的数量，不传参默认创建1个，最大创建允许10个，分裂/合并操作会改变分区数量，整体上限50个。
                     * @param PartitionCount 主题分区Partition的数量，不传参默认创建1个，最大创建允许10个，分裂/合并操作会改变分区数量，整体上限50个。
                     */
                    void SetPartitionCount(const uint64_t& _partitionCount);

                    /**
                     * 判断参数 PartitionCount 是否已赋值
                     * @return PartitionCount 是否已赋值
                     */
                    bool PartitionCountHasBeenSet() const;

                    /**
                     * 获取日志类型，ACCESS：访问日志，HEALTH：健康检查日志，默认ACCESS。
                     * @return TopicType 日志类型，ACCESS：访问日志，HEALTH：健康检查日志，默认ACCESS。
                     */
                    std::string GetTopicType() const;

                    /**
                     * 设置日志类型，ACCESS：访问日志，HEALTH：健康检查日志，默认ACCESS。
                     * @param TopicType 日志类型，ACCESS：访问日志，HEALTH：健康检查日志，默认ACCESS。
                     */
                    void SetTopicType(const std::string& _topicType);

                    /**
                     * 判断参数 TopicType 是否已赋值
                     * @return TopicType 是否已赋值
                     */
                    bool TopicTypeHasBeenSet() const;

                    /**
                     * 获取日志集的保存周期，单位：天，默认30天。
                     * @return Period 日志集的保存周期，单位：天，默认30天。
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置日志集的保存周期，单位：天，默认30天。
                     * @param Period 日志集的保存周期，单位：天，默认30天。
                     */
                    void SetPeriod(const uint64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     */
                    bool PeriodHasBeenSet() const;

                private:

                    /**
                     * 日志主题的名称。
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * 主题分区Partition的数量，不传参默认创建1个，最大创建允许10个，分裂/合并操作会改变分区数量，整体上限50个。
                     */
                    uint64_t m_partitionCount;
                    bool m_partitionCountHasBeenSet;

                    /**
                     * 日志类型，ACCESS：访问日志，HEALTH：健康检查日志，默认ACCESS。
                     */
                    std::string m_topicType;
                    bool m_topicTypeHasBeenSet;

                    /**
                     * 日志集的保存周期，单位：天，默认30天。
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_CREATETOPICREQUEST_H_
