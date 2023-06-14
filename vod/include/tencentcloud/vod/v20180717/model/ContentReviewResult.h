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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CONTENTREVIEWRESULT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CONTENTREVIEWRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/PornImageResult.h>
#include <tencentcloud/vod/v20180717/model/TerrorismImageResult.h>
#include <tencentcloud/vod/v20180717/model/PoliticalImageResult.h>
#include <tencentcloud/vod/v20180717/model/ContentReviewOcrResult.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 图片智能内容识别任务结果
                */
                class ContentReviewResult : public AbstractModel
                {
                public:
                    ContentReviewResult();
                    ~ContentReviewResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取结果类型，取值范围：
<li>Porn.Image：图片画面中的鉴别令人反感的信息结果；</li>
<li>Terrorism.Image：图片画面中的鉴别令人不安全的信息结果；</li>
<li>Political.Image：图片画面中的鉴别令人不适宜信息结果；</li>
<li>Porn.Ocr：图片 OCR 文字中的鉴别令人反感的信息结果；</li>
<li>Terrorism.Ocr：图片 OCR 文字中的鉴别令人不安全的信息结果；</li>
<li>Political.Ocr：图片 OCR 文字中的鉴别令人不适宜信息结果。</li>
                     * @return Type 结果类型，取值范围：
<li>Porn.Image：图片画面中的鉴别令人反感的信息结果；</li>
<li>Terrorism.Image：图片画面中的鉴别令人不安全的信息结果；</li>
<li>Political.Image：图片画面中的鉴别令人不适宜信息结果；</li>
<li>Porn.Ocr：图片 OCR 文字中的鉴别令人反感的信息结果；</li>
<li>Terrorism.Ocr：图片 OCR 文字中的鉴别令人不安全的信息结果；</li>
<li>Political.Ocr：图片 OCR 文字中的鉴别令人不适宜信息结果。</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置结果类型，取值范围：
<li>Porn.Image：图片画面中的鉴别令人反感的信息结果；</li>
<li>Terrorism.Image：图片画面中的鉴别令人不安全的信息结果；</li>
<li>Political.Image：图片画面中的鉴别令人不适宜信息结果；</li>
<li>Porn.Ocr：图片 OCR 文字中的鉴别令人反感的信息结果；</li>
<li>Terrorism.Ocr：图片 OCR 文字中的鉴别令人不安全的信息结果；</li>
<li>Political.Ocr：图片 OCR 文字中的鉴别令人不适宜信息结果。</li>
                     * @param _type 结果类型，取值范围：
<li>Porn.Image：图片画面中的鉴别令人反感的信息结果；</li>
<li>Terrorism.Image：图片画面中的鉴别令人不安全的信息结果；</li>
<li>Political.Image：图片画面中的鉴别令人不适宜信息结果；</li>
<li>Porn.Ocr：图片 OCR 文字中的鉴别令人反感的信息结果；</li>
<li>Terrorism.Ocr：图片 OCR 文字中的鉴别令人不安全的信息结果；</li>
<li>Political.Ocr：图片 OCR 文字中的鉴别令人不适宜信息结果。</li>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取图片画面中的鉴别令人反感的信息结果，当 Type 为 Porn.Image 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PornImageResult 图片画面中的鉴别令人反感的信息结果，当 Type 为 Porn.Image 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    PornImageResult GetPornImageResult() const;

                    /**
                     * 设置图片画面中的鉴别令人反感的信息结果，当 Type 为 Porn.Image 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pornImageResult 图片画面中的鉴别令人反感的信息结果，当 Type 为 Porn.Image 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPornImageResult(const PornImageResult& _pornImageResult);

                    /**
                     * 判断参数 PornImageResult 是否已赋值
                     * @return PornImageResult 是否已赋值
                     * 
                     */
                    bool PornImageResultHasBeenSet() const;

                    /**
                     * 获取图片画面中的鉴别令人不安全的信息结果，当 Type 为 Terrorism.Image 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TerrorismImageResult 图片画面中的鉴别令人不安全的信息结果，当 Type 为 Terrorism.Image 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TerrorismImageResult GetTerrorismImageResult() const;

                    /**
                     * 设置图片画面中的鉴别令人不安全的信息结果，当 Type 为 Terrorism.Image 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _terrorismImageResult 图片画面中的鉴别令人不安全的信息结果，当 Type 为 Terrorism.Image 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTerrorismImageResult(const TerrorismImageResult& _terrorismImageResult);

                    /**
                     * 判断参数 TerrorismImageResult 是否已赋值
                     * @return TerrorismImageResult 是否已赋值
                     * 
                     */
                    bool TerrorismImageResultHasBeenSet() const;

                    /**
                     * 获取图片画面中的鉴别令人不适宜信息结果，当 Type 为 Political.Image 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PoliticalImageResult 图片画面中的鉴别令人不适宜信息结果，当 Type 为 Political.Image 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    PoliticalImageResult GetPoliticalImageResult() const;

                    /**
                     * 设置图片画面中的鉴别令人不适宜信息结果，当 Type 为 Political.Image 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _politicalImageResult 图片画面中的鉴别令人不适宜信息结果，当 Type 为 Political.Image 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPoliticalImageResult(const PoliticalImageResult& _politicalImageResult);

                    /**
                     * 判断参数 PoliticalImageResult 是否已赋值
                     * @return PoliticalImageResult 是否已赋值
                     * 
                     */
                    bool PoliticalImageResultHasBeenSet() const;

                    /**
                     * 获取图片 OCR 文字中的鉴别令人反感的信息结果，当 Type 为 Porn.Ocr 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PornOcrResult 图片 OCR 文字中的鉴别令人反感的信息结果，当 Type 为 Porn.Ocr 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ContentReviewOcrResult GetPornOcrResult() const;

                    /**
                     * 设置图片 OCR 文字中的鉴别令人反感的信息结果，当 Type 为 Porn.Ocr 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pornOcrResult 图片 OCR 文字中的鉴别令人反感的信息结果，当 Type 为 Porn.Ocr 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPornOcrResult(const ContentReviewOcrResult& _pornOcrResult);

                    /**
                     * 判断参数 PornOcrResult 是否已赋值
                     * @return PornOcrResult 是否已赋值
                     * 
                     */
                    bool PornOcrResultHasBeenSet() const;

                    /**
                     * 获取图片 OCR 中的鉴别令人不安全的信息结果，当 Type 为 Terrorism.Ocr 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TerrorismOcrResult 图片 OCR 中的鉴别令人不安全的信息结果，当 Type 为 Terrorism.Ocr 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ContentReviewOcrResult GetTerrorismOcrResult() const;

                    /**
                     * 设置图片 OCR 中的鉴别令人不安全的信息结果，当 Type 为 Terrorism.Ocr 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _terrorismOcrResult 图片 OCR 中的鉴别令人不安全的信息结果，当 Type 为 Terrorism.Ocr 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTerrorismOcrResult(const ContentReviewOcrResult& _terrorismOcrResult);

                    /**
                     * 判断参数 TerrorismOcrResult 是否已赋值
                     * @return TerrorismOcrResult 是否已赋值
                     * 
                     */
                    bool TerrorismOcrResultHasBeenSet() const;

                    /**
                     * 获取图片 OCR 文字中的鉴别令人不适宜信息结果，当 Type 为 Political.Ocr 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PoliticalOcrResult 图片 OCR 文字中的鉴别令人不适宜信息结果，当 Type 为 Political.Ocr 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ContentReviewOcrResult GetPoliticalOcrResult() const;

                    /**
                     * 设置图片 OCR 文字中的鉴别令人不适宜信息结果，当 Type 为 Political.Ocr 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _politicalOcrResult 图片 OCR 文字中的鉴别令人不适宜信息结果，当 Type 为 Political.Ocr 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPoliticalOcrResult(const ContentReviewOcrResult& _politicalOcrResult);

                    /**
                     * 判断参数 PoliticalOcrResult 是否已赋值
                     * @return PoliticalOcrResult 是否已赋值
                     * 
                     */
                    bool PoliticalOcrResultHasBeenSet() const;

                private:

                    /**
                     * 结果类型，取值范围：
<li>Porn.Image：图片画面中的鉴别令人反感的信息结果；</li>
<li>Terrorism.Image：图片画面中的鉴别令人不安全的信息结果；</li>
<li>Political.Image：图片画面中的鉴别令人不适宜信息结果；</li>
<li>Porn.Ocr：图片 OCR 文字中的鉴别令人反感的信息结果；</li>
<li>Terrorism.Ocr：图片 OCR 文字中的鉴别令人不安全的信息结果；</li>
<li>Political.Ocr：图片 OCR 文字中的鉴别令人不适宜信息结果。</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 图片画面中的鉴别令人反感的信息结果，当 Type 为 Porn.Image 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    PornImageResult m_pornImageResult;
                    bool m_pornImageResultHasBeenSet;

                    /**
                     * 图片画面中的鉴别令人不安全的信息结果，当 Type 为 Terrorism.Image 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TerrorismImageResult m_terrorismImageResult;
                    bool m_terrorismImageResultHasBeenSet;

                    /**
                     * 图片画面中的鉴别令人不适宜信息结果，当 Type 为 Political.Image 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    PoliticalImageResult m_politicalImageResult;
                    bool m_politicalImageResultHasBeenSet;

                    /**
                     * 图片 OCR 文字中的鉴别令人反感的信息结果，当 Type 为 Porn.Ocr 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ContentReviewOcrResult m_pornOcrResult;
                    bool m_pornOcrResultHasBeenSet;

                    /**
                     * 图片 OCR 中的鉴别令人不安全的信息结果，当 Type 为 Terrorism.Ocr 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ContentReviewOcrResult m_terrorismOcrResult;
                    bool m_terrorismOcrResultHasBeenSet;

                    /**
                     * 图片 OCR 文字中的鉴别令人不适宜信息结果，当 Type 为 Political.Ocr 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ContentReviewOcrResult m_politicalOcrResult;
                    bool m_politicalOcrResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CONTENTREVIEWRESULT_H_
