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

#include <tencentcloud/vm/v20201229/model/Tag.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vm::V20201229::Model;
using namespace std;

Tag::Tag() :
    m_nameHasBeenSet(false),
    m_scoreHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
}

CoreInternalOutcome Tag::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Tag.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Score") && !value["Score"].IsNull())
    {
        if (!value["Score"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Tag.Score` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_score = value["Score"].GetInt64();
        m_scoreHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Tag.StartTime` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = value["StartTime"].GetDouble();
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Tag.EndTime` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = value["EndTime"].GetDouble();
        m_endTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Tag::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endTime, allocator);
    }

}


string Tag::GetName() const
{
    return m_name;
}

void Tag::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Tag::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t Tag::GetScore() const
{
    return m_score;
}

void Tag::SetScore(const int64_t& _score)
{
    m_score = _score;
    m_scoreHasBeenSet = true;
}

bool Tag::ScoreHasBeenSet() const
{
    return m_scoreHasBeenSet;
}

double Tag::GetStartTime() const
{
    return m_startTime;
}

void Tag::SetStartTime(const double& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool Tag::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

double Tag::GetEndTime() const
{
    return m_endTime;
}

void Tag::SetEndTime(const double& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool Tag::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

