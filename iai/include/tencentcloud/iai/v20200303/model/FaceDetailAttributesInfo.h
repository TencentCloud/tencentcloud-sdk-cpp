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

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_FACEDETAILATTRIBUTESINFO_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_FACEDETAILATTRIBUTESINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iai/v20200303/model/AttributeItem.h>
#include <tencentcloud/iai/v20200303/model/Eye.h>
#include <tencentcloud/iai/v20200303/model/Eyebrow.h>
#include <tencentcloud/iai/v20200303/model/Hair.h>
#include <tencentcloud/iai/v20200303/model/Hat.h>
#include <tencentcloud/iai/v20200303/model/HeadPose.h>
#include <tencentcloud/iai/v20200303/model/Mouth.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20200303
        {
            namespace Model
            {
                /**
                * 人脸属性信息，根据 FaceAttributesType 输入的类型，返回年龄（Age）、颜值（Beauty） 
情绪（Emotion）、眼睛信息（Eye）、眉毛（Eyebrow）、性别（Gender） 
头发（Hair）、帽子（Hat）、姿态（Headpose）、口罩（Mask）、嘴巴（Mouth）、胡子（Moustache） 
鼻子（Nose）、脸型（Shape）、肤色（Skin）、微笑（Smile）等人脸属性信息。  
若 FaceAttributesType 没有输入相关类型，则FaceDetaiAttributesInfo返回的细项不具备参考意义。
                */
                class FaceDetailAttributesInfo : public AbstractModel
                {
                public:
                    FaceDetailAttributesInfo();
                    ~FaceDetailAttributesInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取年龄。
- 取值范围： [0,65]，其中65代表“65岁及以上”。 
- FaceAttributesType 不含Age 或检测超过 5 张人脸时，此参数仍返回，但不具备参考意义。
                     * @return Age 年龄。
- 取值范围： [0,65]，其中65代表“65岁及以上”。 
- FaceAttributesType 不含Age 或检测超过 5 张人脸时，此参数仍返回，但不具备参考意义。
                     * 
                     */
                    int64_t GetAge() const;

                    /**
                     * 设置年龄。
- 取值范围： [0,65]，其中65代表“65岁及以上”。 
- FaceAttributesType 不含Age 或检测超过 5 张人脸时，此参数仍返回，但不具备参考意义。
                     * @param _age 年龄。
- 取值范围： [0,65]，其中65代表“65岁及以上”。 
- FaceAttributesType 不含Age 或检测超过 5 张人脸时，此参数仍返回，但不具备参考意义。
                     * 
                     */
                    void SetAge(const int64_t& _age);

                    /**
                     * 判断参数 Age 是否已赋值
                     * @return Age 是否已赋值
                     * 
                     */
                    bool AgeHasBeenSet() const;

                    /**
                     * 获取美丑打分。
- 取值范围：[0,100]。 
- FaceAttributesType 不含 Beauty 或检测超过 5 张人脸时，此参数仍返回，但不具备参考意义。
                     * @return Beauty 美丑打分。
- 取值范围：[0,100]。 
- FaceAttributesType 不含 Beauty 或检测超过 5 张人脸时，此参数仍返回，但不具备参考意义。
                     * 
                     */
                    int64_t GetBeauty() const;

                    /**
                     * 设置美丑打分。
- 取值范围：[0,100]。 
- FaceAttributesType 不含 Beauty 或检测超过 5 张人脸时，此参数仍返回，但不具备参考意义。
                     * @param _beauty 美丑打分。
- 取值范围：[0,100]。 
- FaceAttributesType 不含 Beauty 或检测超过 5 张人脸时，此参数仍返回，但不具备参考意义。
                     * 
                     */
                    void SetBeauty(const int64_t& _beauty);

                    /**
                     * 判断参数 Beauty 是否已赋值
                     * @return Beauty 是否已赋值
                     * 
                     */
                    bool BeautyHasBeenSet() const;

                    /**
                     * 获取情绪，可识别自然、高兴、惊讶、生气、悲伤、厌恶、害怕。 
- AttributeItem对应的Type为 —— 0：自然，1：高兴，2：惊讶，3：生气，4：悲伤，5：厌恶，6：害怕。
- FaceAttributesType 不含Emotion 或检测超过 5 张人脸时，此参数仍返回，但不具备参考意义。
                     * @return Emotion 情绪，可识别自然、高兴、惊讶、生气、悲伤、厌恶、害怕。 
- AttributeItem对应的Type为 —— 0：自然，1：高兴，2：惊讶，3：生气，4：悲伤，5：厌恶，6：害怕。
- FaceAttributesType 不含Emotion 或检测超过 5 张人脸时，此参数仍返回，但不具备参考意义。
                     * 
                     */
                    AttributeItem GetEmotion() const;

                    /**
                     * 设置情绪，可识别自然、高兴、惊讶、生气、悲伤、厌恶、害怕。 
- AttributeItem对应的Type为 —— 0：自然，1：高兴，2：惊讶，3：生气，4：悲伤，5：厌恶，6：害怕。
- FaceAttributesType 不含Emotion 或检测超过 5 张人脸时，此参数仍返回，但不具备参考意义。
                     * @param _emotion 情绪，可识别自然、高兴、惊讶、生气、悲伤、厌恶、害怕。 
- AttributeItem对应的Type为 —— 0：自然，1：高兴，2：惊讶，3：生气，4：悲伤，5：厌恶，6：害怕。
- FaceAttributesType 不含Emotion 或检测超过 5 张人脸时，此参数仍返回，但不具备参考意义。
                     * 
                     */
                    void SetEmotion(const AttributeItem& _emotion);

                    /**
                     * 判断参数 Emotion 是否已赋值
                     * @return Emotion 是否已赋值
                     * 
                     */
                    bool EmotionHasBeenSet() const;

                    /**
                     * 获取眼睛相关信息，可识别是否戴眼镜、是否闭眼、是否双眼皮和眼睛大小。 
- FaceAttributesType 不含Eye 或检测超过 5 张人脸时，此参数仍返回，但不具备参考意义。
                     * @return Eye 眼睛相关信息，可识别是否戴眼镜、是否闭眼、是否双眼皮和眼睛大小。 
- FaceAttributesType 不含Eye 或检测超过 5 张人脸时，此参数仍返回，但不具备参考意义。
                     * 
                     */
                    Eye GetEye() const;

                    /**
                     * 设置眼睛相关信息，可识别是否戴眼镜、是否闭眼、是否双眼皮和眼睛大小。 
- FaceAttributesType 不含Eye 或检测超过 5 张人脸时，此参数仍返回，但不具备参考意义。
                     * @param _eye 眼睛相关信息，可识别是否戴眼镜、是否闭眼、是否双眼皮和眼睛大小。 
- FaceAttributesType 不含Eye 或检测超过 5 张人脸时，此参数仍返回，但不具备参考意义。
                     * 
                     */
                    void SetEye(const Eye& _eye);

                    /**
                     * 判断参数 Eye 是否已赋值
                     * @return Eye 是否已赋值
                     * 
                     */
                    bool EyeHasBeenSet() const;

                    /**
                     * 获取眉毛相关信息，可识别眉毛浓密、弯曲、长短信息。 
FaceAttributesType 不含Eyebrow 或检测超过 5 张人脸时，此参数仍返回，但不具备参考意义。
                     * @return Eyebrow 眉毛相关信息，可识别眉毛浓密、弯曲、长短信息。 
FaceAttributesType 不含Eyebrow 或检测超过 5 张人脸时，此参数仍返回，但不具备参考意义。
                     * 
                     */
                    Eyebrow GetEyebrow() const;

                    /**
                     * 设置眉毛相关信息，可识别眉毛浓密、弯曲、长短信息。 
FaceAttributesType 不含Eyebrow 或检测超过 5 张人脸时，此参数仍返回，但不具备参考意义。
                     * @param _eyebrow 眉毛相关信息，可识别眉毛浓密、弯曲、长短信息。 
FaceAttributesType 不含Eyebrow 或检测超过 5 张人脸时，此参数仍返回，但不具备参考意义。
                     * 
                     */
                    void SetEyebrow(const Eyebrow& _eyebrow);

                    /**
                     * 判断参数 Eyebrow 是否已赋值
                     * @return Eyebrow 是否已赋值
                     * 
                     */
                    bool EyebrowHasBeenSet() const;

                    /**
                     * 获取性别信息。 
- AttributeItem对应的Type为 —— 	0：男性，1：女性。
- FaceAttributesType 不含Gender 或检测超过 5 张人脸时，此参数仍返回，但不具备参考意义。
                     * @return Gender 性别信息。 
- AttributeItem对应的Type为 —— 	0：男性，1：女性。
- FaceAttributesType 不含Gender 或检测超过 5 张人脸时，此参数仍返回，但不具备参考意义。
                     * 
                     */
                    AttributeItem GetGender() const;

                    /**
                     * 设置性别信息。 
- AttributeItem对应的Type为 —— 	0：男性，1：女性。
- FaceAttributesType 不含Gender 或检测超过 5 张人脸时，此参数仍返回，但不具备参考意义。
                     * @param _gender 性别信息。 
- AttributeItem对应的Type为 —— 	0：男性，1：女性。
- FaceAttributesType 不含Gender 或检测超过 5 张人脸时，此参数仍返回，但不具备参考意义。
                     * 
                     */
                    void SetGender(const AttributeItem& _gender);

                    /**
                     * 判断参数 Gender 是否已赋值
                     * @return Gender 是否已赋值
                     * 
                     */
                    bool GenderHasBeenSet() const;

                    /**
                     * 获取头发信息，包含头发长度、有无刘海、头发颜色。 
- FaceAttributesType 不含Hair 或检测超过 5 张人脸时，此参数仍返回，但不具备参考意义。
                     * @return Hair 头发信息，包含头发长度、有无刘海、头发颜色。 
- FaceAttributesType 不含Hair 或检测超过 5 张人脸时，此参数仍返回，但不具备参考意义。
                     * 
                     */
                    Hair GetHair() const;

                    /**
                     * 设置头发信息，包含头发长度、有无刘海、头发颜色。 
- FaceAttributesType 不含Hair 或检测超过 5 张人脸时，此参数仍返回，但不具备参考意义。
                     * @param _hair 头发信息，包含头发长度、有无刘海、头发颜色。 
- FaceAttributesType 不含Hair 或检测超过 5 张人脸时，此参数仍返回，但不具备参考意义。
                     * 
                     */
                    void SetHair(const Hair& _hair);

                    /**
                     * 判断参数 Hair 是否已赋值
                     * @return Hair 是否已赋值
                     * 
                     */
                    bool HairHasBeenSet() const;

                    /**
                     * 获取帽子信息，可识别是否佩戴帽子、帽子款式、帽子颜色。 
- FaceAttributesType 不含Hat 或检测超过 5 张人脸时，此参数仍返回，但不具备参考意义。
                     * @return Hat 帽子信息，可识别是否佩戴帽子、帽子款式、帽子颜色。 
- FaceAttributesType 不含Hat 或检测超过 5 张人脸时，此参数仍返回，但不具备参考意义。
                     * 
                     */
                    Hat GetHat() const;

                    /**
                     * 设置帽子信息，可识别是否佩戴帽子、帽子款式、帽子颜色。 
- FaceAttributesType 不含Hat 或检测超过 5 张人脸时，此参数仍返回，但不具备参考意义。
                     * @param _hat 帽子信息，可识别是否佩戴帽子、帽子款式、帽子颜色。 
- FaceAttributesType 不含Hat 或检测超过 5 张人脸时，此参数仍返回，但不具备参考意义。
                     * 
                     */
                    void SetHat(const Hat& _hat);

                    /**
                     * 判断参数 Hat 是否已赋值
                     * @return Hat 是否已赋值
                     * 
                     */
                    bool HatHasBeenSet() const;

                    /**
                     * 获取姿态信息，包含人脸的上下偏移、左右偏移、平面旋转信息。 
- FaceAttributesType 不含Headpose 或检测超过 5 张人脸时，此参数仍返回，但不具备参考意义。
                     * @return HeadPose 姿态信息，包含人脸的上下偏移、左右偏移、平面旋转信息。 
- FaceAttributesType 不含Headpose 或检测超过 5 张人脸时，此参数仍返回，但不具备参考意义。
                     * 
                     */
                    HeadPose GetHeadPose() const;

                    /**
                     * 设置姿态信息，包含人脸的上下偏移、左右偏移、平面旋转信息。 
- FaceAttributesType 不含Headpose 或检测超过 5 张人脸时，此参数仍返回，但不具备参考意义。
                     * @param _headPose 姿态信息，包含人脸的上下偏移、左右偏移、平面旋转信息。 
- FaceAttributesType 不含Headpose 或检测超过 5 张人脸时，此参数仍返回，但不具备参考意义。
                     * 
                     */
                    void SetHeadPose(const HeadPose& _headPose);

                    /**
                     * 判断参数 HeadPose 是否已赋值
                     * @return HeadPose 是否已赋值
                     * 
                     */
                    bool HeadPoseHasBeenSet() const;

                    /**
                     * 获取口罩佩戴信息。 
- AttributeItem对应的Type为 —— 0: 无口罩， 1: 有口罩不遮脸，2: 有口罩遮下巴，3: 有口罩遮嘴，4: 正确佩戴口罩。
- FaceAttributesType 不含Mask 或检测超过 5 张人脸时，此参数仍返回，但不具备参考意义。
                     * @return Mask 口罩佩戴信息。 
- AttributeItem对应的Type为 —— 0: 无口罩， 1: 有口罩不遮脸，2: 有口罩遮下巴，3: 有口罩遮嘴，4: 正确佩戴口罩。
- FaceAttributesType 不含Mask 或检测超过 5 张人脸时，此参数仍返回，但不具备参考意义。
                     * 
                     */
                    AttributeItem GetMask() const;

                    /**
                     * 设置口罩佩戴信息。 
- AttributeItem对应的Type为 —— 0: 无口罩， 1: 有口罩不遮脸，2: 有口罩遮下巴，3: 有口罩遮嘴，4: 正确佩戴口罩。
- FaceAttributesType 不含Mask 或检测超过 5 张人脸时，此参数仍返回，但不具备参考意义。
                     * @param _mask 口罩佩戴信息。 
- AttributeItem对应的Type为 —— 0: 无口罩， 1: 有口罩不遮脸，2: 有口罩遮下巴，3: 有口罩遮嘴，4: 正确佩戴口罩。
- FaceAttributesType 不含Mask 或检测超过 5 张人脸时，此参数仍返回，但不具备参考意义。
                     * 
                     */
                    void SetMask(const AttributeItem& _mask);

                    /**
                     * 判断参数 Mask 是否已赋值
                     * @return Mask 是否已赋值
                     * 
                     */
                    bool MaskHasBeenSet() const;

                    /**
                     * 获取嘴巴信息，可识别是否张嘴、嘴唇厚度。 
- FaceAttributesType 不含 Mouth 或检测超过 5 张人脸时，此参数仍返回，但不具备参考意义。
                     * @return Mouth 嘴巴信息，可识别是否张嘴、嘴唇厚度。 
- FaceAttributesType 不含 Mouth 或检测超过 5 张人脸时，此参数仍返回，但不具备参考意义。
                     * 
                     */
                    Mouth GetMouth() const;

                    /**
                     * 设置嘴巴信息，可识别是否张嘴、嘴唇厚度。 
- FaceAttributesType 不含 Mouth 或检测超过 5 张人脸时，此参数仍返回，但不具备参考意义。
                     * @param _mouth 嘴巴信息，可识别是否张嘴、嘴唇厚度。 
- FaceAttributesType 不含 Mouth 或检测超过 5 张人脸时，此参数仍返回，但不具备参考意义。
                     * 
                     */
                    void SetMouth(const Mouth& _mouth);

                    /**
                     * 判断参数 Mouth 是否已赋值
                     * @return Mouth 是否已赋值
                     * 
                     */
                    bool MouthHasBeenSet() const;

                    /**
                     * 获取胡子信息。
- AttributeItem对应的Type为 —— 0：无胡子，1：有胡子。 
- FaceAttributesType 不含 Moustache 或检测超过 5 张人脸时，此参数仍返回，但不具备参考意义。
                     * @return Moustache 胡子信息。
- AttributeItem对应的Type为 —— 0：无胡子，1：有胡子。 
- FaceAttributesType 不含 Moustache 或检测超过 5 张人脸时，此参数仍返回，但不具备参考意义。
                     * 
                     */
                    AttributeItem GetMoustache() const;

                    /**
                     * 设置胡子信息。
- AttributeItem对应的Type为 —— 0：无胡子，1：有胡子。 
- FaceAttributesType 不含 Moustache 或检测超过 5 张人脸时，此参数仍返回，但不具备参考意义。
                     * @param _moustache 胡子信息。
- AttributeItem对应的Type为 —— 0：无胡子，1：有胡子。 
- FaceAttributesType 不含 Moustache 或检测超过 5 张人脸时，此参数仍返回，但不具备参考意义。
                     * 
                     */
                    void SetMoustache(const AttributeItem& _moustache);

                    /**
                     * 判断参数 Moustache 是否已赋值
                     * @return Moustache 是否已赋值
                     * 
                     */
                    bool MoustacheHasBeenSet() const;

                    /**
                     * 获取鼻子信息。 
- AttributeItem对应的Type为 —— 0：朝天鼻，1：鹰钩鼻，2：普通，3：圆鼻头
- FaceAttributesType 不含 Nose 或检测超过 5 张人脸时，此参数仍返回，但不具备参考意义。
                     * @return Nose 鼻子信息。 
- AttributeItem对应的Type为 —— 0：朝天鼻，1：鹰钩鼻，2：普通，3：圆鼻头
- FaceAttributesType 不含 Nose 或检测超过 5 张人脸时，此参数仍返回，但不具备参考意义。
                     * 
                     */
                    AttributeItem GetNose() const;

                    /**
                     * 设置鼻子信息。 
- AttributeItem对应的Type为 —— 0：朝天鼻，1：鹰钩鼻，2：普通，3：圆鼻头
- FaceAttributesType 不含 Nose 或检测超过 5 张人脸时，此参数仍返回，但不具备参考意义。
                     * @param _nose 鼻子信息。 
- AttributeItem对应的Type为 —— 0：朝天鼻，1：鹰钩鼻，2：普通，3：圆鼻头
- FaceAttributesType 不含 Nose 或检测超过 5 张人脸时，此参数仍返回，但不具备参考意义。
                     * 
                     */
                    void SetNose(const AttributeItem& _nose);

                    /**
                     * 判断参数 Nose 是否已赋值
                     * @return Nose 是否已赋值
                     * 
                     */
                    bool NoseHasBeenSet() const;

                    /**
                     * 获取脸型信息。 
- AttributeItem对应的Type为 —— 0：方脸，1：三角脸，2：鹅蛋脸，3：心形脸，4：圆脸。
- FaceAttributesType 不含 Shape 或检测超过 5 张人脸时，此参数仍返回，但不具备参考意义。
                     * @return Shape 脸型信息。 
- AttributeItem对应的Type为 —— 0：方脸，1：三角脸，2：鹅蛋脸，3：心形脸，4：圆脸。
- FaceAttributesType 不含 Shape 或检测超过 5 张人脸时，此参数仍返回，但不具备参考意义。
                     * 
                     */
                    AttributeItem GetShape() const;

                    /**
                     * 设置脸型信息。 
- AttributeItem对应的Type为 —— 0：方脸，1：三角脸，2：鹅蛋脸，3：心形脸，4：圆脸。
- FaceAttributesType 不含 Shape 或检测超过 5 张人脸时，此参数仍返回，但不具备参考意义。
                     * @param _shape 脸型信息。 
- AttributeItem对应的Type为 —— 0：方脸，1：三角脸，2：鹅蛋脸，3：心形脸，4：圆脸。
- FaceAttributesType 不含 Shape 或检测超过 5 张人脸时，此参数仍返回，但不具备参考意义。
                     * 
                     */
                    void SetShape(const AttributeItem& _shape);

                    /**
                     * 判断参数 Shape 是否已赋值
                     * @return Shape 是否已赋值
                     * 
                     */
                    bool ShapeHasBeenSet() const;

                    /**
                     * 获取肤色信息。 
- AttributeItem对应的Type为 —— 0：黄色皮肤，1：棕色皮肤，2：黑色皮肤，3：白色皮肤。
- FaceAttributesType 不含 Skin 或检测超过 5 张人脸时，此参数仍返回，但不具备参考意义。
                     * @return Skin 肤色信息。 
- AttributeItem对应的Type为 —— 0：黄色皮肤，1：棕色皮肤，2：黑色皮肤，3：白色皮肤。
- FaceAttributesType 不含 Skin 或检测超过 5 张人脸时，此参数仍返回，但不具备参考意义。
                     * 
                     */
                    AttributeItem GetSkin() const;

                    /**
                     * 设置肤色信息。 
- AttributeItem对应的Type为 —— 0：黄色皮肤，1：棕色皮肤，2：黑色皮肤，3：白色皮肤。
- FaceAttributesType 不含 Skin 或检测超过 5 张人脸时，此参数仍返回，但不具备参考意义。
                     * @param _skin 肤色信息。 
- AttributeItem对应的Type为 —— 0：黄色皮肤，1：棕色皮肤，2：黑色皮肤，3：白色皮肤。
- FaceAttributesType 不含 Skin 或检测超过 5 张人脸时，此参数仍返回，但不具备参考意义。
                     * 
                     */
                    void SetSkin(const AttributeItem& _skin);

                    /**
                     * 判断参数 Skin 是否已赋值
                     * @return Skin 是否已赋值
                     * 
                     */
                    bool SkinHasBeenSet() const;

                    /**
                     * 获取微笑程度
- 取值范围：[0,100]。 
- FaceAttributesType 不含 Smile 或检测超过 5 张人脸时，此参数仍返回，但不具备参考意义。
                     * @return Smile 微笑程度
- 取值范围：[0,100]。 
- FaceAttributesType 不含 Smile 或检测超过 5 张人脸时，此参数仍返回，但不具备参考意义。
                     * 
                     */
                    int64_t GetSmile() const;

                    /**
                     * 设置微笑程度
- 取值范围：[0,100]。 
- FaceAttributesType 不含 Smile 或检测超过 5 张人脸时，此参数仍返回，但不具备参考意义。
                     * @param _smile 微笑程度
- 取值范围：[0,100]。 
- FaceAttributesType 不含 Smile 或检测超过 5 张人脸时，此参数仍返回，但不具备参考意义。
                     * 
                     */
                    void SetSmile(const int64_t& _smile);

                    /**
                     * 判断参数 Smile 是否已赋值
                     * @return Smile 是否已赋值
                     * 
                     */
                    bool SmileHasBeenSet() const;

                private:

                    /**
                     * 年龄。
- 取值范围： [0,65]，其中65代表“65岁及以上”。 
- FaceAttributesType 不含Age 或检测超过 5 张人脸时，此参数仍返回，但不具备参考意义。
                     */
                    int64_t m_age;
                    bool m_ageHasBeenSet;

                    /**
                     * 美丑打分。
- 取值范围：[0,100]。 
- FaceAttributesType 不含 Beauty 或检测超过 5 张人脸时，此参数仍返回，但不具备参考意义。
                     */
                    int64_t m_beauty;
                    bool m_beautyHasBeenSet;

                    /**
                     * 情绪，可识别自然、高兴、惊讶、生气、悲伤、厌恶、害怕。 
- AttributeItem对应的Type为 —— 0：自然，1：高兴，2：惊讶，3：生气，4：悲伤，5：厌恶，6：害怕。
- FaceAttributesType 不含Emotion 或检测超过 5 张人脸时，此参数仍返回，但不具备参考意义。
                     */
                    AttributeItem m_emotion;
                    bool m_emotionHasBeenSet;

                    /**
                     * 眼睛相关信息，可识别是否戴眼镜、是否闭眼、是否双眼皮和眼睛大小。 
- FaceAttributesType 不含Eye 或检测超过 5 张人脸时，此参数仍返回，但不具备参考意义。
                     */
                    Eye m_eye;
                    bool m_eyeHasBeenSet;

                    /**
                     * 眉毛相关信息，可识别眉毛浓密、弯曲、长短信息。 
FaceAttributesType 不含Eyebrow 或检测超过 5 张人脸时，此参数仍返回，但不具备参考意义。
                     */
                    Eyebrow m_eyebrow;
                    bool m_eyebrowHasBeenSet;

                    /**
                     * 性别信息。 
- AttributeItem对应的Type为 —— 	0：男性，1：女性。
- FaceAttributesType 不含Gender 或检测超过 5 张人脸时，此参数仍返回，但不具备参考意义。
                     */
                    AttributeItem m_gender;
                    bool m_genderHasBeenSet;

                    /**
                     * 头发信息，包含头发长度、有无刘海、头发颜色。 
- FaceAttributesType 不含Hair 或检测超过 5 张人脸时，此参数仍返回，但不具备参考意义。
                     */
                    Hair m_hair;
                    bool m_hairHasBeenSet;

                    /**
                     * 帽子信息，可识别是否佩戴帽子、帽子款式、帽子颜色。 
- FaceAttributesType 不含Hat 或检测超过 5 张人脸时，此参数仍返回，但不具备参考意义。
                     */
                    Hat m_hat;
                    bool m_hatHasBeenSet;

                    /**
                     * 姿态信息，包含人脸的上下偏移、左右偏移、平面旋转信息。 
- FaceAttributesType 不含Headpose 或检测超过 5 张人脸时，此参数仍返回，但不具备参考意义。
                     */
                    HeadPose m_headPose;
                    bool m_headPoseHasBeenSet;

                    /**
                     * 口罩佩戴信息。 
- AttributeItem对应的Type为 —— 0: 无口罩， 1: 有口罩不遮脸，2: 有口罩遮下巴，3: 有口罩遮嘴，4: 正确佩戴口罩。
- FaceAttributesType 不含Mask 或检测超过 5 张人脸时，此参数仍返回，但不具备参考意义。
                     */
                    AttributeItem m_mask;
                    bool m_maskHasBeenSet;

                    /**
                     * 嘴巴信息，可识别是否张嘴、嘴唇厚度。 
- FaceAttributesType 不含 Mouth 或检测超过 5 张人脸时，此参数仍返回，但不具备参考意义。
                     */
                    Mouth m_mouth;
                    bool m_mouthHasBeenSet;

                    /**
                     * 胡子信息。
- AttributeItem对应的Type为 —— 0：无胡子，1：有胡子。 
- FaceAttributesType 不含 Moustache 或检测超过 5 张人脸时，此参数仍返回，但不具备参考意义。
                     */
                    AttributeItem m_moustache;
                    bool m_moustacheHasBeenSet;

                    /**
                     * 鼻子信息。 
- AttributeItem对应的Type为 —— 0：朝天鼻，1：鹰钩鼻，2：普通，3：圆鼻头
- FaceAttributesType 不含 Nose 或检测超过 5 张人脸时，此参数仍返回，但不具备参考意义。
                     */
                    AttributeItem m_nose;
                    bool m_noseHasBeenSet;

                    /**
                     * 脸型信息。 
- AttributeItem对应的Type为 —— 0：方脸，1：三角脸，2：鹅蛋脸，3：心形脸，4：圆脸。
- FaceAttributesType 不含 Shape 或检测超过 5 张人脸时，此参数仍返回，但不具备参考意义。
                     */
                    AttributeItem m_shape;
                    bool m_shapeHasBeenSet;

                    /**
                     * 肤色信息。 
- AttributeItem对应的Type为 —— 0：黄色皮肤，1：棕色皮肤，2：黑色皮肤，3：白色皮肤。
- FaceAttributesType 不含 Skin 或检测超过 5 张人脸时，此参数仍返回，但不具备参考意义。
                     */
                    AttributeItem m_skin;
                    bool m_skinHasBeenSet;

                    /**
                     * 微笑程度
- 取值范围：[0,100]。 
- FaceAttributesType 不含 Smile 或检测超过 5 张人脸时，此参数仍返回，但不具备参考意义。
                     */
                    int64_t m_smile;
                    bool m_smileHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_FACEDETAILATTRIBUTESINFO_H_
