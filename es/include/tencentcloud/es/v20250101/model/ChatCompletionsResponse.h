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

#ifndef TENCENTCLOUD_ES_V20250101_MODEL_CHATCOMPLETIONSRESPONSE_H_
#define TENCENTCLOUD_ES_V20250101_MODEL_CHATCOMPLETIONSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/es/v20250101/model/Choice.h>
#include <tencentcloud/es/v20250101/model/TokenUsage.h>
#include <tencentcloud/es/v20250101/model/WebContent.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20250101
        {
            namespace Model
            {
                /**
                * ChatCompletions返回参数结构体
                */
                class ChatCompletionsResponse : public AbstractModel
                {
                public:
                    ChatCompletionsResponse();
                    ~ChatCompletionsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>此次请求的id</p>
                     * @return Id <p>此次请求的id</p>
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>回复内容</p>
                     * @return Choices <p>回复内容</p>
                     * 
                     */
                    std::vector<Choice> GetChoices() const;

                    /**
                     * 判断参数 Choices 是否已赋值
                     * @return Choices 是否已赋值
                     * 
                     */
                    bool ChoicesHasBeenSet() const;

                    /**
                     * 获取<p>token使用量</p>
                     * @return Usage <p>token使用量</p>
                     * 
                     */
                    TokenUsage GetUsage() const;

                    /**
                     * 判断参数 Usage 是否已赋值
                     * @return Usage 是否已赋值
                     * 
                     */
                    bool UsageHasBeenSet() const;

                    /**
                     * 获取<p>联网搜索结果。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OnlineSearchContent <p>联网搜索结果。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<WebContent> GetOnlineSearchContent() const;

                    /**
                     * 判断参数 OnlineSearchContent 是否已赋值
                     * @return OnlineSearchContent 是否已赋值
                     * 
                     */
                    bool OnlineSearchContentHasBeenSet() const;

                private:

                    /**
                     * <p>此次请求的id</p>
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>回复内容</p>
                     */
                    std::vector<Choice> m_choices;
                    bool m_choicesHasBeenSet;

                    /**
                     * <p>token使用量</p>
                     */
                    TokenUsage m_usage;
                    bool m_usageHasBeenSet;

                    /**
                     * <p>联网搜索结果。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<WebContent> m_onlineSearchContent;
                    bool m_onlineSearchContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20250101_MODEL_CHATCOMPLETIONSRESPONSE_H_
