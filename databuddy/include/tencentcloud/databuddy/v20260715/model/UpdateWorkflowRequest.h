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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_UPDATEWORKFLOWREQUEST_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_UPDATEWORKFLOWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/Workflow.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * UpdateWorkflow请求参数结构体
                */
                class UpdateWorkflowRequest : public AbstractModel
                {
                public:
                    UpdateWorkflowRequest();
                    ~UpdateWorkflowRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>工作空间ID，可通过 ListWorkspaces 获取。必填</p>
                     * @return WorkspaceId <p>工作空间ID，可通过 ListWorkspaces 获取。必填</p>
                     * 
                     */
                    std::string GetWorkspaceId() const;

                    /**
                     * 设置<p>工作空间ID，可通过 ListWorkspaces 获取。必填</p>
                     * @param _workspaceId <p>工作空间ID，可通过 ListWorkspaces 获取。必填</p>
                     * 
                     */
                    void SetWorkspaceId(const std::string& _workspaceId);

                    /**
                     * 判断参数 WorkspaceId 是否已赋值
                     * @return WorkspaceId 是否已赋值
                     * 
                     */
                    bool WorkspaceIdHasBeenSet() const;

                    /**
                     * 获取<p>待更新的工作流ID，可通过 ListWorkflows 获取。必填</p>
                     * @return WorkflowId <p>待更新的工作流ID，可通过 ListWorkflows 获取。必填</p>
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置<p>待更新的工作流ID，可通过 ListWorkflows 获取。必填</p>
                     * @param _workflowId <p>待更新的工作流ID，可通过 ListWorkflows 获取。必填</p>
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
                     * 获取<p>需要清空的字段名列表，用于将指定字段重置为空</p>
                     * @return FieldToRemoveList <p>需要清空的字段名列表，用于将指定字段重置为空</p>
                     * 
                     */
                    std::vector<std::string> GetFieldToRemoveList() const;

                    /**
                     * 设置<p>需要清空的字段名列表，用于将指定字段重置为空</p>
                     * @param _fieldToRemoveList <p>需要清空的字段名列表，用于将指定字段重置为空</p>
                     * 
                     */
                    void SetFieldToRemoveList(const std::vector<std::string>& _fieldToRemoveList);

                    /**
                     * 判断参数 FieldToRemoveList 是否已赋值
                     * @return FieldToRemoveList 是否已赋值
                     * 
                     */
                    bool FieldToRemoveListHasBeenSet() const;

                    /**
                     * 获取<p>更新后的工作流配置，仅传入需要变更的部分即可</p>
                     * @return NewSetting <p>更新后的工作流配置，仅传入需要变更的部分即可</p>
                     * 
                     */
                    Workflow GetNewSetting() const;

                    /**
                     * 设置<p>更新后的工作流配置，仅传入需要变更的部分即可</p>
                     * @param _newSetting <p>更新后的工作流配置，仅传入需要变更的部分即可</p>
                     * 
                     */
                    void SetNewSetting(const Workflow& _newSetting);

                    /**
                     * 判断参数 NewSetting 是否已赋值
                     * @return NewSetting 是否已赋值
                     * 
                     */
                    bool NewSettingHasBeenSet() const;

                private:

                    /**
                     * <p>工作空间ID，可通过 ListWorkspaces 获取。必填</p>
                     */
                    std::string m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * <p>待更新的工作流ID，可通过 ListWorkflows 获取。必填</p>
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * <p>需要清空的字段名列表，用于将指定字段重置为空</p>
                     */
                    std::vector<std::string> m_fieldToRemoveList;
                    bool m_fieldToRemoveListHasBeenSet;

                    /**
                     * <p>更新后的工作流配置，仅传入需要变更的部分即可</p>
                     */
                    Workflow m_newSetting;
                    bool m_newSettingHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_UPDATEWORKFLOWREQUEST_H_
