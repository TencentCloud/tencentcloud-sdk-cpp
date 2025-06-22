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

#ifndef TENCENTCLOUD_HUNYUAN_V20230901_MODEL_CHATCOMPLETIONSREQUEST_H_
#define TENCENTCLOUD_HUNYUAN_V20230901_MODEL_CHATCOMPLETIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/hunyuan/v20230901/model/Message.h>
#include <tencentcloud/hunyuan/v20230901/model/Tool.h>
#include <tencentcloud/hunyuan/v20230901/model/WebSearchOptions.h>


namespace TencentCloud
{
    namespace Hunyuan
    {
        namespace V20230901
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
                     * 获取模型名称，可选值参考 [产品概述](https://cloud.tencent.com/document/product/1729/104753) 中混元生文模型列表。
示例值：hunyuan-turbos-latest
各模型介绍请阅读 [产品概述](https://cloud.tencent.com/document/product/1729/104753) 中的说明。注意：不同的模型计费不同，请根据 [购买指南](https://cloud.tencent.com/document/product/1729/97731) 按需调用。
                     * @return Model 模型名称，可选值参考 [产品概述](https://cloud.tencent.com/document/product/1729/104753) 中混元生文模型列表。
示例值：hunyuan-turbos-latest
各模型介绍请阅读 [产品概述](https://cloud.tencent.com/document/product/1729/104753) 中的说明。注意：不同的模型计费不同，请根据 [购买指南](https://cloud.tencent.com/document/product/1729/97731) 按需调用。
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置模型名称，可选值参考 [产品概述](https://cloud.tencent.com/document/product/1729/104753) 中混元生文模型列表。
示例值：hunyuan-turbos-latest
各模型介绍请阅读 [产品概述](https://cloud.tencent.com/document/product/1729/104753) 中的说明。注意：不同的模型计费不同，请根据 [购买指南](https://cloud.tencent.com/document/product/1729/97731) 按需调用。
                     * @param _model 模型名称，可选值参考 [产品概述](https://cloud.tencent.com/document/product/1729/104753) 中混元生文模型列表。
示例值：hunyuan-turbos-latest
各模型介绍请阅读 [产品概述](https://cloud.tencent.com/document/product/1729/104753) 中的说明。注意：不同的模型计费不同，请根据 [购买指南](https://cloud.tencent.com/document/product/1729/97731) 按需调用。
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
2. Message.Role 可选值：system、user、assistant、 tool（functioncall场景）。
其中，system 角色可选，如存在则必须位于列表的最开始。user（tool） 和 assistant 需交替出现（一问一答），以 user 提问开始，user（tool）提问结束，其中tool可以连续出现多次，且 Content 不能为空。Role 的顺序示例：[system（可选） user assistant user（tool tool ...） assistant user（tool tool ...） ...]。
3. Messages 中 Content 总长度不能超过模型输入长度上限（可参考 [产品概述](https://cloud.tencent.com/document/product/1729/104753) 文档），超过则会截断最前面的内容，只保留尾部内容。
                     * @return Messages 聊天上下文信息。
说明：
1. 长度最多为 40，按对话时间从旧到新在数组中排列。
2. Message.Role 可选值：system、user、assistant、 tool（functioncall场景）。
其中，system 角色可选，如存在则必须位于列表的最开始。user（tool） 和 assistant 需交替出现（一问一答），以 user 提问开始，user（tool）提问结束，其中tool可以连续出现多次，且 Content 不能为空。Role 的顺序示例：[system（可选） user assistant user（tool tool ...） assistant user（tool tool ...） ...]。
3. Messages 中 Content 总长度不能超过模型输入长度上限（可参考 [产品概述](https://cloud.tencent.com/document/product/1729/104753) 文档），超过则会截断最前面的内容，只保留尾部内容。
                     * 
                     */
                    std::vector<Message> GetMessages() const;

                    /**
                     * 设置聊天上下文信息。
说明：
1. 长度最多为 40，按对话时间从旧到新在数组中排列。
2. Message.Role 可选值：system、user、assistant、 tool（functioncall场景）。
其中，system 角色可选，如存在则必须位于列表的最开始。user（tool） 和 assistant 需交替出现（一问一答），以 user 提问开始，user（tool）提问结束，其中tool可以连续出现多次，且 Content 不能为空。Role 的顺序示例：[system（可选） user assistant user（tool tool ...） assistant user（tool tool ...） ...]。
3. Messages 中 Content 总长度不能超过模型输入长度上限（可参考 [产品概述](https://cloud.tencent.com/document/product/1729/104753) 文档），超过则会截断最前面的内容，只保留尾部内容。
                     * @param _messages 聊天上下文信息。
说明：
1. 长度最多为 40，按对话时间从旧到新在数组中排列。
2. Message.Role 可选值：system、user、assistant、 tool（functioncall场景）。
其中，system 角色可选，如存在则必须位于列表的最开始。user（tool） 和 assistant 需交替出现（一问一答），以 user 提问开始，user（tool）提问结束，其中tool可以连续出现多次，且 Content 不能为空。Role 的顺序示例：[system（可选） user assistant user（tool tool ...） assistant user（tool tool ...） ...]。
3. Messages 中 Content 总长度不能超过模型输入长度上限（可参考 [产品概述](https://cloud.tencent.com/document/product/1729/104753) 文档），超过则会截断最前面的内容，只保留尾部内容。
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
                     * 获取流式调用开关。
说明：
1. 未传值时默认为非流式调用（false）。
2. 流式调用时以 SSE 协议增量返回结果（返回值取 Choices[n].Delta 中的值，需要拼接增量数据才能获得完整结果）。
3. 非流式调用时：
调用方式与普通 HTTP 请求无异。
接口响应耗时较长，**如需更低时延建议设置为 true**。
只返回一次最终结果（返回值取 Choices[n].Message 中的值）。

注意：
通过 SDK 调用时，流式和非流式调用需用**不同的方式**获取返回值，具体参考 SDK 中的注释或示例（在各语言 SDK 代码仓库的 examples/hunyuan/v20230901/ 目录中）。
                     * @return Stream 流式调用开关。
说明：
1. 未传值时默认为非流式调用（false）。
2. 流式调用时以 SSE 协议增量返回结果（返回值取 Choices[n].Delta 中的值，需要拼接增量数据才能获得完整结果）。
3. 非流式调用时：
调用方式与普通 HTTP 请求无异。
接口响应耗时较长，**如需更低时延建议设置为 true**。
只返回一次最终结果（返回值取 Choices[n].Message 中的值）。

注意：
通过 SDK 调用时，流式和非流式调用需用**不同的方式**获取返回值，具体参考 SDK 中的注释或示例（在各语言 SDK 代码仓库的 examples/hunyuan/v20230901/ 目录中）。
                     * 
                     */
                    bool GetStream() const;

                    /**
                     * 设置流式调用开关。
说明：
1. 未传值时默认为非流式调用（false）。
2. 流式调用时以 SSE 协议增量返回结果（返回值取 Choices[n].Delta 中的值，需要拼接增量数据才能获得完整结果）。
3. 非流式调用时：
调用方式与普通 HTTP 请求无异。
接口响应耗时较长，**如需更低时延建议设置为 true**。
只返回一次最终结果（返回值取 Choices[n].Message 中的值）。

注意：
通过 SDK 调用时，流式和非流式调用需用**不同的方式**获取返回值，具体参考 SDK 中的注释或示例（在各语言 SDK 代码仓库的 examples/hunyuan/v20230901/ 目录中）。
                     * @param _stream 流式调用开关。
说明：
1. 未传值时默认为非流式调用（false）。
2. 流式调用时以 SSE 协议增量返回结果（返回值取 Choices[n].Delta 中的值，需要拼接增量数据才能获得完整结果）。
3. 非流式调用时：
调用方式与普通 HTTP 请求无异。
接口响应耗时较长，**如需更低时延建议设置为 true**。
只返回一次最终结果（返回值取 Choices[n].Message 中的值）。

注意：
通过 SDK 调用时，流式和非流式调用需用**不同的方式**获取返回值，具体参考 SDK 中的注释或示例（在各语言 SDK 代码仓库的 examples/hunyuan/v20230901/ 目录中）。
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
                     * 获取流式输出审核开关。
说明：
1. 当使用流式输出（Stream 字段值为 true）时，该字段生效。
2. 输出审核有流式和同步两种模式，**流式模式首包响应更快**。未传值时默认为流式模式（true）。
3. 如果值为 true，将对输出内容进行分段审核，审核通过的内容流式输出返回。如果出现审核不过，响应中的 FinishReason 值为 sensitive。
4. 如果值为 false，则不使用流式输出审核，需要审核完所有输出内容后再返回结果。

注意：
当选择流式输出审核时，可能会出现部分内容已输出，但中间某一段响应中的 FinishReason 值为 sensitive，此时说明安全审核未通过。如果业务场景有实时文字上屏的需求，需要自行撤回已上屏的内容，并建议自定义替换为一条提示语，如 “这个问题我不方便回答，不如我们换个话题试试”，以保障终端体验。
                     * @return StreamModeration 流式输出审核开关。
说明：
1. 当使用流式输出（Stream 字段值为 true）时，该字段生效。
2. 输出审核有流式和同步两种模式，**流式模式首包响应更快**。未传值时默认为流式模式（true）。
3. 如果值为 true，将对输出内容进行分段审核，审核通过的内容流式输出返回。如果出现审核不过，响应中的 FinishReason 值为 sensitive。
4. 如果值为 false，则不使用流式输出审核，需要审核完所有输出内容后再返回结果。

注意：
当选择流式输出审核时，可能会出现部分内容已输出，但中间某一段响应中的 FinishReason 值为 sensitive，此时说明安全审核未通过。如果业务场景有实时文字上屏的需求，需要自行撤回已上屏的内容，并建议自定义替换为一条提示语，如 “这个问题我不方便回答，不如我们换个话题试试”，以保障终端体验。
                     * 
                     */
                    bool GetStreamModeration() const;

                    /**
                     * 设置流式输出审核开关。
说明：
1. 当使用流式输出（Stream 字段值为 true）时，该字段生效。
2. 输出审核有流式和同步两种模式，**流式模式首包响应更快**。未传值时默认为流式模式（true）。
3. 如果值为 true，将对输出内容进行分段审核，审核通过的内容流式输出返回。如果出现审核不过，响应中的 FinishReason 值为 sensitive。
4. 如果值为 false，则不使用流式输出审核，需要审核完所有输出内容后再返回结果。

注意：
当选择流式输出审核时，可能会出现部分内容已输出，但中间某一段响应中的 FinishReason 值为 sensitive，此时说明安全审核未通过。如果业务场景有实时文字上屏的需求，需要自行撤回已上屏的内容，并建议自定义替换为一条提示语，如 “这个问题我不方便回答，不如我们换个话题试试”，以保障终端体验。
                     * @param _streamModeration 流式输出审核开关。
说明：
1. 当使用流式输出（Stream 字段值为 true）时，该字段生效。
2. 输出审核有流式和同步两种模式，**流式模式首包响应更快**。未传值时默认为流式模式（true）。
3. 如果值为 true，将对输出内容进行分段审核，审核通过的内容流式输出返回。如果出现审核不过，响应中的 FinishReason 值为 sensitive。
4. 如果值为 false，则不使用流式输出审核，需要审核完所有输出内容后再返回结果。

注意：
当选择流式输出审核时，可能会出现部分内容已输出，但中间某一段响应中的 FinishReason 值为 sensitive，此时说明安全审核未通过。如果业务场景有实时文字上屏的需求，需要自行撤回已上屏的内容，并建议自定义替换为一条提示语，如 “这个问题我不方便回答，不如我们换个话题试试”，以保障终端体验。
                     * 
                     */
                    void SetStreamModeration(const bool& _streamModeration);

                    /**
                     * 判断参数 StreamModeration 是否已赋值
                     * @return StreamModeration 是否已赋值
                     * 
                     */
                    bool StreamModerationHasBeenSet() const;

                    /**
                     * 获取说明：
1. 影响输出文本的多样性。模型已有默认参数，不传值时使用各模型推荐值，不推荐用户修改。
2. 取值区间为 [0.0, 1.0]。取值越大，生成文本的多样性越强。
                     * @return TopP 说明：
1. 影响输出文本的多样性。模型已有默认参数，不传值时使用各模型推荐值，不推荐用户修改。
2. 取值区间为 [0.0, 1.0]。取值越大，生成文本的多样性越强。
                     * 
                     */
                    double GetTopP() const;

                    /**
                     * 设置说明：
1. 影响输出文本的多样性。模型已有默认参数，不传值时使用各模型推荐值，不推荐用户修改。
2. 取值区间为 [0.0, 1.0]。取值越大，生成文本的多样性越强。
                     * @param _topP 说明：
1. 影响输出文本的多样性。模型已有默认参数，不传值时使用各模型推荐值，不推荐用户修改。
2. 取值区间为 [0.0, 1.0]。取值越大，生成文本的多样性越强。
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
                     * 获取说明：
1. 影响模型输出多样性，模型已有默认参数，不传值时使用各模型推荐值，不推荐用户修改。
2. 取值区间为 [0.0, 2.0]。较高的数值会使输出更加多样化和不可预测，而较低的数值会使其更加集中和确定。
                     * @return Temperature 说明：
1. 影响模型输出多样性，模型已有默认参数，不传值时使用各模型推荐值，不推荐用户修改。
2. 取值区间为 [0.0, 2.0]。较高的数值会使输出更加多样化和不可预测，而较低的数值会使其更加集中和确定。
                     * 
                     */
                    double GetTemperature() const;

                    /**
                     * 设置说明：
1. 影响模型输出多样性，模型已有默认参数，不传值时使用各模型推荐值，不推荐用户修改。
2. 取值区间为 [0.0, 2.0]。较高的数值会使输出更加多样化和不可预测，而较低的数值会使其更加集中和确定。
                     * @param _temperature 说明：
1. 影响模型输出多样性，模型已有默认参数，不传值时使用各模型推荐值，不推荐用户修改。
2. 取值区间为 [0.0, 2.0]。较高的数值会使输出更加多样化和不可预测，而较低的数值会使其更加集中和确定。
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
                     * 获取功能增强（如搜索）开关。
说明：
1. hunyuan-lite 无功能增强（如搜索）能力，该参数对 hunyuan-lite 版本不生效。
2. 未传值时默认关闭开关。
3. 关闭时将直接由主模型生成回复内容，可以降低响应时延（对于流式输出时的首字时延尤为明显）。但在少数场景里，回复效果可能会下降。
4. 安全审核能力不属于功能增强范围，不受此字段影响。
5. 2025-04-20 00:00:00起，由默认开启状态转为默认关闭状态。
                     * @return EnableEnhancement 功能增强（如搜索）开关。
说明：
1. hunyuan-lite 无功能增强（如搜索）能力，该参数对 hunyuan-lite 版本不生效。
2. 未传值时默认关闭开关。
3. 关闭时将直接由主模型生成回复内容，可以降低响应时延（对于流式输出时的首字时延尤为明显）。但在少数场景里，回复效果可能会下降。
4. 安全审核能力不属于功能增强范围，不受此字段影响。
5. 2025-04-20 00:00:00起，由默认开启状态转为默认关闭状态。
                     * 
                     */
                    bool GetEnableEnhancement() const;

                    /**
                     * 设置功能增强（如搜索）开关。
说明：
1. hunyuan-lite 无功能增强（如搜索）能力，该参数对 hunyuan-lite 版本不生效。
2. 未传值时默认关闭开关。
3. 关闭时将直接由主模型生成回复内容，可以降低响应时延（对于流式输出时的首字时延尤为明显）。但在少数场景里，回复效果可能会下降。
4. 安全审核能力不属于功能增强范围，不受此字段影响。
5. 2025-04-20 00:00:00起，由默认开启状态转为默认关闭状态。
                     * @param _enableEnhancement 功能增强（如搜索）开关。
说明：
1. hunyuan-lite 无功能增强（如搜索）能力，该参数对 hunyuan-lite 版本不生效。
2. 未传值时默认关闭开关。
3. 关闭时将直接由主模型生成回复内容，可以降低响应时延（对于流式输出时的首字时延尤为明显）。但在少数场景里，回复效果可能会下降。
4. 安全审核能力不属于功能增强范围，不受此字段影响。
5. 2025-04-20 00:00:00起，由默认开启状态转为默认关闭状态。
                     * 
                     */
                    void SetEnableEnhancement(const bool& _enableEnhancement);

                    /**
                     * 判断参数 EnableEnhancement 是否已赋值
                     * @return EnableEnhancement 是否已赋值
                     * 
                     */
                    bool EnableEnhancementHasBeenSet() const;

                    /**
                     * 获取可调用的工具列表，仅对 hunyuan-turbo、hunyuan-functioncall 模型生效。
                     * @return Tools 可调用的工具列表，仅对 hunyuan-turbo、hunyuan-functioncall 模型生效。
                     * 
                     */
                    std::vector<Tool> GetTools() const;

                    /**
                     * 设置可调用的工具列表，仅对 hunyuan-turbo、hunyuan-functioncall 模型生效。
                     * @param _tools 可调用的工具列表，仅对 hunyuan-turbo、hunyuan-functioncall 模型生效。
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
                     * 获取工具使用选项，可选值包括 none、auto、custom。说明：1. 仅对 hunyuan-turbo、hunyuan-functioncall 模型生效。2. none：不调用工具；auto：模型自行选择生成回复或调用工具；custom：强制模型调用指定的工具。3. 未设置时，默认值为auto
                     * @return ToolChoice 工具使用选项，可选值包括 none、auto、custom。说明：1. 仅对 hunyuan-turbo、hunyuan-functioncall 模型生效。2. none：不调用工具；auto：模型自行选择生成回复或调用工具；custom：强制模型调用指定的工具。3. 未设置时，默认值为auto
                     * 
                     */
                    std::string GetToolChoice() const;

                    /**
                     * 设置工具使用选项，可选值包括 none、auto、custom。说明：1. 仅对 hunyuan-turbo、hunyuan-functioncall 模型生效。2. none：不调用工具；auto：模型自行选择生成回复或调用工具；custom：强制模型调用指定的工具。3. 未设置时，默认值为auto
                     * @param _toolChoice 工具使用选项，可选值包括 none、auto、custom。说明：1. 仅对 hunyuan-turbo、hunyuan-functioncall 模型生效。2. none：不调用工具；auto：模型自行选择生成回复或调用工具；custom：强制模型调用指定的工具。3. 未设置时，默认值为auto
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
                     * 获取强制模型调用指定的工具，当参数ToolChoice为custom时，此参数为必填
                     * @return CustomTool 强制模型调用指定的工具，当参数ToolChoice为custom时，此参数为必填
                     * 
                     */
                    Tool GetCustomTool() const;

                    /**
                     * 设置强制模型调用指定的工具，当参数ToolChoice为custom时，此参数为必填
                     * @param _customTool 强制模型调用指定的工具，当参数ToolChoice为custom时，此参数为必填
                     * 
                     */
                    void SetCustomTool(const Tool& _customTool);

                    /**
                     * 判断参数 CustomTool 是否已赋值
                     * @return CustomTool 是否已赋值
                     * 
                     */
                    bool CustomToolHasBeenSet() const;

                    /**
                     * 获取默认是false，在值为true且命中搜索时，接口会返回SearchInfo
                     * @return SearchInfo 默认是false，在值为true且命中搜索时，接口会返回SearchInfo
                     * 
                     */
                    bool GetSearchInfo() const;

                    /**
                     * 设置默认是false，在值为true且命中搜索时，接口会返回SearchInfo
                     * @param _searchInfo 默认是false，在值为true且命中搜索时，接口会返回SearchInfo
                     * 
                     */
                    void SetSearchInfo(const bool& _searchInfo);

                    /**
                     * 判断参数 SearchInfo 是否已赋值
                     * @return SearchInfo 是否已赋值
                     * 
                     */
                    bool SearchInfoHasBeenSet() const;

                    /**
                     * 获取搜索引文角标开关。
说明：
1. 配合EnableEnhancement和SearchInfo参数使用。打开后，回答中命中搜索的结果会在片段后增加角标标志，对应SearchInfo列表中的链接。
2. false：开关关闭，true：开关打开。
3. 未传值时默认开关关闭（false）。
                     * @return Citation 搜索引文角标开关。
说明：
1. 配合EnableEnhancement和SearchInfo参数使用。打开后，回答中命中搜索的结果会在片段后增加角标标志，对应SearchInfo列表中的链接。
2. false：开关关闭，true：开关打开。
3. 未传值时默认开关关闭（false）。
                     * 
                     */
                    bool GetCitation() const;

                    /**
                     * 设置搜索引文角标开关。
说明：
1. 配合EnableEnhancement和SearchInfo参数使用。打开后，回答中命中搜索的结果会在片段后增加角标标志，对应SearchInfo列表中的链接。
2. false：开关关闭，true：开关打开。
3. 未传值时默认开关关闭（false）。
                     * @param _citation 搜索引文角标开关。
说明：
1. 配合EnableEnhancement和SearchInfo参数使用。打开后，回答中命中搜索的结果会在片段后增加角标标志，对应SearchInfo列表中的链接。
2. false：开关关闭，true：开关打开。
3. 未传值时默认开关关闭（false）。
                     * 
                     */
                    void SetCitation(const bool& _citation);

                    /**
                     * 判断参数 Citation 是否已赋值
                     * @return Citation 是否已赋值
                     * 
                     */
                    bool CitationHasBeenSet() const;

                    /**
                     * 获取是否开启极速版搜索，默认false，不开启；在开启且命中搜索时，会启用极速版搜索，流式输出首字返回更快。
                     * @return EnableSpeedSearch 是否开启极速版搜索，默认false，不开启；在开启且命中搜索时，会启用极速版搜索，流式输出首字返回更快。
                     * 
                     */
                    bool GetEnableSpeedSearch() const;

                    /**
                     * 设置是否开启极速版搜索，默认false，不开启；在开启且命中搜索时，会启用极速版搜索，流式输出首字返回更快。
                     * @param _enableSpeedSearch 是否开启极速版搜索，默认false，不开启；在开启且命中搜索时，会启用极速版搜索，流式输出首字返回更快。
                     * 
                     */
                    void SetEnableSpeedSearch(const bool& _enableSpeedSearch);

                    /**
                     * 判断参数 EnableSpeedSearch 是否已赋值
                     * @return EnableSpeedSearch 是否已赋值
                     * 
                     */
                    bool EnableSpeedSearchHasBeenSet() const;

                    /**
                     * 获取多媒体开关。
详细介绍请阅读 [多媒体介绍](https://cloud.tencent.com/document/product/1729/111178) 中的说明。
说明：
1. 该参数目前仅对白名单内用户生效，如您想体验该功能请 [联系我们](https://cloud.tencent.com/act/event/Online_service)。
2. 该参数仅在功能增强（如搜索）开关开启（EnableEnhancement=true）并且极速版搜索开关关闭（EnableSpeedSearch=false）时生效。
3. hunyuan-lite 无多媒体能力，该参数对 hunyuan-lite 版本不生效。
4. 未传值时默认关闭。
5. 开启并搜索到对应的多媒体信息时，会输出对应的多媒体地址，可以定制个性化的图文消息。
                     * @return EnableMultimedia 多媒体开关。
详细介绍请阅读 [多媒体介绍](https://cloud.tencent.com/document/product/1729/111178) 中的说明。
说明：
1. 该参数目前仅对白名单内用户生效，如您想体验该功能请 [联系我们](https://cloud.tencent.com/act/event/Online_service)。
2. 该参数仅在功能增强（如搜索）开关开启（EnableEnhancement=true）并且极速版搜索开关关闭（EnableSpeedSearch=false）时生效。
3. hunyuan-lite 无多媒体能力，该参数对 hunyuan-lite 版本不生效。
4. 未传值时默认关闭。
5. 开启并搜索到对应的多媒体信息时，会输出对应的多媒体地址，可以定制个性化的图文消息。
                     * 
                     */
                    bool GetEnableMultimedia() const;

                    /**
                     * 设置多媒体开关。
详细介绍请阅读 [多媒体介绍](https://cloud.tencent.com/document/product/1729/111178) 中的说明。
说明：
1. 该参数目前仅对白名单内用户生效，如您想体验该功能请 [联系我们](https://cloud.tencent.com/act/event/Online_service)。
2. 该参数仅在功能增强（如搜索）开关开启（EnableEnhancement=true）并且极速版搜索开关关闭（EnableSpeedSearch=false）时生效。
3. hunyuan-lite 无多媒体能力，该参数对 hunyuan-lite 版本不生效。
4. 未传值时默认关闭。
5. 开启并搜索到对应的多媒体信息时，会输出对应的多媒体地址，可以定制个性化的图文消息。
                     * @param _enableMultimedia 多媒体开关。
详细介绍请阅读 [多媒体介绍](https://cloud.tencent.com/document/product/1729/111178) 中的说明。
说明：
1. 该参数目前仅对白名单内用户生效，如您想体验该功能请 [联系我们](https://cloud.tencent.com/act/event/Online_service)。
2. 该参数仅在功能增强（如搜索）开关开启（EnableEnhancement=true）并且极速版搜索开关关闭（EnableSpeedSearch=false）时生效。
3. hunyuan-lite 无多媒体能力，该参数对 hunyuan-lite 版本不生效。
4. 未传值时默认关闭。
5. 开启并搜索到对应的多媒体信息时，会输出对应的多媒体地址，可以定制个性化的图文消息。
                     * 
                     */
                    void SetEnableMultimedia(const bool& _enableMultimedia);

                    /**
                     * 判断参数 EnableMultimedia 是否已赋值
                     * @return EnableMultimedia 是否已赋值
                     * 
                     */
                    bool EnableMultimediaHasBeenSet() const;

                    /**
                     * 获取是否开启深度研究该问题，默认是false，在值为true且命中深度研究该问题时，会返回深度研究该问题信息。
                     * @return EnableDeepSearch 是否开启深度研究该问题，默认是false，在值为true且命中深度研究该问题时，会返回深度研究该问题信息。
                     * 
                     */
                    bool GetEnableDeepSearch() const;

                    /**
                     * 设置是否开启深度研究该问题，默认是false，在值为true且命中深度研究该问题时，会返回深度研究该问题信息。
                     * @param _enableDeepSearch 是否开启深度研究该问题，默认是false，在值为true且命中深度研究该问题时，会返回深度研究该问题信息。
                     * 
                     */
                    void SetEnableDeepSearch(const bool& _enableDeepSearch);

                    /**
                     * 判断参数 EnableDeepSearch 是否已赋值
                     * @return EnableDeepSearch 是否已赋值
                     * 
                     */
                    bool EnableDeepSearchHasBeenSet() const;

                    /**
                     * 获取说明： 1. 确保模型的输出是可复现的。 2. 取值区间为非0正整数，最大值10000。 3. 非必要不建议使用，不合理的取值会影响效果。
                     * @return Seed 说明： 1. 确保模型的输出是可复现的。 2. 取值区间为非0正整数，最大值10000。 3. 非必要不建议使用，不合理的取值会影响效果。
                     * 
                     */
                    int64_t GetSeed() const;

                    /**
                     * 设置说明： 1. 确保模型的输出是可复现的。 2. 取值区间为非0正整数，最大值10000。 3. 非必要不建议使用，不合理的取值会影响效果。
                     * @param _seed 说明： 1. 确保模型的输出是可复现的。 2. 取值区间为非0正整数，最大值10000。 3. 非必要不建议使用，不合理的取值会影响效果。
                     * 
                     */
                    void SetSeed(const int64_t& _seed);

                    /**
                     * 判断参数 Seed 是否已赋值
                     * @return Seed 是否已赋值
                     * 
                     */
                    bool SeedHasBeenSet() const;

                    /**
                     * 获取强制搜索增强开关。
说明：
1. 未传值时默认关闭。
2. 开启后，将强制走AI搜索，当AI搜索结果为空时，由大模型回复兜底话术。
                     * @return ForceSearchEnhancement 强制搜索增强开关。
说明：
1. 未传值时默认关闭。
2. 开启后，将强制走AI搜索，当AI搜索结果为空时，由大模型回复兜底话术。
                     * 
                     */
                    bool GetForceSearchEnhancement() const;

                    /**
                     * 设置强制搜索增强开关。
说明：
1. 未传值时默认关闭。
2. 开启后，将强制走AI搜索，当AI搜索结果为空时，由大模型回复兜底话术。
                     * @param _forceSearchEnhancement 强制搜索增强开关。
说明：
1. 未传值时默认关闭。
2. 开启后，将强制走AI搜索，当AI搜索结果为空时，由大模型回复兜底话术。
                     * 
                     */
                    void SetForceSearchEnhancement(const bool& _forceSearchEnhancement);

                    /**
                     * 判断参数 ForceSearchEnhancement 是否已赋值
                     * @return ForceSearchEnhancement 是否已赋值
                     * 
                     */
                    bool ForceSearchEnhancementHasBeenSet() const;

                    /**
                     * 获取自定义结束生成字符串

调用 OpenAI 的接口时，如果您指定了 `stop` 参数, 模型会停止在匹配到 `stop` 的内容之前。
在调用混元接口时，会停止在匹配到 `stop` 的内容之后。

**说明：**
未来我们可能会修改此行为以便和 OpenAI 保持一致。
但是目前有使用该参数的情况下，开发者需要注意该参数是否会对应用造成影响，以及未来该行为调整时带来的影响。
                     * @return Stop 自定义结束生成字符串

调用 OpenAI 的接口时，如果您指定了 `stop` 参数, 模型会停止在匹配到 `stop` 的内容之前。
在调用混元接口时，会停止在匹配到 `stop` 的内容之后。

**说明：**
未来我们可能会修改此行为以便和 OpenAI 保持一致。
但是目前有使用该参数的情况下，开发者需要注意该参数是否会对应用造成影响，以及未来该行为调整时带来的影响。
                     * 
                     */
                    std::vector<std::string> GetStop() const;

                    /**
                     * 设置自定义结束生成字符串

调用 OpenAI 的接口时，如果您指定了 `stop` 参数, 模型会停止在匹配到 `stop` 的内容之前。
在调用混元接口时，会停止在匹配到 `stop` 的内容之后。

**说明：**
未来我们可能会修改此行为以便和 OpenAI 保持一致。
但是目前有使用该参数的情况下，开发者需要注意该参数是否会对应用造成影响，以及未来该行为调整时带来的影响。
                     * @param _stop 自定义结束生成字符串

调用 OpenAI 的接口时，如果您指定了 `stop` 参数, 模型会停止在匹配到 `stop` 的内容之前。
在调用混元接口时，会停止在匹配到 `stop` 的内容之后。

**说明：**
未来我们可能会修改此行为以便和 OpenAI 保持一致。
但是目前有使用该参数的情况下，开发者需要注意该参数是否会对应用造成影响，以及未来该行为调整时带来的影响。
                     * 
                     */
                    void SetStop(const std::vector<std::string>& _stop);

                    /**
                     * 判断参数 Stop 是否已赋值
                     * @return Stop 是否已赋值
                     * 
                     */
                    bool StopHasBeenSet() const;

                    /**
                     * 获取推荐问答开关。
说明：
1. 未传值时默认关闭。
2. 开启后，在返回值的最后一个包中会增加 RecommendedQuestions 字段表示推荐问答， 最多返回3条。
                     * @return EnableRecommendedQuestions 推荐问答开关。
说明：
1. 未传值时默认关闭。
2. 开启后，在返回值的最后一个包中会增加 RecommendedQuestions 字段表示推荐问答， 最多返回3条。
                     * 
                     */
                    bool GetEnableRecommendedQuestions() const;

                    /**
                     * 设置推荐问答开关。
说明：
1. 未传值时默认关闭。
2. 开启后，在返回值的最后一个包中会增加 RecommendedQuestions 字段表示推荐问答， 最多返回3条。
                     * @param _enableRecommendedQuestions 推荐问答开关。
说明：
1. 未传值时默认关闭。
2. 开启后，在返回值的最后一个包中会增加 RecommendedQuestions 字段表示推荐问答， 最多返回3条。
                     * 
                     */
                    void SetEnableRecommendedQuestions(const bool& _enableRecommendedQuestions);

                    /**
                     * 判断参数 EnableRecommendedQuestions 是否已赋值
                     * @return EnableRecommendedQuestions 是否已赋值
                     * 
                     */
                    bool EnableRecommendedQuestionsHasBeenSet() const;

                    /**
                     * 获取是否开启深度阅读，默认是false，在值为true时，会返回深度阅读的结果信息。说明:1.深度阅读需要开启插件增强,即设置EnableEnhancement为true,当设置EnableDeepRead为true时EnableEnhancement默认为true；2.目前暂时只支持单文档单轮的深度阅读；3.深度阅读功能的文件上传可以使用FilesUploads接口，具体参数详见FilesUploads接口文档
                     * @return EnableDeepRead 是否开启深度阅读，默认是false，在值为true时，会返回深度阅读的结果信息。说明:1.深度阅读需要开启插件增强,即设置EnableEnhancement为true,当设置EnableDeepRead为true时EnableEnhancement默认为true；2.目前暂时只支持单文档单轮的深度阅读；3.深度阅读功能的文件上传可以使用FilesUploads接口，具体参数详见FilesUploads接口文档
                     * 
                     */
                    bool GetEnableDeepRead() const;

                    /**
                     * 设置是否开启深度阅读，默认是false，在值为true时，会返回深度阅读的结果信息。说明:1.深度阅读需要开启插件增强,即设置EnableEnhancement为true,当设置EnableDeepRead为true时EnableEnhancement默认为true；2.目前暂时只支持单文档单轮的深度阅读；3.深度阅读功能的文件上传可以使用FilesUploads接口，具体参数详见FilesUploads接口文档
                     * @param _enableDeepRead 是否开启深度阅读，默认是false，在值为true时，会返回深度阅读的结果信息。说明:1.深度阅读需要开启插件增强,即设置EnableEnhancement为true,当设置EnableDeepRead为true时EnableEnhancement默认为true；2.目前暂时只支持单文档单轮的深度阅读；3.深度阅读功能的文件上传可以使用FilesUploads接口，具体参数详见FilesUploads接口文档
                     * 
                     */
                    void SetEnableDeepRead(const bool& _enableDeepRead);

                    /**
                     * 判断参数 EnableDeepRead 是否已赋值
                     * @return EnableDeepRead 是否已赋值
                     * 
                     */
                    bool EnableDeepReadHasBeenSet() const;

                    /**
                     * 获取知识注入相关的参数信息
                     * @return WebSearchOptions 知识注入相关的参数信息
                     * 
                     */
                    WebSearchOptions GetWebSearchOptions() const;

                    /**
                     * 设置知识注入相关的参数信息
                     * @param _webSearchOptions 知识注入相关的参数信息
                     * 
                     */
                    void SetWebSearchOptions(const WebSearchOptions& _webSearchOptions);

                    /**
                     * 判断参数 WebSearchOptions 是否已赋值
                     * @return WebSearchOptions 是否已赋值
                     * 
                     */
                    bool WebSearchOptionsHasBeenSet() const;

                    /**
                     * 获取用户传入Topic
                     * @return TopicChoice 用户传入Topic
                     * 
                     */
                    std::string GetTopicChoice() const;

                    /**
                     * 设置用户传入Topic
                     * @param _topicChoice 用户传入Topic
                     * 
                     */
                    void SetTopicChoice(const std::string& _topicChoice);

                    /**
                     * 判断参数 TopicChoice 是否已赋值
                     * @return TopicChoice 是否已赋值
                     * 
                     */
                    bool TopicChoiceHasBeenSet() const;

                private:

                    /**
                     * 模型名称，可选值参考 [产品概述](https://cloud.tencent.com/document/product/1729/104753) 中混元生文模型列表。
示例值：hunyuan-turbos-latest
各模型介绍请阅读 [产品概述](https://cloud.tencent.com/document/product/1729/104753) 中的说明。注意：不同的模型计费不同，请根据 [购买指南](https://cloud.tencent.com/document/product/1729/97731) 按需调用。
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * 聊天上下文信息。
说明：
1. 长度最多为 40，按对话时间从旧到新在数组中排列。
2. Message.Role 可选值：system、user、assistant、 tool（functioncall场景）。
其中，system 角色可选，如存在则必须位于列表的最开始。user（tool） 和 assistant 需交替出现（一问一答），以 user 提问开始，user（tool）提问结束，其中tool可以连续出现多次，且 Content 不能为空。Role 的顺序示例：[system（可选） user assistant user（tool tool ...） assistant user（tool tool ...） ...]。
3. Messages 中 Content 总长度不能超过模型输入长度上限（可参考 [产品概述](https://cloud.tencent.com/document/product/1729/104753) 文档），超过则会截断最前面的内容，只保留尾部内容。
                     */
                    std::vector<Message> m_messages;
                    bool m_messagesHasBeenSet;

                    /**
                     * 流式调用开关。
说明：
1. 未传值时默认为非流式调用（false）。
2. 流式调用时以 SSE 协议增量返回结果（返回值取 Choices[n].Delta 中的值，需要拼接增量数据才能获得完整结果）。
3. 非流式调用时：
调用方式与普通 HTTP 请求无异。
接口响应耗时较长，**如需更低时延建议设置为 true**。
只返回一次最终结果（返回值取 Choices[n].Message 中的值）。

注意：
通过 SDK 调用时，流式和非流式调用需用**不同的方式**获取返回值，具体参考 SDK 中的注释或示例（在各语言 SDK 代码仓库的 examples/hunyuan/v20230901/ 目录中）。
                     */
                    bool m_stream;
                    bool m_streamHasBeenSet;

                    /**
                     * 流式输出审核开关。
说明：
1. 当使用流式输出（Stream 字段值为 true）时，该字段生效。
2. 输出审核有流式和同步两种模式，**流式模式首包响应更快**。未传值时默认为流式模式（true）。
3. 如果值为 true，将对输出内容进行分段审核，审核通过的内容流式输出返回。如果出现审核不过，响应中的 FinishReason 值为 sensitive。
4. 如果值为 false，则不使用流式输出审核，需要审核完所有输出内容后再返回结果。

注意：
当选择流式输出审核时，可能会出现部分内容已输出，但中间某一段响应中的 FinishReason 值为 sensitive，此时说明安全审核未通过。如果业务场景有实时文字上屏的需求，需要自行撤回已上屏的内容，并建议自定义替换为一条提示语，如 “这个问题我不方便回答，不如我们换个话题试试”，以保障终端体验。
                     */
                    bool m_streamModeration;
                    bool m_streamModerationHasBeenSet;

                    /**
                     * 说明：
1. 影响输出文本的多样性。模型已有默认参数，不传值时使用各模型推荐值，不推荐用户修改。
2. 取值区间为 [0.0, 1.0]。取值越大，生成文本的多样性越强。
                     */
                    double m_topP;
                    bool m_topPHasBeenSet;

                    /**
                     * 说明：
1. 影响模型输出多样性，模型已有默认参数，不传值时使用各模型推荐值，不推荐用户修改。
2. 取值区间为 [0.0, 2.0]。较高的数值会使输出更加多样化和不可预测，而较低的数值会使其更加集中和确定。
                     */
                    double m_temperature;
                    bool m_temperatureHasBeenSet;

                    /**
                     * 功能增强（如搜索）开关。
说明：
1. hunyuan-lite 无功能增强（如搜索）能力，该参数对 hunyuan-lite 版本不生效。
2. 未传值时默认关闭开关。
3. 关闭时将直接由主模型生成回复内容，可以降低响应时延（对于流式输出时的首字时延尤为明显）。但在少数场景里，回复效果可能会下降。
4. 安全审核能力不属于功能增强范围，不受此字段影响。
5. 2025-04-20 00:00:00起，由默认开启状态转为默认关闭状态。
                     */
                    bool m_enableEnhancement;
                    bool m_enableEnhancementHasBeenSet;

                    /**
                     * 可调用的工具列表，仅对 hunyuan-turbo、hunyuan-functioncall 模型生效。
                     */
                    std::vector<Tool> m_tools;
                    bool m_toolsHasBeenSet;

                    /**
                     * 工具使用选项，可选值包括 none、auto、custom。说明：1. 仅对 hunyuan-turbo、hunyuan-functioncall 模型生效。2. none：不调用工具；auto：模型自行选择生成回复或调用工具；custom：强制模型调用指定的工具。3. 未设置时，默认值为auto
                     */
                    std::string m_toolChoice;
                    bool m_toolChoiceHasBeenSet;

                    /**
                     * 强制模型调用指定的工具，当参数ToolChoice为custom时，此参数为必填
                     */
                    Tool m_customTool;
                    bool m_customToolHasBeenSet;

                    /**
                     * 默认是false，在值为true且命中搜索时，接口会返回SearchInfo
                     */
                    bool m_searchInfo;
                    bool m_searchInfoHasBeenSet;

                    /**
                     * 搜索引文角标开关。
说明：
1. 配合EnableEnhancement和SearchInfo参数使用。打开后，回答中命中搜索的结果会在片段后增加角标标志，对应SearchInfo列表中的链接。
2. false：开关关闭，true：开关打开。
3. 未传值时默认开关关闭（false）。
                     */
                    bool m_citation;
                    bool m_citationHasBeenSet;

                    /**
                     * 是否开启极速版搜索，默认false，不开启；在开启且命中搜索时，会启用极速版搜索，流式输出首字返回更快。
                     */
                    bool m_enableSpeedSearch;
                    bool m_enableSpeedSearchHasBeenSet;

                    /**
                     * 多媒体开关。
详细介绍请阅读 [多媒体介绍](https://cloud.tencent.com/document/product/1729/111178) 中的说明。
说明：
1. 该参数目前仅对白名单内用户生效，如您想体验该功能请 [联系我们](https://cloud.tencent.com/act/event/Online_service)。
2. 该参数仅在功能增强（如搜索）开关开启（EnableEnhancement=true）并且极速版搜索开关关闭（EnableSpeedSearch=false）时生效。
3. hunyuan-lite 无多媒体能力，该参数对 hunyuan-lite 版本不生效。
4. 未传值时默认关闭。
5. 开启并搜索到对应的多媒体信息时，会输出对应的多媒体地址，可以定制个性化的图文消息。
                     */
                    bool m_enableMultimedia;
                    bool m_enableMultimediaHasBeenSet;

                    /**
                     * 是否开启深度研究该问题，默认是false，在值为true且命中深度研究该问题时，会返回深度研究该问题信息。
                     */
                    bool m_enableDeepSearch;
                    bool m_enableDeepSearchHasBeenSet;

                    /**
                     * 说明： 1. 确保模型的输出是可复现的。 2. 取值区间为非0正整数，最大值10000。 3. 非必要不建议使用，不合理的取值会影响效果。
                     */
                    int64_t m_seed;
                    bool m_seedHasBeenSet;

                    /**
                     * 强制搜索增强开关。
说明：
1. 未传值时默认关闭。
2. 开启后，将强制走AI搜索，当AI搜索结果为空时，由大模型回复兜底话术。
                     */
                    bool m_forceSearchEnhancement;
                    bool m_forceSearchEnhancementHasBeenSet;

                    /**
                     * 自定义结束生成字符串

调用 OpenAI 的接口时，如果您指定了 `stop` 参数, 模型会停止在匹配到 `stop` 的内容之前。
在调用混元接口时，会停止在匹配到 `stop` 的内容之后。

**说明：**
未来我们可能会修改此行为以便和 OpenAI 保持一致。
但是目前有使用该参数的情况下，开发者需要注意该参数是否会对应用造成影响，以及未来该行为调整时带来的影响。
                     */
                    std::vector<std::string> m_stop;
                    bool m_stopHasBeenSet;

                    /**
                     * 推荐问答开关。
说明：
1. 未传值时默认关闭。
2. 开启后，在返回值的最后一个包中会增加 RecommendedQuestions 字段表示推荐问答， 最多返回3条。
                     */
                    bool m_enableRecommendedQuestions;
                    bool m_enableRecommendedQuestionsHasBeenSet;

                    /**
                     * 是否开启深度阅读，默认是false，在值为true时，会返回深度阅读的结果信息。说明:1.深度阅读需要开启插件增强,即设置EnableEnhancement为true,当设置EnableDeepRead为true时EnableEnhancement默认为true；2.目前暂时只支持单文档单轮的深度阅读；3.深度阅读功能的文件上传可以使用FilesUploads接口，具体参数详见FilesUploads接口文档
                     */
                    bool m_enableDeepRead;
                    bool m_enableDeepReadHasBeenSet;

                    /**
                     * 知识注入相关的参数信息
                     */
                    WebSearchOptions m_webSearchOptions;
                    bool m_webSearchOptionsHasBeenSet;

                    /**
                     * 用户传入Topic
                     */
                    std::string m_topicChoice;
                    bool m_topicChoiceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HUNYUAN_V20230901_MODEL_CHATCOMPLETIONSREQUEST_H_
