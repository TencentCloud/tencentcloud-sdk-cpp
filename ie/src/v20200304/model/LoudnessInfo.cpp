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

#include <tencentcloud/ie/v20200304/model/LoudnessInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ie::V20200304::Model;
using namespace std;

LoudnessInfo::LoudnessInfo() :
    m_loudnessHasBeenSet(false),
    m_loudnessRangeHasBeenSet(false)
{
}

CoreInternalOutcome LoudnessInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Loudness") && !value["Loudness"].IsNull())
    {
        if (!value["Loudness"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `LoudnessInfo.Loudness` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_loudness = value["Loudness"].GetDouble();
        m_loudnessHasBeenSet = true;
    }

    if (value.HasMember("LoudnessRange") && !value["LoudnessRange"].IsNull())
    {
        if (!value["LoudnessRange"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `LoudnessInfo.LoudnessRange` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_loudnessRange = value["LoudnessRange"].GetDouble();
        m_loudnessRangeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LoudnessInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_loudnessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Loudness";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_loudness, allocator);
    }

    if (m_loudnessRangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoudnessRange";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_loudnessRange, allocator);
    }

}


double LoudnessInfo::GetLoudness() const
{
    return m_loudness;
}

void LoudnessInfo::SetLoudness(const double& _loudness)
{
    m_loudness = _loudness;
    m_loudnessHasBeenSet = true;
}

bool LoudnessInfo::LoudnessHasBeenSet() const
{
    return m_loudnessHasBeenSet;
}

double LoudnessInfo::GetLoudnessRange() const
{
    return m_loudnessRange;
}

void LoudnessInfo::SetLoudnessRange(const double& _loudnessRange)
{
    m_loudnessRange = _loudnessRange;
    m_loudnessRangeHasBeenSet = true;
}

bool LoudnessInfo::LoudnessRangeHasBeenSet() const
{
    return m_loudnessRangeHasBeenSet;
}

