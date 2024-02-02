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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEEMRAPPLICATIONSTATICSREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEEMRAPPLICATIONSTATICSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * DescribeEmrApplicationStatics请求参数结构体
                */
                class DescribeEmrApplicationStaticsRequest : public AbstractModel
                {
                public:
                    DescribeEmrApplicationStaticsRequest();
                    ~DescribeEmrApplicationStaticsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群id
                     * @return InstanceId 集群id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置集群id
                     * @param _instanceId 集群id
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取起始时间，时间戳（秒）
                     * @return StartTime 起始时间，时间戳（秒）
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置起始时间，时间戳（秒）
                     * @param _startTime 起始时间，时间戳（秒）
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间，时间戳（秒）
                     * @return EndTime 结束时间，时间戳（秒）
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置结束时间，时间戳（秒）
                     * @param _endTime 结束时间，时间戳（秒）
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取过滤的队列名
                     * @return Queues 过滤的队列名
                     * 
                     */
                    std::vector<std::string> GetQueues() const;

                    /**
                     * 设置过滤的队列名
                     * @param _queues 过滤的队列名
                     * 
                     */
                    void SetQueues(const std::vector<std::string>& _queues);

                    /**
                     * 判断参数 Queues 是否已赋值
                     * @return Queues 是否已赋值
                     * 
                     */
                    bool QueuesHasBeenSet() const;

                    /**
                     * 获取过滤的用户名
                     * @return Users 过滤的用户名
                     * 
                     */
                    std::vector<std::string> GetUsers() const;

                    /**
                     * 设置过滤的用户名
                     * @param _users 过滤的用户名
                     * 
                     */
                    void SetUsers(const std::vector<std::string>& _users);

                    /**
                     * 判断参数 Users 是否已赋值
                     * @return Users 是否已赋值
                     * 
                     */
                    bool UsersHasBeenSet() const;

                    /**
                     * 获取过滤的作业类型
                     * @return ApplicationTypes 过滤的作业类型
                     * 
                     */
                    std::vector<std::string> GetApplicationTypes() const;

                    /**
                     * 设置过滤的作业类型
                     * @param _applicationTypes 过滤的作业类型
                     * 
                     */
                    void SetApplicationTypes(const std::vector<std::string>& _applicationTypes);

                    /**
                     * 判断参数 ApplicationTypes 是否已赋值
                     * @return ApplicationTypes 是否已赋值
                     * 
                     */
                    bool ApplicationTypesHasBeenSet() const;

                    /**
                     * 获取分组字段，可选：queue, user, applicationType
                     * @return GroupBy 分组字段，可选：queue, user, applicationType
                     * 
                     */
                    std::vector<std::string> GetGroupBy() const;

                    /**
                     * 设置分组字段，可选：queue, user, applicationType
                     * @param _groupBy 分组字段，可选：queue, user, applicationType
                     * 
                     */
                    void SetGroupBy(const std::vector<std::string>& _groupBy);

                    /**
                     * 判断参数 GroupBy 是否已赋值
                     * @return GroupBy 是否已赋值
                     * 
                     */
                    bool GroupByHasBeenSet() const;

                    /**
                     * 获取排序字段，可选：sumMemorySeconds, sumVCoreSeconds, sumHDFSBytesWritten, sumHDFSBytesRead
                     * @return OrderBy 排序字段，可选：sumMemorySeconds, sumVCoreSeconds, sumHDFSBytesWritten, sumHDFSBytesRead
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置排序字段，可选：sumMemorySeconds, sumVCoreSeconds, sumHDFSBytesWritten, sumHDFSBytesRead
                     * @param _orderBy 排序字段，可选：sumMemorySeconds, sumVCoreSeconds, sumHDFSBytesWritten, sumHDFSBytesRead
                     * 
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取是否顺序排序，0-逆序，1-正序
                     * @return IsAsc 是否顺序排序，0-逆序，1-正序
                     * 
                     */
                    int64_t GetIsAsc() const;

                    /**
                     * 设置是否顺序排序，0-逆序，1-正序
                     * @param _isAsc 是否顺序排序，0-逆序，1-正序
                     * 
                     */
                    void SetIsAsc(const int64_t& _isAsc);

                    /**
                     * 判断参数 IsAsc 是否已赋值
                     * @return IsAsc 是否已赋值
                     * 
                     */
                    bool IsAscHasBeenSet() const;

                    /**
                     * 获取页号
                     * @return Offset 页号
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置页号
                     * @param _offset 页号
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取页容量，范围为[10,100]
                     * @return Limit 页容量，范围为[10,100]
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置页容量，范围为[10,100]
                     * @param _limit 页容量，范围为[10,100]
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 集群id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 起始时间，时间戳（秒）
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间，时间戳（秒）
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 过滤的队列名
                     */
                    std::vector<std::string> m_queues;
                    bool m_queuesHasBeenSet;

                    /**
                     * 过滤的用户名
                     */
                    std::vector<std::string> m_users;
                    bool m_usersHasBeenSet;

                    /**
                     * 过滤的作业类型
                     */
                    std::vector<std::string> m_applicationTypes;
                    bool m_applicationTypesHasBeenSet;

                    /**
                     * 分组字段，可选：queue, user, applicationType
                     */
                    std::vector<std::string> m_groupBy;
                    bool m_groupByHasBeenSet;

                    /**
                     * 排序字段，可选：sumMemorySeconds, sumVCoreSeconds, sumHDFSBytesWritten, sumHDFSBytesRead
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 是否顺序排序，0-逆序，1-正序
                     */
                    int64_t m_isAsc;
                    bool m_isAscHasBeenSet;

                    /**
                     * 页号
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 页容量，范围为[10,100]
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEEMRAPPLICATIONSTATICSREQUEST_H_
