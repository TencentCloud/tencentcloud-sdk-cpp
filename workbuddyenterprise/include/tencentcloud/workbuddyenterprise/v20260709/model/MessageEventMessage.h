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

#ifndef TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_MESSAGEEVENTMESSAGE_H_
#define TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_MESSAGEEVENTMESSAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/workbuddyenterprise/v20260709/model/TokenUsage.h>


namespace TencentCloud
{
    namespace Workbuddyenterprise
    {
        namespace V20260709
        {
            namespace Model
            {
                /**
                * 消息内容
                */
                class MessageEventMessage : public AbstractModel
                {
                public:
                    MessageEventMessage();
                    ~MessageEventMessage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>文本内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Content <p>文本内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置<p>文本内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _content <p>文本内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取<p>Token用量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TokenUsage <p>Token用量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TokenUsage GetTokenUsage() const;

                    /**
                     * 设置<p>Token用量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tokenUsage <p>Token用量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTokenUsage(const TokenUsage& _tokenUsage);

                    /**
                     * 判断参数 TokenUsage 是否已赋值
                     * @return TokenUsage 是否已赋值
                     * 
                     */
                    bool TokenUsageHasBeenSet() const;

                private:

                    /**
                     * <p>文本内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * <p>Token用量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TokenUsage m_tokenUsage;
                    bool m_tokenUsageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_MESSAGEEVENTMESSAGE_H_
