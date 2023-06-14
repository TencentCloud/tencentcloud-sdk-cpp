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

#ifndef TENCENTCLOUD_CLOUDSTUDIO_V20210524_MODEL_CREATEWORKSPACEBYVERSIONCONTROLREQUEST_H_
#define TENCENTCLOUD_CLOUDSTUDIO_V20210524_MODEL_CREATEWORKSPACEBYVERSIONCONTROLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cloudstudio/v20210524/model/WorkspaceDTO.h>


namespace TencentCloud
{
    namespace Cloudstudio
    {
        namespace V20210524
        {
            namespace Model
            {
                /**
                * CreateWorkspaceByVersionControl请求参数结构体
                */
                class CreateWorkspaceByVersionControlRequest : public AbstractModel
                {
                public:
                    CreateWorkspaceByVersionControlRequest();
                    ~CreateWorkspaceByVersionControlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取工作空间结构
                     * @return WorkspaceDTO 工作空间结构
                     * 
                     */
                    WorkspaceDTO GetWorkspaceDTO() const;

                    /**
                     * 设置工作空间结构
                     * @param _workspaceDTO 工作空间结构
                     * 
                     */
                    void SetWorkspaceDTO(const WorkspaceDTO& _workspaceDTO);

                    /**
                     * 判断参数 WorkspaceDTO 是否已赋值
                     * @return WorkspaceDTO 是否已赋值
                     * 
                     */
                    bool WorkspaceDTOHasBeenSet() const;

                    /**
                     * 获取用户所属组
                     * @return CloudStudioSessionTeam 用户所属组
                     * 
                     */
                    std::string GetCloudStudioSessionTeam() const;

                    /**
                     * 设置用户所属组
                     * @param _cloudStudioSessionTeam 用户所属组
                     * 
                     */
                    void SetCloudStudioSessionTeam(const std::string& _cloudStudioSessionTeam);

                    /**
                     * 判断参数 CloudStudioSessionTeam 是否已赋值
                     * @return CloudStudioSessionTeam 是否已赋值
                     * 
                     */
                    bool CloudStudioSessionTeamHasBeenSet() const;

                private:

                    /**
                     * 工作空间结构
                     */
                    WorkspaceDTO m_workspaceDTO;
                    bool m_workspaceDTOHasBeenSet;

                    /**
                     * 用户所属组
                     */
                    std::string m_cloudStudioSessionTeam;
                    bool m_cloudStudioSessionTeamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDSTUDIO_V20210524_MODEL_CREATEWORKSPACEBYVERSIONCONTROLREQUEST_H_
