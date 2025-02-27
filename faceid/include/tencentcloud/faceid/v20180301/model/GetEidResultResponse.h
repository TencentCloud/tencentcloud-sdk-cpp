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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_GETEIDRESULTRESPONSE_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_GETEIDRESULTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/faceid/v20180301/model/DetectInfoText.h>
#include <tencentcloud/faceid/v20180301/model/DetectInfoIdCardData.h>
#include <tencentcloud/faceid/v20180301/model/DetectInfoBestFrame.h>
#include <tencentcloud/faceid/v20180301/model/EidInfo.h>
#include <tencentcloud/faceid/v20180301/model/IntentionVerifyData.h>
#include <tencentcloud/faceid/v20180301/model/IntentionQuestionResult.h>
#include <tencentcloud/faceid/v20180301/model/IntentionActionResult.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * GetEidResult返回参数结构体
                */
                class GetEidResultResponse : public AbstractModel
                {
                public:
                    GetEidResultResponse();
                    ~GetEidResultResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取文本类信息。
- 基于对敏感信息的保护，验证使用的姓名和身份证号统一通过加密后从EidInfo参数中返回。
- 如需获取请在控制台申请返回身份信息，详见[E证通获取实名信息指引](https://cloud.tencent.com/document/product/1007/63370)。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Text 文本类信息。
- 基于对敏感信息的保护，验证使用的姓名和身份证号统一通过加密后从EidInfo参数中返回。
- 如需获取请在控制台申请返回身份信息，详见[E证通获取实名信息指引](https://cloud.tencent.com/document/product/1007/63370)。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DetectInfoText GetText() const;

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     * 
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取身份证照片信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IdCardData 身份证照片信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DetectInfoIdCardData GetIdCardData() const;

                    /**
                     * 判断参数 IdCardData 是否已赋值
                     * @return IdCardData 是否已赋值
                     * 
                     */
                    bool IdCardDataHasBeenSet() const;

                    /**
                     * 获取最佳帧信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BestFrame 最佳帧信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DetectInfoBestFrame GetBestFrame() const;

                    /**
                     * 判断参数 BestFrame 是否已赋值
                     * @return BestFrame 是否已赋值
                     * 
                     */
                    bool BestFrameHasBeenSet() const;

                    /**
                     * 获取Eid信息。
- EidInfo字段只有在人脸核身控制台完成“申请返回实名信息”之后返回，操作指引详见 [E证通获取实名信息指引](https://cloud.tencent.com/document/product/1007/63370)。
- Eid信息包括商户下用户唯一标识以及加密后的姓名、身份证号信息。
- 解密方式详见 [E证通获取实名信息指引](https://cloud.tencent.com/document/product/1007/63370)
- 只有整个核验流程完成之后才能返回该字段信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EidInfo Eid信息。
- EidInfo字段只有在人脸核身控制台完成“申请返回实名信息”之后返回，操作指引详见 [E证通获取实名信息指引](https://cloud.tencent.com/document/product/1007/63370)。
- Eid信息包括商户下用户唯一标识以及加密后的姓名、身份证号信息。
- 解密方式详见 [E证通获取实名信息指引](https://cloud.tencent.com/document/product/1007/63370)
- 只有整个核验流程完成之后才能返回该字段信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    EidInfo GetEidInfo() const;

                    /**
                     * 判断参数 EidInfo 是否已赋值
                     * @return EidInfo 是否已赋值
                     * 
                     */
                    bool EidInfoHasBeenSet() const;

                    /**
                     * 获取意愿核身朗读模式相关信息。
- 若未使用意愿核身朗读功能，该字段返回值可以不处理。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IntentionVerifyData 意愿核身朗读模式相关信息。
- 若未使用意愿核身朗读功能，该字段返回值可以不处理。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    IntentionVerifyData GetIntentionVerifyData() const;

                    /**
                     * 判断参数 IntentionVerifyData 是否已赋值
                     * @return IntentionVerifyData 是否已赋值
                     * 
                     */
                    bool IntentionVerifyDataHasBeenSet() const;

                    /**
                     * 获取意愿核身问答模式相关信息。
- 若未使用意愿核身问答模式功能，该字段返回值可以不处理。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IntentionQuestionResult 意愿核身问答模式相关信息。
- 若未使用意愿核身问答模式功能，该字段返回值可以不处理。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    IntentionQuestionResult GetIntentionQuestionResult() const;

                    /**
                     * 判断参数 IntentionQuestionResult 是否已赋值
                     * @return IntentionQuestionResult 是否已赋值
                     * 
                     */
                    bool IntentionQuestionResultHasBeenSet() const;

                    /**
                     * 获取意愿核身点头确认模式的结果信息。
- 若未使用该意愿核身功能，该字段返回值可以不处理。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IntentionActionResult 意愿核身点头确认模式的结果信息。
- 若未使用该意愿核身功能，该字段返回值可以不处理。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    IntentionActionResult GetIntentionActionResult() const;

                    /**
                     * 判断参数 IntentionActionResult 是否已赋值
                     * @return IntentionActionResult 是否已赋值
                     * 
                     */
                    bool IntentionActionResultHasBeenSet() const;

                private:

                    /**
                     * 文本类信息。
- 基于对敏感信息的保护，验证使用的姓名和身份证号统一通过加密后从EidInfo参数中返回。
- 如需获取请在控制台申请返回身份信息，详见[E证通获取实名信息指引](https://cloud.tencent.com/document/product/1007/63370)。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DetectInfoText m_text;
                    bool m_textHasBeenSet;

                    /**
                     * 身份证照片信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DetectInfoIdCardData m_idCardData;
                    bool m_idCardDataHasBeenSet;

                    /**
                     * 最佳帧信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DetectInfoBestFrame m_bestFrame;
                    bool m_bestFrameHasBeenSet;

                    /**
                     * Eid信息。
- EidInfo字段只有在人脸核身控制台完成“申请返回实名信息”之后返回，操作指引详见 [E证通获取实名信息指引](https://cloud.tencent.com/document/product/1007/63370)。
- Eid信息包括商户下用户唯一标识以及加密后的姓名、身份证号信息。
- 解密方式详见 [E证通获取实名信息指引](https://cloud.tencent.com/document/product/1007/63370)
- 只有整个核验流程完成之后才能返回该字段信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EidInfo m_eidInfo;
                    bool m_eidInfoHasBeenSet;

                    /**
                     * 意愿核身朗读模式相关信息。
- 若未使用意愿核身朗读功能，该字段返回值可以不处理。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    IntentionVerifyData m_intentionVerifyData;
                    bool m_intentionVerifyDataHasBeenSet;

                    /**
                     * 意愿核身问答模式相关信息。
- 若未使用意愿核身问答模式功能，该字段返回值可以不处理。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    IntentionQuestionResult m_intentionQuestionResult;
                    bool m_intentionQuestionResultHasBeenSet;

                    /**
                     * 意愿核身点头确认模式的结果信息。
- 若未使用该意愿核身功能，该字段返回值可以不处理。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    IntentionActionResult m_intentionActionResult;
                    bool m_intentionActionResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_GETEIDRESULTRESPONSE_H_
