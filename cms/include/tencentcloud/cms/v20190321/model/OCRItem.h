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

#ifndef TENCENTCLOUD_CMS_V20190321_MODEL_OCRITEM_H_
#define TENCENTCLOUD_CMS_V20190321_MODEL_OCRITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cms/v20190321/model/Coordinate.h>


namespace TencentCloud
{
    namespace Cms
    {
        namespace V20190321
        {
            namespace Model
            {
                /**
                * OCR详情
                */
                class OCRItem : public AbstractModel
                {
                public:
                    OCRItem();
                    ~OCRItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取检测到的文本坐标信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TextPosition 检测到的文本坐标信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Coordinate GetTextPosition() const;

                    /**
                     * 设置检测到的文本坐标信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _textPosition 检测到的文本坐标信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTextPosition(const Coordinate& _textPosition);

                    /**
                     * 判断参数 TextPosition 是否已赋值
                     * @return TextPosition 是否已赋值
                     * 
                     */
                    bool TextPositionHasBeenSet() const;

                    /**
                     * 获取文本命中恶意违规类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EvilType 文本命中恶意违规类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetEvilType() const;

                    /**
                     * 设置文本命中恶意违规类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _evilType 文本命中恶意违规类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEvilType(const int64_t& _evilType);

                    /**
                     * 判断参数 EvilType 是否已赋值
                     * @return EvilType 是否已赋值
                     * 
                     */
                    bool EvilTypeHasBeenSet() const;

                    /**
                     * 获取检测到的文本信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TextContent 检测到的文本信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTextContent() const;

                    /**
                     * 设置检测到的文本信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _textContent 检测到的文本信息
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取文本涉嫌违规分值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Rate 文本涉嫌违规分值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRate() const;

                    /**
                     * 设置文本涉嫌违规分值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rate 文本涉嫌违规分值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRate(const int64_t& _rate);

                    /**
                     * 判断参数 Rate 是否已赋值
                     * @return Rate 是否已赋值
                     * 
                     */
                    bool RateHasBeenSet() const;

                    /**
                     * 获取文本命中具体标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EvilLabel 文本命中具体标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEvilLabel() const;

                    /**
                     * 设置文本命中具体标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _evilLabel 文本命中具体标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEvilLabel(const std::string& _evilLabel);

                    /**
                     * 判断参数 EvilLabel 是否已赋值
                     * @return EvilLabel 是否已赋值
                     * 
                     */
                    bool EvilLabelHasBeenSet() const;

                    /**
                     * 获取文本命中违规的关键词
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Keywords 文本命中违规的关键词
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetKeywords() const;

                    /**
                     * 设置文本命中违规的关键词
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _keywords 文本命中违规的关键词
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKeywords(const std::vector<std::string>& _keywords);

                    /**
                     * 判断参数 Keywords 是否已赋值
                     * @return Keywords 是否已赋值
                     * 
                     */
                    bool KeywordsHasBeenSet() const;

                private:

                    /**
                     * 检测到的文本坐标信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Coordinate m_textPosition;
                    bool m_textPositionHasBeenSet;

                    /**
                     * 文本命中恶意违规类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_evilType;
                    bool m_evilTypeHasBeenSet;

                    /**
                     * 检测到的文本信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_textContent;
                    bool m_textContentHasBeenSet;

                    /**
                     * 文本涉嫌违规分值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_rate;
                    bool m_rateHasBeenSet;

                    /**
                     * 文本命中具体标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_evilLabel;
                    bool m_evilLabelHasBeenSet;

                    /**
                     * 文本命中违规的关键词
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_keywords;
                    bool m_keywordsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CMS_V20190321_MODEL_OCRITEM_H_
