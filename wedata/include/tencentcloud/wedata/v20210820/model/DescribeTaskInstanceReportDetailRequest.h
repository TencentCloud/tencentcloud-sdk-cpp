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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETASKINSTANCEREPORTDETAILREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETASKINSTANCEREPORTDETAILREQUEST_H_

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
                * DescribeTaskInstanceReportDetail请求参数结构体
                */
                class DescribeTaskInstanceReportDetailRequest : public AbstractModel
                {
                public:
                    DescribeTaskInstanceReportDetailRequest();
                    ~DescribeTaskInstanceReportDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取WeData项目ID
                     * @return ProjectId WeData项目ID
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置WeData项目ID
                     * @param ProjectId WeData项目ID
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取任务ID
                     * @return TaskId 任务ID
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务ID
                     * @param TaskId 任务ID
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取任务实例数据时间
                     * @return CurRunDate 任务实例数据时间
                     */
                    std::string GetCurRunDate() const;

                    /**
                     * 设置任务实例数据时间
                     * @param CurRunDate 任务实例数据时间
                     */
                    void SetCurRunDate(const std::string& _curRunDate);

                    /**
                     * 判断参数 CurRunDate 是否已赋值
                     * @return CurRunDate 是否已赋值
                     */
                    bool CurRunDateHasBeenSet() const;

                    /**
                     * 获取任务实例运行时间
                     * @return IssueDate 任务实例运行时间
                     */
                    std::string GetIssueDate() const;

                    /**
                     * 设置任务实例运行时间
                     * @param IssueDate 任务实例运行时间
                     */
                    void SetIssueDate(const std::string& _issueDate);

                    /**
                     * 判断参数 IssueDate 是否已赋值
                     * @return IssueDate 是否已赋值
                     */
                    bool IssueDateHasBeenSet() const;

                private:

                    /**
                     * WeData项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 任务ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 任务实例数据时间
                     */
                    std::string m_curRunDate;
                    bool m_curRunDateHasBeenSet;

                    /**
                     * 任务实例运行时间
                     */
                    std::string m_issueDate;
                    bool m_issueDateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETASKINSTANCEREPORTDETAILREQUEST_H_
