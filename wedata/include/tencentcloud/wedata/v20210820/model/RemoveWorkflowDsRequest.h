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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_REMOVEWORKFLOWDSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_REMOVEWORKFLOWDSREQUEST_H_

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
                * RemoveWorkflowDs请求参数结构体
                */
                class RemoveWorkflowDsRequest : public AbstractModel
                {
                public:
                    RemoveWorkflowDsRequest();
                    ~RemoveWorkflowDsRequest() = default;
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
                     * 获取工作流ID
                     * @return WorkflowId 工作流ID
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置工作流ID
                     * @param _workflowId 工作流ID
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
                     * 获取是否删除脚本
                     * @return DeleteScript 是否删除脚本
                     * 
                     */
                    std::string GetDeleteScript() const;

                    /**
                     * 设置是否删除脚本
                     * @param _deleteScript 是否删除脚本
                     * 
                     */
                    void SetDeleteScript(const std::string& _deleteScript);

                    /**
                     * 判断参数 DeleteScript 是否已赋值
                     * @return DeleteScript 是否已赋值
                     * 
                     */
                    bool DeleteScriptHasBeenSet() const;

                    /**
                     * 获取删除是否通知下游
                     * @return OperateIsInform 删除是否通知下游
                     * 
                     */
                    std::string GetOperateIsInform() const;

                    /**
                     * 设置删除是否通知下游
                     * @param _operateIsInform 删除是否通知下游
                     * 
                     */
                    void SetOperateIsInform(const std::string& _operateIsInform);

                    /**
                     * 判断参数 OperateIsInform 是否已赋值
                     * @return OperateIsInform 是否已赋值
                     * 
                     */
                    bool OperateIsInformHasBeenSet() const;

                    /**
                     * 获取是否终止进行中的任务
                     * @return DeleteMode 是否终止进行中的任务
                     * 
                     */
                    std::string GetDeleteMode() const;

                    /**
                     * 设置是否终止进行中的任务
                     * @param _deleteMode 是否终止进行中的任务
                     * 
                     */
                    void SetDeleteMode(const std::string& _deleteMode);

                    /**
                     * 判断参数 DeleteMode 是否已赋值
                     * @return DeleteMode 是否已赋值
                     * 
                     */
                    bool DeleteModeHasBeenSet() const;

                private:

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 工作流ID
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * 是否删除脚本
                     */
                    std::string m_deleteScript;
                    bool m_deleteScriptHasBeenSet;

                    /**
                     * 删除是否通知下游
                     */
                    std::string m_operateIsInform;
                    bool m_operateIsInformHasBeenSet;

                    /**
                     * 是否终止进行中的任务
                     */
                    std::string m_deleteMode;
                    bool m_deleteModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_REMOVEWORKFLOWDSREQUEST_H_
