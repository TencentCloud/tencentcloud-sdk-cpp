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

#ifndef TENCENTCLOUD_TDAI_V20250717_MODEL_CHATDETAIL_H_
#define TENCENTCLOUD_TDAI_V20250717_MODEL_CHATDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdai/v20250717/model/CreateChatCompletionRes.h>


namespace TencentCloud
{
    namespace Tdai
    {
        namespace V20250717
        {
            namespace Model
            {
                /**
                * 会话详情
                */
                class ChatDetail : public AbstractModel
                {
                public:
                    ChatDetail();
                    ~ChatDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取角色
                     * @return Role 角色
                     * 
                     */
                    std::string GetRole() const;

                    /**
                     * 设置角色
                     * @param _role 角色
                     * 
                     */
                    void SetRole(const std::string& _role);

                    /**
                     * 判断参数 Role 是否已赋值
                     * @return Role 是否已赋值
                     * 
                     */
                    bool RoleHasBeenSet() const;

                    /**
                     * 获取用户消息
                     * @return UserMessage 用户消息
                     * 
                     */
                    std::string GetUserMessage() const;

                    /**
                     * 设置用户消息
                     * @param _userMessage 用户消息
                     * 
                     */
                    void SetUserMessage(const std::string& _userMessage);

                    /**
                     * 判断参数 UserMessage 是否已赋值
                     * @return UserMessage 是否已赋值
                     * 
                     */
                    bool UserMessageHasBeenSet() const;

                    /**
                     * 获取助手消息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssistantMessage 助手消息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<CreateChatCompletionRes> GetAssistantMessage() const;

                    /**
                     * 设置助手消息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _assistantMessage 助手消息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAssistantMessage(const std::vector<CreateChatCompletionRes>& _assistantMessage);

                    /**
                     * 判断参数 AssistantMessage 是否已赋值
                     * @return AssistantMessage 是否已赋值
                     * 
                     */
                    bool AssistantMessageHasBeenSet() const;

                private:

                    /**
                     * 角色
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * 用户消息
                     */
                    std::string m_userMessage;
                    bool m_userMessageHasBeenSet;

                    /**
                     * 助手消息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CreateChatCompletionRes> m_assistantMessage;
                    bool m_assistantMessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDAI_V20250717_MODEL_CHATDETAIL_H_
