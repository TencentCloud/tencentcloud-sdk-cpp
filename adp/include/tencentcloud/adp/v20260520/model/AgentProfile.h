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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_AGENTPROFILE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_AGENTPROFILE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Agent 基本配置
                */
                class AgentProfile : public AbstractModel
                {
                public:
                    AgentProfile();
                    ~AgentProfile() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Agent名称</p>
                     * @return Name <p>Agent名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Agent名称</p>
                     * @param _name <p>Agent名称</p>
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
                     * 获取<p>图标URL</p>
                     * @return IconUrl <p>图标URL</p>
                     * 
                     */
                    std::string GetIconUrl() const;

                    /**
                     * 设置<p>图标URL</p>
                     * @param _iconUrl <p>图标URL</p>
                     * 
                     */
                    void SetIconUrl(const std::string& _iconUrl);

                    /**
                     * 判断参数 IconUrl 是否已赋值
                     * @return IconUrl 是否已赋值
                     * 
                     */
                    bool IconUrlHasBeenSet() const;

                    /**
                     * 获取<p>Agent 角色：0=主 / 1=子</p>
                     * @return Role <p>Agent 角色：0=主 / 1=子</p>
                     * 
                     */
                    int64_t GetRole() const;

                    /**
                     * 设置<p>Agent 角色：0=主 / 1=子</p>
                     * @param _role <p>Agent 角色：0=主 / 1=子</p>
                     * 
                     */
                    void SetRole(const int64_t& _role);

                    /**
                     * 判断参数 Role 是否已赋值
                     * @return Role 是否已赋值
                     * 
                     */
                    bool RoleHasBeenSet() const;

                    /**
                     * 获取<p>Agent 描述</p>
                     * @return Description <p>Agent 描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Agent 描述</p>
                     * @param _description <p>Agent 描述</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>应用名称</p>
                     * @return AppName <p>应用名称</p>
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置<p>应用名称</p>
                     * @param _appName <p>应用名称</p>
                     * 
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     * 
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取<p>开发者</p>
                     * @return Developer <p>开发者</p>
                     * 
                     */
                    std::string GetDeveloper() const;

                    /**
                     * 设置<p>开发者</p>
                     * @param _developer <p>开发者</p>
                     * 
                     */
                    void SetDeveloper(const std::string& _developer);

                    /**
                     * 判断参数 Developer 是否已赋值
                     * @return Developer 是否已赋值
                     * 
                     */
                    bool DeveloperHasBeenSet() const;

                    /**
                     * 获取<p>主AgentId，只读，不可通过修改接口进行变更</p>
                     * @return ParentAgentId <p>主AgentId，只读，不可通过修改接口进行变更</p>
                     * 
                     */
                    std::string GetParentAgentId() const;

                    /**
                     * 设置<p>主AgentId，只读，不可通过修改接口进行变更</p>
                     * @param _parentAgentId <p>主AgentId，只读，不可通过修改接口进行变更</p>
                     * 
                     */
                    void SetParentAgentId(const std::string& _parentAgentId);

                    /**
                     * 判断参数 ParentAgentId 是否已赋值
                     * @return ParentAgentId 是否已赋值
                     * 
                     */
                    bool ParentAgentIdHasBeenSet() const;

                private:

                    /**
                     * <p>Agent名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>图标URL</p>
                     */
                    std::string m_iconUrl;
                    bool m_iconUrlHasBeenSet;

                    /**
                     * <p>Agent 角色：0=主 / 1=子</p>
                     */
                    int64_t m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * <p>Agent 描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>应用名称</p>
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * <p>开发者</p>
                     */
                    std::string m_developer;
                    bool m_developerHasBeenSet;

                    /**
                     * <p>主AgentId，只读，不可通过修改接口进行变更</p>
                     */
                    std::string m_parentAgentId;
                    bool m_parentAgentIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_AGENTPROFILE_H_
