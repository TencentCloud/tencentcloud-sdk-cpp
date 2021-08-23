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

#include <tencentcloud/iai/v20200303/model/FaceShape.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iai::V20200303::Model;
using namespace std;

FaceShape::FaceShape() :
    m_faceProfileHasBeenSet(false),
    m_leftEyeHasBeenSet(false),
    m_rightEyeHasBeenSet(false),
    m_leftEyeBrowHasBeenSet(false),
    m_rightEyeBrowHasBeenSet(false),
    m_mouthHasBeenSet(false),
    m_noseHasBeenSet(false),
    m_leftPupilHasBeenSet(false),
    m_rightPupilHasBeenSet(false)
{
}

CoreInternalOutcome FaceShape::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FaceProfile") && !value["FaceProfile"].IsNull())
    {
        if (!value["FaceProfile"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FaceShape.FaceProfile` is not array type"));

        const rapidjson::Value &tmpValue = value["FaceProfile"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Point item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_faceProfile.push_back(item);
        }
        m_faceProfileHasBeenSet = true;
    }

    if (value.HasMember("LeftEye") && !value["LeftEye"].IsNull())
    {
        if (!value["LeftEye"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FaceShape.LeftEye` is not array type"));

        const rapidjson::Value &tmpValue = value["LeftEye"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Point item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_leftEye.push_back(item);
        }
        m_leftEyeHasBeenSet = true;
    }

    if (value.HasMember("RightEye") && !value["RightEye"].IsNull())
    {
        if (!value["RightEye"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FaceShape.RightEye` is not array type"));

        const rapidjson::Value &tmpValue = value["RightEye"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Point item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_rightEye.push_back(item);
        }
        m_rightEyeHasBeenSet = true;
    }

    if (value.HasMember("LeftEyeBrow") && !value["LeftEyeBrow"].IsNull())
    {
        if (!value["LeftEyeBrow"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FaceShape.LeftEyeBrow` is not array type"));

        const rapidjson::Value &tmpValue = value["LeftEyeBrow"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Point item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_leftEyeBrow.push_back(item);
        }
        m_leftEyeBrowHasBeenSet = true;
    }

    if (value.HasMember("RightEyeBrow") && !value["RightEyeBrow"].IsNull())
    {
        if (!value["RightEyeBrow"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FaceShape.RightEyeBrow` is not array type"));

        const rapidjson::Value &tmpValue = value["RightEyeBrow"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Point item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_rightEyeBrow.push_back(item);
        }
        m_rightEyeBrowHasBeenSet = true;
    }

    if (value.HasMember("Mouth") && !value["Mouth"].IsNull())
    {
        if (!value["Mouth"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FaceShape.Mouth` is not array type"));

        const rapidjson::Value &tmpValue = value["Mouth"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Point item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_mouth.push_back(item);
        }
        m_mouthHasBeenSet = true;
    }

    if (value.HasMember("Nose") && !value["Nose"].IsNull())
    {
        if (!value["Nose"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FaceShape.Nose` is not array type"));

        const rapidjson::Value &tmpValue = value["Nose"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Point item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_nose.push_back(item);
        }
        m_noseHasBeenSet = true;
    }

    if (value.HasMember("LeftPupil") && !value["LeftPupil"].IsNull())
    {
        if (!value["LeftPupil"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FaceShape.LeftPupil` is not array type"));

        const rapidjson::Value &tmpValue = value["LeftPupil"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Point item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_leftPupil.push_back(item);
        }
        m_leftPupilHasBeenSet = true;
    }

    if (value.HasMember("RightPupil") && !value["RightPupil"].IsNull())
    {
        if (!value["RightPupil"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FaceShape.RightPupil` is not array type"));

        const rapidjson::Value &tmpValue = value["RightPupil"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Point item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_rightPupil.push_back(item);
        }
        m_rightPupilHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FaceShape::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_faceProfileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FaceProfile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_faceProfile.begin(); itr != m_faceProfile.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_leftEyeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LeftEye";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_leftEye.begin(); itr != m_leftEye.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_rightEyeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RightEye";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_rightEye.begin(); itr != m_rightEye.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_leftEyeBrowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LeftEyeBrow";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_leftEyeBrow.begin(); itr != m_leftEyeBrow.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_rightEyeBrowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RightEyeBrow";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_rightEyeBrow.begin(); itr != m_rightEyeBrow.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_mouthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mouth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_mouth.begin(); itr != m_mouth.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_noseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nose";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_nose.begin(); itr != m_nose.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_leftPupilHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LeftPupil";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_leftPupil.begin(); itr != m_leftPupil.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_rightPupilHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RightPupil";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_rightPupil.begin(); itr != m_rightPupil.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<Point> FaceShape::GetFaceProfile() const
{
    return m_faceProfile;
}

void FaceShape::SetFaceProfile(const vector<Point>& _faceProfile)
{
    m_faceProfile = _faceProfile;
    m_faceProfileHasBeenSet = true;
}

bool FaceShape::FaceProfileHasBeenSet() const
{
    return m_faceProfileHasBeenSet;
}

vector<Point> FaceShape::GetLeftEye() const
{
    return m_leftEye;
}

void FaceShape::SetLeftEye(const vector<Point>& _leftEye)
{
    m_leftEye = _leftEye;
    m_leftEyeHasBeenSet = true;
}

bool FaceShape::LeftEyeHasBeenSet() const
{
    return m_leftEyeHasBeenSet;
}

vector<Point> FaceShape::GetRightEye() const
{
    return m_rightEye;
}

void FaceShape::SetRightEye(const vector<Point>& _rightEye)
{
    m_rightEye = _rightEye;
    m_rightEyeHasBeenSet = true;
}

bool FaceShape::RightEyeHasBeenSet() const
{
    return m_rightEyeHasBeenSet;
}

vector<Point> FaceShape::GetLeftEyeBrow() const
{
    return m_leftEyeBrow;
}

void FaceShape::SetLeftEyeBrow(const vector<Point>& _leftEyeBrow)
{
    m_leftEyeBrow = _leftEyeBrow;
    m_leftEyeBrowHasBeenSet = true;
}

bool FaceShape::LeftEyeBrowHasBeenSet() const
{
    return m_leftEyeBrowHasBeenSet;
}

vector<Point> FaceShape::GetRightEyeBrow() const
{
    return m_rightEyeBrow;
}

void FaceShape::SetRightEyeBrow(const vector<Point>& _rightEyeBrow)
{
    m_rightEyeBrow = _rightEyeBrow;
    m_rightEyeBrowHasBeenSet = true;
}

bool FaceShape::RightEyeBrowHasBeenSet() const
{
    return m_rightEyeBrowHasBeenSet;
}

vector<Point> FaceShape::GetMouth() const
{
    return m_mouth;
}

void FaceShape::SetMouth(const vector<Point>& _mouth)
{
    m_mouth = _mouth;
    m_mouthHasBeenSet = true;
}

bool FaceShape::MouthHasBeenSet() const
{
    return m_mouthHasBeenSet;
}

vector<Point> FaceShape::GetNose() const
{
    return m_nose;
}

void FaceShape::SetNose(const vector<Point>& _nose)
{
    m_nose = _nose;
    m_noseHasBeenSet = true;
}

bool FaceShape::NoseHasBeenSet() const
{
    return m_noseHasBeenSet;
}

vector<Point> FaceShape::GetLeftPupil() const
{
    return m_leftPupil;
}

void FaceShape::SetLeftPupil(const vector<Point>& _leftPupil)
{
    m_leftPupil = _leftPupil;
    m_leftPupilHasBeenSet = true;
}

bool FaceShape::LeftPupilHasBeenSet() const
{
    return m_leftPupilHasBeenSet;
}

vector<Point> FaceShape::GetRightPupil() const
{
    return m_rightPupil;
}

void FaceShape::SetRightPupil(const vector<Point>& _rightPupil)
{
    m_rightPupil = _rightPupil;
    m_rightPupilHasBeenSet = true;
}

bool FaceShape::RightPupilHasBeenSet() const
{
    return m_rightPupilHasBeenSet;
}

