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

#ifndef TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_MODIFYAGENTREQUEST_H_
#define TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_MODIFYAGENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Workbuddyenterprise
    {
        namespace V20260709
        {
            namespace Model
            {
                /**
                * ModifyAgent请求参数结构体
                */
                class ModifyAgentRequest : public AbstractModel
                {
                public:
                    ModifyAgentRequest();
                    ~ModifyAgentRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Agent 业务 ID
                     * @return AgentId Agent 业务 ID
                     * 
                     */
                    std::string GetAgentId() const;

                    /**
                     * 设置Agent 业务 ID
                     * @param _agentId Agent 业务 ID
                     * 
                     */
                    void SetAgentId(const std::string& _agentId);

                    /**
                     * 判断参数 AgentId 是否已赋值
                     * @return AgentId 是否已赋值
                     * 
                     */
                    bool AgentIdHasBeenSet() const;

                    /**
                     * 获取Agent 名称（可选，仅传递需要更新的字段）
                     * @return AgentName Agent 名称（可选，仅传递需要更新的字段）
                     * 
                     */
                    std::string GetAgentName() const;

                    /**
                     * 设置Agent 名称（可选，仅传递需要更新的字段）
                     * @param _agentName Agent 名称（可选，仅传递需要更新的字段）
                     * 
                     */
                    void SetAgentName(const std::string& _agentName);

                    /**
                     * 判断参数 AgentName 是否已赋值
                     * @return AgentName 是否已赋值
                     * 
                     */
                    bool AgentNameHasBeenSet() const;

                    /**
                     * 获取Agent 描述（可选）
                     * @return Description Agent 描述（可选）
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Agent 描述（可选）
                     * @param _description Agent 描述（可选）
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
                     * 获取头像 URL（可选）
                     * @return AvatarUrl 头像 URL（可选）
                     * 
                     */
                    std::string GetAvatarUrl() const;

                    /**
                     * 设置头像 URL（可选）
                     * @param _avatarUrl 头像 URL（可选）
                     * 
                     */
                    void SetAvatarUrl(const std::string& _avatarUrl);

                    /**
                     * 判断参数 AvatarUrl 是否已赋值
                     * @return AvatarUrl 是否已赋值
                     * 
                     */
                    bool AvatarUrlHasBeenSet() const;

                private:

                    /**
                     * Agent 业务 ID
                     */
                    std::string m_agentId;
                    bool m_agentIdHasBeenSet;

                    /**
                     * Agent 名称（可选，仅传递需要更新的字段）
                     */
                    std::string m_agentName;
                    bool m_agentNameHasBeenSet;

                    /**
                     * Agent 描述（可选）
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 头像 URL（可选）
                     */
                    std::string m_avatarUrl;
                    bool m_avatarUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_MODIFYAGENTREQUEST_H_
