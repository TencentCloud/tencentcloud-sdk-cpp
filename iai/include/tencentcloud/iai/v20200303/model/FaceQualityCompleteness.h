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

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_FACEQUALITYCOMPLETENESS_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_FACEQUALITYCOMPLETENESS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20200303
        {
            namespace Model
            {
                /**
                * 五官遮挡分，评价眉毛（Eyebrow）、眼睛（Eye）、鼻子（Nose）、脸颊（Cheek）、嘴巴（Mouth）、下巴（Chin）的被遮挡程度。
                */
                class FaceQualityCompleteness : public AbstractModel
                {
                public:
                    FaceQualityCompleteness();
                    ~FaceQualityCompleteness() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取眉毛的遮挡分数。
- 取值范围：[0,100]，分数越高遮挡越少。 
- 参考范围：[0,80]表示发生遮挡。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Eyebrow 眉毛的遮挡分数。
- 取值范围：[0,100]，分数越高遮挡越少。 
- 参考范围：[0,80]表示发生遮挡。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetEyebrow() const;

                    /**
                     * 设置眉毛的遮挡分数。
- 取值范围：[0,100]，分数越高遮挡越少。 
- 参考范围：[0,80]表示发生遮挡。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eyebrow 眉毛的遮挡分数。
- 取值范围：[0,100]，分数越高遮挡越少。 
- 参考范围：[0,80]表示发生遮挡。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEyebrow(const int64_t& _eyebrow);

                    /**
                     * 判断参数 Eyebrow 是否已赋值
                     * @return Eyebrow 是否已赋值
                     * 
                     */
                    bool EyebrowHasBeenSet() const;

                    /**
                     * 获取眼睛的遮挡分数。
- 取值范围：[0,100],分数越高遮挡越少。 
- 参考范围：[0,80]表示发生遮挡。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Eye 眼睛的遮挡分数。
- 取值范围：[0,100],分数越高遮挡越少。 
- 参考范围：[0,80]表示发生遮挡。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetEye() const;

                    /**
                     * 设置眼睛的遮挡分数。
- 取值范围：[0,100],分数越高遮挡越少。 
- 参考范围：[0,80]表示发生遮挡。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eye 眼睛的遮挡分数。
- 取值范围：[0,100],分数越高遮挡越少。 
- 参考范围：[0,80]表示发生遮挡。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEye(const int64_t& _eye);

                    /**
                     * 判断参数 Eye 是否已赋值
                     * @return Eye 是否已赋值
                     * 
                     */
                    bool EyeHasBeenSet() const;

                    /**
                     * 获取鼻子的遮挡分数。
- 取值范围：[0,100],分数越高遮挡越少。 
- 参考范围：[0,60]表示发生遮挡。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Nose 鼻子的遮挡分数。
- 取值范围：[0,100],分数越高遮挡越少。 
- 参考范围：[0,60]表示发生遮挡。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetNose() const;

                    /**
                     * 设置鼻子的遮挡分数。
- 取值范围：[0,100],分数越高遮挡越少。 
- 参考范围：[0,60]表示发生遮挡。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nose 鼻子的遮挡分数。
- 取值范围：[0,100],分数越高遮挡越少。 
- 参考范围：[0,60]表示发生遮挡。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNose(const int64_t& _nose);

                    /**
                     * 判断参数 Nose 是否已赋值
                     * @return Nose 是否已赋值
                     * 
                     */
                    bool NoseHasBeenSet() const;

                    /**
                     * 获取脸颊的遮挡分数。
- 取值范围：[0,100],分数越高遮挡越少。 
- 参考范围：[0,70]表示发生遮挡。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Cheek 脸颊的遮挡分数。
- 取值范围：[0,100],分数越高遮挡越少。 
- 参考范围：[0,70]表示发生遮挡。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCheek() const;

                    /**
                     * 设置脸颊的遮挡分数。
- 取值范围：[0,100],分数越高遮挡越少。 
- 参考范围：[0,70]表示发生遮挡。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cheek 脸颊的遮挡分数。
- 取值范围：[0,100],分数越高遮挡越少。 
- 参考范围：[0,70]表示发生遮挡。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCheek(const int64_t& _cheek);

                    /**
                     * 判断参数 Cheek 是否已赋值
                     * @return Cheek 是否已赋值
                     * 
                     */
                    bool CheekHasBeenSet() const;

                    /**
                     * 获取嘴巴的遮挡分数。
- 取值范围：[0,100],分数越高遮挡越少。 
- 参考范围：[0,50]表示发生遮挡。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Mouth 嘴巴的遮挡分数。
- 取值范围：[0,100],分数越高遮挡越少。 
- 参考范围：[0,50]表示发生遮挡。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMouth() const;

                    /**
                     * 设置嘴巴的遮挡分数。
- 取值范围：[0,100],分数越高遮挡越少。 
- 参考范围：[0,50]表示发生遮挡。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mouth 嘴巴的遮挡分数。
- 取值范围：[0,100],分数越高遮挡越少。 
- 参考范围：[0,50]表示发生遮挡。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMouth(const int64_t& _mouth);

                    /**
                     * 判断参数 Mouth 是否已赋值
                     * @return Mouth 是否已赋值
                     * 
                     */
                    bool MouthHasBeenSet() const;

                    /**
                     * 获取下巴的遮挡分数。
- 取值范围：[0,100],分数越高遮挡越少。 
- 参考范围：[0,70]表示发生遮挡。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Chin 下巴的遮挡分数。
- 取值范围：[0,100],分数越高遮挡越少。 
- 参考范围：[0,70]表示发生遮挡。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetChin() const;

                    /**
                     * 设置下巴的遮挡分数。
- 取值范围：[0,100],分数越高遮挡越少。 
- 参考范围：[0,70]表示发生遮挡。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _chin 下巴的遮挡分数。
- 取值范围：[0,100],分数越高遮挡越少。 
- 参考范围：[0,70]表示发生遮挡。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetChin(const int64_t& _chin);

                    /**
                     * 判断参数 Chin 是否已赋值
                     * @return Chin 是否已赋值
                     * 
                     */
                    bool ChinHasBeenSet() const;

                private:

                    /**
                     * 眉毛的遮挡分数。
- 取值范围：[0,100]，分数越高遮挡越少。 
- 参考范围：[0,80]表示发生遮挡。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_eyebrow;
                    bool m_eyebrowHasBeenSet;

                    /**
                     * 眼睛的遮挡分数。
- 取值范围：[0,100],分数越高遮挡越少。 
- 参考范围：[0,80]表示发生遮挡。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_eye;
                    bool m_eyeHasBeenSet;

                    /**
                     * 鼻子的遮挡分数。
- 取值范围：[0,100],分数越高遮挡越少。 
- 参考范围：[0,60]表示发生遮挡。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_nose;
                    bool m_noseHasBeenSet;

                    /**
                     * 脸颊的遮挡分数。
- 取值范围：[0,100],分数越高遮挡越少。 
- 参考范围：[0,70]表示发生遮挡。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_cheek;
                    bool m_cheekHasBeenSet;

                    /**
                     * 嘴巴的遮挡分数。
- 取值范围：[0,100],分数越高遮挡越少。 
- 参考范围：[0,50]表示发生遮挡。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_mouth;
                    bool m_mouthHasBeenSet;

                    /**
                     * 下巴的遮挡分数。
- 取值范围：[0,100],分数越高遮挡越少。 
- 参考范围：[0,70]表示发生遮挡。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_chin;
                    bool m_chinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_FACEQUALITYCOMPLETENESS_H_
