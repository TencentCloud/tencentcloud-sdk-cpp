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
                     * 获取此次请求的id
                     * @return Id 此次请求的id
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
                     * 获取回复内容
                     * @return Choices 回复内容
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
                     * 获取token使用量
                     * @return Usage token使用量
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
                     * 获取联网搜索结果。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OnlineSearchContent 联网搜索结果。
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
                     * 此次请求的id
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 回复内容
                     */
                    std::vector<Choice> m_choices;
                    bool m_choicesHasBeenSet;

                    /**
                     * token使用量
                     */
                    TokenUsage m_usage;
                    bool m_usageHasBeenSet;

                    /**
                     * 联网搜索结果。
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
