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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_UPDATEWORKFLOWOWNERREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_UPDATEWORKFLOWOWNERREQUEST_H_

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
                * UpdateWorkflowOwner请求参数结构体
                */
                class UpdateWorkflowOwnerRequest : public AbstractModel
                {
                public:
                    UpdateWorkflowOwnerRequest();
                    ~UpdateWorkflowOwnerRequest() = default;
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
                     * 获取工作流Ids
                     * @return WorkflowIds 工作流Ids
                     * 
                     */
                    std::vector<std::string> GetWorkflowIds() const;

                    /**
                     * 设置工作流Ids
                     * @param _workflowIds 工作流Ids
                     * 
                     */
                    void SetWorkflowIds(const std::vector<std::string>& _workflowIds);

                    /**
                     * 判断参数 WorkflowIds 是否已赋值
                     * @return WorkflowIds 是否已赋值
                     * 
                     */
                    bool WorkflowIdsHasBeenSet() const;

                    /**
                     * 获取责任人，多个以';'号分割
                     * @return Owner 责任人，多个以';'号分割
                     * 
                     */
                    std::string GetOwner() const;

                    /**
                     * 设置责任人，多个以';'号分割
                     * @param _owner 责任人，多个以';'号分割
                     * 
                     */
                    void SetOwner(const std::string& _owner);

                    /**
                     * 判断参数 Owner 是否已赋值
                     * @return Owner 是否已赋值
                     * 
                     */
                    bool OwnerHasBeenSet() const;

                    /**
                     * 获取责任人UserId，多个以';'号分割
                     * @return OwnerId 责任人UserId，多个以';'号分割
                     * 
                     */
                    std::string GetOwnerId() const;

                    /**
                     * 设置责任人UserId，多个以';'号分割
                     * @param _ownerId 责任人UserId，多个以';'号分割
                     * 
                     */
                    void SetOwnerId(const std::string& _ownerId);

                    /**
                     * 判断参数 OwnerId 是否已赋值
                     * @return OwnerId 是否已赋值
                     * 
                     */
                    bool OwnerIdHasBeenSet() const;

                private:

                    /**
                     * 项目Id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 工作流Ids
                     */
                    std::vector<std::string> m_workflowIds;
                    bool m_workflowIdsHasBeenSet;

                    /**
                     * 责任人，多个以';'号分割
                     */
                    std::string m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * 责任人UserId，多个以';'号分割
                     */
                    std::string m_ownerId;
                    bool m_ownerIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_UPDATEWORKFLOWOWNERREQUEST_H_
