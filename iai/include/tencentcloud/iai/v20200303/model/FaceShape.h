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

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_FACESHAPE_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_FACESHAPE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iai/v20200303/model/Point.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20200303
        {
            namespace Model
            {
                /**
                * 五官定位（人脸关键点）具体信息。
                */
                class FaceShape : public AbstractModel
                {
                public:
                    FaceShape();
                    ~FaceShape() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取描述脸型轮廓的 21 点。
                     * @return FaceProfile 描述脸型轮廓的 21 点。
                     * 
                     */
                    std::vector<Point> GetFaceProfile() const;

                    /**
                     * 设置描述脸型轮廓的 21 点。
                     * @param _faceProfile 描述脸型轮廓的 21 点。
                     * 
                     */
                    void SetFaceProfile(const std::vector<Point>& _faceProfile);

                    /**
                     * 判断参数 FaceProfile 是否已赋值
                     * @return FaceProfile 是否已赋值
                     * 
                     */
                    bool FaceProfileHasBeenSet() const;

                    /**
                     * 获取描述左侧眼睛轮廓的 8 点。
                     * @return LeftEye 描述左侧眼睛轮廓的 8 点。
                     * 
                     */
                    std::vector<Point> GetLeftEye() const;

                    /**
                     * 设置描述左侧眼睛轮廓的 8 点。
                     * @param _leftEye 描述左侧眼睛轮廓的 8 点。
                     * 
                     */
                    void SetLeftEye(const std::vector<Point>& _leftEye);

                    /**
                     * 判断参数 LeftEye 是否已赋值
                     * @return LeftEye 是否已赋值
                     * 
                     */
                    bool LeftEyeHasBeenSet() const;

                    /**
                     * 获取描述右侧眼睛轮廓的 8 点。
                     * @return RightEye 描述右侧眼睛轮廓的 8 点。
                     * 
                     */
                    std::vector<Point> GetRightEye() const;

                    /**
                     * 设置描述右侧眼睛轮廓的 8 点。
                     * @param _rightEye 描述右侧眼睛轮廓的 8 点。
                     * 
                     */
                    void SetRightEye(const std::vector<Point>& _rightEye);

                    /**
                     * 判断参数 RightEye 是否已赋值
                     * @return RightEye 是否已赋值
                     * 
                     */
                    bool RightEyeHasBeenSet() const;

                    /**
                     * 获取描述左侧眉毛轮廓的 8 点。
                     * @return LeftEyeBrow 描述左侧眉毛轮廓的 8 点。
                     * 
                     */
                    std::vector<Point> GetLeftEyeBrow() const;

                    /**
                     * 设置描述左侧眉毛轮廓的 8 点。
                     * @param _leftEyeBrow 描述左侧眉毛轮廓的 8 点。
                     * 
                     */
                    void SetLeftEyeBrow(const std::vector<Point>& _leftEyeBrow);

                    /**
                     * 判断参数 LeftEyeBrow 是否已赋值
                     * @return LeftEyeBrow 是否已赋值
                     * 
                     */
                    bool LeftEyeBrowHasBeenSet() const;

                    /**
                     * 获取描述右侧眉毛轮廓的 8 点。
                     * @return RightEyeBrow 描述右侧眉毛轮廓的 8 点。
                     * 
                     */
                    std::vector<Point> GetRightEyeBrow() const;

                    /**
                     * 设置描述右侧眉毛轮廓的 8 点。
                     * @param _rightEyeBrow 描述右侧眉毛轮廓的 8 点。
                     * 
                     */
                    void SetRightEyeBrow(const std::vector<Point>& _rightEyeBrow);

                    /**
                     * 判断参数 RightEyeBrow 是否已赋值
                     * @return RightEyeBrow 是否已赋值
                     * 
                     */
                    bool RightEyeBrowHasBeenSet() const;

                    /**
                     * 获取描述嘴巴轮廓的 22 点。
                     * @return Mouth 描述嘴巴轮廓的 22 点。
                     * 
                     */
                    std::vector<Point> GetMouth() const;

                    /**
                     * 设置描述嘴巴轮廓的 22 点。
                     * @param _mouth 描述嘴巴轮廓的 22 点。
                     * 
                     */
                    void SetMouth(const std::vector<Point>& _mouth);

                    /**
                     * 判断参数 Mouth 是否已赋值
                     * @return Mouth 是否已赋值
                     * 
                     */
                    bool MouthHasBeenSet() const;

                    /**
                     * 获取描述鼻子轮廓的 13 点。
                     * @return Nose 描述鼻子轮廓的 13 点。
                     * 
                     */
                    std::vector<Point> GetNose() const;

                    /**
                     * 设置描述鼻子轮廓的 13 点。
                     * @param _nose 描述鼻子轮廓的 13 点。
                     * 
                     */
                    void SetNose(const std::vector<Point>& _nose);

                    /**
                     * 判断参数 Nose 是否已赋值
                     * @return Nose 是否已赋值
                     * 
                     */
                    bool NoseHasBeenSet() const;

                    /**
                     * 获取左瞳孔轮廓的 1 个点。
                     * @return LeftPupil 左瞳孔轮廓的 1 个点。
                     * 
                     */
                    std::vector<Point> GetLeftPupil() const;

                    /**
                     * 设置左瞳孔轮廓的 1 个点。
                     * @param _leftPupil 左瞳孔轮廓的 1 个点。
                     * 
                     */
                    void SetLeftPupil(const std::vector<Point>& _leftPupil);

                    /**
                     * 判断参数 LeftPupil 是否已赋值
                     * @return LeftPupil 是否已赋值
                     * 
                     */
                    bool LeftPupilHasBeenSet() const;

                    /**
                     * 获取右瞳孔轮廓的 1 个点。
                     * @return RightPupil 右瞳孔轮廓的 1 个点。
                     * 
                     */
                    std::vector<Point> GetRightPupil() const;

                    /**
                     * 设置右瞳孔轮廓的 1 个点。
                     * @param _rightPupil 右瞳孔轮廓的 1 个点。
                     * 
                     */
                    void SetRightPupil(const std::vector<Point>& _rightPupil);

                    /**
                     * 判断参数 RightPupil 是否已赋值
                     * @return RightPupil 是否已赋值
                     * 
                     */
                    bool RightPupilHasBeenSet() const;

                private:

                    /**
                     * 描述脸型轮廓的 21 点。
                     */
                    std::vector<Point> m_faceProfile;
                    bool m_faceProfileHasBeenSet;

                    /**
                     * 描述左侧眼睛轮廓的 8 点。
                     */
                    std::vector<Point> m_leftEye;
                    bool m_leftEyeHasBeenSet;

                    /**
                     * 描述右侧眼睛轮廓的 8 点。
                     */
                    std::vector<Point> m_rightEye;
                    bool m_rightEyeHasBeenSet;

                    /**
                     * 描述左侧眉毛轮廓的 8 点。
                     */
                    std::vector<Point> m_leftEyeBrow;
                    bool m_leftEyeBrowHasBeenSet;

                    /**
                     * 描述右侧眉毛轮廓的 8 点。
                     */
                    std::vector<Point> m_rightEyeBrow;
                    bool m_rightEyeBrowHasBeenSet;

                    /**
                     * 描述嘴巴轮廓的 22 点。
                     */
                    std::vector<Point> m_mouth;
                    bool m_mouthHasBeenSet;

                    /**
                     * 描述鼻子轮廓的 13 点。
                     */
                    std::vector<Point> m_nose;
                    bool m_noseHasBeenSet;

                    /**
                     * 左瞳孔轮廓的 1 个点。
                     */
                    std::vector<Point> m_leftPupil;
                    bool m_leftPupilHasBeenSet;

                    /**
                     * 右瞳孔轮廓的 1 个点。
                     */
                    std::vector<Point> m_rightPupil;
                    bool m_rightPupilHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_FACESHAPE_H_
