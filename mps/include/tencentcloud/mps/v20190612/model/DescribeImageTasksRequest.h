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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEIMAGETASKSREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEIMAGETASKSREQUEST_H_

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
                * DescribeImageTasks请求参数结构体
                */
                class DescribeImageTasksRequest : public AbstractModel
                {
                public:
                    DescribeImageTasksRequest();
                    ~DescribeImageTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>任务状态过滤条件。</p>
                     * @return Status <p>任务状态过滤条件。</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>任务状态过滤条件。</p>
                     * @param _status <p>任务状态过滤条件。</p>
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
                     * 获取<p>返回记录条数。</p>
                     * @return Limit <p>返回记录条数。</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>返回记录条数。</p>
                     * @param _limit <p>返回记录条数。</p>
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
                     * 获取<p>翻页标识，分批拉取时使用：当单次请求无法拉取所有数据，接口将会返回 ScrollToken，下一次请求携带该 Token，将会从下一条记录开始获取。</p>
                     * @return ScrollToken <p>翻页标识，分批拉取时使用：当单次请求无法拉取所有数据，接口将会返回 ScrollToken，下一次请求携带该 Token，将会从下一条记录开始获取。</p>
                     * 
                     */
                    std::string GetScrollToken() const;

                    /**
                     * 设置<p>翻页标识，分批拉取时使用：当单次请求无法拉取所有数据，接口将会返回 ScrollToken，下一次请求携带该 Token，将会从下一条记录开始获取。</p>
                     * @param _scrollToken <p>翻页标识，分批拉取时使用：当单次请求无法拉取所有数据，接口将会返回 ScrollToken，下一次请求携带该 Token，将会从下一条记录开始获取。</p>
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
                     * 获取<p>任务开始时间。</p><p>参数格式：YYYY-MM-DDThh:mm:ssZ</p>
                     * @return StartTime <p>任务开始时间。</p><p>参数格式：YYYY-MM-DDThh:mm:ssZ</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>任务开始时间。</p><p>参数格式：YYYY-MM-DDThh:mm:ssZ</p>
                     * @param _startTime <p>任务开始时间。</p><p>参数格式：YYYY-MM-DDThh:mm:ssZ</p>
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
                     * 获取<p>任务结束时间。</p><p>参数格式：YYYY-MM-DDThh:mm:ssZ</p>
                     * @return EndTime <p>任务结束时间。</p><p>参数格式：YYYY-MM-DDThh:mm:ssZ</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>任务结束时间。</p><p>参数格式：YYYY-MM-DDThh:mm:ssZ</p>
                     * @param _endTime <p>任务结束时间。</p><p>参数格式：YYYY-MM-DDThh:mm:ssZ</p>
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>筛选子任务状态。</p>
                     * @return SubTaskHasFailed <p>筛选子任务状态。</p>
                     * 
                     */
                    bool GetSubTaskHasFailed() const;

                    /**
                     * 设置<p>筛选子任务状态。</p>
                     * @param _subTaskHasFailed <p>筛选子任务状态。</p>
                     * 
                     */
                    void SetSubTaskHasFailed(const bool& _subTaskHasFailed);

                    /**
                     * 判断参数 SubTaskHasFailed 是否已赋值
                     * @return SubTaskHasFailed 是否已赋值
                     * 
                     */
                    bool SubTaskHasFailedHasBeenSet() const;

                private:

                    /**
                     * <p>任务状态过滤条件。</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>返回记录条数。</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>翻页标识，分批拉取时使用：当单次请求无法拉取所有数据，接口将会返回 ScrollToken，下一次请求携带该 Token，将会从下一条记录开始获取。</p>
                     */
                    std::string m_scrollToken;
                    bool m_scrollTokenHasBeenSet;

                    /**
                     * <p>任务开始时间。</p><p>参数格式：YYYY-MM-DDThh:mm:ssZ</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>任务结束时间。</p><p>参数格式：YYYY-MM-DDThh:mm:ssZ</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>筛选子任务状态。</p>
                     */
                    bool m_subTaskHasFailed;
                    bool m_subTaskHasFailedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEIMAGETASKSREQUEST_H_
