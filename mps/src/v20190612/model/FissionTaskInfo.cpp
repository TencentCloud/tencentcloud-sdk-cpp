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

#include <tencentcloud/mps/v20190612/model/FissionTaskInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

FissionTaskInfo::FissionTaskInfo() :
    m_durationHasBeenSet(false),
    m_modelTierHasBeenSet(false),
    m_ratioHasBeenSet(false),
    m_resolutionHasBeenSet(false),
    m_marketHasBeenSet(false),
    m_languageHasBeenSet(false),
    m_videoTypeHasBeenSet(false),
    m_splitCountHasBeenSet(false),
    m_customModelHasBeenSet(false)
{
}

CoreInternalOutcome FissionTaskInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FissionTaskInfo.Duration` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetUint64();
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("ModelTier") && !value["ModelTier"].IsNull())
    {
        if (!value["ModelTier"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FissionTaskInfo.ModelTier` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelTier = string(value["ModelTier"].GetString());
        m_modelTierHasBeenSet = true;
    }

    if (value.HasMember("Ratio") && !value["Ratio"].IsNull())
    {
        if (!value["Ratio"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FissionTaskInfo.Ratio` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ratio = string(value["Ratio"].GetString());
        m_ratioHasBeenSet = true;
    }

    if (value.HasMember("Resolution") && !value["Resolution"].IsNull())
    {
        if (!value["Resolution"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FissionTaskInfo.Resolution` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resolution = string(value["Resolution"].GetString());
        m_resolutionHasBeenSet = true;
    }

    if (value.HasMember("Market") && !value["Market"].IsNull())
    {
        if (!value["Market"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FissionTaskInfo.Market` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_market = string(value["Market"].GetString());
        m_marketHasBeenSet = true;
    }

    if (value.HasMember("Language") && !value["Language"].IsNull())
    {
        if (!value["Language"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FissionTaskInfo.Language` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_language = string(value["Language"].GetString());
        m_languageHasBeenSet = true;
    }

    if (value.HasMember("VideoType") && !value["VideoType"].IsNull())
    {
        if (!value["VideoType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FissionTaskInfo.VideoType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_videoType = string(value["VideoType"].GetString());
        m_videoTypeHasBeenSet = true;
    }

    if (value.HasMember("SplitCount") && !value["SplitCount"].IsNull())
    {
        if (!value["SplitCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FissionTaskInfo.SplitCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_splitCount = value["SplitCount"].GetUint64();
        m_splitCountHasBeenSet = true;
    }

    if (value.HasMember("CustomModel") && !value["CustomModel"].IsNull())
    {
        if (!value["CustomModel"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FissionTaskInfo.CustomModel` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_customModel.Deserialize(value["CustomModel"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_customModelHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FissionTaskInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
    }

    if (m_modelTierHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelTier";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelTier.c_str(), allocator).Move(), allocator);
    }

    if (m_ratioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ratio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ratio.c_str(), allocator).Move(), allocator);
    }

    if (m_resolutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resolution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resolution.c_str(), allocator).Move(), allocator);
    }

    if (m_marketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Market";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_market.c_str(), allocator).Move(), allocator);
    }

    if (m_languageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Language";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_language.c_str(), allocator).Move(), allocator);
    }

    if (m_videoTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_videoType.c_str(), allocator).Move(), allocator);
    }

    if (m_splitCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SplitCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_splitCount, allocator);
    }

    if (m_customModelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomModel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_customModel.ToJsonObject(value[key.c_str()], allocator);
    }

}


uint64_t FissionTaskInfo::GetDuration() const
{
    return m_duration;
}

void FissionTaskInfo::SetDuration(const uint64_t& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool FissionTaskInfo::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

string FissionTaskInfo::GetModelTier() const
{
    return m_modelTier;
}

void FissionTaskInfo::SetModelTier(const string& _modelTier)
{
    m_modelTier = _modelTier;
    m_modelTierHasBeenSet = true;
}

bool FissionTaskInfo::ModelTierHasBeenSet() const
{
    return m_modelTierHasBeenSet;
}

string FissionTaskInfo::GetRatio() const
{
    return m_ratio;
}

void FissionTaskInfo::SetRatio(const string& _ratio)
{
    m_ratio = _ratio;
    m_ratioHasBeenSet = true;
}

bool FissionTaskInfo::RatioHasBeenSet() const
{
    return m_ratioHasBeenSet;
}

string FissionTaskInfo::GetResolution() const
{
    return m_resolution;
}

void FissionTaskInfo::SetResolution(const string& _resolution)
{
    m_resolution = _resolution;
    m_resolutionHasBeenSet = true;
}

bool FissionTaskInfo::ResolutionHasBeenSet() const
{
    return m_resolutionHasBeenSet;
}

string FissionTaskInfo::GetMarket() const
{
    return m_market;
}

void FissionTaskInfo::SetMarket(const string& _market)
{
    m_market = _market;
    m_marketHasBeenSet = true;
}

bool FissionTaskInfo::MarketHasBeenSet() const
{
    return m_marketHasBeenSet;
}

string FissionTaskInfo::GetLanguage() const
{
    return m_language;
}

void FissionTaskInfo::SetLanguage(const string& _language)
{
    m_language = _language;
    m_languageHasBeenSet = true;
}

bool FissionTaskInfo::LanguageHasBeenSet() const
{
    return m_languageHasBeenSet;
}

string FissionTaskInfo::GetVideoType() const
{
    return m_videoType;
}

void FissionTaskInfo::SetVideoType(const string& _videoType)
{
    m_videoType = _videoType;
    m_videoTypeHasBeenSet = true;
}

bool FissionTaskInfo::VideoTypeHasBeenSet() const
{
    return m_videoTypeHasBeenSet;
}

uint64_t FissionTaskInfo::GetSplitCount() const
{
    return m_splitCount;
}

void FissionTaskInfo::SetSplitCount(const uint64_t& _splitCount)
{
    m_splitCount = _splitCount;
    m_splitCountHasBeenSet = true;
}

bool FissionTaskInfo::SplitCountHasBeenSet() const
{
    return m_splitCountHasBeenSet;
}

CustomModel FissionTaskInfo::GetCustomModel() const
{
    return m_customModel;
}

void FissionTaskInfo::SetCustomModel(const CustomModel& _customModel)
{
    m_customModel = _customModel;
    m_customModelHasBeenSet = true;
}

bool FissionTaskInfo::CustomModelHasBeenSet() const
{
    return m_customModelHasBeenSet;
}

