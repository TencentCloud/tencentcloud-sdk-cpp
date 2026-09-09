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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_REASONINGRESULT_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_REASONINGRESULT_H_

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
                * VLM 推理结果
                */
                class ReasoningResult : public AbstractModel
                {
                public:
                    ReasoningResult();
                    ~ReasoningResult() = default;
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
                     * 获取<p>枚举模式下的推理结果值。当 OutputMode=enum 时返回，必定命中请求中 EnumValues 的某个值。 若 VLM 输出无法匹配任何枚举值，则返回 <strong>UNCERTAIN</strong>。</p>
                     * @return EnumValue <p>枚举模式下的推理结果值。当 OutputMode=enum 时返回，必定命中请求中 EnumValues 的某个值。 若 VLM 输出无法匹配任何枚举值，则返回 <strong>UNCERTAIN</strong>。</p>
                     * 
                     */
                    std::string GetEnumValue() const;

                    /**
                     * 设置<p>枚举模式下的推理结果值。当 OutputMode=enum 时返回，必定命中请求中 EnumValues 的某个值。 若 VLM 输出无法匹配任何枚举值，则返回 <strong>UNCERTAIN</strong>。</p>
                     * @param _enumValue <p>枚举模式下的推理结果值。当 OutputMode=enum 时返回，必定命中请求中 EnumValues 的某个值。 若 VLM 输出无法匹配任何枚举值，则返回 <strong>UNCERTAIN</strong>。</p>
                     * 
                     */
                    void SetEnumValue(const std::string& _enumValue);

                    /**
                     * 判断参数 EnumValue 是否已赋值
                     * @return EnumValue 是否已赋值
                     * 
                     */
                    bool EnumValueHasBeenSet() const;

                    /**
                     * 获取<p>文本模式下的推理结果值。当 OutputMode=string 时返回。 若 VLM 无法得出结论，则返回 <strong>UNCERTAIN</strong>。</p>
                     * @return TextValue <p>文本模式下的推理结果值。当 OutputMode=string 时返回。 若 VLM 无法得出结论，则返回 <strong>UNCERTAIN</strong>。</p>
                     * 
                     */
                    std::string GetTextValue() const;

                    /**
                     * 设置<p>文本模式下的推理结果值。当 OutputMode=string 时返回。 若 VLM 无法得出结论，则返回 <strong>UNCERTAIN</strong>。</p>
                     * @param _textValue <p>文本模式下的推理结果值。当 OutputMode=string 时返回。 若 VLM 无法得出结论，则返回 <strong>UNCERTAIN</strong>。</p>
                     * 
                     */
                    void SetTextValue(const std::string& _textValue);

                    /**
                     * 判断参数 TextValue 是否已赋值
                     * @return TextValue 是否已赋值
                     * 
                     */
                    bool TextValueHasBeenSet() const;

                    /**
                     * 获取<p>VLM 原始输出文本（未经过结构化校验）。</p>
                     * @return RawOutput <p>VLM 原始输出文本（未经过结构化校验）。</p>
                     * 
                     */
                    std::string GetRawOutput() const;

                    /**
                     * 设置<p>VLM 原始输出文本（未经过结构化校验）。</p>
                     * @param _rawOutput <p>VLM 原始输出文本（未经过结构化校验）。</p>
                     * 
                     */
                    void SetRawOutput(const std::string& _rawOutput);

                    /**
                     * 判断参数 RawOutput 是否已赋值
                     * @return RawOutput 是否已赋值
                     * 
                     */
                    bool RawOutputHasBeenSet() const;

                    /**
                     * 获取<p>变量替换后的实际 Prompt（脱敏后）。</p>
                     * @return RenderedPrompt <p>变量替换后的实际 Prompt（脱敏后）。</p>
                     * 
                     */
                    std::string GetRenderedPrompt() const;

                    /**
                     * 设置<p>变量替换后的实际 Prompt（脱敏后）。</p>
                     * @param _renderedPrompt <p>变量替换后的实际 Prompt（脱敏后）。</p>
                     * 
                     */
                    void SetRenderedPrompt(const std::string& _renderedPrompt);

                    /**
                     * 判断参数 RenderedPrompt 是否已赋值
                     * @return RenderedPrompt 是否已赋值
                     * 
                     */
                    bool RenderedPromptHasBeenSet() const;

                private:

                    /**
                     * <p>实际使用的推理输出模式：enum 或 string。</p>
                     */
                    std::string m_outputMode;
                    bool m_outputModeHasBeenSet;

                    /**
                     * <p>枚举模式下的推理结果值。当 OutputMode=enum 时返回，必定命中请求中 EnumValues 的某个值。 若 VLM 输出无法匹配任何枚举值，则返回 <strong>UNCERTAIN</strong>。</p>
                     */
                    std::string m_enumValue;
                    bool m_enumValueHasBeenSet;

                    /**
                     * <p>文本模式下的推理结果值。当 OutputMode=string 时返回。 若 VLM 无法得出结论，则返回 <strong>UNCERTAIN</strong>。</p>
                     */
                    std::string m_textValue;
                    bool m_textValueHasBeenSet;

                    /**
                     * <p>VLM 原始输出文本（未经过结构化校验）。</p>
                     */
                    std::string m_rawOutput;
                    bool m_rawOutputHasBeenSet;

                    /**
                     * <p>变量替换后的实际 Prompt（脱敏后）。</p>
                     */
                    std::string m_renderedPrompt;
                    bool m_renderedPromptHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_REASONINGRESULT_H_
