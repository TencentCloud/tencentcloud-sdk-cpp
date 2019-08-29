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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_WATERMARKINPUT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_WATERMARKINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 视频处理任务中的水印参数类型
                */
                class WatermarkInput : public AbstractModel
                {
                public:
                    WatermarkInput();
                    ~WatermarkInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取水印模板 ID。
                     * @return Definition 水印模板 ID。
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置水印模板 ID。
                     * @param Definition 水印模板 ID。
                     */
                    void SetDefinition(const uint64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取文字内容，长度不超过100个字符。仅当水印类型为文字水印时填写。
                     * @return TextContent 文字内容，长度不超过100个字符。仅当水印类型为文字水印时填写。
                     */
                    std::string GetTextContent() const;

                    /**
                     * 设置文字内容，长度不超过100个字符。仅当水印类型为文字水印时填写。
                     * @param TextContent 文字内容，长度不超过100个字符。仅当水印类型为文字水印时填写。
                     */
                    void SetTextContent(const std::string& _textContent);

                    /**
                     * 判断参数 TextContent 是否已赋值
                     * @return TextContent 是否已赋值
                     */
                    bool TextContentHasBeenSet() const;

                    /**
                     * 获取SVG 内容。长度不超过 2000000 个字符。仅当水印类型为 SVG 水印时填写。
                     * @return SvgContent SVG 内容。长度不超过 2000000 个字符。仅当水印类型为 SVG 水印时填写。
                     */
                    std::string GetSvgContent() const;

                    /**
                     * 设置SVG 内容。长度不超过 2000000 个字符。仅当水印类型为 SVG 水印时填写。
                     * @param SvgContent SVG 内容。长度不超过 2000000 个字符。仅当水印类型为 SVG 水印时填写。
                     */
                    void SetSvgContent(const std::string& _svgContent);

                    /**
                     * 判断参数 SvgContent 是否已赋值
                     * @return SvgContent 是否已赋值
                     */
                    bool SvgContentHasBeenSet() const;

                private:

                    /**
                     * 水印模板 ID。
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * 文字内容，长度不超过100个字符。仅当水印类型为文字水印时填写。
                     */
                    std::string m_textContent;
                    bool m_textContentHasBeenSet;

                    /**
                     * SVG 内容。长度不超过 2000000 个字符。仅当水印类型为 SVG 水印时填写。
                     */
                    std::string m_svgContent;
                    bool m_svgContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_WATERMARKINPUT_H_
