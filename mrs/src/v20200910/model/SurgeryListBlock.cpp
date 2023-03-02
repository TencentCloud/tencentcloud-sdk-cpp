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

#include <tencentcloud/mrs/v20200910/model/SurgeryListBlock.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

SurgeryListBlock::SurgeryListBlock() :
    m_timeHasBeenSet(false),
    m_timeTypeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_partHasBeenSet(false)
{
}

CoreInternalOutcome SurgeryListBlock::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Time") && !value["Time"].IsNull())
    {
        if (!value["Time"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SurgeryListBlock.Time` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_time = string(value["Time"].GetString());
        m_timeHasBeenSet = true;
    }

    if (value.HasMember("TimeType") && !value["TimeType"].IsNull())
    {
        if (!value["TimeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SurgeryListBlock.TimeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeType = string(value["TimeType"].GetString());
        m_timeTypeHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SurgeryListBlock.Name` is not array type"));

        const rapidjson::Value &tmpValue = value["Name"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_name.push_back((*itr).GetString());
        }
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Part") && !value["Part"].IsNull())
    {
        if (!value["Part"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SurgeryListBlock.Part` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_part = string(value["Part"].GetString());
        m_partHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SurgeryListBlock::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_time.c_str(), allocator).Move(), allocator);
    }

    if (m_timeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeType.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_name.begin(); itr != m_name.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_partHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Part";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_part.c_str(), allocator).Move(), allocator);
    }

}


string SurgeryListBlock::GetTime() const
{
    return m_time;
}

void SurgeryListBlock::SetTime(const string& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool SurgeryListBlock::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

string SurgeryListBlock::GetTimeType() const
{
    return m_timeType;
}

void SurgeryListBlock::SetTimeType(const string& _timeType)
{
    m_timeType = _timeType;
    m_timeTypeHasBeenSet = true;
}

bool SurgeryListBlock::TimeTypeHasBeenSet() const
{
    return m_timeTypeHasBeenSet;
}

vector<string> SurgeryListBlock::GetName() const
{
    return m_name;
}

void SurgeryListBlock::SetName(const vector<string>& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool SurgeryListBlock::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string SurgeryListBlock::GetPart() const
{
    return m_part;
}

void SurgeryListBlock::SetPart(const string& _part)
{
    m_part = _part;
    m_partHasBeenSet = true;
}

bool SurgeryListBlock::PartHasBeenSet() const
{
    return m_partHasBeenSet;
}

