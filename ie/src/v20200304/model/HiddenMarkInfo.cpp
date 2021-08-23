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

#include <tencentcloud/ie/v20200304/model/HiddenMarkInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ie::V20200304::Model;
using namespace std;

HiddenMarkInfo::HiddenMarkInfo() :
    m_pathHasBeenSet(false),
    m_frequencyHasBeenSet(false),
    m_strengthHasBeenSet(false),
    m_cosInfoHasBeenSet(false)
{
}

CoreInternalOutcome HiddenMarkInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HiddenMarkInfo.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }

    if (value.HasMember("Frequency") && !value["Frequency"].IsNull())
    {
        if (!value["Frequency"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HiddenMarkInfo.Frequency` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_frequency = value["Frequency"].GetInt64();
        m_frequencyHasBeenSet = true;
    }

    if (value.HasMember("Strength") && !value["Strength"].IsNull())
    {
        if (!value["Strength"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HiddenMarkInfo.Strength` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_strength = value["Strength"].GetInt64();
        m_strengthHasBeenSet = true;
    }

    if (value.HasMember("CosInfo") && !value["CosInfo"].IsNull())
    {
        if (!value["CosInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `HiddenMarkInfo.CosInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cosInfo.Deserialize(value["CosInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cosInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HiddenMarkInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_frequencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Frequency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_frequency, allocator);
    }

    if (m_strengthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Strength";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_strength, allocator);
    }

    if (m_cosInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cosInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


string HiddenMarkInfo::GetPath() const
{
    return m_path;
}

void HiddenMarkInfo::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool HiddenMarkInfo::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

int64_t HiddenMarkInfo::GetFrequency() const
{
    return m_frequency;
}

void HiddenMarkInfo::SetFrequency(const int64_t& _frequency)
{
    m_frequency = _frequency;
    m_frequencyHasBeenSet = true;
}

bool HiddenMarkInfo::FrequencyHasBeenSet() const
{
    return m_frequencyHasBeenSet;
}

int64_t HiddenMarkInfo::GetStrength() const
{
    return m_strength;
}

void HiddenMarkInfo::SetStrength(const int64_t& _strength)
{
    m_strength = _strength;
    m_strengthHasBeenSet = true;
}

bool HiddenMarkInfo::StrengthHasBeenSet() const
{
    return m_strengthHasBeenSet;
}

CosInfo HiddenMarkInfo::GetCosInfo() const
{
    return m_cosInfo;
}

void HiddenMarkInfo::SetCosInfo(const CosInfo& _cosInfo)
{
    m_cosInfo = _cosInfo;
    m_cosInfoHasBeenSet = true;
}

bool HiddenMarkInfo::CosInfoHasBeenSet() const
{
    return m_cosInfoHasBeenSet;
}

