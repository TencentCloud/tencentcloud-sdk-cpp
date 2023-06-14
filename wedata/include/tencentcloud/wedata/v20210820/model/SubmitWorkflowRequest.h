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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_SUBMITWORKFLOWREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_SUBMITWORKFLOWREQUEST_H_

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
                * SubmitWorkflow请求参数结构体
                */
                class SubmitWorkflowRequest : public AbstractModel
                {
                public:
                    SubmitWorkflowRequest();
                    ~SubmitWorkflowRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目Id
                     * @return ProjectId 项目Id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目Id
                     * @param _projectId 项目Id
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
                     * 获取工作流id
                     * @return WorkflowId 工作流id
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置工作流id
                     * @param _workflowId 工作流id
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
                     * 获取提交的版本备注
                     * @return VersionRemark 提交的版本备注
                     * 
                     */
                    std::string GetVersionRemark() const;

                    /**
                     * 设置提交的版本备注
                     * @param _versionRemark 提交的版本备注
                     * 
                     */
                    void SetVersionRemark(const std::string& _versionRemark);

                    /**
                     * 判断参数 VersionRemark 是否已赋值
                     * @return VersionRemark 是否已赋值
                     * 
                     */
                    bool VersionRemarkHasBeenSet() const;

                    /**
                     * 获取是否启动调度
                     * @return StartScheduling 是否启动调度
                     * 
                     */
                    bool GetStartScheduling() const;

                    /**
                     * 设置是否启动调度
                     * @param _startScheduling 是否启动调度
                     * 
                     */
                    void SetStartScheduling(const bool& _startScheduling);

                    /**
                     * 判断参数 StartScheduling 是否已赋值
                     * @return StartScheduling 是否已赋值
                     * 
                     */
                    bool StartSchedulingHasBeenSet() const;

                private:

                    /**
                     * 项目Id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 工作流id
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * 提交的版本备注
                     */
                    std::string m_versionRemark;
                    bool m_versionRemarkHasBeenSet;

                    /**
                     * 是否启动调度
                     */
                    bool m_startScheduling;
                    bool m_startSchedulingHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_SUBMITWORKFLOWREQUEST_H_
