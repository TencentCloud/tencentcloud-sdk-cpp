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

#include <tencentcloud/iai/v20180301/model/FaceQualityInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iai::V20180301::Model;
using namespace std;

FaceQualityInfo::FaceQualityInfo() :
    m_scoreHasBeenSet(false),
    m_sharpnessHasBeenSet(false),
    m_brightnessHasBeenSet(false),
    m_completenessHasBeenSet(false)
{
}

CoreInternalOutcome FaceQualityInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Score") && !value["Score"].IsNull())
    {
        if (!value["Score"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FaceQualityInfo.Score` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_score = value["Score"].GetInt64();
        m_scoreHasBeenSet = true;
    }

    if (value.HasMember("Sharpness") && !value["Sharpness"].IsNull())
    {
        if (!value["Sharpness"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FaceQualityInfo.Sharpness` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sharpness = value["Sharpness"].GetInt64();
        m_sharpnessHasBeenSet = true;
    }

    if (value.HasMember("Brightness") && !value["Brightness"].IsNull())
    {
        if (!value["Brightness"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FaceQualityInfo.Brightness` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_brightness = value["Brightness"].GetInt64();
        m_brightnessHasBeenSet = true;
    }

    if (value.HasMember("Completeness") && !value["Completeness"].IsNull())
    {
        if (!value["Completeness"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FaceQualityInfo.Completeness` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_completeness.Deserialize(value["Completeness"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_completenessHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FaceQualityInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_scoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Score";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_score, allocator);
    }

    if (m_sharpnessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sharpness";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sharpness, allocator);
    }

    if (m_brightnessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Brightness";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_brightness, allocator);
    }

    if (m_completenessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Completeness";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_completeness.ToJsonObject(value[key.c_str()], allocator);
    }

}


int64_t FaceQualityInfo::GetScore() const
{
    return m_score;
}

void FaceQualityInfo::SetScore(const int64_t& _score)
{
    m_score = _score;
    m_scoreHasBeenSet = true;
}

bool FaceQualityInfo::ScoreHasBeenSet() const
{
    return m_scoreHasBeenSet;
}

int64_t FaceQualityInfo::GetSharpness() const
{
    return m_sharpness;
}

void FaceQualityInfo::SetSharpness(const int64_t& _sharpness)
{
    m_sharpness = _sharpness;
    m_sharpnessHasBeenSet = true;
}

bool FaceQualityInfo::SharpnessHasBeenSet() const
{
    return m_sharpnessHasBeenSet;
}

int64_t FaceQualityInfo::GetBrightness() const
{
    return m_brightness;
}

void FaceQualityInfo::SetBrightness(const int64_t& _brightness)
{
    m_brightness = _brightness;
    m_brightnessHasBeenSet = true;
}

bool FaceQualityInfo::BrightnessHasBeenSet() const
{
    return m_brightnessHasBeenSet;
}

FaceQualityCompleteness FaceQualityInfo::GetCompleteness() const
{
    return m_completeness;
}

void FaceQualityInfo::SetCompleteness(const FaceQualityCompleteness& _completeness)
{
    m_completeness = _completeness;
    m_completenessHasBeenSet = true;
}

bool FaceQualityInfo::CompletenessHasBeenSet() const
{
    return m_completenessHasBeenSet;
}

