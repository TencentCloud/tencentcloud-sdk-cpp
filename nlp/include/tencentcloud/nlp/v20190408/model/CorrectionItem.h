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

#ifndef TENCENTCLOUD_NLP_V20190408_MODEL_CORRECTIONITEM_H_
#define TENCENTCLOUD_NLP_V20190408_MODEL_CORRECTIONITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Nlp
    {
        namespace V20190408
        {
            namespace Model
            {
                /**
                * 纠错结果列表
                */
                class CorrectionItem : public AbstractModel
                {
                public:
                    CorrectionItem();
                    ~CorrectionItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取纠错句子的序号。
                     * @return Order 纠错句子的序号。
                     * 
                     */
                    int64_t GetOrder() const;

                    /**
                     * 设置纠错句子的序号。
                     * @param _order 纠错句子的序号。
                     * 
                     */
                    void SetOrder(const int64_t& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取错误的起始位置，从0开始。
                     * @return BeginOffset 错误的起始位置，从0开始。
                     * 
                     */
                    int64_t GetBeginOffset() const;

                    /**
                     * 设置错误的起始位置，从0开始。
                     * @param _beginOffset 错误的起始位置，从0开始。
                     * 
                     */
                    void SetBeginOffset(const int64_t& _beginOffset);

                    /**
                     * 判断参数 BeginOffset 是否已赋值
                     * @return BeginOffset 是否已赋值
                     * 
                     */
                    bool BeginOffsetHasBeenSet() const;

                    /**
                     * 获取错误内容长度。
                     * @return Len 错误内容长度。
                     * 
                     */
                    int64_t GetLen() const;

                    /**
                     * 设置错误内容长度。
                     * @param _len 错误内容长度。
                     * 
                     */
                    void SetLen(const int64_t& _len);

                    /**
                     * 判断参数 Len 是否已赋值
                     * @return Len 是否已赋值
                     * 
                     */
                    bool LenHasBeenSet() const;

                    /**
                     * 获取错误内容。
                     * @return Word 错误内容。
                     * 
                     */
                    std::string GetWord() const;

                    /**
                     * 设置错误内容。
                     * @param _word 错误内容。
                     * 
                     */
                    void SetWord(const std::string& _word);

                    /**
                     * 判断参数 Word 是否已赋值
                     * @return Word 是否已赋值
                     * 
                     */
                    bool WordHasBeenSet() const;

                    /**
                     * 获取纠错结果，当为删除类错误时，结果为null。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CorrectWord 纠错结果，当为删除类错误时，结果为null。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetCorrectWord() const;

                    /**
                     * 设置纠错结果，当为删除类错误时，结果为null。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _correctWord 纠错结果，当为删除类错误时，结果为null。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCorrectWord(const std::vector<std::string>& _correctWord);

                    /**
                     * 判断参数 CorrectWord 是否已赋值
                     * @return CorrectWord 是否已赋值
                     * 
                     */
                    bool CorrectWordHasBeenSet() const;

                    /**
                     * 获取纠错类型。0：替换；1：插入；2：删除。
                     * @return CorrectionType 纠错类型。0：替换；1：插入；2：删除。
                     * 
                     */
                    int64_t GetCorrectionType() const;

                    /**
                     * 设置纠错类型。0：替换；1：插入；2：删除。
                     * @param _correctionType 纠错类型。0：替换；1：插入；2：删除。
                     * 
                     */
                    void SetCorrectionType(const int64_t& _correctionType);

                    /**
                     * 判断参数 CorrectionType 是否已赋值
                     * @return CorrectionType 是否已赋值
                     * 
                     */
                    bool CorrectionTypeHasBeenSet() const;

                    /**
                     * 获取纠错信息置信度。0：error；1：warning；error的置信度更高。（仅供参考）
                     * @return Confidence 纠错信息置信度。0：error；1：warning；error的置信度更高。（仅供参考）
                     * 
                     */
                    int64_t GetConfidence() const;

                    /**
                     * 设置纠错信息置信度。0：error；1：warning；error的置信度更高。（仅供参考）
                     * @param _confidence 纠错信息置信度。0：error；1：warning；error的置信度更高。（仅供参考）
                     * 
                     */
                    void SetConfidence(const int64_t& _confidence);

                    /**
                     * 判断参数 Confidence 是否已赋值
                     * @return Confidence 是否已赋值
                     * 
                     */
                    bool ConfidenceHasBeenSet() const;

                    /**
                     * 获取纠错信息中文描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DescriptionZh 纠错信息中文描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescriptionZh() const;

                    /**
                     * 设置纠错信息中文描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _descriptionZh 纠错信息中文描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDescriptionZh(const std::string& _descriptionZh);

                    /**
                     * 判断参数 DescriptionZh 是否已赋值
                     * @return DescriptionZh 是否已赋值
                     * 
                     */
                    bool DescriptionZhHasBeenSet() const;

                    /**
                     * 获取纠错信息英文描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DescriptionEn 纠错信息英文描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescriptionEn() const;

                    /**
                     * 设置纠错信息英文描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _descriptionEn 纠错信息英文描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDescriptionEn(const std::string& _descriptionEn);

                    /**
                     * 判断参数 DescriptionEn 是否已赋值
                     * @return DescriptionEn 是否已赋值
                     * 
                     */
                    bool DescriptionEnHasBeenSet() const;

                private:

                    /**
                     * 纠错句子的序号。
                     */
                    int64_t m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 错误的起始位置，从0开始。
                     */
                    int64_t m_beginOffset;
                    bool m_beginOffsetHasBeenSet;

                    /**
                     * 错误内容长度。
                     */
                    int64_t m_len;
                    bool m_lenHasBeenSet;

                    /**
                     * 错误内容。
                     */
                    std::string m_word;
                    bool m_wordHasBeenSet;

                    /**
                     * 纠错结果，当为删除类错误时，结果为null。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_correctWord;
                    bool m_correctWordHasBeenSet;

                    /**
                     * 纠错类型。0：替换；1：插入；2：删除。
                     */
                    int64_t m_correctionType;
                    bool m_correctionTypeHasBeenSet;

                    /**
                     * 纠错信息置信度。0：error；1：warning；error的置信度更高。（仅供参考）
                     */
                    int64_t m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * 纠错信息中文描述。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_descriptionZh;
                    bool m_descriptionZhHasBeenSet;

                    /**
                     * 纠错信息英文描述。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_descriptionEn;
                    bool m_descriptionEnHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_NLP_V20190408_MODEL_CORRECTIONITEM_H_
