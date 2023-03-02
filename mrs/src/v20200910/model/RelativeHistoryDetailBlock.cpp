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

#include <tencentcloud/mrs/v20200910/model/RelativeHistoryDetailBlock.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

RelativeHistoryDetailBlock::RelativeHistoryDetailBlock() :
    m_nameHasBeenSet(false),
    m_relationHasBeenSet(false),
    m_timeOfDeathHasBeenSet(false),
    m_timeTypeHasBeenSet(false)
{
}

CoreInternalOutcome RelativeHistoryDetailBlock::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RelativeHistoryDetailBlock.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Relation") && !value["Relation"].IsNull())
    {
        if (!value["Relation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RelativeHistoryDetailBlock.Relation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_relation = string(value["Relation"].GetString());
        m_relationHasBeenSet = true;
    }

    if (value.HasMember("TimeOfDeath") && !value["TimeOfDeath"].IsNull())
    {
        if (!value["TimeOfDeath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RelativeHistoryDetailBlock.TimeOfDeath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeOfDeath = string(value["TimeOfDeath"].GetString());
        m_timeOfDeathHasBeenSet = true;
    }

    if (value.HasMember("TimeType") && !value["TimeType"].IsNull())
    {
        if (!value["TimeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RelativeHistoryDetailBlock.TimeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeType = string(value["TimeType"].GetString());
        m_timeTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RelativeHistoryDetailBlock::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_relationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Relation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_relation.c_str(), allocator).Move(), allocator);
    }

    if (m_timeOfDeathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeOfDeath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeOfDeath.c_str(), allocator).Move(), allocator);
    }

    if (m_timeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeType.c_str(), allocator).Move(), allocator);
    }

}


string RelativeHistoryDetailBlock::GetName() const
{
    return m_name;
}

void RelativeHistoryDetailBlock::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool RelativeHistoryDetailBlock::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string RelativeHistoryDetailBlock::GetRelation() const
{
    return m_relation;
}

void RelativeHistoryDetailBlock::SetRelation(const string& _relation)
{
    m_relation = _relation;
    m_relationHasBeenSet = true;
}

bool RelativeHistoryDetailBlock::RelationHasBeenSet() const
{
    return m_relationHasBeenSet;
}

string RelativeHistoryDetailBlock::GetTimeOfDeath() const
{
    return m_timeOfDeath;
}

void RelativeHistoryDetailBlock::SetTimeOfDeath(const string& _timeOfDeath)
{
    m_timeOfDeath = _timeOfDeath;
    m_timeOfDeathHasBeenSet = true;
}

bool RelativeHistoryDetailBlock::TimeOfDeathHasBeenSet() const
{
    return m_timeOfDeathHasBeenSet;
}

string RelativeHistoryDetailBlock::GetTimeType() const
{
    return m_timeType;
}

void RelativeHistoryDetailBlock::SetTimeType(const string& _timeType)
{
    m_timeType = _timeType;
    m_timeTypeHasBeenSet = true;
}

bool RelativeHistoryDetailBlock::TimeTypeHasBeenSet() const
{
    return m_timeTypeHasBeenSet;
}

