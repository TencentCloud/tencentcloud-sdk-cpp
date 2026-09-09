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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_REASONINGCONFIG_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_REASONINGCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * 推理输出配置
                */
                class ReasoningConfig : public AbstractModel
                {
                public:
                    ReasoningConfig();
                    ~ReasoningConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>实际使用的推理输出模式：enum 或 string。</p>
                     * @return OutputMode <p>实际使用的推理输出模式：enum 或 string。</p>
                     * 
                     */
                    std::string GetOutputMode() const;

                    /**
                     * 设置<p>实际使用的推理输出模式：enum 或 string。</p>
                     * @param _outputMode <p>实际使用的推理输出模式：enum 或 string。</p>
                     * 
                     */
                    void SetOutputMode(const std::string& _outputMode);

                    /**
                     * 判断参数 OutputMode 是否已赋值
                     * @return OutputMode 是否已赋值
                     * 
                     */
                    bool OutputModeHasBeenSet() const;

                    /**
                     * 获取<p>枚举值集合，仅在 OutputMode=enum 时生效。  VLM 输出必须精确命中此集合中的某个值。</p>
                     * @return EnumValues <p>枚举值集合，仅在 OutputMode=enum 时生效。  VLM 输出必须精确命中此集合中的某个值。</p>
                     * 
                     */
                    std::vector<std::string> GetEnumValues() const;

                    /**
                     * 设置<p>枚举值集合，仅在 OutputMode=enum 时生效。  VLM 输出必须精确命中此集合中的某个值。</p>
                     * @param _enumValues <p>枚举值集合，仅在 OutputMode=enum 时生效。  VLM 输出必须精确命中此集合中的某个值。</p>
                     * 
                     */
                    void SetEnumValues(const std::vector<std::string>& _enumValues);

                    /**
                     * 判断参数 EnumValues 是否已赋值
                     * @return EnumValues 是否已赋值
                     * 
                     */
                    bool EnumValuesHasBeenSet() const;

                    /**
                     * 获取<p>文本输出最大长度，仅在 OutputMode=string 时生效。</p><p>取值范围：[1, 500]</p><p>默认值：200</p>
                     * @return MaxLength <p>文本输出最大长度，仅在 OutputMode=string 时生效。</p><p>取值范围：[1, 500]</p><p>默认值：200</p>
                     * 
                     */
                    int64_t GetMaxLength() const;

                    /**
                     * 设置<p>文本输出最大长度，仅在 OutputMode=string 时生效。</p><p>取值范围：[1, 500]</p><p>默认值：200</p>
                     * @param _maxLength <p>文本输出最大长度，仅在 OutputMode=string 时生效。</p><p>取值范围：[1, 500]</p><p>默认值：200</p>
                     * 
                     */
                    void SetMaxLength(const int64_t& _maxLength);

                    /**
                     * 判断参数 MaxLength 是否已赋值
                     * @return MaxLength 是否已赋值
                     * 
                     */
                    bool MaxLengthHasBeenSet() const;

                    /**
                     * 获取<p>是否在推理调用时向 VLM 传入原图进行多模态理解。  true（默认）：VLM 同时接收原图和渲染后的 Prompt，具备多模态理解能力，可直接&quot;看&quot;图片内容进行推理。  false：不传入原图，仅以渲染后的 Prompt（含变量注入值）进行纯文本推理。适用于推理逻辑完全基于结构化出参字段（如水印文字、置信度比较等）的场景，可降低推理延迟和计费成本。  建议：当 ReasoningPrompt 中未涉及&quot;观察图片&quot;、&quot;直接看图&quot;等多模态指令，且推理规则完全基于 ${变量名} 引用的文字结果时，可设为 false 以优化性能。</p>
                     * @return EnableImageInput <p>是否在推理调用时向 VLM 传入原图进行多模态理解。  true（默认）：VLM 同时接收原图和渲染后的 Prompt，具备多模态理解能力，可直接&quot;看&quot;图片内容进行推理。  false：不传入原图，仅以渲染后的 Prompt（含变量注入值）进行纯文本推理。适用于推理逻辑完全基于结构化出参字段（如水印文字、置信度比较等）的场景，可降低推理延迟和计费成本。  建议：当 ReasoningPrompt 中未涉及&quot;观察图片&quot;、&quot;直接看图&quot;等多模态指令，且推理规则完全基于 ${变量名} 引用的文字结果时，可设为 false 以优化性能。</p>
                     * 
                     */
                    bool GetEnableImageInput() const;

                    /**
                     * 设置<p>是否在推理调用时向 VLM 传入原图进行多模态理解。  true（默认）：VLM 同时接收原图和渲染后的 Prompt，具备多模态理解能力，可直接&quot;看&quot;图片内容进行推理。  false：不传入原图，仅以渲染后的 Prompt（含变量注入值）进行纯文本推理。适用于推理逻辑完全基于结构化出参字段（如水印文字、置信度比较等）的场景，可降低推理延迟和计费成本。  建议：当 ReasoningPrompt 中未涉及&quot;观察图片&quot;、&quot;直接看图&quot;等多模态指令，且推理规则完全基于 ${变量名} 引用的文字结果时，可设为 false 以优化性能。</p>
                     * @param _enableImageInput <p>是否在推理调用时向 VLM 传入原图进行多模态理解。  true（默认）：VLM 同时接收原图和渲染后的 Prompt，具备多模态理解能力，可直接&quot;看&quot;图片内容进行推理。  false：不传入原图，仅以渲染后的 Prompt（含变量注入值）进行纯文本推理。适用于推理逻辑完全基于结构化出参字段（如水印文字、置信度比较等）的场景，可降低推理延迟和计费成本。  建议：当 ReasoningPrompt 中未涉及&quot;观察图片&quot;、&quot;直接看图&quot;等多模态指令，且推理规则完全基于 ${变量名} 引用的文字结果时，可设为 false 以优化性能。</p>
                     * 
                     */
                    void SetEnableImageInput(const bool& _enableImageInput);

                    /**
                     * 判断参数 EnableImageInput 是否已赋值
                     * @return EnableImageInput 是否已赋值
                     * 
                     */
                    bool EnableImageInputHasBeenSet() const;

                private:

                    /**
                     * <p>实际使用的推理输出模式：enum 或 string。</p>
                     */
                    std::string m_outputMode;
                    bool m_outputModeHasBeenSet;

                    /**
                     * <p>枚举值集合，仅在 OutputMode=enum 时生效。  VLM 输出必须精确命中此集合中的某个值。</p>
                     */
                    std::vector<std::string> m_enumValues;
                    bool m_enumValuesHasBeenSet;

                    /**
                     * <p>文本输出最大长度，仅在 OutputMode=string 时生效。</p><p>取值范围：[1, 500]</p><p>默认值：200</p>
                     */
                    int64_t m_maxLength;
                    bool m_maxLengthHasBeenSet;

                    /**
                     * <p>是否在推理调用时向 VLM 传入原图进行多模态理解。  true（默认）：VLM 同时接收原图和渲染后的 Prompt，具备多模态理解能力，可直接&quot;看&quot;图片内容进行推理。  false：不传入原图，仅以渲染后的 Prompt（含变量注入值）进行纯文本推理。适用于推理逻辑完全基于结构化出参字段（如水印文字、置信度比较等）的场景，可降低推理延迟和计费成本。  建议：当 ReasoningPrompt 中未涉及&quot;观察图片&quot;、&quot;直接看图&quot;等多模态指令，且推理规则完全基于 ${变量名} 引用的文字结果时，可设为 false 以优化性能。</p>
                     */
                    bool m_enableImageInput;
                    bool m_enableImageInputHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_REASONINGCONFIG_H_
