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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_CREATEENVIRONMENTREQUEST_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_CREATEENVIRONMENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/pts/v20210728/model/EnvVar.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * CreateEnvironment请求参数结构体
                */
                class CreateEnvironmentRequest : public AbstractModel
                {
                public:
                    CreateEnvironmentRequest();
                    ~CreateEnvironmentRequest() = default;
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
                     * 获取环境名
                     * @return Name 环境名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置环境名
                     * @param _name 环境名
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取环境变量
                     * @return EnvVars 环境变量
                     * 
                     */
                    std::vector<EnvVar> GetEnvVars() const;

                    /**
                     * 设置环境变量
                     * @param _envVars 环境变量
                     * 
                     */
                    void SetEnvVars(const std::vector<EnvVar>& _envVars);

                    /**
                     * 判断参数 EnvVars 是否已赋值
                     * @return EnvVars 是否已赋值
                     * 
                     */
                    bool EnvVarsHasBeenSet() const;

                    /**
                     * 获取环境描述
                     * @return Description 环境描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置环境描述
                     * @param _description 环境描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 环境名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 环境变量
                     */
                    std::vector<EnvVar> m_envVars;
                    bool m_envVarsHasBeenSet;

                    /**
                     * 环境描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_CREATEENVIRONMENTREQUEST_H_
