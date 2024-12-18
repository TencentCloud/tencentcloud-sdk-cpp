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

#ifndef TENCENTCLOUD_HUNYUAN_V20230901_MODEL_RUNTHREADREQUEST_H_
#define TENCENTCLOUD_HUNYUAN_V20230901_MODEL_RUNTHREADREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/hunyuan/v20230901/model/ThreadAdditionalMessage.h>
#include <tencentcloud/hunyuan/v20230901/model/Tool.h>


namespace TencentCloud
{
    namespace Hunyuan
    {
        namespace V20230901
        {
            namespace Model
            {
                /**
                * RunThread请求参数结构体
                */
                class RunThreadRequest : public AbstractModel
                {
                public:
                    RunThreadRequest();
                    ~RunThreadRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取会话 ID
                     * @return ThreadID 会话 ID
                     * 
                     */
                    std::string GetThreadID() const;

                    /**
                     * 设置会话 ID
                     * @param _threadID 会话 ID
                     * 
                     */
                    void SetThreadID(const std::string& _threadID);

                    /**
                     * 判断参数 ThreadID 是否已赋值
                     * @return ThreadID 是否已赋值
                     * 
                     */
                    bool ThreadIDHasBeenSet() const;

                    /**
                     * 获取助手 ID（目前未使用，留空）
                     * @return AssistantID 助手 ID（目前未使用，留空）
                     * 
                     */
                    std::string GetAssistantID() const;

                    /**
                     * 设置助手 ID（目前未使用，留空）
                     * @param _assistantID 助手 ID（目前未使用，留空）
                     * 
                     */
                    void SetAssistantID(const std::string& _assistantID);

                    /**
                     * 判断参数 AssistantID 是否已赋值
                     * @return AssistantID 是否已赋值
                     * 
                     */
                    bool AssistantIDHasBeenSet() const;

                    /**
                     * 获取模型名称，可选值包括 hunyuan-lite、hunyuan-standard、hunyuan-standard-256K、hunyuan-pro、 hunyuan-code、 hunyuan-role、 hunyuan-functioncall、 hunyuan-vision、 hunyuan-turbo。各模型介绍请阅读 [产品概述](https://cloud.tencent.com/document/product/1729/104753) 中的说明。注意：不同的模型计费不同，请根据 [购买指南](https://cloud.tencent.com/document/product/1729/97731) 按需调用。
                     * @return Model 模型名称，可选值包括 hunyuan-lite、hunyuan-standard、hunyuan-standard-256K、hunyuan-pro、 hunyuan-code、 hunyuan-role、 hunyuan-functioncall、 hunyuan-vision、 hunyuan-turbo。各模型介绍请阅读 [产品概述](https://cloud.tencent.com/document/product/1729/104753) 中的说明。注意：不同的模型计费不同，请根据 [购买指南](https://cloud.tencent.com/document/product/1729/97731) 按需调用。
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置模型名称，可选值包括 hunyuan-lite、hunyuan-standard、hunyuan-standard-256K、hunyuan-pro、 hunyuan-code、 hunyuan-role、 hunyuan-functioncall、 hunyuan-vision、 hunyuan-turbo。各模型介绍请阅读 [产品概述](https://cloud.tencent.com/document/product/1729/104753) 中的说明。注意：不同的模型计费不同，请根据 [购买指南](https://cloud.tencent.com/document/product/1729/97731) 按需调用。
                     * @param _model 模型名称，可选值包括 hunyuan-lite、hunyuan-standard、hunyuan-standard-256K、hunyuan-pro、 hunyuan-code、 hunyuan-role、 hunyuan-functioncall、 hunyuan-vision、 hunyuan-turbo。各模型介绍请阅读 [产品概述](https://cloud.tencent.com/document/product/1729/104753) 中的说明。注意：不同的模型计费不同，请根据 [购买指南](https://cloud.tencent.com/document/product/1729/97731) 按需调用。
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
                     * 获取附加消息
                     * @return AdditionalMessages 附加消息
                     * 
                     */
                    std::vector<ThreadAdditionalMessage> GetAdditionalMessages() const;

                    /**
                     * 设置附加消息
                     * @param _additionalMessages 附加消息
                     * 
                     */
                    void SetAdditionalMessages(const std::vector<ThreadAdditionalMessage>& _additionalMessages);

                    /**
                     * 判断参数 AdditionalMessages 是否已赋值
                     * @return AdditionalMessages 是否已赋值
                     * 
                     */
                    bool AdditionalMessagesHasBeenSet() const;

