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

#ifndef TENCENTCLOUD_LKEAP_V20240522_MODEL_CHATCOMPLETIONSREQUEST_H_
#define TENCENTCLOUD_LKEAP_V20240522_MODEL_CHATCOMPLETIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lkeap/v20240522/model/Message.h>


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
                     * 获取最大生成的token数量，默认为4096，最大可设置为16384
                     * @return MaxTokens 最大生成的token数量，默认为4096，最大可设置为16384
                     * 
                     */
                    int64_t GetMaxTokens() const;

                    /**
                     * 设置最大生成的token数量，默认为4096，最大可设置为16384
                     * @param _maxTokens 最大生成的token数量，默认为4096，最大可设置为16384
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
                     * 最大生成的token数量，默认为4096，最大可设置为16384
                     */
                    int64_t m_maxTokens;
                    bool m_maxTokensHasBeenSet;

                    /**
                     * 是否启用联网搜索
                     */
                    bool m_enableSearch;
                    bool m_enableSearchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKEAP_V20240522_MODEL_CHATCOMPLETIONSREQUEST_H_
