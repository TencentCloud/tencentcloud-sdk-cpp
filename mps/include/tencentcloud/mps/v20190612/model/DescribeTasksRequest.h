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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBETASKSREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBETASKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
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
                     * 获取任务状态过滤条件，可选值：
- WAITING（等待中）
- PROCESSING（处理中）
- FINISH（已完成）。
                     * @return Status 任务状态过滤条件，可选值：
- WAITING（等待中）
- PROCESSING（处理中）
- FINISH（已完成）。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置任务状态过滤条件，可选值：
- WAITING（等待中）
- PROCESSING（处理中）
- FINISH（已完成）。
                     * @param _status 任务状态过滤条件，可选值：
- WAITING（等待中）
- PROCESSING（处理中）
- FINISH（已完成）。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取任务结束时子任务是否有失败。
                     * @return SubTaskHasFailed 任务结束时子任务是否有失败。
                     * 
                     */
                    bool GetSubTaskHasFailed() const;

                    /**
                     * 设置任务结束时子任务是否有失败。
                     * @param _subTaskHasFailed 任务结束时子任务是否有失败。
                     * 
                     */
                    void SetSubTaskHasFailed(const bool& _subTaskHasFailed);

                    /**
                     * 判断参数 SubTaskHasFailed 是否已赋值
                     * @return SubTaskHasFailed 是否已赋值
                     * 
                     */
                    bool SubTaskHasFailedHasBeenSet() const;

                    /**
                     * 获取返回记录条数，默认值：10，最大值：100。
                     * @return Limit 返回记录条数，默认值：10，最大值：100。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回记录条数，默认值：10，最大值：100。
                     * @param _limit 返回记录条数，默认值：10，最大值：100。
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
                     * 获取翻页标识，分批拉取时使用：当单次请求无法拉取所有数据，接口将会返回 ScrollToken，下一次请求携带该 Token，将会从下一条记录开始获取。
                     * @return ScrollToken 翻页标识，分批拉取时使用：当单次请求无法拉取所有数据，接口将会返回 ScrollToken，下一次请求携带该 Token，将会从下一条记录开始获取。
                     * 
                     */
                    std::string GetScrollToken() const;

                    /**
                     * 设置翻页标识，分批拉取时使用：当单次请求无法拉取所有数据，接口将会返回 ScrollToken，下一次请求携带该 Token，将会从下一条记录开始获取。
                     * @param _scrollToken 翻页标识，分批拉取时使用：当单次请求无法拉取所有数据，接口将会返回 ScrollToken，下一次请求携带该 Token，将会从下一条记录开始获取。
                     * 
                     */
                    void SetScrollToken(const std::string& _scrollToken);

                    /**
                     * 判断参数 ScrollToken 是否已赋值
                     * @return ScrollToken 是否已赋值
                     * 
                     */
                    bool ScrollTokenHasBeenSet() const;

                    /**
                     * 获取查询任务开始时间
                     * @return StartTime 查询任务开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置查询任务开始时间
                     * @param _startTime 查询任务开始时间
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取查询任务结束时间。
                     * @return EndTime 查询任务结束时间。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置查询任务结束时间。
                     * @param _endTime 查询任务结束时间。
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * 任务状态过滤条件，可选值：
- WAITING（等待中）
- PROCESSING（处理中）
- FINISH（已完成）。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 任务结束时子任务是否有失败。
                     */
                    bool m_subTaskHasFailed;
                    bool m_subTaskHasFailedHasBeenSet;

                    /**
                     * 返回记录条数，默认值：10，最大值：100。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 翻页标识，分批拉取时使用：当单次请求无法拉取所有数据，接口将会返回 ScrollToken，下一次请求携带该 Token，将会从下一条记录开始获取。
                     */
                    std::string m_scrollToken;
                    bool m_scrollTokenHasBeenSet;

                    /**
                     * 查询任务开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 查询任务结束时间。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBETASKSREQUEST_H_
