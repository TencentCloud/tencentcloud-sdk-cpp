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
                * 核身身份证图片信息。
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
                     * 
                     */
                    std::string GetOcrFront() const;

                    /**
                     * 设置OCR正面照片的base64编码。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ocrFront OCR正面照片的base64编码。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOcrFront(const std::string& _ocrFront);

                    /**
                     * 判断参数 OcrFront 是否已赋值
                     * @return OcrFront 是否已赋值
                     * 
                     */
                    bool OcrFrontHasBeenSet() const;

                    /**
                     * 获取OCR反面照片的base64编码。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OcrBack OCR反面照片的base64编码。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOcrBack() const;

                    /**
                     * 设置OCR反面照片的base64编码。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ocrBack OCR反面照片的base64编码。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOcrBack(const std::string& _ocrBack);

                    /**
                     * 判断参数 OcrBack 是否已赋值
                     * @return OcrBack 是否已赋值
                     * 
                     */
                    bool OcrBackHasBeenSet() const;

                    /**
                     * 获取旋转裁边后的正面照片base64编码。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProcessedFrontImage 旋转裁边后的正面照片base64编码。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProcessedFrontImage() const;

                    /**
                     * 设置旋转裁边后的正面照片base64编码。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _processedFrontImage 旋转裁边后的正面照片base64编码。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProcessedFrontImage(const std::string& _processedFrontImage);

                    /**
                     * 判断参数 ProcessedFrontImage 是否已赋值
                     * @return ProcessedFrontImage 是否已赋值
                     * 
                     */
                    bool ProcessedFrontImageHasBeenSet() const;

                    /**
                     * 获取旋转裁边后的背面照片base64编码。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProcessedBackImage 旋转裁边后的背面照片base64编码。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProcessedBackImage() const;

                    /**
                     * 设置旋转裁边后的背面照片base64编码。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _processedBackImage 旋转裁边后的背面照片base64编码。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProcessedBackImage(const std::string& _processedBackImage);

                    /**
                     * 判断参数 ProcessedBackImage 是否已赋值
                     * @return ProcessedBackImage 是否已赋值
                     * 
                     */
                    bool ProcessedBackImageHasBeenSet() const;

                    /**
                     * 获取身份证正面人像图base64编码。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Avatar 身份证正面人像图base64编码。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAvatar() const;

                    /**
                     * 设置身份证正面人像图base64编码。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _avatar 身份证正面人像图base64编码。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAvatar(const std::string& _avatar);

                    /**
                     * 判断参数 Avatar 是否已赋值
                     * @return Avatar 是否已赋值
                     * 
                     */
                    bool AvatarHasBeenSet() const;

                    /**
                     * 获取身份证人像面告警码。
- 开启身份证告警功能后才会返回。
- 返回数组中可能出现的告警码如下：
    - -9100 身份证有效日期不合法告警。
    - -9101 身份证边框不完整告警。
    - -9102 身份证复印件告警。
    - -9103 身份证翻拍告警。
    - -9105 身份证框内遮挡告警。
    - -9104 临时身份证告警。
    - -9106 身份证 PS 告警（疑似存在PS痕迹）。
    - -9107 身份证反光告警。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WarnInfos 身份证人像面告警码。
- 开启身份证告警功能后才会返回。
- 返回数组中可能出现的告警码如下：
    - -9100 身份证有效日期不合法告警。
    - -9101 身份证边框不完整告警。
    - -9102 身份证复印件告警。
    - -9103 身份证翻拍告警。
    - -9105 身份证框内遮挡告警。
    - -9104 临时身份证告警。
    - -9106 身份证 PS 告警（疑似存在PS痕迹）。
    - -9107 身份证反光告警。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<int64_t> GetWarnInfos() const;

                    /**
                     * 设置身份证人像面告警码。
- 开启身份证告警功能后才会返回。
- 返回数组中可能出现的告警码如下：
    - -9100 身份证有效日期不合法告警。
    - -9101 身份证边框不完整告警。
    - -9102 身份证复印件告警。
    - -9103 身份证翻拍告警。
    - -9105 身份证框内遮挡告警。
    - -9104 临时身份证告警。
    - -9106 身份证 PS 告警（疑似存在PS痕迹）。
    - -9107 身份证反光告警。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _warnInfos 身份证人像面告警码。
- 开启身份证告警功能后才会返回。
- 返回数组中可能出现的告警码如下：
    - -9100 身份证有效日期不合法告警。
    - -9101 身份证边框不完整告警。
    - -9102 身份证复印件告警。
    - -9103 身份证翻拍告警。
    - -9105 身份证框内遮挡告警。
    - -9104 临时身份证告警。
    - -9106 身份证 PS 告警（疑似存在PS痕迹）。
    - -9107 身份证反光告警。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWarnInfos(const std::vector<int64_t>& _warnInfos);

                    /**
                     * 判断参数 WarnInfos 是否已赋值
                     * @return WarnInfos 是否已赋值
                     * 
                     */
                    bool WarnInfosHasBeenSet() const;

                    /**
                     * 获取身份证国徽面告警码。
- 开启身份证告警功能后才会返回。
- 返回数组中可能出现的告警码如下：
    -   -9100 身份证有效日期不合法告警，
    -     -9101 身份证边框不完整告警，
    -     -9102 身份证复印件告警，
    -     -9103 身份证翻拍告警，
    -     -9105 身份证框内遮挡告警，
    -     -9104 临时身份证告警，
    -     -9106 身份证 PS 告警（疑似存在PS痕迹），
    -     -9107 身份证反光告警。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BackWarnInfos 身份证国徽面告警码。
- 开启身份证告警功能后才会返回。
- 返回数组中可能出现的告警码如下：
    -   -9100 身份证有效日期不合法告警，
    -     -9101 身份证边框不完整告警，
    -     -9102 身份证复印件告警，
    -     -9103 身份证翻拍告警，
    -     -9105 身份证框内遮挡告警，
    -     -9104 临时身份证告警，
    -     -9106 身份证 PS 告警（疑似存在PS痕迹），
    -     -9107 身份证反光告警。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<int64_t> GetBackWarnInfos() const;

                    /**
                     * 设置身份证国徽面告警码。
- 开启身份证告警功能后才会返回。
- 返回数组中可能出现的告警码如下：
    -   -9100 身份证有效日期不合法告警，
    -     -9101 身份证边框不完整告警，
    -     -9102 身份证复印件告警，
    -     -9103 身份证翻拍告警，
    -     -9105 身份证框内遮挡告警，
    -     -9104 临时身份证告警，
    -     -9106 身份证 PS 告警（疑似存在PS痕迹），
    -     -9107 身份证反光告警。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _backWarnInfos 身份证国徽面告警码。
- 开启身份证告警功能后才会返回。
- 返回数组中可能出现的告警码如下：
    -   -9100 身份证有效日期不合法告警，
    -     -9101 身份证边框不完整告警，
    -     -9102 身份证复印件告警，
    -     -9103 身份证翻拍告警，
    -     -9105 身份证框内遮挡告警，
    -     -9104 临时身份证告警，
    -     -9106 身份证 PS 告警（疑似存在PS痕迹），
    -     -9107 身份证反光告警。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBackWarnInfos(const std::vector<int64_t>& _backWarnInfos);

                    /**
                     * 判断参数 BackWarnInfos 是否已赋值
                     * @return BackWarnInfos 是否已赋值
                     * 
                     */
                    bool BackWarnInfosHasBeenSet() const;

                private:

                    /**
                     * OCR正面照片的base64编码。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ocrFront;
                    bool m_ocrFrontHasBeenSet;

                    /**
                     * OCR反面照片的base64编码。
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

                    /**
                     * 身份证人像面告警码。
- 开启身份证告警功能后才会返回。
- 返回数组中可能出现的告警码如下：
    - -9100 身份证有效日期不合法告警。
    - -9101 身份证边框不完整告警。
    - -9102 身份证复印件告警。
    - -9103 身份证翻拍告警。
    - -9105 身份证框内遮挡告警。
    - -9104 临时身份证告警。
    - -9106 身份证 PS 告警（疑似存在PS痕迹）。
    - -9107 身份证反光告警。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_warnInfos;
                    bool m_warnInfosHasBeenSet;

                    /**
                     * 身份证国徽面告警码。
- 开启身份证告警功能后才会返回。
- 返回数组中可能出现的告警码如下：
    -   -9100 身份证有效日期不合法告警，
    -     -9101 身份证边框不完整告警，
    -     -9102 身份证复印件告警，
    -     -9103 身份证翻拍告警，
    -     -9105 身份证框内遮挡告警，
    -     -9104 临时身份证告警，
    -     -9106 身份证 PS 告警（疑似存在PS痕迹），
    -     -9107 身份证反光告警。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_backWarnInfos;
                    bool m_backWarnInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_DETECTINFOIDCARDDATA_H_
