/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/mps/v20190612/model/CloneViralAIGC.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

CloneViralAIGC::CloneViralAIGC() :
    m_durationHasBeenSet(false),
    m_aspectRatioHasBeenSet(false),
    m_resolutionHasBeenSet(false),
    m_modelTierHasBeenSet(false)
{
}

CoreInternalOutcome CloneViralAIGC::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloneViralAIGC.Duration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetInt64();
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("AspectRatio") && !value["AspectRatio"].IsNull())
    {
        if (!value["AspectRatio"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloneViralAIGC.AspectRatio` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aspectRatio = string(value["AspectRatio"].GetString());
        m_aspectRatioHasBeenSet = true;
    }

    if (value.HasMember("Resolution") && !value["Resolution"].IsNull())
    {
        if (!value["Resolution"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloneViralAIGC.Resolution` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resolution = string(value["Resolution"].GetString());
        m_resolutionHasBeenSet = true;
    }

    if (value.HasMember("ModelTier") && !value["ModelTier"].IsNull())
    {
        if (!value["ModelTier"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloneViralAIGC.ModelTier` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelTier = string(value["ModelTier"].GetString());
        m_modelTierHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloneViralAIGC::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
    }

    if (m_aspectRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AspectRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aspectRatio.c_str(), allocator).Move(), allocator);
    }

    if (m_resolutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resolution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resolution.c_str(), allocator).Move(), allocator);
    }

    if (m_modelTierHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelTier";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelTier.c_str(), allocator).Move(), allocator);
    }

}


int64_t CloneViralAIGC::GetDuration() const
{
    return m_duration;
}

void CloneViralAIGC::SetDuration(const int64_t& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool CloneViralAIGC::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

string CloneViralAIGC::GetAspectRatio() const
{
    return m_aspectRatio;
}

void CloneViralAIGC::SetAspectRatio(const string& _aspectRatio)
{
    m_aspectRatio = _aspectRatio;
    m_aspectRatioHasBeenSet = true;
}

bool CloneViralAIGC::AspectRatioHasBeenSet() const
{
    return m_aspectRatioHasBeenSet;
}

string CloneViralAIGC::GetResolution() const
{
    return m_resolution;
}

void CloneViralAIGC::SetResolution(const string& _resolution)
{
    m_resolution = _resolution;
    m_resolutionHasBeenSet = true;
}

bool CloneViralAIGC::ResolutionHasBeenSet() const
{
    return m_resolutionHasBeenSet;
}

string CloneViralAIGC::GetModelTier() const
{
    return m_modelTier;
}

void CloneViralAIGC::SetModelTier(const string& _modelTier)
{
    m_modelTier = _modelTier;
    m_modelTierHasBeenSet = true;
}

bool CloneViralAIGC::ModelTierHasBeenSet() const
{
    return m_modelTierHasBeenSet;
}

