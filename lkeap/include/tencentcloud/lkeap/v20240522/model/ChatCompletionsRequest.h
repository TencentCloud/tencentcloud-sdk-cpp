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

#ifndef TENCENTCLOUD_LKEAP_V20240522_MODEL_CHATCOMPLETIONSREQUEST_H_
#define TENCENTCLOUD_LKEAP_V20240522_MODEL_CHATCOMPLETIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lkeap/v20240522/model/Message.h>
#include <tencentcloud/lkeap/v20240522/model/Thinking.h>


namespace TencentCloud
{
    namespace Lkeap
    {
        namespace V20240522
        {
            namespace Model
            {
                /**
                * ChatCompletions请求参数结构体
                */
                class ChatCompletionsRequest : public AbstractModel
                {
                public:
                    ChatCompletionsRequest();
                    ~ChatCompletionsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取模型名称
                     * @return Model 模型名称
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置模型名称
                     * @param _model 模型名称
                     * 
                     */
                    void SetModel(const std::string& _model);

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     * 
                     */
                    bool ModelHasBeenSet() const;

                    /**
                     * 获取聊天上下文信息。
说明：
1. 长度最多为 40，按对话时间从旧到新在数组中排列。
2. Message.Role 可选值：system、user、assistant。
其中，system 角色可选，如存在则必须位于列表的最开始。user 和 assistant 需交替出现，以 user 提问开始，user 提问结束，Content 不能为空。Role 的顺序示例：[system（可选） user assistant user assistant user ...]。

                     * @return Messages 聊天上下文信息。
说明：
1. 长度最多为 40，按对话时间从旧到新在数组中排列。
2. Message.Role 可选值：system、user、assistant。
其中，system 角色可选，如存在则必须位于列表的最开始。user 和 assistant 需交替出现，以 user 提问开始，user 提问结束，Content 不能为空。Role 的顺序示例：[system（可选） user assistant user assistant user ...]。

                     * 
                     */
                    std::vector<Message> GetMessages() const;

                    /**
                     * 设置聊天上下文信息。
说明：
1. 长度最多为 40，按对话时间从旧到新在数组中排列。
2. Message.Role 可选值：system、user、assistant。
其中，system 角色可选，如存在则必须位于列表的最开始。user 和 assistant 需交替出现，以 user 提问开始，user 提问结束，Content 不能为空。Role 的顺序示例：[system（可选） user assistant user assistant user ...]。

                     * @param _messages 聊天上下文信息。
说明：
1. 长度最多为 40，按对话时间从旧到新在数组中排列。
2. Message.Role 可选值：system、user、assistant。
其中，system 角色可选，如存在则必须位于列表的最开始。user 和 assistant 需交替出现，以 user 提问开始，user 提问结束，Content 不能为空。Role 的顺序示例：[system（可选） user assistant user assistant user ...]。

                     * 
                     */
                    void SetMessages(const std::vector<Message>& _messages);

                    /**
                     * 判断参数 Messages 是否已赋值
                     * @return Messages 是否已赋值
                     * 
                     */
                    bool MessagesHasBeenSet() const;

                    /**
                     * 获取是否流式输出
                     * @return Stream 是否流式输出
                     * 
                     */
                    bool GetStream() const;

                    /**
                     * 设置是否流式输出
                     * @param _stream 是否流式输出
                     * 
                     */
                    void SetStream(const bool& _stream);

                    /**
                     * 判断参数 Stream 是否已赋值
                     * @return Stream 是否已赋值
                     * 
                     */
                    bool StreamHasBeenSet() const;

                    /**
                     * 获取控制生成的随机性，较高的值会产生更多样化的输出。
                     * @return Temperature 控制生成的随机性，较高的值会产生更多样化的输出。
                     * 
                     */
                    double GetTemperature() const;

                    /**
                     * 设置控制生成的随机性，较高的值会产生更多样化的输出。
                     * @param _temperature 控制生成的随机性，较高的值会产生更多样化的输出。
                     * 
                     */
                    void SetTemperature(const double& _temperature);

                    /**
                     * 判断参数 Temperature 是否已赋值
                     * @return Temperature 是否已赋值
                     * 
                     */
                    bool TemperatureHasBeenSet() const;

