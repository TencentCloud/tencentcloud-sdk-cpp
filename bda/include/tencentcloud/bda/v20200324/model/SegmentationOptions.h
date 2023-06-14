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

#ifndef TENCENTCLOUD_BDA_V20200324_MODEL_SEGMENTATIONOPTIONS_H_
#define TENCENTCLOUD_BDA_V20200324_MODEL_SEGMENTATIONOPTIONS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bda
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * 此参数为分割选项，请根据需要选择自己所想从图片中分割的部分。注意所有选项均为非必选，如未选择则值默认为false, 但是必须要保证多于一个选项的描述为true。
                */
                class SegmentationOptions : public AbstractModel
                {
                public:
                    SegmentationOptions();
                    ~SegmentationOptions() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取分割选项-背景
                     * @return Background 分割选项-背景
                     * 
                     */
                    bool GetBackground() const;

                    /**
                     * 设置分割选项-背景
                     * @param _background 分割选项-背景
                     * 
                     */
                    void SetBackground(const bool& _background);

                    /**
                     * 判断参数 Background 是否已赋值
                     * @return Background 是否已赋值
                     * 
                     */
                    bool BackgroundHasBeenSet() const;

                    /**
                     * 获取分割选项-头发
                     * @return Hair 分割选项-头发
                     * 
                     */
                    bool GetHair() const;

                    /**
                     * 设置分割选项-头发
                     * @param _hair 分割选项-头发
                     * 
                     */
                    void SetHair(const bool& _hair);

                    /**
                     * 判断参数 Hair 是否已赋值
                     * @return Hair 是否已赋值
                     * 
                     */
                    bool HairHasBeenSet() const;

                    /**
                     * 获取分割选项-左眉
                     * @return LeftEyebrow 分割选项-左眉
                     * 
                     */
                    bool GetLeftEyebrow() const;

                    /**
                     * 设置分割选项-左眉
                     * @param _leftEyebrow 分割选项-左眉
                     * 
                     */
                    void SetLeftEyebrow(const bool& _leftEyebrow);

                    /**
                     * 判断参数 LeftEyebrow 是否已赋值
                     * @return LeftEyebrow 是否已赋值
                     * 
                     */
                    bool LeftEyebrowHasBeenSet() const;

                    /**
                     * 获取分割选项-右眉
                     * @return RightEyebrow 分割选项-右眉
                     * 
                     */
                    bool GetRightEyebrow() const;

                    /**
                     * 设置分割选项-右眉
                     * @param _rightEyebrow 分割选项-右眉
                     * 
                     */
                    void SetRightEyebrow(const bool& _rightEyebrow);

                    /**
                     * 判断参数 RightEyebrow 是否已赋值
                     * @return RightEyebrow 是否已赋值
                     * 
                     */
                    bool RightEyebrowHasBeenSet() const;

                    /**
                     * 获取分割选项-左眼
                     * @return LeftEye 分割选项-左眼
                     * 
                     */
                    bool GetLeftEye() const;

                    /**
                     * 设置分割选项-左眼
                     * @param _leftEye 分割选项-左眼
                     * 
                     */
                    void SetLeftEye(const bool& _leftEye);

                    /**
                     * 判断参数 LeftEye 是否已赋值
                     * @return LeftEye 是否已赋值
                     * 
                     */
                    bool LeftEyeHasBeenSet() const;

                    /**
                     * 获取分割选项-右眼
                     * @return RightEye 分割选项-右眼
                     * 
                     */
                    bool GetRightEye() const;

                    /**
                     * 设置分割选项-右眼
                     * @param _rightEye 分割选项-右眼
                     * 
                     */
                    void SetRightEye(const bool& _rightEye);

                    /**
                     * 判断参数 RightEye 是否已赋值
                     * @return RightEye 是否已赋值
                     * 
                     */
                    bool RightEyeHasBeenSet() const;

                    /**
                     * 获取分割选项-鼻子
                     * @return Nose 分割选项-鼻子
                     * 
                     */
                    bool GetNose() const;

                    /**
                     * 设置分割选项-鼻子
                     * @param _nose 分割选项-鼻子
                     * 
                     */
                    void SetNose(const bool& _nose);

                    /**
                     * 判断参数 Nose 是否已赋值
                     * @return Nose 是否已赋值
                     * 
                     */
                    bool NoseHasBeenSet() const;

                    /**
                     * 获取分割选项-上唇
                     * @return UpperLip 分割选项-上唇
                     * 
                     */
                    bool GetUpperLip() const;

                    /**
                     * 设置分割选项-上唇
                     * @param _upperLip 分割选项-上唇
                     * 
                     */
                    void SetUpperLip(const bool& _upperLip);

                    /**
                     * 判断参数 UpperLip 是否已赋值
                     * @return UpperLip 是否已赋值
                     * 
                     */
                    bool UpperLipHasBeenSet() const;

                    /**
                     * 获取分割选项-下唇
                     * @return LowerLip 分割选项-下唇
                     * 
                     */
                    bool GetLowerLip() const;

                    /**
                     * 设置分割选项-下唇
                     * @param _lowerLip 分割选项-下唇
                     * 
                     */
                    void SetLowerLip(const bool& _lowerLip);

                    /**
                     * 判断参数 LowerLip 是否已赋值
                     * @return LowerLip 是否已赋值
                     * 
                     */
                    bool LowerLipHasBeenSet() const;

                    /**
                     * 获取分割选项-牙齿
                     * @return Tooth 分割选项-牙齿
                     * 
                     */
                    bool GetTooth() const;

                    /**
                     * 设置分割选项-牙齿
                     * @param _tooth 分割选项-牙齿
                     * 
                     */
                    void SetTooth(const bool& _tooth);

                    /**
                     * 判断参数 Tooth 是否已赋值
                     * @return Tooth 是否已赋值
                     * 
                     */
                    bool ToothHasBeenSet() const;

                    /**
                     * 获取分割选项-口腔（不包含牙齿）
                     * @return Mouth 分割选项-口腔（不包含牙齿）
                     * 
                     */
                    bool GetMouth() const;

                    /**
                     * 设置分割选项-口腔（不包含牙齿）
                     * @param _mouth 分割选项-口腔（不包含牙齿）
                     * 
                     */
                    void SetMouth(const bool& _mouth);

                    /**
                     * 判断参数 Mouth 是否已赋值
                     * @return Mouth 是否已赋值
                     * 
                     */
                    bool MouthHasBeenSet() const;

                    /**
                     * 获取分割选项-左耳
                     * @return LeftEar 分割选项-左耳
                     * 
                     */
                    bool GetLeftEar() const;

                    /**
                     * 设置分割选项-左耳
                     * @param _leftEar 分割选项-左耳
                     * 
                     */
                    void SetLeftEar(const bool& _leftEar);

                    /**
                     * 判断参数 LeftEar 是否已赋值
                     * @return LeftEar 是否已赋值
                     * 
                     */
                    bool LeftEarHasBeenSet() const;

                    /**
                     * 获取分割选项-右耳
                     * @return RightEar 分割选项-右耳
                     * 
                     */
                    bool GetRightEar() const;

                    /**
                     * 设置分割选项-右耳
                     * @param _rightEar 分割选项-右耳
                     * 
                     */
                    void SetRightEar(const bool& _rightEar);

                    /**
                     * 判断参数 RightEar 是否已赋值
                     * @return RightEar 是否已赋值
                     * 
                     */
                    bool RightEarHasBeenSet() const;

                    /**
                     * 获取分割选项-面部(不包含眼、耳、口、鼻等五官及头发。)
                     * @return Face 分割选项-面部(不包含眼、耳、口、鼻等五官及头发。)
                     * 
                     */
                    bool GetFace() const;

                    /**
                     * 设置分割选项-面部(不包含眼、耳、口、鼻等五官及头发。)
                     * @param _face 分割选项-面部(不包含眼、耳、口、鼻等五官及头发。)
                     * 
                     */
                    void SetFace(const bool& _face);

                    /**
                     * 判断参数 Face 是否已赋值
                     * @return Face 是否已赋值
                     * 
                     */
                    bool FaceHasBeenSet() const;

                    /**
                     * 获取复合分割选项-头部(包含所有的头部元素，相关装饰除外)
                     * @return Head 复合分割选项-头部(包含所有的头部元素，相关装饰除外)
                     * 
                     */
                    bool GetHead() const;

                    /**
                     * 设置复合分割选项-头部(包含所有的头部元素，相关装饰除外)
                     * @param _head 复合分割选项-头部(包含所有的头部元素，相关装饰除外)
                     * 
                     */
                    void SetHead(const bool& _head);

                    /**
                     * 判断参数 Head 是否已赋值
                     * @return Head 是否已赋值
                     * 
                     */
                    bool HeadHasBeenSet() const;

                    /**
                     * 获取分割选项-身体（包含脖子）
                     * @return Body 分割选项-身体（包含脖子）
                     * 
                     */
                    bool GetBody() const;

                    /**
                     * 设置分割选项-身体（包含脖子）
                     * @param _body 分割选项-身体（包含脖子）
                     * 
                     */
                    void SetBody(const bool& _body);

                    /**
                     * 判断参数 Body 是否已赋值
                     * @return Body 是否已赋值
                     * 
                     */
                    bool BodyHasBeenSet() const;

                    /**
                     * 获取分割选项-帽子
                     * @return Hat 分割选项-帽子
                     * 
                     */
                    bool GetHat() const;

                    /**
                     * 设置分割选项-帽子
                     * @param _hat 分割选项-帽子
                     * 
                     */
                    void SetHat(const bool& _hat);

                    /**
                     * 判断参数 Hat 是否已赋值
                     * @return Hat 是否已赋值
                     * 
                     */
                    bool HatHasBeenSet() const;

                    /**
                     * 获取分割选项-头饰
                     * @return Headdress 分割选项-头饰
                     * 
                     */
                    bool GetHeaddress() const;

                    /**
                     * 设置分割选项-头饰
                     * @param _headdress 分割选项-头饰
                     * 
                     */
                    void SetHeaddress(const bool& _headdress);

                    /**
                     * 判断参数 Headdress 是否已赋值
                     * @return Headdress 是否已赋值
                     * 
                     */
                    bool HeaddressHasBeenSet() const;

                    /**
                     * 获取分割选项-耳环
                     * @return Earrings 分割选项-耳环
                     * 
                     */
                    bool GetEarrings() const;

                    /**
                     * 设置分割选项-耳环
                     * @param _earrings 分割选项-耳环
                     * 
                     */
                    void SetEarrings(const bool& _earrings);

                    /**
                     * 判断参数 Earrings 是否已赋值
                     * @return Earrings 是否已赋值
                     * 
                     */
                    bool EarringsHasBeenSet() const;

                    /**
                     * 获取分割选项-项链
                     * @return Necklace 分割选项-项链
                     * 
                     */
                    bool GetNecklace() const;

                    /**
                     * 设置分割选项-项链
                     * @param _necklace 分割选项-项链
                     * 
                     */
                    void SetNecklace(const bool& _necklace);

                    /**
                     * 判断参数 Necklace 是否已赋值
                     * @return Necklace 是否已赋值
                     * 
                     */
                    bool NecklaceHasBeenSet() const;

                    /**
                     * 获取分割选项-随身物品（ 例如伞、包、手机等。 ）
                     * @return Belongings 分割选项-随身物品（ 例如伞、包、手机等。 ）
                     * 
                     */
                    bool GetBelongings() const;

                    /**
                     * 设置分割选项-随身物品（ 例如伞、包、手机等。 ）
                     * @param _belongings 分割选项-随身物品（ 例如伞、包、手机等。 ）
                     * 
                     */
                    void SetBelongings(const bool& _belongings);

                    /**
                     * 判断参数 Belongings 是否已赋值
                     * @return Belongings 是否已赋值
                     * 
                     */
                    bool BelongingsHasBeenSet() const;

                private:

                    /**
                     * 分割选项-背景
                     */
                    bool m_background;
                    bool m_backgroundHasBeenSet;

                    /**
                     * 分割选项-头发
                     */
                    bool m_hair;
                    bool m_hairHasBeenSet;

                    /**
                     * 分割选项-左眉
                     */
                    bool m_leftEyebrow;
                    bool m_leftEyebrowHasBeenSet;

                    /**
                     * 分割选项-右眉
                     */
                    bool m_rightEyebrow;
                    bool m_rightEyebrowHasBeenSet;

                    /**
                     * 分割选项-左眼
                     */
                    bool m_leftEye;
                    bool m_leftEyeHasBeenSet;

                    /**
                     * 分割选项-右眼
                     */
                    bool m_rightEye;
                    bool m_rightEyeHasBeenSet;

                    /**
                     * 分割选项-鼻子
                     */
                    bool m_nose;
                    bool m_noseHasBeenSet;

                    /**
                     * 分割选项-上唇
                     */
                    bool m_upperLip;
                    bool m_upperLipHasBeenSet;

                    /**
                     * 分割选项-下唇
                     */
                    bool m_lowerLip;
                    bool m_lowerLipHasBeenSet;

                    /**
                     * 分割选项-牙齿
                     */
                    bool m_tooth;
                    bool m_toothHasBeenSet;

                    /**
                     * 分割选项-口腔（不包含牙齿）
                     */
                    bool m_mouth;
                    bool m_mouthHasBeenSet;

                    /**
                     * 分割选项-左耳
                     */
                    bool m_leftEar;
                    bool m_leftEarHasBeenSet;

                    /**
                     * 分割选项-右耳
                     */
                    bool m_rightEar;
                    bool m_rightEarHasBeenSet;

                    /**
                     * 分割选项-面部(不包含眼、耳、口、鼻等五官及头发。)
                     */
                    bool m_face;
                    bool m_faceHasBeenSet;

                    /**
                     * 复合分割选项-头部(包含所有的头部元素，相关装饰除外)
                     */
                    bool m_head;
                    bool m_headHasBeenSet;

                    /**
                     * 分割选项-身体（包含脖子）
                     */
                    bool m_body;
                    bool m_bodyHasBeenSet;

                    /**
                     * 分割选项-帽子
                     */
                    bool m_hat;
                    bool m_hatHasBeenSet;

                    /**
                     * 分割选项-头饰
                     */
                    bool m_headdress;
                    bool m_headdressHasBeenSet;

                    /**
                     * 分割选项-耳环
                     */
                    bool m_earrings;
                    bool m_earringsHasBeenSet;

                    /**
                     * 分割选项-项链
                     */
                    bool m_necklace;
                    bool m_necklaceHasBeenSet;

                    /**
                     * 分割选项-随身物品（ 例如伞、包、手机等。 ）
                     */
                    bool m_belongings;
                    bool m_belongingsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDA_V20200324_MODEL_SEGMENTATIONOPTIONS_H_