                    /**
                     * 获取说明：1. 影响模型输出多样性，模型已有默认参数，不传值时使用各模型推荐值，不推荐用户修改。2. 取值区间为 [0.0, 2.0]。较高的数值会使输出更加多样化和不可预测，而较低的数值会使其更加集中和确定。
                     * @return Temperature 说明：1. 影响模型输出多样性，模型已有默认参数，不传值时使用各模型推荐值，不推荐用户修改。2. 取值区间为 [0.0, 2.0]。较高的数值会使输出更加多样化和不可预测，而较低的数值会使其更加集中和确定。
                     * 
                     */
                    double GetTemperature() const;

                    /**
                     * 设置说明：1. 影响模型输出多样性，模型已有默认参数，不传值时使用各模型推荐值，不推荐用户修改。2. 取值区间为 [0.0, 2.0]。较高的数值会使输出更加多样化和不可预测，而较低的数值会使其更加集中和确定。
                     * @param _temperature 说明：1. 影响模型输出多样性，模型已有默认参数，不传值时使用各模型推荐值，不推荐用户修改。2. 取值区间为 [0.0, 2.0]。较高的数值会使输出更加多样化和不可预测，而较低的数值会使其更加集中和确定。
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
                     * 获取说明：1. 影响输出文本的多样性。模型已有默认参数，不传值时使用各模型推荐值，不推荐用户修改。2. 取值区间为 [0.0, 1.0]。取值越大，生成文本的多样性越强。
                     * @return TopP 说明：1. 影响输出文本的多样性。模型已有默认参数，不传值时使用各模型推荐值，不推荐用户修改。2. 取值区间为 [0.0, 1.0]。取值越大，生成文本的多样性越强。
                     * 
                     */
                    double GetTopP() const;

                    /**
                     * 设置说明：1. 影响输出文本的多样性。模型已有默认参数，不传值时使用各模型推荐值，不推荐用户修改。2. 取值区间为 [0.0, 1.0]。取值越大，生成文本的多样性越强。
                     * @param _topP 说明：1. 影响输出文本的多样性。模型已有默认参数，不传值时使用各模型推荐值，不推荐用户修改。2. 取值区间为 [0.0, 1.0]。取值越大，生成文本的多样性越强。
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
                     * 获取是否流式输出，当前只允许 true
                     * @return Stream 是否流式输出，当前只允许 true
                     * 
                     */
                    bool GetStream() const;

                    /**
                     * 设置是否流式输出，当前只允许 true
                     * @param _stream 是否流式输出，当前只允许 true
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
                     * 获取运行过程中可使用的 token 最大数量。
                     * @return MaxPromptTokens 运行过程中可使用的 token 最大数量。
                     * 
                     */
                    int64_t GetMaxPromptTokens() const;

                    /**
                     * 设置运行过程中可使用的 token 最大数量。
                     * @param _maxPromptTokens 运行过程中可使用的 token 最大数量。
                     * 
                     */
                    void SetMaxPromptTokens(const int64_t& _maxPromptTokens);

                    /**
                     * 判断参数 MaxPromptTokens 是否已赋值
                     * @return MaxPromptTokens 是否已赋值
                     * 
                     */
                    bool MaxPromptTokensHasBeenSet() const;

                    /**
                     * 获取运行过程中可使用的完成 token 的最大数量。
                     * @return MaxCompletionTokens 运行过程中可使用的完成 token 的最大数量。
                     * 
                     */
                    int64_t GetMaxCompletionTokens() const;

                    /**
                     * 设置运行过程中可使用的完成 token 的最大数量。
                     * @param _maxCompletionTokens 运行过程中可使用的完成 token 的最大数量。
                     * 
                     */
                    void SetMaxCompletionTokens(const int64_t& _maxCompletionTokens);

                    /**
                     * 判断参数 MaxCompletionTokens 是否已赋值
                     * @return MaxCompletionTokens 是否已赋值
                     * 
                     */
                    bool MaxCompletionTokensHasBeenSet() const;

                    /**
                     * 获取可调用的工具列表，仅对 hunyuan-pro、hunyuan-turbo、hunyuan-functioncall 模型生效。
                     * @return Tools 可调用的工具列表，仅对 hunyuan-pro、hunyuan-turbo、hunyuan-functioncall 模型生效。
                     * 
                     */
                    std::vector<Tool> GetTools() const;

