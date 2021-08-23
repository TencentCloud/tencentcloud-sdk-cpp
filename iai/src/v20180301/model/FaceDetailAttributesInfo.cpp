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

#include <tencentcloud/iai/v20180301/model/FaceDetailAttributesInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iai::V20180301::Model;
using namespace std;

FaceDetailAttributesInfo::FaceDetailAttributesInfo() :
    m_ageHasBeenSet(false),
    m_beautyHasBeenSet(false),
    m_emotionHasBeenSet(false),
    m_eyeHasBeenSet(false),
    m_eyebrowHasBeenSet(false),
    m_genderHasBeenSet(false),
    m_hairHasBeenSet(false),
    m_hatHasBeenSet(false),
    m_headPoseHasBeenSet(false),
    m_maskHasBeenSet(false),
    m_mouthHasBeenSet(false),
    m_moustacheHasBeenSet(false),
    m_noseHasBeenSet(false),
    m_shapeHasBeenSet(false),
    m_skinHasBeenSet(false),
    m_smileHasBeenSet(false)
{
}

CoreInternalOutcome FaceDetailAttributesInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Age") && !value["Age"].IsNull())
    {
        if (!value["Age"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FaceDetailAttributesInfo.Age` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_age = value["Age"].GetInt64();
        m_ageHasBeenSet = true;
    }

    if (value.HasMember("Beauty") && !value["Beauty"].IsNull())
    {
        if (!value["Beauty"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FaceDetailAttributesInfo.Beauty` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_beauty = value["Beauty"].GetInt64();
        m_beautyHasBeenSet = true;
    }

    if (value.HasMember("Emotion") && !value["Emotion"].IsNull())
    {
        if (!value["Emotion"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FaceDetailAttributesInfo.Emotion` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_emotion.Deserialize(value["Emotion"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_emotionHasBeenSet = true;
    }

    if (value.HasMember("Eye") && !value["Eye"].IsNull())
    {
        if (!value["Eye"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FaceDetailAttributesInfo.Eye` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_eye.Deserialize(value["Eye"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_eyeHasBeenSet = true;
    }

    if (value.HasMember("Eyebrow") && !value["Eyebrow"].IsNull())
    {
        if (!value["Eyebrow"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FaceDetailAttributesInfo.Eyebrow` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_eyebrow.Deserialize(value["Eyebrow"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_eyebrowHasBeenSet = true;
    }

    if (value.HasMember("Gender") && !value["Gender"].IsNull())
    {
        if (!value["Gender"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FaceDetailAttributesInfo.Gender` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_gender.Deserialize(value["Gender"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_genderHasBeenSet = true;
    }

    if (value.HasMember("Hair") && !value["Hair"].IsNull())
    {
        if (!value["Hair"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FaceDetailAttributesInfo.Hair` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_hair.Deserialize(value["Hair"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_hairHasBeenSet = true;
    }

    if (value.HasMember("Hat") && !value["Hat"].IsNull())
    {
        if (!value["Hat"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FaceDetailAttributesInfo.Hat` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_hat.Deserialize(value["Hat"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_hatHasBeenSet = true;
    }

    if (value.HasMember("HeadPose") && !value["HeadPose"].IsNull())
    {
        if (!value["HeadPose"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FaceDetailAttributesInfo.HeadPose` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_headPose.Deserialize(value["HeadPose"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_headPoseHasBeenSet = true;
    }

    if (value.HasMember("Mask") && !value["Mask"].IsNull())
    {
        if (!value["Mask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FaceDetailAttributesInfo.Mask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_mask.Deserialize(value["Mask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_maskHasBeenSet = true;
    }

    if (value.HasMember("Mouth") && !value["Mouth"].IsNull())
    {
        if (!value["Mouth"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FaceDetailAttributesInfo.Mouth` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_mouth.Deserialize(value["Mouth"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_mouthHasBeenSet = true;
    }

    if (value.HasMember("Moustache") && !value["Moustache"].IsNull())
    {
        if (!value["Moustache"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FaceDetailAttributesInfo.Moustache` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_moustache.Deserialize(value["Moustache"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_moustacheHasBeenSet = true;
    }

    if (value.HasMember("Nose") && !value["Nose"].IsNull())
    {
        if (!value["Nose"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FaceDetailAttributesInfo.Nose` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_nose.Deserialize(value["Nose"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_noseHasBeenSet = true;
    }

    if (value.HasMember("Shape") && !value["Shape"].IsNull())
    {
        if (!value["Shape"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FaceDetailAttributesInfo.Shape` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_shape.Deserialize(value["Shape"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_shapeHasBeenSet = true;
    }

    if (value.HasMember("Skin") && !value["Skin"].IsNull())
    {
        if (!value["Skin"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FaceDetailAttributesInfo.Skin` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_skin.Deserialize(value["Skin"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_skinHasBeenSet = true;
    }

    if (value.HasMember("Smile") && !value["Smile"].IsNull())
    {
        if (!value["Smile"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FaceDetailAttributesInfo.Smile` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_smile = value["Smile"].GetInt64();
        m_smileHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FaceDetailAttributesInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Age";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_age, allocator);
    }

    if (m_beautyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Beauty";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_beauty, allocator);
    }

    if (m_emotionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Emotion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_emotion.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_eyeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Eye";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_eye.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_eyebrowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Eyebrow";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_eyebrow.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_genderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Gender";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_gender.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_hairHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Hair";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_hair.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_hatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Hat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_hat.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_headPoseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HeadPose";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_headPose.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_maskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mask.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_mouthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mouth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mouth.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_moustacheHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Moustache";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_moustache.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_noseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nose";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_nose.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_shapeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Shape";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_shape.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_skinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Skin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_skin.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_smileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Smile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_smile, allocator);
    }

}


int64_t FaceDetailAttributesInfo::GetAge() const
{
    return m_age;
}

void FaceDetailAttributesInfo::SetAge(const int64_t& _age)
{
    m_age = _age;
    m_ageHasBeenSet = true;
}

bool FaceDetailAttributesInfo::AgeHasBeenSet() const
{
    return m_ageHasBeenSet;
}

int64_t FaceDetailAttributesInfo::GetBeauty() const
{
    return m_beauty;
}

void FaceDetailAttributesInfo::SetBeauty(const int64_t& _beauty)
{
    m_beauty = _beauty;
    m_beautyHasBeenSet = true;
}

bool FaceDetailAttributesInfo::BeautyHasBeenSet() const
{
    return m_beautyHasBeenSet;
}

AttributeItem FaceDetailAttributesInfo::GetEmotion() const
{
    return m_emotion;
}

void FaceDetailAttributesInfo::SetEmotion(const AttributeItem& _emotion)
{
    m_emotion = _emotion;
    m_emotionHasBeenSet = true;
}

bool FaceDetailAttributesInfo::EmotionHasBeenSet() const
{
    return m_emotionHasBeenSet;
}

Eye FaceDetailAttributesInfo::GetEye() const
{
    return m_eye;
}

void FaceDetailAttributesInfo::SetEye(const Eye& _eye)
{
    m_eye = _eye;
    m_eyeHasBeenSet = true;
}

bool FaceDetailAttributesInfo::EyeHasBeenSet() const
{
    return m_eyeHasBeenSet;
}

Eyebrow FaceDetailAttributesInfo::GetEyebrow() const
{
    return m_eyebrow;
}

void FaceDetailAttributesInfo::SetEyebrow(const Eyebrow& _eyebrow)
{
    m_eyebrow = _eyebrow;
    m_eyebrowHasBeenSet = true;
}

bool FaceDetailAttributesInfo::EyebrowHasBeenSet() const
{
    return m_eyebrowHasBeenSet;
}

AttributeItem FaceDetailAttributesInfo::GetGender() const
{
    return m_gender;
}

void FaceDetailAttributesInfo::SetGender(const AttributeItem& _gender)
{
    m_gender = _gender;
    m_genderHasBeenSet = true;
}

bool FaceDetailAttributesInfo::GenderHasBeenSet() const
{
    return m_genderHasBeenSet;
}

Hair FaceDetailAttributesInfo::GetHair() const
{
    return m_hair;
}

void FaceDetailAttributesInfo::SetHair(const Hair& _hair)
{
    m_hair = _hair;
    m_hairHasBeenSet = true;
}

bool FaceDetailAttributesInfo::HairHasBeenSet() const
{
    return m_hairHasBeenSet;
}

Hat FaceDetailAttributesInfo::GetHat() const
{
    return m_hat;
}

void FaceDetailAttributesInfo::SetHat(const Hat& _hat)
{
    m_hat = _hat;
    m_hatHasBeenSet = true;
}

bool FaceDetailAttributesInfo::HatHasBeenSet() const
{
    return m_hatHasBeenSet;
}

HeadPose FaceDetailAttributesInfo::GetHeadPose() const
{
    return m_headPose;
}

void FaceDetailAttributesInfo::SetHeadPose(const HeadPose& _headPose)
{
    m_headPose = _headPose;
    m_headPoseHasBeenSet = true;
}

bool FaceDetailAttributesInfo::HeadPoseHasBeenSet() const
{
    return m_headPoseHasBeenSet;
}

AttributeItem FaceDetailAttributesInfo::GetMask() const
{
    return m_mask;
}

void FaceDetailAttributesInfo::SetMask(const AttributeItem& _mask)
{
    m_mask = _mask;
    m_maskHasBeenSet = true;
}

bool FaceDetailAttributesInfo::MaskHasBeenSet() const
{
    return m_maskHasBeenSet;
}

Mouth FaceDetailAttributesInfo::GetMouth() const
{
    return m_mouth;
}

void FaceDetailAttributesInfo::SetMouth(const Mouth& _mouth)
{
    m_mouth = _mouth;
    m_mouthHasBeenSet = true;
}

bool FaceDetailAttributesInfo::MouthHasBeenSet() const
{
    return m_mouthHasBeenSet;
}

AttributeItem FaceDetailAttributesInfo::GetMoustache() const
{
    return m_moustache;
}

void FaceDetailAttributesInfo::SetMoustache(const AttributeItem& _moustache)
{
    m_moustache = _moustache;
    m_moustacheHasBeenSet = true;
}

bool FaceDetailAttributesInfo::MoustacheHasBeenSet() const
{
    return m_moustacheHasBeenSet;
}

AttributeItem FaceDetailAttributesInfo::GetNose() const
{
    return m_nose;
}

void FaceDetailAttributesInfo::SetNose(const AttributeItem& _nose)
{
    m_nose = _nose;
    m_noseHasBeenSet = true;
}

bool FaceDetailAttributesInfo::NoseHasBeenSet() const
{
    return m_noseHasBeenSet;
}

AttributeItem FaceDetailAttributesInfo::GetShape() const
{
    return m_shape;
}

void FaceDetailAttributesInfo::SetShape(const AttributeItem& _shape)
{
    m_shape = _shape;
    m_shapeHasBeenSet = true;
}

bool FaceDetailAttributesInfo::ShapeHasBeenSet() const
{
    return m_shapeHasBeenSet;
}

AttributeItem FaceDetailAttributesInfo::GetSkin() const
{
    return m_skin;
}

void FaceDetailAttributesInfo::SetSkin(const AttributeItem& _skin)
{
    m_skin = _skin;
    m_skinHasBeenSet = true;
}

bool FaceDetailAttributesInfo::SkinHasBeenSet() const
{
    return m_skinHasBeenSet;
}

int64_t FaceDetailAttributesInfo::GetSmile() const
{
    return m_smile;
}

void FaceDetailAttributesInfo::SetSmile(const int64_t& _smile)
{
    m_smile = _smile;
    m_smileHasBeenSet = true;
}

bool FaceDetailAttributesInfo::SmileHasBeenSet() const
{
    return m_smileHasBeenSet;
}