                    /**
                     * 获取模型最大输出长度（单位 token），不包含思维链内容。
默认为4096，取值范围：各个模型不同，参考各个模型最大输出长度（示例：4k，即4096）。
输出 token 的总长度受模型的上下文长度限制。
                     * @return MaxTokens 模型最大输出长度（单位 token），不包含思维链内容。
默认为4096，取值范围：各个模型不同，参考各个模型最大输出长度（示例：4k，即4096）。
输出 token 的总长度受模型的上下文长度限制。
                     * 
                     */
                    int64_t GetMaxTokens() const;

                    /**
                     * 设置模型最大输出长度（单位 token），不包含思维链内容。
默认为4096，取值范围：各个模型不同，参考各个模型最大输出长度（示例：4k，即4096）。
输出 token 的总长度受模型的上下文长度限制。
                     * @param _maxTokens 模型最大输出长度（单位 token），不包含思维链内容。
默认为4096，取值范围：各个模型不同，参考各个模型最大输出长度（示例：4k，即4096）。
输出 token 的总长度受模型的上下文长度限制。
                     * 
                     */
                    void SetMaxTokens(const int64_t& _maxTokens);

                    /**
                     * 判断参数 MaxTokens 是否已赋值
                     * @return MaxTokens 是否已赋值
                     * 
                     */
                    bool MaxTokensHasBeenSet() const;

                    /**
                     * 获取是否启用联网搜索
                     * @return EnableSearch 是否启用联网搜索
                     * 
                     */
                    bool GetEnableSearch() const;

                    /**
                     * 设置是否启用联网搜索
                     * @param _enableSearch 是否启用联网搜索
                     * 
                     */
                    void SetEnableSearch(const bool& _enableSearch);

                    /**
                     * 判断参数 EnableSearch 是否已赋值
                     * @return EnableSearch 是否已赋值
                     * 
                     */
                    bool EnableSearchHasBeenSet() const;

                    /**
                     * 获取思维链开关，本参数仅在deepseek v3.1时生效
                     * @return Thinking 思维链开关，本参数仅在deepseek v3.1时生效
                     * 
                     */
                    Thinking GetThinking() const;

                    /**
                     * 设置思维链开关，本参数仅在deepseek v3.1时生效
                     * @param _thinking 思维链开关，本参数仅在deepseek v3.1时生效
                     * 
                     */
                    void SetThinking(const Thinking& _thinking);

                    /**
                     * 判断参数 Thinking 是否已赋值
                     * @return Thinking 是否已赋值
                     * 
                     */
                    bool ThinkingHasBeenSet() const;

                private:

                    /**
                     * 模型名称
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * 聊天上下文信息。
说明：
1. 长度最多为 40，按对话时间从旧到新在数组中排列。
2. Message.Role 可选值：system、user、assistant。
其中，system 角色可选，如存在则必须位于列表的最开始。user 和 assistant 需交替出现，以 user 提问开始，user 提问结束，Content 不能为空。Role 的顺序示例：[system（可选） user assistant user assistant user ...]。

                     */
                    std::vector<Message> m_messages;
                    bool m_messagesHasBeenSet;

                    /**
                     * 是否流式输出
                     */
                    bool m_stream;
                    bool m_streamHasBeenSet;

                    /**
                     * 控制生成的随机性，较高的值会产生更多样化的输出。
                     */
                    double m_temperature;
                    bool m_temperatureHasBeenSet;

                    /**
                     * 模型最大输出长度（单位 token），不包含思维链内容。
默认为4096，取值范围：各个模型不同，参考各个模型最大输出长度（示例：4k，即4096）。
输出 token 的总长度受模型的上下文长度限制。
                     */
                    int64_t m_maxTokens;
                    bool m_maxTokensHasBeenSet;

                    /**
                     * 是否启用联网搜索
                     */
                    bool m_enableSearch;
                    bool m_enableSearchHasBeenSet;

                    /**
                     * 思维链开关，本参数仅在deepseek v3.1时生效
                     */
                    Thinking m_thinking;
                    bool m_thinkingHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKEAP_V20240522_MODEL_CHATCOMPLETIONSREQUEST_H_
