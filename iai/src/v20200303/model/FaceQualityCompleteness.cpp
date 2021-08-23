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

#include <tencentcloud/iai/v20200303/model/FaceQualityCompleteness.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iai::V20200303::Model;
using namespace std;

FaceQualityCompleteness::FaceQualityCompleteness() :
    m_eyebrowHasBeenSet(false),
    m_eyeHasBeenSet(false),
    m_noseHasBeenSet(false),
    m_cheekHasBeenSet(false),
    m_mouthHasBeenSet(false),
    m_chinHasBeenSet(false)
{
}

CoreInternalOutcome FaceQualityCompleteness::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Eyebrow") && !value["Eyebrow"].IsNull())
    {
        if (!value["Eyebrow"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FaceQualityCompleteness.Eyebrow` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_eyebrow = value["Eyebrow"].GetInt64();
        m_eyebrowHasBeenSet = true;
    }

    if (value.HasMember("Eye") && !value["Eye"].IsNull())
    {
        if (!value["Eye"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FaceQualityCompleteness.Eye` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_eye = value["Eye"].GetInt64();
        m_eyeHasBeenSet = true;
    }

    if (value.HasMember("Nose") && !value["Nose"].IsNull())
    {
        if (!value["Nose"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FaceQualityCompleteness.Nose` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_nose = value["Nose"].GetInt64();
        m_noseHasBeenSet = true;
    }

    if (value.HasMember("Cheek") && !value["Cheek"].IsNull())
    {
        if (!value["Cheek"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FaceQualityCompleteness.Cheek` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cheek = value["Cheek"].GetInt64();
        m_cheekHasBeenSet = true;
    }

    if (value.HasMember("Mouth") && !value["Mouth"].IsNull())
    {
        if (!value["Mouth"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FaceQualityCompleteness.Mouth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_mouth = value["Mouth"].GetInt64();
        m_mouthHasBeenSet = true;
    }

    if (value.HasMember("Chin") && !value["Chin"].IsNull())
    {
        if (!value["Chin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FaceQualityCompleteness.Chin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_chin = value["Chin"].GetInt64();
        m_chinHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FaceQualityCompleteness::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_eyebrowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Eyebrow";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eyebrow, allocator);
    }

    if (m_eyeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Eye";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eye, allocator);
    }

    if (m_noseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nose";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nose, allocator);
    }

    if (m_cheekHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cheek";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cheek, allocator);
    }

    if (m_mouthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mouth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mouth, allocator);
    }

    if (m_chinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Chin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_chin, allocator);
    }

}


int64_t FaceQualityCompleteness::GetEyebrow() const
{
    return m_eyebrow;
}

void FaceQualityCompleteness::SetEyebrow(const int64_t& _eyebrow)
{
    m_eyebrow = _eyebrow;
    m_eyebrowHasBeenSet = true;
}

bool FaceQualityCompleteness::EyebrowHasBeenSet() const
{
    return m_eyebrowHasBeenSet;
}

int64_t FaceQualityCompleteness::GetEye() const
{
    return m_eye;
}

void FaceQualityCompleteness::SetEye(const int64_t& _eye)
{
    m_eye = _eye;
    m_eyeHasBeenSet = true;
}

bool FaceQualityCompleteness::EyeHasBeenSet() const
{
    return m_eyeHasBeenSet;
}

int64_t FaceQualityCompleteness::GetNose() const
{
    return m_nose;
}

void FaceQualityCompleteness::SetNose(const int64_t& _nose)
{
    m_nose = _nose;
    m_noseHasBeenSet = true;
}

bool FaceQualityCompleteness::NoseHasBeenSet() const
{
    return m_noseHasBeenSet;
}

int64_t FaceQualityCompleteness::GetCheek() const
{
    return m_cheek;
}

void FaceQualityCompleteness::SetCheek(const int64_t& _cheek)
{
    m_cheek = _cheek;
    m_cheekHasBeenSet = true;
}

bool FaceQualityCompleteness::CheekHasBeenSet() const
{
    return m_cheekHasBeenSet;
}

int64_t FaceQualityCompleteness::GetMouth() const
{
    return m_mouth;
}

void FaceQualityCompleteness::SetMouth(const int64_t& _mouth)
{
    m_mouth = _mouth;
    m_mouthHasBeenSet = true;
}

bool FaceQualityCompleteness::MouthHasBeenSet() const
{
    return m_mouthHasBeenSet;
}

int64_t FaceQualityCompleteness::GetChin() const
{
    return m_chin;
}

void FaceQualityCompleteness::SetChin(const int64_t& _chin)
{
    m_chin = _chin;
    m_chinHasBeenSet = true;
}

bool FaceQualityCompleteness::ChinHasBeenSet() const
{
    return m_chinHasBeenSet;
}

