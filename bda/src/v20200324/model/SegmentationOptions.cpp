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

#include <tencentcloud/bda/v20200324/model/SegmentationOptions.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bda::V20200324::Model;
using namespace std;

SegmentationOptions::SegmentationOptions() :
    m_backgroundHasBeenSet(false),
    m_hairHasBeenSet(false),
    m_leftEyebrowHasBeenSet(false),
    m_rightEyebrowHasBeenSet(false),
    m_leftEyeHasBeenSet(false),
    m_rightEyeHasBeenSet(false),
    m_noseHasBeenSet(false),
    m_upperLipHasBeenSet(false),
    m_lowerLipHasBeenSet(false),
    m_toothHasBeenSet(false),
    m_mouthHasBeenSet(false),
    m_leftEarHasBeenSet(false),
    m_rightEarHasBeenSet(false),
    m_faceHasBeenSet(false),
    m_headHasBeenSet(false),
    m_bodyHasBeenSet(false),
    m_hatHasBeenSet(false),
    m_headdressHasBeenSet(false),
    m_earringsHasBeenSet(false),
    m_necklaceHasBeenSet(false),
    m_belongingsHasBeenSet(false)
{
}

CoreInternalOutcome SegmentationOptions::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Background") && !value["Background"].IsNull())
    {
        if (!value["Background"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SegmentationOptions.Background` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_background = value["Background"].GetBool();
        m_backgroundHasBeenSet = true;
    }

    if (value.HasMember("Hair") && !value["Hair"].IsNull())
    {
        if (!value["Hair"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SegmentationOptions.Hair` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hair = value["Hair"].GetBool();
        m_hairHasBeenSet = true;
    }

    if (value.HasMember("LeftEyebrow") && !value["LeftEyebrow"].IsNull())
    {
        if (!value["LeftEyebrow"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SegmentationOptions.LeftEyebrow` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_leftEyebrow = value["LeftEyebrow"].GetBool();
        m_leftEyebrowHasBeenSet = true;
    }

    if (value.HasMember("RightEyebrow") && !value["RightEyebrow"].IsNull())
    {
        if (!value["RightEyebrow"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SegmentationOptions.RightEyebrow` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_rightEyebrow = value["RightEyebrow"].GetBool();
        m_rightEyebrowHasBeenSet = true;
    }

    if (value.HasMember("LeftEye") && !value["LeftEye"].IsNull())
    {
        if (!value["LeftEye"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SegmentationOptions.LeftEye` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_leftEye = value["LeftEye"].GetBool();
        m_leftEyeHasBeenSet = true;
    }

    if (value.HasMember("RightEye") && !value["RightEye"].IsNull())
    {
        if (!value["RightEye"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SegmentationOptions.RightEye` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_rightEye = value["RightEye"].GetBool();
        m_rightEyeHasBeenSet = true;
    }

    if (value.HasMember("Nose") && !value["Nose"].IsNull())
    {
        if (!value["Nose"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SegmentationOptions.Nose` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_nose = value["Nose"].GetBool();
        m_noseHasBeenSet = true;
    }

    if (value.HasMember("UpperLip") && !value["UpperLip"].IsNull())
    {
        if (!value["UpperLip"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SegmentationOptions.UpperLip` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_upperLip = value["UpperLip"].GetBool();
        m_upperLipHasBeenSet = true;
    }

    if (value.HasMember("LowerLip") && !value["LowerLip"].IsNull())
    {
        if (!value["LowerLip"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SegmentationOptions.LowerLip` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_lowerLip = value["LowerLip"].GetBool();
        m_lowerLipHasBeenSet = true;
    }

    if (value.HasMember("Tooth") && !value["Tooth"].IsNull())
    {
        if (!value["Tooth"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SegmentationOptions.Tooth` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_tooth = value["Tooth"].GetBool();
        m_toothHasBeenSet = true;
    }

    if (value.HasMember("Mouth") && !value["Mouth"].IsNull())
    {
        if (!value["Mouth"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SegmentationOptions.Mouth` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_mouth = value["Mouth"].GetBool();
        m_mouthHasBeenSet = true;
    }

    if (value.HasMember("LeftEar") && !value["LeftEar"].IsNull())
    {
        if (!value["LeftEar"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SegmentationOptions.LeftEar` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_leftEar = value["LeftEar"].GetBool();
        m_leftEarHasBeenSet = true;
    }

    if (value.HasMember("RightEar") && !value["RightEar"].IsNull())
    {
        if (!value["RightEar"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SegmentationOptions.RightEar` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_rightEar = value["RightEar"].GetBool();
        m_rightEarHasBeenSet = true;
    }

    if (value.HasMember("Face") && !value["Face"].IsNull())
    {
        if (!value["Face"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SegmentationOptions.Face` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_face = value["Face"].GetBool();
        m_faceHasBeenSet = true;
    }

    if (value.HasMember("Head") && !value["Head"].IsNull())
    {
        if (!value["Head"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SegmentationOptions.Head` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_head = value["Head"].GetBool();
        m_headHasBeenSet = true;
    }

    if (value.HasMember("Body") && !value["Body"].IsNull())
    {
        if (!value["Body"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SegmentationOptions.Body` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_body = value["Body"].GetBool();
        m_bodyHasBeenSet = true;
    }

    if (value.HasMember("Hat") && !value["Hat"].IsNull())
    {
        if (!value["Hat"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SegmentationOptions.Hat` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hat = value["Hat"].GetBool();
        m_hatHasBeenSet = true;
    }

    if (value.HasMember("Headdress") && !value["Headdress"].IsNull())
    {
        if (!value["Headdress"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SegmentationOptions.Headdress` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_headdress = value["Headdress"].GetBool();
        m_headdressHasBeenSet = true;
    }

    if (value.HasMember("Earrings") && !value["Earrings"].IsNull())
    {
        if (!value["Earrings"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SegmentationOptions.Earrings` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_earrings = value["Earrings"].GetBool();
        m_earringsHasBeenSet = true;
    }

    if (value.HasMember("Necklace") && !value["Necklace"].IsNull())
    {
        if (!value["Necklace"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SegmentationOptions.Necklace` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_necklace = value["Necklace"].GetBool();
        m_necklaceHasBeenSet = true;
    }

    if (value.HasMember("Belongings") && !value["Belongings"].IsNull())
    {
        if (!value["Belongings"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SegmentationOptions.Belongings` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_belongings = value["Belongings"].GetBool();
        m_belongingsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SegmentationOptions::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_backgroundHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Background";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_background, allocator);
    }

    if (m_hairHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Hair";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hair, allocator);
    }

    if (m_leftEyebrowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LeftEyebrow";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_leftEyebrow, allocator);
    }

    if (m_rightEyebrowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RightEyebrow";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rightEyebrow, allocator);
    }

    if (m_leftEyeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LeftEye";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_leftEye, allocator);
    }

    if (m_rightEyeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RightEye";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rightEye, allocator);
    }

    if (m_noseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nose";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nose, allocator);
    }

    if (m_upperLipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpperLip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_upperLip, allocator);
    }

    if (m_lowerLipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LowerLip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lowerLip, allocator);
    }

    if (m_toothHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tooth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tooth, allocator);
    }

    if (m_mouthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mouth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mouth, allocator);
    }

    if (m_leftEarHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LeftEar";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_leftEar, allocator);
    }

    if (m_rightEarHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RightEar";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rightEar, allocator);
    }

    if (m_faceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Face";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_face, allocator);
    }

    if (m_headHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Head";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_head, allocator);
    }

    if (m_bodyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Body";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_body, allocator);
    }

    if (m_hatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Hat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hat, allocator);
    }

    if (m_headdressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Headdress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_headdress, allocator);
    }

    if (m_earringsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Earrings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_earrings, allocator);
    }

    if (m_necklaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Necklace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_necklace, allocator);
    }

    if (m_belongingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Belongings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_belongings, allocator);
    }

}


bool SegmentationOptions::GetBackground() const
{
    return m_background;
}

void SegmentationOptions::SetBackground(const bool& _background)
{
    m_background = _background;
    m_backgroundHasBeenSet = true;
}

bool SegmentationOptions::BackgroundHasBeenSet() const
{
    return m_backgroundHasBeenSet;
}

bool SegmentationOptions::GetHair() const
{
    return m_hair;
}

void SegmentationOptions::SetHair(const bool& _hair)
{
    m_hair = _hair;
    m_hairHasBeenSet = true;
}

bool SegmentationOptions::HairHasBeenSet() const
{
    return m_hairHasBeenSet;
}

bool SegmentationOptions::GetLeftEyebrow() const
{
    return m_leftEyebrow;
}

void SegmentationOptions::SetLeftEyebrow(const bool& _leftEyebrow)
{
    m_leftEyebrow = _leftEyebrow;
    m_leftEyebrowHasBeenSet = true;
}

bool SegmentationOptions::LeftEyebrowHasBeenSet() const
{
    return m_leftEyebrowHasBeenSet;
}

bool SegmentationOptions::GetRightEyebrow() const
{
    return m_rightEyebrow;
}

void SegmentationOptions::SetRightEyebrow(const bool& _rightEyebrow)
{
    m_rightEyebrow = _rightEyebrow;
    m_rightEyebrowHasBeenSet = true;
}

bool SegmentationOptions::RightEyebrowHasBeenSet() const
{
    return m_rightEyebrowHasBeenSet;
}

bool SegmentationOptions::GetLeftEye() const
{
    return m_leftEye;
}

void SegmentationOptions::SetLeftEye(const bool& _leftEye)
{
    m_leftEye = _leftEye;
    m_leftEyeHasBeenSet = true;
}

bool SegmentationOptions::LeftEyeHasBeenSet() const
{
    return m_leftEyeHasBeenSet;
}

bool SegmentationOptions::GetRightEye() const
{
    return m_rightEye;
}

void SegmentationOptions::SetRightEye(const bool& _rightEye)
{
    m_rightEye = _rightEye;
    m_rightEyeHasBeenSet = true;
}

bool SegmentationOptions::RightEyeHasBeenSet() const
{
    return m_rightEyeHasBeenSet;
}

bool SegmentationOptions::GetNose() const
{
    return m_nose;
}

void SegmentationOptions::SetNose(const bool& _nose)
{
    m_nose = _nose;
    m_noseHasBeenSet = true;
}

bool SegmentationOptions::NoseHasBeenSet() const
{
    return m_noseHasBeenSet;
}

bool SegmentationOptions::GetUpperLip() const
{
    return m_upperLip;
}

void SegmentationOptions::SetUpperLip(const bool& _upperLip)
{
    m_upperLip = _upperLip;
    m_upperLipHasBeenSet = true;
}

bool SegmentationOptions::UpperLipHasBeenSet() const
{
    return m_upperLipHasBeenSet;
}

bool SegmentationOptions::GetLowerLip() const
{
    return m_lowerLip;
}

void SegmentationOptions::SetLowerLip(const bool& _lowerLip)
{
    m_lowerLip = _lowerLip;
    m_lowerLipHasBeenSet = true;
}

bool SegmentationOptions::LowerLipHasBeenSet() const
{
    return m_lowerLipHasBeenSet;
}

bool SegmentationOptions::GetTooth() const
{
    return m_tooth;
}

void SegmentationOptions::SetTooth(const bool& _tooth)
{
    m_tooth = _tooth;
    m_toothHasBeenSet = true;
}

bool SegmentationOptions::ToothHasBeenSet() const
{
    return m_toothHasBeenSet;
}

bool SegmentationOptions::GetMouth() const
{
    return m_mouth;
}

void SegmentationOptions::SetMouth(const bool& _mouth)
{
    m_mouth = _mouth;
    m_mouthHasBeenSet = true;
}

bool SegmentationOptions::MouthHasBeenSet() const
{
    return m_mouthHasBeenSet;
}

bool SegmentationOptions::GetLeftEar() const
{
    return m_leftEar;
}

void SegmentationOptions::SetLeftEar(const bool& _leftEar)
{
    m_leftEar = _leftEar;
    m_leftEarHasBeenSet = true;
}

bool SegmentationOptions::LeftEarHasBeenSet() const
{
    return m_leftEarHasBeenSet;
}

bool SegmentationOptions::GetRightEar() const
{
    return m_rightEar;
}

void SegmentationOptions::SetRightEar(const bool& _rightEar)
{
    m_rightEar = _rightEar;
    m_rightEarHasBeenSet = true;
}

bool SegmentationOptions::RightEarHasBeenSet() const
{
    return m_rightEarHasBeenSet;
}

bool SegmentationOptions::GetFace() const
{
    return m_face;
}

void SegmentationOptions::SetFace(const bool& _face)
{
    m_face = _face;
    m_faceHasBeenSet = true;
}

bool SegmentationOptions::FaceHasBeenSet() const
{
    return m_faceHasBeenSet;
}

bool SegmentationOptions::GetHead() const
{
    return m_head;
}

void SegmentationOptions::SetHead(const bool& _head)
{
    m_head = _head;
    m_headHasBeenSet = true;
}

bool SegmentationOptions::HeadHasBeenSet() const
{
    return m_headHasBeenSet;
}

bool SegmentationOptions::GetBody() const
{
    return m_body;
}

void SegmentationOptions::SetBody(const bool& _body)
{
    m_body = _body;
    m_bodyHasBeenSet = true;
}

bool SegmentationOptions::BodyHasBeenSet() const
{
    return m_bodyHasBeenSet;
}

bool SegmentationOptions::GetHat() const
{
    return m_hat;
}

void SegmentationOptions::SetHat(const bool& _hat)
{
    m_hat = _hat;
    m_hatHasBeenSet = true;
}

bool SegmentationOptions::HatHasBeenSet() const
{
    return m_hatHasBeenSet;
}

bool SegmentationOptions::GetHeaddress() const
{
    return m_headdress;
}

void SegmentationOptions::SetHeaddress(const bool& _headdress)
{
    m_headdress = _headdress;
    m_headdressHasBeenSet = true;
}

bool SegmentationOptions::HeaddressHasBeenSet() const
{
    return m_headdressHasBeenSet;
}

bool SegmentationOptions::GetEarrings() const
{
    return m_earrings;
}

void SegmentationOptions::SetEarrings(const bool& _earrings)
{
    m_earrings = _earrings;
    m_earringsHasBeenSet = true;
}

bool SegmentationOptions::EarringsHasBeenSet() const
{
    return m_earringsHasBeenSet;
}

bool SegmentationOptions::GetNecklace() const
{
    return m_necklace;
}

void SegmentationOptions::SetNecklace(const bool& _necklace)
{
    m_necklace = _necklace;
    m_necklaceHasBeenSet = true;
}

bool SegmentationOptions::NecklaceHasBeenSet() const
{
    return m_necklaceHasBeenSet;
}

bool SegmentationOptions::GetBelongings() const
{
    return m_belongings;
}

void SegmentationOptions::SetBelongings(const bool& _belongings)
{
    m_belongings = _belongings;
    m_belongingsHasBeenSet = true;
}

bool SegmentationOptions::BelongingsHasBeenSet() const
{
    return m_belongingsHasBeenSet;
}

