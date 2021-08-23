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

#include <tencentcloud/iai/v20200303/model/FaceAttributesInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iai::V20200303::Model;
using namespace std;

FaceAttributesInfo::FaceAttributesInfo() :
    m_genderHasBeenSet(false),
    m_ageHasBeenSet(false),
    m_expressionHasBeenSet(false),
    m_glassHasBeenSet(false),
    m_pitchHasBeenSet(false),
    m_yawHasBeenSet(false),
    m_rollHasBeenSet(false),
    m_beautyHasBeenSet(false),
    m_hatHasBeenSet(false),
    m_maskHasBeenSet(false),
    m_hairHasBeenSet(false),
    m_eyeOpenHasBeenSet(false)
{
}

CoreInternalOutcome FaceAttributesInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Gender") && !value["Gender"].IsNull())
    {
        if (!value["Gender"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FaceAttributesInfo.Gender` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_gender = value["Gender"].GetInt64();
        m_genderHasBeenSet = true;
    }

    if (value.HasMember("Age") && !value["Age"].IsNull())
    {
        if (!value["Age"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FaceAttributesInfo.Age` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_age = value["Age"].GetInt64();
        m_ageHasBeenSet = true;
    }

    if (value.HasMember("Expression") && !value["Expression"].IsNull())
    {
        if (!value["Expression"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FaceAttributesInfo.Expression` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expression = value["Expression"].GetInt64();
        m_expressionHasBeenSet = true;
    }

    if (value.HasMember("Glass") && !value["Glass"].IsNull())
    {
        if (!value["Glass"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `FaceAttributesInfo.Glass` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_glass = value["Glass"].GetBool();
        m_glassHasBeenSet = true;
    }

    if (value.HasMember("Pitch") && !value["Pitch"].IsNull())
    {
        if (!value["Pitch"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FaceAttributesInfo.Pitch` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pitch = value["Pitch"].GetInt64();
        m_pitchHasBeenSet = true;
    }

    if (value.HasMember("Yaw") && !value["Yaw"].IsNull())
    {
        if (!value["Yaw"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FaceAttributesInfo.Yaw` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_yaw = value["Yaw"].GetInt64();
        m_yawHasBeenSet = true;
    }

    if (value.HasMember("Roll") && !value["Roll"].IsNull())
    {
        if (!value["Roll"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FaceAttributesInfo.Roll` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_roll = value["Roll"].GetInt64();
        m_rollHasBeenSet = true;
    }

    if (value.HasMember("Beauty") && !value["Beauty"].IsNull())
    {
        if (!value["Beauty"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FaceAttributesInfo.Beauty` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_beauty = value["Beauty"].GetInt64();
        m_beautyHasBeenSet = true;
    }

    if (value.HasMember("Hat") && !value["Hat"].IsNull())
    {
        if (!value["Hat"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `FaceAttributesInfo.Hat` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hat = value["Hat"].GetBool();
        m_hatHasBeenSet = true;
    }

    if (value.HasMember("Mask") && !value["Mask"].IsNull())
    {
        if (!value["Mask"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `FaceAttributesInfo.Mask` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_mask = value["Mask"].GetBool();
        m_maskHasBeenSet = true;
    }

    if (value.HasMember("Hair") && !value["Hair"].IsNull())
    {
        if (!value["Hair"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FaceAttributesInfo.Hair` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_hair.Deserialize(value["Hair"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_hairHasBeenSet = true;
    }

    if (value.HasMember("EyeOpen") && !value["EyeOpen"].IsNull())
    {
        if (!value["EyeOpen"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `FaceAttributesInfo.EyeOpen` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_eyeOpen = value["EyeOpen"].GetBool();
        m_eyeOpenHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FaceAttributesInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_genderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Gender";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gender, allocator);
    }

    if (m_ageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Age";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_age, allocator);
    }

    if (m_expressionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Expression";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expression, allocator);
    }

    if (m_glassHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Glass";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_glass, allocator);
    }

    if (m_pitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pitch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pitch, allocator);
    }

    if (m_yawHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Yaw";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_yaw, allocator);
    }

    if (m_rollHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Roll";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_roll, allocator);
    }

    if (m_beautyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Beauty";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_beauty, allocator);
    }

    if (m_hatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Hat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hat, allocator);
    }

    if (m_maskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mask, allocator);
    }

    if (m_hairHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Hair";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_hair.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_eyeOpenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EyeOpen";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eyeOpen, allocator);
    }

}


int64_t FaceAttributesInfo::GetGender() const
{
    return m_gender;
}

void FaceAttributesInfo::SetGender(const int64_t& _gender)
{
    m_gender = _gender;
    m_genderHasBeenSet = true;
}

bool FaceAttributesInfo::GenderHasBeenSet() const
{
    return m_genderHasBeenSet;
}

int64_t FaceAttributesInfo::GetAge() const
{
    return m_age;
}

void FaceAttributesInfo::SetAge(const int64_t& _age)
{
    m_age = _age;
    m_ageHasBeenSet = true;
}

bool FaceAttributesInfo::AgeHasBeenSet() const
{
    return m_ageHasBeenSet;
}

int64_t FaceAttributesInfo::GetExpression() const
{
    return m_expression;
}

void FaceAttributesInfo::SetExpression(const int64_t& _expression)
{
    m_expression = _expression;
    m_expressionHasBeenSet = true;
}

bool FaceAttributesInfo::ExpressionHasBeenSet() const
{
    return m_expressionHasBeenSet;
}

bool FaceAttributesInfo::GetGlass() const
{
    return m_glass;
}

void FaceAttributesInfo::SetGlass(const bool& _glass)
{
    m_glass = _glass;
    m_glassHasBeenSet = true;
}

bool FaceAttributesInfo::GlassHasBeenSet() const
{
    return m_glassHasBeenSet;
}

int64_t FaceAttributesInfo::GetPitch() const
{
    return m_pitch;
}

void FaceAttributesInfo::SetPitch(const int64_t& _pitch)
{
    m_pitch = _pitch;
    m_pitchHasBeenSet = true;
}

bool FaceAttributesInfo::PitchHasBeenSet() const
{
    return m_pitchHasBeenSet;
}

int64_t FaceAttributesInfo::GetYaw() const
{
    return m_yaw;
}

void FaceAttributesInfo::SetYaw(const int64_t& _yaw)
{
    m_yaw = _yaw;
    m_yawHasBeenSet = true;
}

bool FaceAttributesInfo::YawHasBeenSet() const
{
    return m_yawHasBeenSet;
}

int64_t FaceAttributesInfo::GetRoll() const
{
    return m_roll;
}

void FaceAttributesInfo::SetRoll(const int64_t& _roll)
{
    m_roll = _roll;
    m_rollHasBeenSet = true;
}

bool FaceAttributesInfo::RollHasBeenSet() const
{
    return m_rollHasBeenSet;
}

int64_t FaceAttributesInfo::GetBeauty() const
{
    return m_beauty;
}

void FaceAttributesInfo::SetBeauty(const int64_t& _beauty)
{
    m_beauty = _beauty;
    m_beautyHasBeenSet = true;
}

bool FaceAttributesInfo::BeautyHasBeenSet() const
{
    return m_beautyHasBeenSet;
}

bool FaceAttributesInfo::GetHat() const
{
    return m_hat;
}

void FaceAttributesInfo::SetHat(const bool& _hat)
{
    m_hat = _hat;
    m_hatHasBeenSet = true;
}

bool FaceAttributesInfo::HatHasBeenSet() const
{
    return m_hatHasBeenSet;
}

bool FaceAttributesInfo::GetMask() const
{
    return m_mask;
}

void FaceAttributesInfo::SetMask(const bool& _mask)
{
    m_mask = _mask;
    m_maskHasBeenSet = true;
}

bool FaceAttributesInfo::MaskHasBeenSet() const
{
    return m_maskHasBeenSet;
}

FaceHairAttributesInfo FaceAttributesInfo::GetHair() const
{
    return m_hair;
}

void FaceAttributesInfo::SetHair(const FaceHairAttributesInfo& _hair)
{
    m_hair = _hair;
    m_hairHasBeenSet = true;
}

bool FaceAttributesInfo::HairHasBeenSet() const
{
    return m_hairHasBeenSet;
}

bool FaceAttributesInfo::GetEyeOpen() const
{
    return m_eyeOpen;
}

void FaceAttributesInfo::SetEyeOpen(const bool& _eyeOpen)
{
    m_eyeOpen = _eyeOpen;
    m_eyeOpenHasBeenSet = true;
}

bool FaceAttributesInfo::EyeOpenHasBeenSet() const
{
    return m_eyeOpenHasBeenSet;
}

