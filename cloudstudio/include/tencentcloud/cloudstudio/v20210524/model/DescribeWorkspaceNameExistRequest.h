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

#ifndef TENCENTCLOUD_CLOUDSTUDIO_V20210524_MODEL_DESCRIBEWORKSPACENAMEEXISTREQUEST_H_
#define TENCENTCLOUD_CLOUDSTUDIO_V20210524_MODEL_DESCRIBEWORKSPACENAMEEXISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cloudstudio
    {
        namespace V20210524
        {
            namespace Model
            {
                /**
                * DescribeWorkspaceNameExist请求参数结构体
                */
                class DescribeWorkspaceNameExistRequest : public AbstractModel
                {
                public:
                    DescribeWorkspaceNameExistRequest();
                    ~DescribeWorkspaceNameExistRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取用户所属组
                     * @return CloudStudioSessionTeam 用户所属组
                     */
                    std::string GetCloudStudioSessionTeam() const;

                    /**
                     * 设置用户所属组
                     * @param CloudStudioSessionTeam 用户所属组
                     */
                    void SetCloudStudioSessionTeam(const std::string& _cloudStudioSessionTeam);

                    /**
                     * 判断参数 CloudStudioSessionTeam 是否已赋值
                     * @return CloudStudioSessionTeam 是否已赋值
                     */
                    bool CloudStudioSessionTeamHasBeenSet() const;

                    /**
                     * 获取工作空间名称
                     * @return Name 工作空间名称
                     */
                    std::string GetName() const;

                    /**
                     * 设置工作空间名称
                     * @param Name 工作空间名称
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取工作空间ID
                     * @return WorkspaceId 工作空间ID
                     */
                    std::string GetWorkspaceId() const;

                    /**
                     * 设置工作空间ID
                     * @param WorkspaceId 工作空间ID
                     */
                    void SetWorkspaceId(const std::string& _workspaceId);

                    /**
                     * 判断参数 WorkspaceId 是否已赋值
                     * @return WorkspaceId 是否已赋值
                     */
                    bool WorkspaceIdHasBeenSet() const;

                private:

                    /**
                     * 用户所属组
                     */
                    std::string m_cloudStudioSessionTeam;
                    bool m_cloudStudioSessionTeamHasBeenSet;

                    /**
                     * 工作空间名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 工作空间ID
                     */
                    std::string m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDSTUDIO_V20210524_MODEL_DESCRIBEWORKSPACENAMEEXISTREQUEST_H_
