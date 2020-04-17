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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_DETECTINFOIDCARDDATA_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_DETECTINFOIDCARDDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * 核身身份证图片信息
                */
                class DetectInfoIdCardData : public AbstractModel
                {
                public:
                    DetectInfoIdCardData();
                    ~DetectInfoIdCardData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取OCR正面照片的base64编码。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OcrFront OCR正面照片的base64编码。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetOcrFront() const;

                    /**
                     * 设置OCR正面照片的base64编码。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param OcrFront OCR正面照片的base64编码。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOcrFront(const std::string& _ocrFront);

                    /**
                     * 判断参数 OcrFront 是否已赋值
                     * @return OcrFront 是否已赋值
                     */
                    bool OcrFrontHasBeenSet() const;

                    /**
                     * 获取OCR反面照片的base64编码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OcrBack OCR反面照片的base64编码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetOcrBack() const;

                    /**
                     * 设置OCR反面照片的base64编码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param OcrBack OCR反面照片的base64编码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOcrBack(const std::string& _ocrBack);

                    /**
                     * 判断参数 OcrBack 是否已赋值
                     * @return OcrBack 是否已赋值
                     */
                    bool OcrBackHasBeenSet() const;

                    /**
                     * 获取旋转裁边后的正面照片base64编码。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProcessedFrontImage 旋转裁边后的正面照片base64编码。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetProcessedFrontImage() const;

                    /**
                     * 设置旋转裁边后的正面照片base64编码。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ProcessedFrontImage 旋转裁边后的正面照片base64编码。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetProcessedFrontImage(const std::string& _processedFrontImage);

                    /**
                     * 判断参数 ProcessedFrontImage 是否已赋值
                     * @return ProcessedFrontImage 是否已赋值
                     */
                    bool ProcessedFrontImageHasBeenSet() const;

                    /**
                     * 获取旋转裁边后的背面照片base64编码。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProcessedBackImage 旋转裁边后的背面照片base64编码。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetProcessedBackImage() const;

                    /**
                     * 设置旋转裁边后的背面照片base64编码。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ProcessedBackImage 旋转裁边后的背面照片base64编码。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetProcessedBackImage(const std::string& _processedBackImage);

                    /**
                     * 判断参数 ProcessedBackImage 是否已赋值
                     * @return ProcessedBackImage 是否已赋值
                     */
                    bool ProcessedBackImageHasBeenSet() const;

                    /**
                     * 获取身份证正面人像图base64编码。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Avatar 身份证正面人像图base64编码。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetAvatar() const;

                    /**
                     * 设置身份证正面人像图base64编码。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Avatar 身份证正面人像图base64编码。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAvatar(const std::string& _avatar);

                    /**
                     * 判断参数 Avatar 是否已赋值
                     * @return Avatar 是否已赋值
                     */
                    bool AvatarHasBeenSet() const;

                private:

                    /**
                     * OCR正面照片的base64编码。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ocrFront;
                    bool m_ocrFrontHasBeenSet;

                    /**
                     * OCR反面照片的base64编码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ocrBack;
                    bool m_ocrBackHasBeenSet;

                    /**
                     * 旋转裁边后的正面照片base64编码。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_processedFrontImage;
                    bool m_processedFrontImageHasBeenSet;

                    /**
                     * 旋转裁边后的背面照片base64编码。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_processedBackImage;
                    bool m_processedBackImageHasBeenSet;

                    /**
                     * 身份证正面人像图base64编码。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_avatar;
                    bool m_avatarHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_DETECTINFOIDCARDDATA_H_
