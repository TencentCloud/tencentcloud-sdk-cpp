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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETASKREPORTREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETASKREPORTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeTaskReport请求参数结构体
                */
                class DescribeTaskReportRequest : public AbstractModel
                {
                public:
                    DescribeTaskReportRequest();
                    ~DescribeTaskReportRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务Id
                     * @return TaskId 任务Id
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务Id
                     * @param _taskId 任务Id
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取统计周期的开始日期，格式为 yyyy-MM-dd
                     * @return BeginDate 统计周期的开始日期，格式为 yyyy-MM-dd
                     * 
                     */
                    std::string GetBeginDate() const;

                    /**
                     * 设置统计周期的开始日期，格式为 yyyy-MM-dd
                     * @param _beginDate 统计周期的开始日期，格式为 yyyy-MM-dd
                     * 
                     */
                    void SetBeginDate(const std::string& _beginDate);

                    /**
                     * 判断参数 BeginDate 是否已赋值
                     * @return BeginDate 是否已赋值
                     * 
                     */
                    bool BeginDateHasBeenSet() const;

                    /**
                     * 获取统计周期的结束日期，格式为 yyyy-MM-dd
                     * @return EndDate 统计周期的结束日期，格式为 yyyy-MM-dd
                     * 
                     */
                    std::string GetEndDate() const;

                    /**
                     * 设置统计周期的结束日期，格式为 yyyy-MM-dd
                     * @param _endDate 统计周期的结束日期，格式为 yyyy-MM-dd
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
                     * 获取WeData项目id
                     * @return ProjectId WeData项目id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置WeData项目id
                     * @param _projectId WeData项目id
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                private:

                    /**
                     * 任务Id
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 统计周期的开始日期，格式为 yyyy-MM-dd
                     */
                    std::string m_beginDate;
                    bool m_beginDateHasBeenSet;

                    /**
                     * 统计周期的结束日期，格式为 yyyy-MM-dd
                     */
                    std::string m_endDate;
                    bool m_endDateHasBeenSet;

                    /**
                     * WeData项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETASKREPORTREQUEST_H_
