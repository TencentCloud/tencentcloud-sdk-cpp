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

#ifndef TENCENTCLOUD_ES_V20250101_MODEL_CHATCOMPLETIONSREQUEST_H_
#define TENCENTCLOUD_ES_V20250101_MODEL_CHATCOMPLETIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/es/v20250101/model/Message.h>
#include <tencentcloud/es/v20250101/model/OnlineSearchOptions.h>
#include <tencentcloud/es/v20250101/model/Tool.h>


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
                     * 获取<p>会话内容，按对话时间从旧到新在数组中排列，长度受模型窗口大小限制。</p>
                     * @return Messages <p>会话内容，按对话时间从旧到新在数组中排列，长度受模型窗口大小限制。</p>
                     * 
                     */
                    std::vector<Message> GetMessages() const;

                    /**
                     * 设置<p>会话内容，按对话时间从旧到新在数组中排列，长度受模型窗口大小限制。</p>
                     * @param _messages <p>会话内容，按对话时间从旧到新在数组中排列，长度受模型窗口大小限制。</p>
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
                     * 获取<p>模型名称，可选模型列表：hunyuan-turbo，hunyuan-large，hunyuan-large-longcontext，hunyuan-standard，hunyuan-standard-256K，deepseek-r1，deepseek-v3，deepseek-r1-distill-qwen-32b。</p>
                     * @return ModelName <p>模型名称，可选模型列表：hunyuan-turbo，hunyuan-large，hunyuan-large-longcontext，hunyuan-standard，hunyuan-standard-256K，deepseek-r1，deepseek-v3，deepseek-r1-distill-qwen-32b。</p>
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置<p>模型名称，可选模型列表：hunyuan-turbo，hunyuan-large，hunyuan-large-longcontext，hunyuan-standard，hunyuan-standard-256K，deepseek-r1，deepseek-v3，deepseek-r1-distill-qwen-32b。</p>
                     * @param _modelName <p>模型名称，可选模型列表：hunyuan-turbo，hunyuan-large，hunyuan-large-longcontext，hunyuan-standard，hunyuan-standard-256K，deepseek-r1，deepseek-v3，deepseek-r1-distill-qwen-32b。</p>
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
                     * 获取<p>是否以流式接口的形式返回数据，默认true。</p>
                     * @return Stream <p>是否以流式接口的形式返回数据，默认true。</p>
                     * 
                     */
                    bool GetStream() const;

                    /**
                     * 设置<p>是否以流式接口的形式返回数据，默认true。</p>
                     * @param _stream <p>是否以流式接口的形式返回数据，默认true。</p>
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
                     * 获取<p>取值区间为[0.0, 1.0], 非必要不建议使用, 不合理的取值会影响效果 。</p>
                     * @return TopP <p>取值区间为[0.0, 1.0], 非必要不建议使用, 不合理的取值会影响效果 。</p>
                     * 
                     */
                    double GetTopP() const;

                    /**
                     * 设置<p>取值区间为[0.0, 1.0], 非必要不建议使用, 不合理的取值会影响效果 。</p>
                     * @param _topP <p>取值区间为[0.0, 1.0], 非必要不建议使用, 不合理的取值会影响效果 。</p>
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
                     * 获取<p>取值区间为[0.0, 2.0], 非必要不建议使用, 不合理的取值会影响效果 。</p>
                     * @return Temperature <p>取值区间为[0.0, 2.0], 非必要不建议使用, 不合理的取值会影响效果 。</p>
                     * 
                     */
                    double GetTemperature() const;

                    /**
                     * 设置<p>取值区间为[0.0, 2.0], 非必要不建议使用, 不合理的取值会影响效果 。</p>
                     * @param _temperature <p>取值区间为[0.0, 2.0], 非必要不建议使用, 不合理的取值会影响效果 。</p>
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
                     * 获取<p>是否开启联网搜索。默认为 false。</p>
                     * @return OnlineSearch <p>是否开启联网搜索。默认为 false。</p>
                     * 
                     */
                    bool GetOnlineSearch() const;

                    /**
                     * 设置<p>是否开启联网搜索。默认为 false。</p>
                     * @param _onlineSearch <p>是否开启联网搜索。默认为 false。</p>
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
                     * 获取<p>当 OnlineSearch 为 true 时，指定的搜索引擎，默认为 bing。</p>
                     * @return OnlineSearchOptions <p>当 OnlineSearch 为 true 时，指定的搜索引擎，默认为 bing。</p>
                     * 
                     */
                    OnlineSearchOptions GetOnlineSearchOptions() const;

                    /**
                     * 设置<p>当 OnlineSearch 为 true 时，指定的搜索引擎，默认为 bing。</p>
                     * @param _onlineSearchOptions <p>当 OnlineSearch 为 true 时，指定的搜索引擎，默认为 bing。</p>
                     * 
                     */
                    void SetOnlineSearchOptions(const OnlineSearchOptions& _onlineSearchOptions);

                    /**
                     * 判断参数 OnlineSearchOptions 是否已赋值
                     * @return OnlineSearchOptions 是否已赋值
                     * 
                     */
                    bool OnlineSearchOptionsHasBeenSet() const;

                    /**
                     * 获取<p>可调用的工具列表，当前支持模型：hunyuan-turbo, deepseek-v3。</p>
                     * @return Tools <p>可调用的工具列表，当前支持模型：hunyuan-turbo, deepseek-v3。</p>
                     * 
                     */
                    std::vector<Tool> GetTools() const;

                    /**
                     * 设置<p>可调用的工具列表，当前支持模型：hunyuan-turbo, deepseek-v3。</p>
                     * @param _tools <p>可调用的工具列表，当前支持模型：hunyuan-turbo, deepseek-v3。</p>
                     * 
                     */
                    void SetTools(const std::vector<Tool>& _tools);

                    /**
                     * 判断参数 Tools 是否已赋值
                     * @return Tools 是否已赋值
                     * 
                     */
                    bool ToolsHasBeenSet() const;

                    /**
                     * 获取<p>工具使用选项，可选值包括 none、auto、custom。说明：1. 仅对 hunyuan-turbo、deepseek-v3 模型生效。2. none：不调用工具；auto：模型自行选择生成回复或调用工具；custom：强制模型调用指定的工具。3. 未设置时，默认值为auto</p>
                     * @return ToolChoice <p>工具使用选项，可选值包括 none、auto、custom。说明：1. 仅对 hunyuan-turbo、deepseek-v3 模型生效。2. none：不调用工具；auto：模型自行选择生成回复或调用工具；custom：强制模型调用指定的工具。3. 未设置时，默认值为auto</p>
                     * 
                     */
                    std::string GetToolChoice() const;

                    /**
                     * 设置<p>工具使用选项，可选值包括 none、auto、custom。说明：1. 仅对 hunyuan-turbo、deepseek-v3 模型生效。2. none：不调用工具；auto：模型自行选择生成回复或调用工具；custom：强制模型调用指定的工具。3. 未设置时，默认值为auto</p>
                     * @param _toolChoice <p>工具使用选项，可选值包括 none、auto、custom。说明：1. 仅对 hunyuan-turbo、deepseek-v3 模型生效。2. none：不调用工具；auto：模型自行选择生成回复或调用工具；custom：强制模型调用指定的工具。3. 未设置时，默认值为auto</p>
                     * 
                     */
                    void SetToolChoice(const std::string& _toolChoice);

                    /**
                     * 判断参数 ToolChoice 是否已赋值
                     * @return ToolChoice 是否已赋值
                     * 
                     */
                    bool ToolChoiceHasBeenSet() const;

                    /**
                     * 获取<p>强制模型调用指定的工具，当参数ToolChoice为custom时，此参数为必填</p>
                     * @return CustomTool <p>强制模型调用指定的工具，当参数ToolChoice为custom时，此参数为必填</p>
                     * 
                     */
                    Tool GetCustomTool() const;

                    /**
                     * 设置<p>强制模型调用指定的工具，当参数ToolChoice为custom时，此参数为必填</p>
                     * @param _customTool <p>强制模型调用指定的工具，当参数ToolChoice为custom时，此参数为必填</p>
                     * 
                     */
                    void SetCustomTool(const Tool& _customTool);

                    /**
                     * 判断参数 CustomTool 是否已赋值
                     * @return CustomTool 是否已赋值
                     * 
                     */
                    bool CustomToolHasBeenSet() const;

                private:

                    /**
                     * <p>会话内容，按对话时间从旧到新在数组中排列，长度受模型窗口大小限制。</p>
                     */
                    std::vector<Message> m_messages;
                    bool m_messagesHasBeenSet;

                    /**
                     * <p>模型名称，可选模型列表：hunyuan-turbo，hunyuan-large，hunyuan-large-longcontext，hunyuan-standard，hunyuan-standard-256K，deepseek-r1，deepseek-v3，deepseek-r1-distill-qwen-32b。</p>
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * <p>是否以流式接口的形式返回数据，默认true。</p>
                     */
                    bool m_stream;
                    bool m_streamHasBeenSet;

                    /**
                     * <p>取值区间为[0.0, 1.0], 非必要不建议使用, 不合理的取值会影响效果 。</p>
                     */
                    double m_topP;
                    bool m_topPHasBeenSet;

                    /**
                     * <p>取值区间为[0.0, 2.0], 非必要不建议使用, 不合理的取值会影响效果 。</p>
                     */
                    double m_temperature;
                    bool m_temperatureHasBeenSet;

                    /**
                     * <p>是否开启联网搜索。默认为 false。</p>
                     */
                    bool m_onlineSearch;
                    bool m_onlineSearchHasBeenSet;

                    /**
                     * <p>当 OnlineSearch 为 true 时，指定的搜索引擎，默认为 bing。</p>
                     */
                    OnlineSearchOptions m_onlineSearchOptions;
                    bool m_onlineSearchOptionsHasBeenSet;

                    /**
                     * <p>可调用的工具列表，当前支持模型：hunyuan-turbo, deepseek-v3。</p>
                     */
                    std::vector<Tool> m_tools;
                    bool m_toolsHasBeenSet;

                    /**
                     * <p>工具使用选项，可选值包括 none、auto、custom。说明：1. 仅对 hunyuan-turbo、deepseek-v3 模型生效。2. none：不调用工具；auto：模型自行选择生成回复或调用工具；custom：强制模型调用指定的工具。3. 未设置时，默认值为auto</p>
                     */
                    std::string m_toolChoice;
                    bool m_toolChoiceHasBeenSet;

                    /**
                     * <p>强制模型调用指定的工具，当参数ToolChoice为custom时，此参数为必填</p>
                     */
                    Tool m_customTool;
                    bool m_customToolHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20250101_MODEL_CHATCOMPLETIONSREQUEST_H_