                    /**
                     * 设置可调用的工具列表，仅对 hunyuan-pro、hunyuan-turbo、hunyuan-functioncall 模型生效。
                     * @param _tools 可调用的工具列表，仅对 hunyuan-pro、hunyuan-turbo、hunyuan-functioncall 模型生效。
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
                     * 获取工具使用选项，可选值包括 none、auto、custom。说明：1. 仅对 hunyuan-pro、hunyuan-turbo、hunyuan-functioncall 模型生效。2. none：不调用工具；auto：模型自行选择生成回复或调用工具；custom：强制模型调用指定的工具。3. 未设置时，默认值为auto
                     * @return ToolChoice 工具使用选项，可选值包括 none、auto、custom。说明：1. 仅对 hunyuan-pro、hunyuan-turbo、hunyuan-functioncall 模型生效。2. none：不调用工具；auto：模型自行选择生成回复或调用工具；custom：强制模型调用指定的工具。3. 未设置时，默认值为auto
                     * 
                     */
                    std::string GetToolChoice() const;

                    /**
                     * 设置工具使用选项，可选值包括 none、auto、custom。说明：1. 仅对 hunyuan-pro、hunyuan-turbo、hunyuan-functioncall 模型生效。2. none：不调用工具；auto：模型自行选择生成回复或调用工具；custom：强制模型调用指定的工具。3. 未设置时，默认值为auto
                     * @param _toolChoice 工具使用选项，可选值包括 none、auto、custom。说明：1. 仅对 hunyuan-pro、hunyuan-turbo、hunyuan-functioncall 模型生效。2. none：不调用工具；auto：模型自行选择生成回复或调用工具；custom：强制模型调用指定的工具。3. 未设置时，默认值为auto
                     * 
                     */
                    void SetToolChoice(const std::string& _toolChoice);

                    /**
                     * 判断参数 ToolChoice 是否已赋值
                     * @return ToolChoice 是否已赋值
                     * 
                     */
                    bool ToolChoiceHasBeenSet() const;

                private:

                    /**
                     * 会话 ID
                     */
                    std::string m_threadID;
                    bool m_threadIDHasBeenSet;

                    /**
                     * 助手 ID（目前未使用，留空）
                     */
                    std::string m_assistantID;
                    bool m_assistantIDHasBeenSet;

                    /**
                     * 模型名称，可选值包括 hunyuan-lite、hunyuan-standard、hunyuan-standard-256K、hunyuan-pro、 hunyuan-code、 hunyuan-role、 hunyuan-functioncall、 hunyuan-vision、 hunyuan-turbo。各模型介绍请阅读 [产品概述](https://cloud.tencent.com/document/product/1729/104753) 中的说明。注意：不同的模型计费不同，请根据 [购买指南](https://cloud.tencent.com/document/product/1729/97731) 按需调用。
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * 附加消息
                     */
                    std::vector<ThreadAdditionalMessage> m_additionalMessages;
                    bool m_additionalMessagesHasBeenSet;

                    /**
                     * 说明：1. 影响模型输出多样性，模型已有默认参数，不传值时使用各模型推荐值，不推荐用户修改。2. 取值区间为 [0.0, 2.0]。较高的数值会使输出更加多样化和不可预测，而较低的数值会使其更加集中和确定。
                     */
                    double m_temperature;
                    bool m_temperatureHasBeenSet;

                    /**
                     * 说明：1. 影响输出文本的多样性。模型已有默认参数，不传值时使用各模型推荐值，不推荐用户修改。2. 取值区间为 [0.0, 1.0]。取值越大，生成文本的多样性越强。
                     */
                    double m_topP;
                    bool m_topPHasBeenSet;

                    /**
                     * 是否流式输出，当前只允许 true
                     */
                    bool m_stream;
                    bool m_streamHasBeenSet;

                    /**
                     * 运行过程中可使用的 token 最大数量。
                     */
                    int64_t m_maxPromptTokens;
                    bool m_maxPromptTokensHasBeenSet;

                    /**
                     * 运行过程中可使用的完成 token 的最大数量。
                     */
                    int64_t m_maxCompletionTokens;
                    bool m_maxCompletionTokensHasBeenSet;

                    /**
                     * 可调用的工具列表，仅对 hunyuan-pro、hunyuan-turbo、hunyuan-functioncall 模型生效。
                     */
                    std::vector<Tool> m_tools;
                    bool m_toolsHasBeenSet;

                    /**
                     * 工具使用选项，可选值包括 none、auto、custom。说明：1. 仅对 hunyuan-pro、hunyuan-turbo、hunyuan-functioncall 模型生效。2. none：不调用工具；auto：模型自行选择生成回复或调用工具；custom：强制模型调用指定的工具。3. 未设置时，默认值为auto
                     */
                    std::string m_toolChoice;
                    bool m_toolChoiceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HUNYUAN_V20230901_MODEL_RUNTHREADREQUEST_H_
