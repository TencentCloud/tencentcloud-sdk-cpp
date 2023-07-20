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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DELETEWORKFLOWBYIDREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DELETEWORKFLOWBYIDREQUEST_H_

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
                * DeleteWorkflowById请求参数结构体
                */
                class DeleteWorkflowByIdRequest : public AbstractModel
                {
                public:
                    DeleteWorkflowByIdRequest();
                    ~DeleteWorkflowByIdRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取项目id
                     * @return ProjectId 项目id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目id
                     * @param _projectId 项目id
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
                     * 获取删除后下游任务的处理方式，true:下游任务均正常运行 false:下游任务均运行失败
                     * @return DeleteMode 删除后下游任务的处理方式，true:下游任务均正常运行 false:下游任务均运行失败
                     * 
                     */
                    bool GetDeleteMode() const;

                    /**
                     * 设置删除后下游任务的处理方式，true:下游任务均正常运行 false:下游任务均运行失败
                     * @param _deleteMode 删除后下游任务的处理方式，true:下游任务均正常运行 false:下游任务均运行失败
                     * 
                     */
                    void SetDeleteMode(const bool& _deleteMode);

                    /**
                     * 判断参数 DeleteMode 是否已赋值
                     * @return DeleteMode 是否已赋值
                     * 
                     */
                    bool DeleteModeHasBeenSet() const;

                    /**
                     * 获取删除任务后是否通知下游任务责任人, true:通知 false:不通知
                     * @return EnableNotify 删除任务后是否通知下游任务责任人, true:通知 false:不通知
                     * 
                     */
                    bool GetEnableNotify() const;

                    /**
                     * 设置删除任务后是否通知下游任务责任人, true:通知 false:不通知
                     * @param _enableNotify 删除任务后是否通知下游任务责任人, true:通知 false:不通知
                     * 
                     */
                    void SetEnableNotify(const bool& _enableNotify);

                    /**
                     * 判断参数 EnableNotify 是否已赋值
                     * @return EnableNotify 是否已赋值
                     * 
                     */
                    bool EnableNotifyHasBeenSet() const;

                private:

                    /**
                     * 工作流id
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 删除后下游任务的处理方式，true:下游任务均正常运行 false:下游任务均运行失败
                     */
                    bool m_deleteMode;
                    bool m_deleteModeHasBeenSet;

                    /**
                     * 删除任务后是否通知下游任务责任人, true:通知 false:不通知
                     */
                    bool m_enableNotify;
                    bool m_enableNotifyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DELETEWORKFLOWBYIDREQUEST_H_
