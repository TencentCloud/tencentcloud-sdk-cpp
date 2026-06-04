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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_APPEXPERIENCECONFIG_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_APPEXPERIENCECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/AppAdvancedConf.h>
#include <tencentcloud/adp/v20260520/model/ConversationExperience.h>
#include <tencentcloud/adp/v20260520/model/RoleConfig.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 体验配置
                */
                class AppExperienceConfig : public AbstractModel
                {
                public:
                    AppExperienceConfig();
                    ~AppExperienceConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取高级配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Advanced 高级配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AppAdvancedConf GetAdvanced() const;

                    /**
                     * 设置高级配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _advanced 高级配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAdvanced(const AppAdvancedConf& _advanced);

                    /**
                     * 判断参数 Advanced 是否已赋值
                     * @return Advanced 是否已赋值
                     * 
                     */
                    bool AdvancedHasBeenSet() const;

                    /**
                     * 获取对话体验配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Conversation 对话体验配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ConversationExperience GetConversation() const;

                    /**
                     * 设置对话体验配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _conversation 对话体验配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConversation(const ConversationExperience& _conversation);

                    /**
                     * 判断参数 Conversation 是否已赋值
                     * @return Conversation 是否已赋值
                     * 
                     */
                    bool ConversationHasBeenSet() const;

                    /**
                     * 获取角色配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Role 角色配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    RoleConfig GetRole() const;

                    /**
                     * 设置角色配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _role 角色配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRole(const RoleConfig& _role);

                    /**
                     * 判断参数 Role 是否已赋值
                     * @return Role 是否已赋值
                     * 
                     */
                    bool RoleHasBeenSet() const;

                private:

                    /**
                     * 高级配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AppAdvancedConf m_advanced;
                    bool m_advancedHasBeenSet;

                    /**
                     * 对话体验配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ConversationExperience m_conversation;
                    bool m_conversationHasBeenSet;

                    /**
                     * 角色配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RoleConfig m_role;
                    bool m_roleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_APPEXPERIENCECONFIG_H_
