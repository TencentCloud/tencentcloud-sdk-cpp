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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEVALIDIDCARDOCRRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEVALIDIDCARDOCRRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/IDCardInfo.h>
#include <tencentcloud/ocr/v20181119/model/TemporaryIDCardInfo.h>
#include <tencentcloud/ocr/v20181119/model/ResidencePermitInfo.h>
#include <tencentcloud/ocr/v20181119/model/PermanentResidencePermitInfo.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * RecognizeValidIDCardOCR返回参数结构体
                */
                class RecognizeValidIDCardOCRResponse : public AbstractModel
                {
                public:
                    RecognizeValidIDCardOCRResponse();
                    ~RecognizeValidIDCardOCRResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>卡证类型<br>身份证人像面<br>身份证国徽面</p><p>临时身份证人像面<br>临时身份证人像面</p><p>港澳台居住证人像面<br>港澳台居住证国徽面</p><p>外国人永久居留证人像面<br>外国人永久居留证国徽面</p>
                     * @return Type <p>卡证类型<br>身份证人像面<br>身份证国徽面</p><p>临时身份证人像面<br>临时身份证人像面</p><p>港澳台居住证人像面<br>港澳台居住证国徽面</p><p>外国人永久居留证人像面<br>外国人永久居留证国徽面</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>身份证信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IDCardInfo <p>身份证信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    IDCardInfo GetIDCardInfo() const;

                    /**
                     * 判断参数 IDCardInfo 是否已赋值
                     * @return IDCardInfo 是否已赋值
                     * 
                     */
                    bool IDCardInfoHasBeenSet() const;

                    /**
                     * 获取<p>临时身份证信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TemporaryIDCardInfo <p>临时身份证信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TemporaryIDCardInfo GetTemporaryIDCardInfo() const;

                    /**
                     * 判断参数 TemporaryIDCardInfo 是否已赋值
                     * @return TemporaryIDCardInfo 是否已赋值
                     * 
                     */
                    bool TemporaryIDCardInfoHasBeenSet() const;

                    /**
                     * 获取<p>港澳台居住证信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResidencePermitInfo <p>港澳台居住证信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ResidencePermitInfo GetResidencePermitInfo() const;

                    /**
                     * 判断参数 ResidencePermitInfo 是否已赋值
                     * @return ResidencePermitInfo 是否已赋值
                     * 
                     */
                    bool ResidencePermitInfoHasBeenSet() const;

                    /**
                     * 获取<p>外国人永久居留证信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PermanentResidencePermitInfo <p>外国人永久居留证信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    PermanentResidencePermitInfo GetPermanentResidencePermitInfo() const;

                    /**
                     * 判断参数 PermanentResidencePermitInfo 是否已赋值
                     * @return PermanentResidencePermitInfo 是否已赋值
                     * 
                     */
                    bool PermanentResidencePermitInfoHasBeenSet() const;

                private:

                    /**
                     * <p>卡证类型<br>身份证人像面<br>身份证国徽面</p><p>临时身份证人像面<br>临时身份证人像面</p><p>港澳台居住证人像面<br>港澳台居住证国徽面</p><p>外国人永久居留证人像面<br>外国人永久居留证国徽面</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>身份证信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    IDCardInfo m_iDCardInfo;
                    bool m_iDCardInfoHasBeenSet;

                    /**
                     * <p>临时身份证信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TemporaryIDCardInfo m_temporaryIDCardInfo;
                    bool m_temporaryIDCardInfoHasBeenSet;

                    /**
                     * <p>港澳台居住证信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ResidencePermitInfo m_residencePermitInfo;
                    bool m_residencePermitInfoHasBeenSet;

                    /**
                     * <p>外国人永久居留证信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    PermanentResidencePermitInfo m_permanentResidencePermitInfo;
                    bool m_permanentResidencePermitInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEVALIDIDCARDOCRRESPONSE_H_
