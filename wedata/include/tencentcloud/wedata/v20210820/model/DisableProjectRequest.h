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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DISABLEPROJECTREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DISABLEPROJECTREQUEST_H_

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
                * DisableProject请求参数结构体
                */
                class DisableProjectRequest : public AbstractModel
                {
                public:
                    DisableProjectRequest();
                    ~DisableProjectRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取模块名称
                     * @return ModuleKey 模块名称
                     * 
                     */
                    std::string GetModuleKey() const;

                    /**
                     * 设置模块名称
                     * @param _moduleKey 模块名称
                     * 
                     */
                    void SetModuleKey(const std::string& _moduleKey);

                    /**
                     * 判断参数 ModuleKey 是否已赋值
                     * @return ModuleKey 是否已赋值
                     * 
                     */
                    bool ModuleKeyHasBeenSet() const;

                private:

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 模块名称
                     */
                    std::string m_moduleKey;
                    bool m_moduleKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DISABLEPROJECTREQUEST_H_
