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

#ifndef TENCENTCLOUD_BM_V20180423_MODEL_DESCRIBETASKINFOREQUEST_H_
#define TENCENTCLOUD_BM_V20180423_MODEL_DESCRIBETASKINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bm
    {
        namespace V20180423
        {
            namespace Model
            {
                /**
                * DescribeTaskInfo请求参数结构体
                */
                class DescribeTaskInfoRequest : public AbstractModel
                {
                public:
                    DescribeTaskInfoRequest();
                    ~DescribeTaskInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取开始位置
                     * @return Offset 开始位置
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置开始位置
                     * @param _offset 开始位置
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取数据条数
                     * @return Limit 数据条数
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置数据条数
                     * @param _limit 数据条数
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取时间过滤下限
                     * @return StartDate 时间过滤下限
                     * 
                     */
                    std::string GetStartDate() const;

                    /**
                     * 设置时间过滤下限
                     * @param _startDate 时间过滤下限
                     * 
                     */
                    void SetStartDate(const std::string& _startDate);

                    /**
                     * 判断参数 StartDate 是否已赋值
                     * @return StartDate 是否已赋值
                     * 
                     */
                    bool StartDateHasBeenSet() const;

                    /**
                     * 获取时间过滤上限
                     * @return EndDate 时间过滤上限
                     * 
                     */
                    std::string GetEndDate() const;

                    /**
                     * 设置时间过滤上限
                     * @param _endDate 时间过滤上限
                     * 
                     */
                    void SetEndDate(const std::string& _endDate);

                    /**
                     * 判断参数 EndDate 是否已赋值
                     * @return EndDate 是否已赋值
                     * 
                     */
                    bool EndDateHasBeenSet() const;

                    /**
                     * 获取任务状态ID过滤
                     * @return TaskStatus 任务状态ID过滤
                     * 
                     */
                    std::vector<uint64_t> GetTaskStatus() const;

                    /**
                     * 设置任务状态ID过滤
                     * @param _taskStatus 任务状态ID过滤
                     * 
                     */
                    void SetTaskStatus(const std::vector<uint64_t>& _taskStatus);

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     * 
                     */
                    bool TaskStatusHasBeenSet() const;

                    /**
                     * 获取排序字段，目前支持：CreateTime，AuthTime，EndTime
                     * @return OrderField 排序字段，目前支持：CreateTime，AuthTime，EndTime
                     * 
                     */
                    std::string GetOrderField() const;

                    /**
                     * 设置排序字段，目前支持：CreateTime，AuthTime，EndTime
                     * @param _orderField 排序字段，目前支持：CreateTime，AuthTime，EndTime
                     * 
                     */
                    void SetOrderField(const std::string& _orderField);

                    /**
                     * 判断参数 OrderField 是否已赋值
                     * @return OrderField 是否已赋值
                     * 
                     */
                    bool OrderFieldHasBeenSet() const;

                    /**
                     * 获取排序方式 0:递增(默认) 1:递减
                     * @return Order 排序方式 0:递增(默认) 1:递减
                     * 
                     */
                    uint64_t GetOrder() const;

                    /**
                     * 设置排序方式 0:递增(默认) 1:递减
                     * @param _order 排序方式 0:递增(默认) 1:递减
                     * 
                     */
                    void SetOrder(const uint64_t& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取任务ID过滤
                     * @return TaskIds 任务ID过滤
                     * 
                     */
                    std::vector<std::string> GetTaskIds() const;

                    /**
                     * 设置任务ID过滤
                     * @param _taskIds 任务ID过滤
                     * 
                     */
                    void SetTaskIds(const std::vector<std::string>& _taskIds);

                    /**
                     * 判断参数 TaskIds 是否已赋值
                     * @return TaskIds 是否已赋值
                     * 
                     */
                    bool TaskIdsHasBeenSet() const;

                    /**
                     * 获取实例ID过滤
                     * @return InstanceIds 实例ID过滤
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置实例ID过滤
                     * @param _instanceIds 实例ID过滤
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取实例别名过滤
                     * @return Aliases 实例别名过滤
                     * 
                     */
                    std::vector<std::string> GetAliases() const;

                    /**
                     * 设置实例别名过滤
                     * @param _aliases 实例别名过滤
                     * 
                     */
                    void SetAliases(const std::vector<std::string>& _aliases);

                    /**
                     * 判断参数 Aliases 是否已赋值
                     * @return Aliases 是否已赋值
                     * 
                     */
                    bool AliasesHasBeenSet() const;

                    /**
                     * 获取故障类型ID过滤
                     * @return TaskTypeIds 故障类型ID过滤
                     * 
                     */
                    std::vector<uint64_t> GetTaskTypeIds() const;

                    /**
                     * 设置故障类型ID过滤
                     * @param _taskTypeIds 故障类型ID过滤
                     * 
                     */
                    void SetTaskTypeIds(const std::vector<uint64_t>& _taskTypeIds);

                    /**
                     * 判断参数 TaskTypeIds 是否已赋值
                     * @return TaskTypeIds 是否已赋值
                     * 
                     */
                    bool TaskTypeIdsHasBeenSet() const;

                private:

                    /**
                     * 开始位置
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 数据条数
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 时间过滤下限
                     */
                    std::string m_startDate;
                    bool m_startDateHasBeenSet;

                    /**
                     * 时间过滤上限
                     */
                    std::string m_endDate;
                    bool m_endDateHasBeenSet;

                    /**
                     * 任务状态ID过滤
                     */
                    std::vector<uint64_t> m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                    /**
                     * 排序字段，目前支持：CreateTime，AuthTime，EndTime
                     */
                    std::string m_orderField;
                    bool m_orderFieldHasBeenSet;

                    /**
                     * 排序方式 0:递增(默认) 1:递减
                     */
                    uint64_t m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 任务ID过滤
                     */
                    std::vector<std::string> m_taskIds;
                    bool m_taskIdsHasBeenSet;

                    /**
                     * 实例ID过滤
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 实例别名过滤
                     */
                    std::vector<std::string> m_aliases;
                    bool m_aliasesHasBeenSet;

                    /**
                     * 故障类型ID过滤
                     */
                    std::vector<uint64_t> m_taskTypeIds;
                    bool m_taskTypeIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BM_V20180423_MODEL_DESCRIBETASKINFOREQUEST_H_
