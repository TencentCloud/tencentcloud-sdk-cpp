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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_GETSQLRUNRESULTREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_GETSQLRUNRESULTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * GetSQLRunResult请求参数结构体
                */
                class GetSQLRunResultRequest : public AbstractModel
                {
                public:
                    GetSQLRunResultRequest();
                    ~GetSQLRunResultRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param _projectId 项目ID
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取查询任务ID，由 RunSQLScript 返回
                     * @return JobId 查询任务ID，由 RunSQLScript 返回
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置查询任务ID，由 RunSQLScript 返回
                     * @param _jobId 查询任务ID，由 RunSQLScript 返回
                     * 
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取子查询任务运行ID。不传则返回该任务下全部子查询的结果
                     * @return JobExecutionId 子查询任务运行ID。不传则返回该任务下全部子查询的结果
                     * 
                     */
                    std::string GetJobExecutionId() const;

                    /**
                     * 设置子查询任务运行ID。不传则返回该任务下全部子查询的结果
                     * @param _jobExecutionId 子查询任务运行ID。不传则返回该任务下全部子查询的结果
                     * 
                     */
                    void SetJobExecutionId(const std::string& _jobExecutionId);

                    /**
                     * 判断参数 JobExecutionId 是否已赋值
                     * @return JobExecutionId 是否已赋值
                     * 
                     */
                    bool JobExecutionIdHasBeenSet() const;

                private:

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 查询任务ID，由 RunSQLScript 返回
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 子查询任务运行ID。不传则返回该任务下全部子查询的结果
                     */
                    std::string m_jobExecutionId;
                    bool m_jobExecutionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_GETSQLRUNRESULTREQUEST_H_
