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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DELETECLOUDBASEPROJECTLATESTVERSIONREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DELETECLOUDBASEPROJECTLATESTVERSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * DeleteCloudBaseProjectLatestVersion请求参数结构体
                */
                class DeleteCloudBaseProjectLatestVersionRequest : public AbstractModel
                {
                public:
                    DeleteCloudBaseProjectLatestVersionRequest();
                    ~DeleteCloudBaseProjectLatestVersionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取环境id
                     * @return EnvId 环境id
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置环境id
                     * @param _envId 环境id
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取项目名
                     * @return ProjectName 项目名
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置项目名
                     * @param _projectName 项目名
                     * 
                     */
                    void SetProjectName(const std::string& _projectName);

                    /**
                     * 判断参数 ProjectName 是否已赋值
                     * @return ProjectName 是否已赋值
                     * 
                     */
                    bool ProjectNameHasBeenSet() const;

                    /**
                     * 获取是否保留资源
                     * @return KeepResource 是否保留资源
                     * 
                     */
                    bool GetKeepResource() const;

                    /**
                     * 设置是否保留资源
                     * @param _keepResource 是否保留资源
                     * 
                     */
                    void SetKeepResource(const bool& _keepResource);

                    /**
                     * 判断参数 KeepResource 是否已赋值
                     * @return KeepResource 是否已赋值
                     * 
                     */
                    bool KeepResourceHasBeenSet() const;

                private:

                    /**
                     * 环境id
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * 项目名
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * 是否保留资源
                     */
                    bool m_keepResource;
                    bool m_keepResourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DELETECLOUDBASEPROJECTLATESTVERSIONREQUEST_H_
