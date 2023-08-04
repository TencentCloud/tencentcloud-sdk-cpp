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

#include <tencentcloud/iss/v20230517/model/BaseAIResultInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

BaseAIResultInfo::BaseAIResultInfo() :
    m_nameHasBeenSet(false),
    m_scoreHasBeenSet(false),
    m_locationHasBeenSet(false)
{
}

CoreInternalOutcome BaseAIResultInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaseAIResultInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Score") && !value["Score"].IsNull())
    {
        if (!value["Score"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BaseAIResultInfo.Score` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_score = value["Score"].GetUint64();
        m_scoreHasBeenSet = true;
    }

    if (value.HasMember("Location") && !value["Location"].IsNull())
    {
        if (!value["Location"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BaseAIResultInfo.Location` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_location.Deserialize(value["Location"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_locationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BaseAIResultInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_scoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Score";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_score, allocator);
    }

    if (m_locationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Location";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_location.ToJsonObject(value[key.c_str()], allocator);
    }

}


string BaseAIResultInfo::GetName() const
{
    return m_name;
}

void BaseAIResultInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool BaseAIResultInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t BaseAIResultInfo::GetScore() const
{
    return m_score;
}

void BaseAIResultInfo::SetScore(const uint64_t& _score)
{
    m_score = _score;
    m_scoreHasBeenSet = true;
}

bool BaseAIResultInfo::ScoreHasBeenSet() const
{
    return m_scoreHasBeenSet;
}

Location BaseAIResultInfo::GetLocation() const
{
    return m_location;
}

void BaseAIResultInfo::SetLocation(const Location& _location)
{
    m_location = _location;
    m_locationHasBeenSet = true;
}

bool BaseAIResultInfo::LocationHasBeenSet() const
{
    return m_locationHasBeenSet;
}

