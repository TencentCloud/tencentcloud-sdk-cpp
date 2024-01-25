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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_COMMITWORKFLOWREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_COMMITWORKFLOWREQUEST_H_

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
                * CommitWorkflow请求参数结构体
                */
                class CommitWorkflowRequest : public AbstractModel
                {
                public:
                    CommitWorkflowRequest();
                    ~CommitWorkflowRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目编号
                     * @return ProjectId 项目编号
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目编号
                     * @param _projectId 项目编号
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
                     * 获取工作流编号
                     * @return WorkflowId 工作流编号
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置工作流编号
                     * @param _workflowId 工作流编号
                     * 
                     */
                    void SetWorkflowId(const std::string& _workflowId);

                    /**
                     * 判断参数 WorkflowId 是否已赋值
                     * @return WorkflowId 是否已赋值
                     * 
                     */
                    bool WorkflowIdHasBeenSet() const;

                    /**
                     * 获取提交信息
                     * @return CommitDesc 提交信息
                     * 
                     */
                    std::string GetCommitDesc() const;

                    /**
                     * 设置提交信息
                     * @param _commitDesc 提交信息
                     * 
                     */
                    void SetCommitDesc(const std::string& _commitDesc);

                    /**
                     * 判断参数 CommitDesc 是否已赋值
                     * @return CommitDesc 是否已赋值
                     * 
                     */
                    bool CommitDescHasBeenSet() const;

                private:

                    /**
                     * 项目编号
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 工作流编号
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * 提交信息
                     */
                    std::string m_commitDesc;
                    bool m_commitDescHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_COMMITWORKFLOWREQUEST_H_
