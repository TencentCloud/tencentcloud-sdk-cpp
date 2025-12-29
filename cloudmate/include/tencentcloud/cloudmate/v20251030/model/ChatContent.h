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

#ifndef TENCENTCLOUD_CLOUDMATE_V20251030_MODEL_CHATCONTENT_H_
#define TENCENTCLOUD_CLOUDMATE_V20251030_MODEL_CHATCONTENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cloudmate/v20251030/model/ChatEventContentPart.h>


namespace TencentCloud
{
    namespace Cloudmate
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * 智能诊断结果内容结构
                */
                class ChatContent : public AbstractModel
                {
                public:
                    ChatContent();
                    ~ChatContent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取角色，可选值：
 - user
 - model_thinking
 - model_output
 - knowledge
                     * @return Role 角色，可选值：
 - user
 - model_thinking
 - model_output
 - knowledge
                     * 
                     */
                    std::string GetRole() const;

                    /**
                     * 设置角色，可选值：
 - user
 - model_thinking
 - model_output
 - knowledge
                     * @param _role 角色，可选值：
 - user
 - model_thinking
 - model_output
 - knowledge
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
                     * 获取内容分片
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Parts 内容分片
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ChatEventContentPart> GetParts() const;

                    /**
                     * 设置内容分片
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _parts 内容分片
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParts(const std::vector<ChatEventContentPart>& _parts);

                    /**
                     * 判断参数 Parts 是否已赋值
                     * @return Parts 是否已赋值
                     * 
                     */
                    bool PartsHasBeenSet() const;

                private:

                    /**
                     * 角色，可选值：
 - user
 - model_thinking
 - model_output
 - knowledge
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * 内容分片
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ChatEventContentPart> m_parts;
                    bool m_partsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDMATE_V20251030_MODEL_CHATCONTENT_H_
