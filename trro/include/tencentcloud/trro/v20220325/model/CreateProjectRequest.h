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

#ifndef TENCENTCLOUD_TRRO_V20220325_MODEL_CREATEPROJECTREQUEST_H_
#define TENCENTCLOUD_TRRO_V20220325_MODEL_CREATEPROJECTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trro
    {
        namespace V20220325
        {
            namespace Model
            {
                /**
                * CreateProject请求参数结构体
                */
                class CreateProjectRequest : public AbstractModel
                {
                public:
                    CreateProjectRequest();
                    ~CreateProjectRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目名称，长度不超过24个字符
                     * @return ProjectName 项目名称，长度不超过24个字符
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置项目名称，长度不超过24个字符
                     * @param _projectName 项目名称，长度不超过24个字符
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
                     * 获取项目描述，长度不超过120个字符，不填默认为空
                     * @return ProjectDescription 项目描述，长度不超过120个字符，不填默认为空
                     * 
                     */
                    std::string GetProjectDescription() const;

                    /**
                     * 设置项目描述，长度不超过120个字符，不填默认为空
                     * @param _projectDescription 项目描述，长度不超过120个字符，不填默认为空
                     * 
                     */
                    void SetProjectDescription(const std::string& _projectDescription);

                    /**
                     * 判断参数 ProjectDescription 是否已赋值
                     * @return ProjectDescription 是否已赋值
                     * 
                     */
                    bool ProjectDescriptionHasBeenSet() const;

                    /**
                     * 获取权限模式，black为黑名单，white为白名单，不填默认为black
                     * @return PolicyMode 权限模式，black为黑名单，white为白名单，不填默认为black
                     * 
                     */
                    std::string GetPolicyMode() const;

                    /**
                     * 设置权限模式，black为黑名单，white为白名单，不填默认为black
                     * @param _policyMode 权限模式，black为黑名单，white为白名单，不填默认为black
                     * 
                     */
                    void SetPolicyMode(const std::string& _policyMode);

                    /**
                     * 判断参数 PolicyMode 是否已赋值
                     * @return PolicyMode 是否已赋值
                     * 
                     */
                    bool PolicyModeHasBeenSet() const;

                private:

                    /**
                     * 项目名称，长度不超过24个字符
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * 项目描述，长度不超过120个字符，不填默认为空
                     */
                    std::string m_projectDescription;
                    bool m_projectDescriptionHasBeenSet;

                    /**
                     * 权限模式，black为黑名单，white为白名单，不填默认为black
                     */
                    std::string m_policyMode;
                    bool m_policyModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRRO_V20220325_MODEL_CREATEPROJECTREQUEST_H_
