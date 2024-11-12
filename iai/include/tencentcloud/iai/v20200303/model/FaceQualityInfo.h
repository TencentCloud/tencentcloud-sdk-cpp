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

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_FACEQUALITYINFO_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_FACEQUALITYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iai/v20200303/model/FaceQualityCompleteness.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20200303
        {
            namespace Model
            {
                /**
                * 人脸质量信息，包含质量分（score）、模糊分（sharpness）、光照分（brightness）、遮挡分（completeness）。只有当NeedFaceDetection设为1时才返回有效信息。
                */
                class FaceQualityInfo : public AbstractModel
                {
                public:
                    FaceQualityInfo();
                    ~FaceQualityInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取质量分。
- 取值范围：[0,100]，综合评价图像质量是否适合人脸识别，分数越高质量越好。 
- 正常情况，只需要使用Score作为质量分总体的判断标准即可。Sharpness、Brightness、Completeness等细项分仅供参考。
- 参考范围：[0,40]较差，[40,60] 一般，[60,80]较好，[80,100]很好。 
- 建议：人脸入库选取70以上的图片。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Score 质量分。
- 取值范围：[0,100]，综合评价图像质量是否适合人脸识别，分数越高质量越好。 
- 正常情况，只需要使用Score作为质量分总体的判断标准即可。Sharpness、Brightness、Completeness等细项分仅供参考。
- 参考范围：[0,40]较差，[40,60] 一般，[60,80]较好，[80,100]很好。 
- 建议：人脸入库选取70以上的图片。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetScore() const;

                    /**
                     * 设置质量分。
- 取值范围：[0,100]，综合评价图像质量是否适合人脸识别，分数越高质量越好。 
- 正常情况，只需要使用Score作为质量分总体的判断标准即可。Sharpness、Brightness、Completeness等细项分仅供参考。
- 参考范围：[0,40]较差，[40,60] 一般，[60,80]较好，[80,100]很好。 
- 建议：人脸入库选取70以上的图片。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _score 质量分。
- 取值范围：[0,100]，综合评价图像质量是否适合人脸识别，分数越高质量越好。 
- 正常情况，只需要使用Score作为质量分总体的判断标准即可。Sharpness、Brightness、Completeness等细项分仅供参考。
- 参考范围：[0,40]较差，[40,60] 一般，[60,80]较好，[80,100]很好。 
- 建议：人脸入库选取70以上的图片。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScore(const int64_t& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     * 
                     */
                    bool ScoreHasBeenSet() const;

                    /**
                     * 获取清晰分。
- 取值范围：[0,100]，评价图片清晰程度，分数越高越清晰。 
- 参考范围：[0,40]特别模糊，[40,60]模糊，[60,80]一般，[80,100]清晰。 
- 建议：人脸入库选取80以上的图片。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Sharpness 清晰分。
- 取值范围：[0,100]，评价图片清晰程度，分数越高越清晰。 
- 参考范围：[0,40]特别模糊，[40,60]模糊，[60,80]一般，[80,100]清晰。 
- 建议：人脸入库选取80以上的图片。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSharpness() const;

                    /**
                     * 设置清晰分。
- 取值范围：[0,100]，评价图片清晰程度，分数越高越清晰。 
- 参考范围：[0,40]特别模糊，[40,60]模糊，[60,80]一般，[80,100]清晰。 
- 建议：人脸入库选取80以上的图片。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sharpness 清晰分。
- 取值范围：[0,100]，评价图片清晰程度，分数越高越清晰。 
- 参考范围：[0,40]特别模糊，[40,60]模糊，[60,80]一般，[80,100]清晰。 
- 建议：人脸入库选取80以上的图片。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSharpness(const int64_t& _sharpness);

                    /**
                     * 判断参数 Sharpness 是否已赋值
                     * @return Sharpness 是否已赋值
                     * 
                     */
                    bool SharpnessHasBeenSet() const;

                    /**
                     * 获取光照分。
- 取值范围：[0,100]，评价图片光照程度，分数越高越亮。 
- 参考范围： [0,30]偏暗，[30,70]光照正常，[70,100]偏亮。 
- 建议：人脸入库选取[30,70]的图片。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Brightness 光照分。
- 取值范围：[0,100]，评价图片光照程度，分数越高越亮。 
- 参考范围： [0,30]偏暗，[30,70]光照正常，[70,100]偏亮。 
- 建议：人脸入库选取[30,70]的图片。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetBrightness() const;

                    /**
                     * 设置光照分。
- 取值范围：[0,100]，评价图片光照程度，分数越高越亮。 
- 参考范围： [0,30]偏暗，[30,70]光照正常，[70,100]偏亮。 
- 建议：人脸入库选取[30,70]的图片。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _brightness 光照分。
- 取值范围：[0,100]，评价图片光照程度，分数越高越亮。 
- 参考范围： [0,30]偏暗，[30,70]光照正常，[70,100]偏亮。 
- 建议：人脸入库选取[30,70]的图片。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBrightness(const int64_t& _brightness);

                    /**
                     * 判断参数 Brightness 是否已赋值
                     * @return Brightness 是否已赋值
                     * 
                     */
                    bool BrightnessHasBeenSet() const;

                    /**
                     * 获取五官遮挡分，评价眉毛（Eyebrow）、眼睛（Eye）、鼻子（Nose）、脸颊（Cheek）、嘴巴（Mouth）、下巴（Chin）的被遮挡程度。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Completeness 五官遮挡分，评价眉毛（Eyebrow）、眼睛（Eye）、鼻子（Nose）、脸颊（Cheek）、嘴巴（Mouth）、下巴（Chin）的被遮挡程度。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    FaceQualityCompleteness GetCompleteness() const;

                    /**
                     * 设置五官遮挡分，评价眉毛（Eyebrow）、眼睛（Eye）、鼻子（Nose）、脸颊（Cheek）、嘴巴（Mouth）、下巴（Chin）的被遮挡程度。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _completeness 五官遮挡分，评价眉毛（Eyebrow）、眼睛（Eye）、鼻子（Nose）、脸颊（Cheek）、嘴巴（Mouth）、下巴（Chin）的被遮挡程度。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCompleteness(const FaceQualityCompleteness& _completeness);

                    /**
                     * 判断参数 Completeness 是否已赋值
                     * @return Completeness 是否已赋值
                     * 
                     */
                    bool CompletenessHasBeenSet() const;

                private:

                    /**
                     * 质量分。
- 取值范围：[0,100]，综合评价图像质量是否适合人脸识别，分数越高质量越好。 
- 正常情况，只需要使用Score作为质量分总体的判断标准即可。Sharpness、Brightness、Completeness等细项分仅供参考。
- 参考范围：[0,40]较差，[40,60] 一般，[60,80]较好，[80,100]很好。 
- 建议：人脸入库选取70以上的图片。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * 清晰分。
- 取值范围：[0,100]，评价图片清晰程度，分数越高越清晰。 
- 参考范围：[0,40]特别模糊，[40,60]模糊，[60,80]一般，[80,100]清晰。 
- 建议：人脸入库选取80以上的图片。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_sharpness;
                    bool m_sharpnessHasBeenSet;

                    /**
                     * 光照分。
- 取值范围：[0,100]，评价图片光照程度，分数越高越亮。 
- 参考范围： [0,30]偏暗，[30,70]光照正常，[70,100]偏亮。 
- 建议：人脸入库选取[30,70]的图片。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_brightness;
                    bool m_brightnessHasBeenSet;

                    /**
                     * 五官遮挡分，评价眉毛（Eyebrow）、眼睛（Eye）、鼻子（Nose）、脸颊（Cheek）、嘴巴（Mouth）、下巴（Chin）的被遮挡程度。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    FaceQualityCompleteness m_completeness;
                    bool m_completenessHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_FACEQUALITYINFO_H_
