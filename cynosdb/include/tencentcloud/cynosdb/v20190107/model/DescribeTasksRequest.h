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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBETASKSREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBETASKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/QueryFilter.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * DescribeTasks请求参数结构体
                */
                class DescribeTasksRequest : public AbstractModel
                {
                public:
                    DescribeTasksRequest();
                    ~DescribeTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务开始时间起始值
                     * @return StartTimeBegin 任务开始时间起始值
                     * 
                     */
                    std::string GetStartTimeBegin() const;

                    /**
                     * 设置任务开始时间起始值
                     * @param _startTimeBegin 任务开始时间起始值
                     * 
                     */
                    void SetStartTimeBegin(const std::string& _startTimeBegin);

                    /**
                     * 判断参数 StartTimeBegin 是否已赋值
                     * @return StartTimeBegin 是否已赋值
                     * 
                     */
                    bool StartTimeBeginHasBeenSet() const;

                    /**
                     * 获取任务开始时间结束值
                     * @return StartTimeEnd 任务开始时间结束值
                     * 
                     */
                    std::string GetStartTimeEnd() const;

                    /**
                     * 设置任务开始时间结束值
                     * @param _startTimeEnd 任务开始时间结束值
                     * 
                     */
                    void SetStartTimeEnd(const std::string& _startTimeEnd);

                    /**
                     * 判断参数 StartTimeEnd 是否已赋值
                     * @return StartTimeEnd 是否已赋值
                     * 
                     */
                    bool StartTimeEndHasBeenSet() const;

                    /**
                     * 获取过滤条件，支持的搜索字段："ClusterId"、"ClusterName"、"InstanceId"、"InstanceName"、"Status"、"TaskId"、"TaskType"
                     * @return Filters 过滤条件，支持的搜索字段："ClusterId"、"ClusterName"、"InstanceId"、"InstanceName"、"Status"、"TaskId"、"TaskType"
                     * 
                     */
                    std::vector<QueryFilter> GetFilters() const;

                    /**
                     * 设置过滤条件，支持的搜索字段："ClusterId"、"ClusterName"、"InstanceId"、"InstanceName"、"Status"、"TaskId"、"TaskType"
                     * @param _filters 过滤条件，支持的搜索字段："ClusterId"、"ClusterName"、"InstanceId"、"InstanceName"、"Status"、"TaskId"、"TaskType"
                     * 
                     */
                    void SetFilters(const std::vector<QueryFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取查询列表长度
                     * @return Limit 查询列表长度
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置查询列表长度
                     * @param _limit 查询列表长度
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取查询列表偏移量
                     * @return Offset 查询列表偏移量
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置查询列表偏移量
                     * @param _offset 查询列表偏移量
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * 任务开始时间起始值
                     */
                    std::string m_startTimeBegin;
                    bool m_startTimeBeginHasBeenSet;

                    /**
                     * 任务开始时间结束值
                     */
                    std::string m_startTimeEnd;
                    bool m_startTimeEndHasBeenSet;

                    /**
                     * 过滤条件，支持的搜索字段："ClusterId"、"ClusterName"、"InstanceId"、"InstanceName"、"Status"、"TaskId"、"TaskType"
                     */
                    std::vector<QueryFilter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 查询列表长度
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 查询列表偏移量
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBETASKSREQUEST_H_
