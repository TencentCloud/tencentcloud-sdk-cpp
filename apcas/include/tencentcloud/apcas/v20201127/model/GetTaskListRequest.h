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

#ifndef TENCENTCLOUD_APCAS_V20201127_MODEL_GETTASKLISTREQUEST_H_
#define TENCENTCLOUD_APCAS_V20201127_MODEL_GETTASKLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apcas
    {
        namespace V20201127
        {
            namespace Model
            {
                /**
                * GetTaskList请求参数结构体
                */
                class GetTaskListRequest : public AbstractModel
                {
                public:
                    GetTaskListRequest();
                    ~GetTaskListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取查询分页页码
                     * @return PageNumber 查询分页页码
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置查询分页页码
                     * @param PageNumber 查询分页页码
                     */
                    void SetPageNumber(const uint64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取查询分页大小
                     * @return PageSize 查询分页大小
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置查询分页大小
                     * @param PageSize 查询分页大小
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取查询起始时间（13位数字的UNIX时间戳，单位毫秒 ）
                     * @return StartTime 查询起始时间（13位数字的UNIX时间戳，单位毫秒 ）
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置查询起始时间（13位数字的UNIX时间戳，单位毫秒 ）
                     * @param StartTime 查询起始时间（13位数字的UNIX时间戳，单位毫秒 ）
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取查询结束时间（13位数字的UNIX时间戳，单位毫秒 ）
                     * @return EndTime 查询结束时间（13位数字的UNIX时间戳，单位毫秒 ）
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置查询结束时间（13位数字的UNIX时间戳，单位毫秒 ）
                     * @param EndTime 查询结束时间（13位数字的UNIX时间戳，单位毫秒 ）
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取任务名称
                     * @return TaskName 任务名称
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置任务名称
                     * @param TaskName 任务名称
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取查询任务状态 0:默认状态 1:任务正在运行 2:任务运行成功 3:任务运行失败
                     * @return TaskStatus 查询任务状态 0:默认状态 1:任务正在运行 2:任务运行成功 3:任务运行失败
                     */
                    uint64_t GetTaskStatus() const;

                    /**
                     * 设置查询任务状态 0:默认状态 1:任务正在运行 2:任务运行成功 3:任务运行失败
                     * @param TaskStatus 查询任务状态 0:默认状态 1:任务正在运行 2:任务运行成功 3:任务运行失败
                     */
                    void SetTaskStatus(const uint64_t& _taskStatus);

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     */
                    bool TaskStatusHasBeenSet() const;

                private:

                    /**
                     * 查询分页页码
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 查询分页大小
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 查询起始时间（13位数字的UNIX时间戳，单位毫秒 ）
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 查询结束时间（13位数字的UNIX时间戳，单位毫秒 ）
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 任务名称
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 查询任务状态 0:默认状态 1:任务正在运行 2:任务运行成功 3:任务运行失败
                     */
                    uint64_t m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APCAS_V20201127_MODEL_GETTASKLISTREQUEST_H_
