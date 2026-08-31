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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_WATERMARKINPUT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_WATERMARKINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/RawWatermarkParameter.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 媒体处理任务中的水印参数类型
                */
                class WatermarkInput : public AbstractModel
                {
                public:
                    WatermarkInput();
                    ~WatermarkInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>水印模板 ID。</p>
                     * @return Definition <p>水印模板 ID。</p>
                     * 
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置<p>水印模板 ID。</p>
                     * @param _definition <p>水印模板 ID。</p>
                     * 
                     */
                    void SetDefinition(const uint64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取<p>水印自定义参数，当 Definition 填 0 时有效。<br>该参数用于高度定制场景，建议您优先使用 Definition 指定水印参数。<br>水印自定义参数不支持截图打水印。</p>
                     * @return RawParameter <p>水印自定义参数，当 Definition 填 0 时有效。<br>该参数用于高度定制场景，建议您优先使用 Definition 指定水印参数。<br>水印自定义参数不支持截图打水印。</p>
                     * 
                     */
                    RawWatermarkParameter GetRawParameter() const;

                    /**
                     * 设置<p>水印自定义参数，当 Definition 填 0 时有效。<br>该参数用于高度定制场景，建议您优先使用 Definition 指定水印参数。<br>水印自定义参数不支持截图打水印。</p>
                     * @param _rawParameter <p>水印自定义参数，当 Definition 填 0 时有效。<br>该参数用于高度定制场景，建议您优先使用 Definition 指定水印参数。<br>水印自定义参数不支持截图打水印。</p>
                     * 
                     */
                    void SetRawParameter(const RawWatermarkParameter& _rawParameter);

                    /**
                     * 判断参数 RawParameter 是否已赋值
                     * @return RawParameter 是否已赋值
                     * 
                     */
                    bool RawParameterHasBeenSet() const;

                    /**
                     * 获取<p>文字内容，长度不超过100个字符。仅当水印类型为文字水印时填写。<br>文字水印不支持截图打水印。</p>
                     * @return TextContent <p>文字内容，长度不超过100个字符。仅当水印类型为文字水印时填写。<br>文字水印不支持截图打水印。</p>
                     * 
                     */
                    std::string GetTextContent() const;

                    /**
                     * 设置<p>文字内容，长度不超过100个字符。仅当水印类型为文字水印时填写。<br>文字水印不支持截图打水印。</p>
                     * @param _textContent <p>文字内容，长度不超过100个字符。仅当水印类型为文字水印时填写。<br>文字水印不支持截图打水印。</p>
                     * 
                     */
                    void SetTextContent(const std::string& _textContent);

                    /**
                     * 判断参数 TextContent 是否已赋值
                     * @return TextContent 是否已赋值
                     * 
                     */
                    bool TextContentHasBeenSet() const;

                    /**
                     * 获取<p>SVG 内容。长度不超过 2000000 个字符。仅当水印类型为 SVG 水印时填写。<br>SVG 水印不支持截图打水印。</p>
                     * @return SvgContent <p>SVG 内容。长度不超过 2000000 个字符。仅当水印类型为 SVG 水印时填写。<br>SVG 水印不支持截图打水印。</p>
                     * 
                     */
                    std::string GetSvgContent() const;

                    /**
                     * 设置<p>SVG 内容。长度不超过 2000000 个字符。仅当水印类型为 SVG 水印时填写。<br>SVG 水印不支持截图打水印。</p>
                     * @param _svgContent <p>SVG 内容。长度不超过 2000000 个字符。仅当水印类型为 SVG 水印时填写。<br>SVG 水印不支持截图打水印。</p>
                     * 
                     */
                    void SetSvgContent(const std::string& _svgContent);

                    /**
                     * 判断参数 SvgContent 是否已赋值
                     * @return SvgContent 是否已赋值
                     * 
                     */
                    bool SvgContentHasBeenSet() const;

                    /**
                     * 获取<p>水印的起始时间偏移，单位：秒。不填或填0，表示水印从画面出现时开始显现。</p><li>不填或填0，表示水印从画面开始就出现；</li><li>当数值大于0时（假设为 n），表示水印从画面开始的第 n 秒出现；</li><li>当数值小于0时（假设为 -n），表示水印从离画面结束 n 秒前开始出现。</li>注：只用于视频场景，截图不支持。
                     * @return StartTimeOffset <p>水印的起始时间偏移，单位：秒。不填或填0，表示水印从画面出现时开始显现。</p><li>不填或填0，表示水印从画面开始就出现；</li><li>当数值大于0时（假设为 n），表示水印从画面开始的第 n 秒出现；</li><li>当数值小于0时（假设为 -n），表示水印从离画面结束 n 秒前开始出现。</li>注：只用于视频场景，截图不支持。
                     * 
                     */
                    double GetStartTimeOffset() const;

                    /**
                     * 设置<p>水印的起始时间偏移，单位：秒。不填或填0，表示水印从画面出现时开始显现。</p><li>不填或填0，表示水印从画面开始就出现；</li><li>当数值大于0时（假设为 n），表示水印从画面开始的第 n 秒出现；</li><li>当数值小于0时（假设为 -n），表示水印从离画面结束 n 秒前开始出现。</li>注：只用于视频场景，截图不支持。
                     * @param _startTimeOffset <p>水印的起始时间偏移，单位：秒。不填或填0，表示水印从画面出现时开始显现。</p><li>不填或填0，表示水印从画面开始就出现；</li><li>当数值大于0时（假设为 n），表示水印从画面开始的第 n 秒出现；</li><li>当数值小于0时（假设为 -n），表示水印从离画面结束 n 秒前开始出现。</li>注：只用于视频场景，截图不支持。
                     * 
                     */
                    void SetStartTimeOffset(const double& _startTimeOffset);

                    /**
                     * 判断参数 StartTimeOffset 是否已赋值
                     * @return StartTimeOffset 是否已赋值
                     * 
                     */
                    bool StartTimeOffsetHasBeenSet() const;

                    /**
                     * 获取<p>水印的结束时间偏移，单位：秒。</p><li>不填或填0，表示水印持续到画面结束；</li><li>当数值大于0时（假设为 n），表示水印持续到第 n 秒时消失；</li><li>当数值小于0时（假设为 -n），表示水印持续到离画面结束 n 秒前消失。</li>注：只用于视频场景，截图不支持。
                     * @return EndTimeOffset <p>水印的结束时间偏移，单位：秒。</p><li>不填或填0，表示水印持续到画面结束；</li><li>当数值大于0时（假设为 n），表示水印持续到第 n 秒时消失；</li><li>当数值小于0时（假设为 -n），表示水印持续到离画面结束 n 秒前消失。</li>注：只用于视频场景，截图不支持。
                     * 
                     */
                    double GetEndTimeOffset() const;

                    /**
                     * 设置<p>水印的结束时间偏移，单位：秒。</p><li>不填或填0，表示水印持续到画面结束；</li><li>当数值大于0时（假设为 n），表示水印持续到第 n 秒时消失；</li><li>当数值小于0时（假设为 -n），表示水印持续到离画面结束 n 秒前消失。</li>注：只用于视频场景，截图不支持。
                     * @param _endTimeOffset <p>水印的结束时间偏移，单位：秒。</p><li>不填或填0，表示水印持续到画面结束；</li><li>当数值大于0时（假设为 n），表示水印持续到第 n 秒时消失；</li><li>当数值小于0时（假设为 -n），表示水印持续到离画面结束 n 秒前消失。</li>注：只用于视频场景，截图不支持。
                     * 
                     */
                    void SetEndTimeOffset(const double& _endTimeOffset);

                    /**
                     * 判断参数 EndTimeOffset 是否已赋值
                     * @return EndTimeOffset 是否已赋值
                     * 
                     */
                    bool EndTimeOffsetHasBeenSet() const;

                private:

                    /**
                     * <p>水印模板 ID。</p>
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * <p>水印自定义参数，当 Definition 填 0 时有效。<br>该参数用于高度定制场景，建议您优先使用 Definition 指定水印参数。<br>水印自定义参数不支持截图打水印。</p>
                     */
                    RawWatermarkParameter m_rawParameter;
                    bool m_rawParameterHasBeenSet;

                    /**
                     * <p>文字内容，长度不超过100个字符。仅当水印类型为文字水印时填写。<br>文字水印不支持截图打水印。</p>
                     */
                    std::string m_textContent;
                    bool m_textContentHasBeenSet;

                    /**
                     * <p>SVG 内容。长度不超过 2000000 个字符。仅当水印类型为 SVG 水印时填写。<br>SVG 水印不支持截图打水印。</p>
                     */
                    std::string m_svgContent;
                    bool m_svgContentHasBeenSet;

                    /**
                     * <p>水印的起始时间偏移，单位：秒。不填或填0，表示水印从画面出现时开始显现。</p><li>不填或填0，表示水印从画面开始就出现；</li><li>当数值大于0时（假设为 n），表示水印从画面开始的第 n 秒出现；</li><li>当数值小于0时（假设为 -n），表示水印从离画面结束 n 秒前开始出现。</li>注：只用于视频场景，截图不支持。
                     */
                    double m_startTimeOffset;
                    bool m_startTimeOffsetHasBeenSet;

                    /**
                     * <p>水印的结束时间偏移，单位：秒。</p><li>不填或填0，表示水印持续到画面结束；</li><li>当数值大于0时（假设为 n），表示水印持续到第 n 秒时消失；</li><li>当数值小于0时（假设为 -n），表示水印持续到离画面结束 n 秒前消失。</li>注：只用于视频场景，截图不支持。
                     */
                    double m_endTimeOffset;
                    bool m_endTimeOffsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_WATERMARKINPUT_H_
