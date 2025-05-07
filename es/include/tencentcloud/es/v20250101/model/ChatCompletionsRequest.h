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

#ifndef TENCENTCLOUD_ES_V20250101_MODEL_CHATCOMPLETIONSREQUEST_H_
#define TENCENTCLOUD_ES_V20250101_MODEL_CHATCOMPLETIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/es/v20250101/model/Message.h>
#include <tencentcloud/es/v20250101/model/OnlineSearchOptions.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20250101
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
                     * 获取会话内容，按对话时间从旧到新在数组中排列，长度受模型窗口大小限制。
                     * @return Messages 会话内容，按对话时间从旧到新在数组中排列，长度受模型窗口大小限制。
                     * 
                     */
                    std::vector<Message> GetMessages() const;

                    /**
                     * 设置会话内容，按对话时间从旧到新在数组中排列，长度受模型窗口大小限制。
                     * @param _messages 会话内容，按对话时间从旧到新在数组中排列，长度受模型窗口大小限制。
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
                     * 获取模型名称，可选模型列表：hunyuan-turbo，hunyuan-large，hunyuan-large-longcontext，hunyuan-standard，hunyuan-standard-256K，deepseek-r1，deepseek-v3，deepseek-r1-distill-qwen-32b。
                     * @return ModelName 模型名称，可选模型列表：hunyuan-turbo，hunyuan-large，hunyuan-large-longcontext，hunyuan-standard，hunyuan-standard-256K，deepseek-r1，deepseek-v3，deepseek-r1-distill-qwen-32b。
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置模型名称，可选模型列表：hunyuan-turbo，hunyuan-large，hunyuan-large-longcontext，hunyuan-standard，hunyuan-standard-256K，deepseek-r1，deepseek-v3，deepseek-r1-distill-qwen-32b。
                     * @param _modelName 模型名称，可选模型列表：hunyuan-turbo，hunyuan-large，hunyuan-large-longcontext，hunyuan-standard，hunyuan-standard-256K，deepseek-r1，deepseek-v3，deepseek-r1-distill-qwen-32b。
                     * 
                     */
                    void SetModelName(const std::string& _modelName);

                    /**
                     * 判断参数 ModelName 是否已赋值
                     * @return ModelName 是否已赋值
                     * 
                     */
                    bool ModelNameHasBeenSet() const;

                    /**
                     * 获取是否以流式接口的形式返回数据，默认true。
                     * @return Stream 是否以流式接口的形式返回数据，默认true。
                     * 
                     */
                    bool GetStream() const;

                    /**
                     * 设置是否以流式接口的形式返回数据，默认true。
                     * @param _stream 是否以流式接口的形式返回数据，默认true。
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
                     * 获取取值区间为[0.0, 1.0], 非必要不建议使用, 不合理的取值会影响效果 。
                     * @return TopP 取值区间为[0.0, 1.0], 非必要不建议使用, 不合理的取值会影响效果 。
                     * 
                     */
                    double GetTopP() const;

                    /**
                     * 设置取值区间为[0.0, 1.0], 非必要不建议使用, 不合理的取值会影响效果 。
                     * @param _topP 取值区间为[0.0, 1.0], 非必要不建议使用, 不合理的取值会影响效果 。
                     * 
                     */
                    void SetTopP(const double& _topP);

                    /**
                     * 判断参数 TopP 是否已赋值
                     * @return TopP 是否已赋值
                     * 
                     */
                    bool TopPHasBeenSet() const;

                    /**
                     * 获取取值区间为[0.0, 2.0], 非必要不建议使用, 不合理的取值会影响效果 。
                     * @return Temperature 取值区间为[0.0, 2.0], 非必要不建议使用, 不合理的取值会影响效果 。
                     * 
                     */
                    double GetTemperature() const;

                    /**
                     * 设置取值区间为[0.0, 2.0], 非必要不建议使用, 不合理的取值会影响效果 。
                     * @param _temperature 取值区间为[0.0, 2.0], 非必要不建议使用, 不合理的取值会影响效果 。
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
                     * 获取是否开启联网搜索。默认为 false。
                     * @return OnlineSearch 是否开启联网搜索。默认为 false。
                     * 
                     */
                    bool GetOnlineSearch() const;

                    /**
                     * 设置是否开启联网搜索。默认为 false。
                     * @param _onlineSearch 是否开启联网搜索。默认为 false。
                     * 
                     */
                    void SetOnlineSearch(const bool& _onlineSearch);

                    /**
                     * 判断参数 OnlineSearch 是否已赋值
                     * @return OnlineSearch 是否已赋值
                     * 
                     */
                    bool OnlineSearchHasBeenSet() const;

                    /**
                     * 获取当 OnlineSearch 为 true 时，指定的搜索引擎，默认为 bing。
                     * @return OnlineSearchOptions 当 OnlineSearch 为 true 时，指定的搜索引擎，默认为 bing。
                     * 
                     */
                    OnlineSearchOptions GetOnlineSearchOptions() const;

                    /**
                     * 设置当 OnlineSearch 为 true 时，指定的搜索引擎，默认为 bing。
                     * @param _onlineSearchOptions 当 OnlineSearch 为 true 时，指定的搜索引擎，默认为 bing。
                     * 
                     */
                    void SetOnlineSearchOptions(const OnlineSearchOptions& _onlineSearchOptions);

                    /**
                     * 判断参数 OnlineSearchOptions 是否已赋值
                     * @return OnlineSearchOptions 是否已赋值
                     * 
                     */
                    bool OnlineSearchOptionsHasBeenSet() const;

                private:

                    /**
                     * 会话内容，按对话时间从旧到新在数组中排列，长度受模型窗口大小限制。
                     */
                    std::vector<Message> m_messages;
                    bool m_messagesHasBeenSet;

                    /**
                     * 模型名称，可选模型列表：hunyuan-turbo，hunyuan-large，hunyuan-large-longcontext，hunyuan-standard，hunyuan-standard-256K，deepseek-r1，deepseek-v3，deepseek-r1-distill-qwen-32b。
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * 是否以流式接口的形式返回数据，默认true。
                     */
                    bool m_stream;
                    bool m_streamHasBeenSet;

                    /**
                     * 取值区间为[0.0, 1.0], 非必要不建议使用, 不合理的取值会影响效果 。
                     */
                    double m_topP;
                    bool m_topPHasBeenSet;

                    /**
                     * 取值区间为[0.0, 2.0], 非必要不建议使用, 不合理的取值会影响效果 。
                     */
                    double m_temperature;
                    bool m_temperatureHasBeenSet;

                    /**
                     * 是否开启联网搜索。默认为 false。
                     */
                    bool m_onlineSearch;
                    bool m_onlineSearchHasBeenSet;

                    /**
                     * 当 OnlineSearch 为 true 时，指定的搜索引擎，默认为 bing。
                     */
                    OnlineSearchOptions m_onlineSearchOptions;
                    bool m_onlineSearchOptionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20250101_MODEL_CHATCOMPLETIONSREQUEST_H_
