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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_GETDETECTINFOENHANCEDRESPONSE_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_GETDETECTINFOENHANCEDRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/faceid/v20180301/model/DetectInfoText.h>
#include <tencentcloud/faceid/v20180301/model/DetectInfoIdCardData.h>
#include <tencentcloud/faceid/v20180301/model/DetectInfoBestFrame.h>
#include <tencentcloud/faceid/v20180301/model/DetectInfoVideoData.h>
#include <tencentcloud/faceid/v20180301/model/Encryption.h>
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
                * GetDetectInfoEnhanced返回参数结构体
                */
                class GetDetectInfoEnhancedResponse : public AbstractModel
                {
                public:
                    GetDetectInfoEnhancedResponse();
                    ~GetDetectInfoEnhancedResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取文本类信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Text 文本类信息。
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
                     * 获取视频信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VideoData 视频信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DetectInfoVideoData GetVideoData() const;

                    /**
                     * 判断参数 VideoData 是否已赋值
                     * @return VideoData 是否已赋值
                     * 
                     */
                    bool VideoDataHasBeenSet() const;

                    /**
                     * 获取敏感数据加密信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Encryption 敏感数据加密信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Encryption GetEncryption() const;

                    /**
                     * 判断参数 Encryption 是否已赋值
                     * @return Encryption 是否已赋值
                     * 
                     */
                    bool EncryptionHasBeenSet() const;

                    /**
                     * 获取意愿核身朗读模式结果信息。
- 若未使用意愿核身功能，该字段返回值可以不处理。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IntentionVerifyData 意愿核身朗读模式结果信息。
- 若未使用意愿核身功能，该字段返回值可以不处理。
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
                     * 获取意愿核身问答模式结果。

- 若未使用该意愿核身功能，该字段返回值可以不处理。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IntentionQuestionResult 意愿核身问答模式结果。

- 若未使用该意愿核身功能，该字段返回值可以不处理。
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

                    /**
                     * 获取加密后的数据。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EncryptedBody 加密后的数据。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEncryptedBody() const;

                    /**
                     * 判断参数 EncryptedBody 是否已赋值
                     * @return EncryptedBody 是否已赋值
                     * 
                     */
                    bool EncryptedBodyHasBeenSet() const;

                private:

                    /**
                     * 文本类信息。
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
                     * 视频信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DetectInfoVideoData m_videoData;
                    bool m_videoDataHasBeenSet;

                    /**
                     * 敏感数据加密信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Encryption m_encryption;
                    bool m_encryptionHasBeenSet;

                    /**
                     * 意愿核身朗读模式结果信息。
- 若未使用意愿核身功能，该字段返回值可以不处理。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    IntentionVerifyData m_intentionVerifyData;
                    bool m_intentionVerifyDataHasBeenSet;

                    /**
                     * 意愿核身问答模式结果。

- 若未使用该意愿核身功能，该字段返回值可以不处理。
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

                    /**
                     * 加密后的数据。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_encryptedBody;
                    bool m_encryptedBodyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_GETDETECTINFOENHANCEDRESPONSE_H_
