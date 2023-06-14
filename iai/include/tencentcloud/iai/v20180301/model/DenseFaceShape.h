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

#ifndef TENCENTCLOUD_IAI_V20180301_MODEL_DENSEFACESHAPE_H_
#define TENCENTCLOUD_IAI_V20180301_MODEL_DENSEFACESHAPE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iai/v20180301/model/Point.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * 稠密关键点详细信息
                */
                class DenseFaceShape : public AbstractModel
                {
                public:
                    DenseFaceShape();
                    ~DenseFaceShape() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取人脸框左上角横坐标。
                     * @return X 人脸框左上角横坐标。
                     * 
                     */
                    int64_t GetX() const;

                    /**
                     * 设置人脸框左上角横坐标。
                     * @param _x 人脸框左上角横坐标。
                     * 
                     */
                    void SetX(const int64_t& _x);

                    /**
                     * 判断参数 X 是否已赋值
                     * @return X 是否已赋值
                     * 
                     */
                    bool XHasBeenSet() const;

                    /**
                     * 获取人脸框左上角纵坐标。
                     * @return Y 人脸框左上角纵坐标。
                     * 
                     */
                    int64_t GetY() const;

                    /**
                     * 设置人脸框左上角纵坐标。
                     * @param _y 人脸框左上角纵坐标。
                     * 
                     */
                    void SetY(const int64_t& _y);

                    /**
                     * 判断参数 Y 是否已赋值
                     * @return Y 是否已赋值
                     * 
                     */
                    bool YHasBeenSet() const;

                    /**
                     * 获取人脸框宽度。
                     * @return Width 人脸框宽度。
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置人脸框宽度。
                     * @param _width 人脸框宽度。
                     * 
                     */
                    void SetWidth(const int64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取人脸框高度。
                     * @return Height 人脸框高度。
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置人脸框高度。
                     * @param _height 人脸框高度。
                     * 
                     */
                    void SetHeight(const int64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取描述左侧眼睛轮廓的 XX 点。
                     * @return LeftEye 描述左侧眼睛轮廓的 XX 点。
                     * 
                     */
                    std::vector<Point> GetLeftEye() const;

                    /**
                     * 设置描述左侧眼睛轮廓的 XX 点。
                     * @param _leftEye 描述左侧眼睛轮廓的 XX 点。
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
                     * 获取描述右侧眼睛轮廓的 XX 点。
                     * @return RightEye 描述右侧眼睛轮廓的 XX 点。
                     * 
                     */
                    std::vector<Point> GetRightEye() const;

                    /**
                     * 设置描述右侧眼睛轮廓的 XX 点。
                     * @param _rightEye 描述右侧眼睛轮廓的 XX 点。
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
                     * 获取描述左侧眉毛轮廓的 XX 点。
                     * @return LeftEyeBrow 描述左侧眉毛轮廓的 XX 点。
                     * 
                     */
                    std::vector<Point> GetLeftEyeBrow() const;

                    /**
                     * 设置描述左侧眉毛轮廓的 XX 点。
                     * @param _leftEyeBrow 描述左侧眉毛轮廓的 XX 点。
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
                     * 获取描述右侧眉毛轮廓的 XX 点。
                     * @return RightEyeBrow 描述右侧眉毛轮廓的 XX 点。
                     * 
                     */
                    std::vector<Point> GetRightEyeBrow() const;

                    /**
                     * 设置描述右侧眉毛轮廓的 XX 点。
                     * @param _rightEyeBrow 描述右侧眉毛轮廓的 XX 点。
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
                     * 获取描述外嘴巴轮廓的 XX 点， 从左侧开始逆时针返回。
                     * @return MouthOutside 描述外嘴巴轮廓的 XX 点， 从左侧开始逆时针返回。
                     * 
                     */
                    std::vector<Point> GetMouthOutside() const;

                    /**
                     * 设置描述外嘴巴轮廓的 XX 点， 从左侧开始逆时针返回。
                     * @param _mouthOutside 描述外嘴巴轮廓的 XX 点， 从左侧开始逆时针返回。
                     * 
                     */
                    void SetMouthOutside(const std::vector<Point>& _mouthOutside);

                    /**
                     * 判断参数 MouthOutside 是否已赋值
                     * @return MouthOutside 是否已赋值
                     * 
                     */
                    bool MouthOutsideHasBeenSet() const;

                    /**
                     * 获取描述内嘴巴轮廓的 XX 点，从左侧开始逆时针返回。
                     * @return MouthInside 描述内嘴巴轮廓的 XX 点，从左侧开始逆时针返回。
                     * 
                     */
                    std::vector<Point> GetMouthInside() const;

                    /**
                     * 设置描述内嘴巴轮廓的 XX 点，从左侧开始逆时针返回。
                     * @param _mouthInside 描述内嘴巴轮廓的 XX 点，从左侧开始逆时针返回。
                     * 
                     */
                    void SetMouthInside(const std::vector<Point>& _mouthInside);

                    /**
                     * 判断参数 MouthInside 是否已赋值
                     * @return MouthInside 是否已赋值
                     * 
                     */
                    bool MouthInsideHasBeenSet() const;

                    /**
                     * 获取描述鼻子轮廓的 XX 点。
                     * @return Nose 描述鼻子轮廓的 XX 点。
                     * 
                     */
                    std::vector<Point> GetNose() const;

                    /**
                     * 设置描述鼻子轮廓的 XX 点。
                     * @param _nose 描述鼻子轮廓的 XX 点。
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
                     * 获取左瞳孔轮廓的 XX 个点。
                     * @return LeftPupil 左瞳孔轮廓的 XX 个点。
                     * 
                     */
                    std::vector<Point> GetLeftPupil() const;

                    /**
                     * 设置左瞳孔轮廓的 XX 个点。
                     * @param _leftPupil 左瞳孔轮廓的 XX 个点。
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
                     * 获取右瞳孔轮廓的 XX 个点。
                     * @return RightPupil 右瞳孔轮廓的 XX 个点。
                     * 
                     */
                    std::vector<Point> GetRightPupil() const;

                    /**
                     * 设置右瞳孔轮廓的 XX 个点。
                     * @param _rightPupil 右瞳孔轮廓的 XX 个点。
                     * 
                     */
                    void SetRightPupil(const std::vector<Point>& _rightPupil);

                    /**
                     * 判断参数 RightPupil 是否已赋值
                     * @return RightPupil 是否已赋值
                     * 
                     */
                    bool RightPupilHasBeenSet() const;

                    /**
                     * 获取中轴线轮廓的 XX 个点。
                     * @return CentralAxis 中轴线轮廓的 XX 个点。
                     * 
                     */
                    std::vector<Point> GetCentralAxis() const;

                    /**
                     * 设置中轴线轮廓的 XX 个点。
                     * @param _centralAxis 中轴线轮廓的 XX 个点。
                     * 
                     */
                    void SetCentralAxis(const std::vector<Point>& _centralAxis);

                    /**
                     * 判断参数 CentralAxis 是否已赋值
                     * @return CentralAxis 是否已赋值
                     * 
                     */
                    bool CentralAxisHasBeenSet() const;

                    /**
                     * 获取下巴轮廓的 XX 个点。
                     * @return Chin 下巴轮廓的 XX 个点。
                     * 
                     */
                    std::vector<Point> GetChin() const;

                    /**
                     * 设置下巴轮廓的 XX 个点。
                     * @param _chin 下巴轮廓的 XX 个点。
                     * 
                     */
                    void SetChin(const std::vector<Point>& _chin);

                    /**
                     * 判断参数 Chin 是否已赋值
                     * @return Chin 是否已赋值
                     * 
                     */
                    bool ChinHasBeenSet() const;

                    /**
                     * 获取左眼袋的 XX 个点。
                     * @return LeftEyeBags 左眼袋的 XX 个点。
                     * 
                     */
                    std::vector<Point> GetLeftEyeBags() const;

                    /**
                     * 设置左眼袋的 XX 个点。
                     * @param _leftEyeBags 左眼袋的 XX 个点。
                     * 
                     */
                    void SetLeftEyeBags(const std::vector<Point>& _leftEyeBags);

                    /**
                     * 判断参数 LeftEyeBags 是否已赋值
                     * @return LeftEyeBags 是否已赋值
                     * 
                     */
                    bool LeftEyeBagsHasBeenSet() const;

                    /**
                     * 获取右眼袋的 XX 个点。
                     * @return RightEyeBags 右眼袋的 XX 个点。
                     * 
                     */
                    std::vector<Point> GetRightEyeBags() const;

                    /**
                     * 设置右眼袋的 XX 个点。
                     * @param _rightEyeBags 右眼袋的 XX 个点。
                     * 
                     */
                    void SetRightEyeBags(const std::vector<Point>& _rightEyeBags);

                    /**
                     * 判断参数 RightEyeBags 是否已赋值
                     * @return RightEyeBags 是否已赋值
                     * 
                     */
                    bool RightEyeBagsHasBeenSet() const;

                    /**
                     * 获取额头的 XX 个点。
                     * @return Forehead 额头的 XX 个点。
                     * 
                     */
                    std::vector<Point> GetForehead() const;

                    /**
                     * 设置额头的 XX 个点。
                     * @param _forehead 额头的 XX 个点。
                     * 
                     */
                    void SetForehead(const std::vector<Point>& _forehead);

                    /**
                     * 判断参数 Forehead 是否已赋值
                     * @return Forehead 是否已赋值
                     * 
                     */
                    bool ForeheadHasBeenSet() const;

                private:

                    /**
                     * 人脸框左上角横坐标。
                     */
                    int64_t m_x;
                    bool m_xHasBeenSet;

                    /**
                     * 人脸框左上角纵坐标。
                     */
                    int64_t m_y;
                    bool m_yHasBeenSet;

                    /**
                     * 人脸框宽度。
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 人脸框高度。
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * 描述左侧眼睛轮廓的 XX 点。
                     */
                    std::vector<Point> m_leftEye;
                    bool m_leftEyeHasBeenSet;

                    /**
                     * 描述右侧眼睛轮廓的 XX 点。
                     */
                    std::vector<Point> m_rightEye;
                    bool m_rightEyeHasBeenSet;

                    /**
                     * 描述左侧眉毛轮廓的 XX 点。
                     */
                    std::vector<Point> m_leftEyeBrow;
                    bool m_leftEyeBrowHasBeenSet;

                    /**
                     * 描述右侧眉毛轮廓的 XX 点。
                     */
                    std::vector<Point> m_rightEyeBrow;
                    bool m_rightEyeBrowHasBeenSet;

                    /**
                     * 描述外嘴巴轮廓的 XX 点， 从左侧开始逆时针返回。
                     */
                    std::vector<Point> m_mouthOutside;
                    bool m_mouthOutsideHasBeenSet;

                    /**
                     * 描述内嘴巴轮廓的 XX 点，从左侧开始逆时针返回。
                     */
                    std::vector<Point> m_mouthInside;
                    bool m_mouthInsideHasBeenSet;

                    /**
                     * 描述鼻子轮廓的 XX 点。
                     */
                    std::vector<Point> m_nose;
                    bool m_noseHasBeenSet;

                    /**
                     * 左瞳孔轮廓的 XX 个点。
                     */
                    std::vector<Point> m_leftPupil;
                    bool m_leftPupilHasBeenSet;

                    /**
                     * 右瞳孔轮廓的 XX 个点。
                     */
                    std::vector<Point> m_rightPupil;
                    bool m_rightPupilHasBeenSet;

                    /**
                     * 中轴线轮廓的 XX 个点。
                     */
                    std::vector<Point> m_centralAxis;
                    bool m_centralAxisHasBeenSet;

                    /**
                     * 下巴轮廓的 XX 个点。
                     */
                    std::vector<Point> m_chin;
                    bool m_chinHasBeenSet;

                    /**
                     * 左眼袋的 XX 个点。
                     */
                    std::vector<Point> m_leftEyeBags;
                    bool m_leftEyeBagsHasBeenSet;

                    /**
                     * 右眼袋的 XX 个点。
                     */
                    std::vector<Point> m_rightEyeBags;
                    bool m_rightEyeBagsHasBeenSet;

                    /**
                     * 额头的 XX 个点。
                     */
                    std::vector<Point> m_forehead;
                    bool m_foreheadHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20180301_MODEL_DENSEFACESHAPE_H_
