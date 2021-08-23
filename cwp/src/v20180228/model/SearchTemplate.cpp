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

#include <tencentcloud/cwp/v20180228/model/SearchTemplate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

SearchTemplate::SearchTemplate() :
    m_nameHasBeenSet(false),
    m_logTypeHasBeenSet(false),
    m_conditionHasBeenSet(false),
    m_timeRangeHasBeenSet(false),
    m_queryHasBeenSet(false),
    m_flagHasBeenSet(false),
    m_displayDataHasBeenSet(false),
    m_idHasBeenSet(false)
{
}

CoreInternalOutcome SearchTemplate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchTemplate.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("LogType") && !value["LogType"].IsNull())
    {
        if (!value["LogType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchTemplate.LogType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logType = string(value["LogType"].GetString());
        m_logTypeHasBeenSet = true;
    }

    if (value.HasMember("Condition") && !value["Condition"].IsNull())
    {
        if (!value["Condition"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchTemplate.Condition` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_condition = string(value["Condition"].GetString());
        m_conditionHasBeenSet = true;
    }

    if (value.HasMember("TimeRange") && !value["TimeRange"].IsNull())
    {
        if (!value["TimeRange"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchTemplate.TimeRange` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeRange = string(value["TimeRange"].GetString());
        m_timeRangeHasBeenSet = true;
    }

    if (value.HasMember("Query") && !value["Query"].IsNull())
    {
        if (!value["Query"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchTemplate.Query` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_query = string(value["Query"].GetString());
        m_queryHasBeenSet = true;
    }

    if (value.HasMember("Flag") && !value["Flag"].IsNull())
    {
        if (!value["Flag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchTemplate.Flag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flag = string(value["Flag"].GetString());
        m_flagHasBeenSet = true;
    }

    if (value.HasMember("DisplayData") && !value["DisplayData"].IsNull())
    {
        if (!value["DisplayData"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchTemplate.DisplayData` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_displayData = string(value["DisplayData"].GetString());
        m_displayDataHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SearchTemplate.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SearchTemplate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_logTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logType.c_str(), allocator).Move(), allocator);
    }

    if (m_conditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Condition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_condition.c_str(), allocator).Move(), allocator);
    }

    if (m_timeRangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeRange";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeRange.c_str(), allocator).Move(), allocator);
    }

    if (m_queryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Query";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_query.c_str(), allocator).Move(), allocator);
    }

    if (m_flagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Flag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flag.c_str(), allocator).Move(), allocator);
    }

    if (m_displayDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_displayData.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

}


string SearchTemplate::GetName() const
{
    return m_name;
}

void SearchTemplate::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool SearchTemplate::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string SearchTemplate::GetLogType() const
{
    return m_logType;
}

void SearchTemplate::SetLogType(const string& _logType)
{
    m_logType = _logType;
    m_logTypeHasBeenSet = true;
}

bool SearchTemplate::LogTypeHasBeenSet() const
{
    return m_logTypeHasBeenSet;
}

string SearchTemplate::GetCondition() const
{
    return m_condition;
}

void SearchTemplate::SetCondition(const string& _condition)
{
    m_condition = _condition;
    m_conditionHasBeenSet = true;
}

bool SearchTemplate::ConditionHasBeenSet() const
{
    return m_conditionHasBeenSet;
}

string SearchTemplate::GetTimeRange() const
{
    return m_timeRange;
}

void SearchTemplate::SetTimeRange(const string& _timeRange)
{
    m_timeRange = _timeRange;
    m_timeRangeHasBeenSet = true;
}

bool SearchTemplate::TimeRangeHasBeenSet() const
{
    return m_timeRangeHasBeenSet;
}

string SearchTemplate::GetQuery() const
{
    return m_query;
}

void SearchTemplate::SetQuery(const string& _query)
{
    m_query = _query;
    m_queryHasBeenSet = true;
}

bool SearchTemplate::QueryHasBeenSet() const
{
    return m_queryHasBeenSet;
}

string SearchTemplate::GetFlag() const
{
    return m_flag;
}

void SearchTemplate::SetFlag(const string& _flag)
{
    m_flag = _flag;
    m_flagHasBeenSet = true;
}

bool SearchTemplate::FlagHasBeenSet() const
{
    return m_flagHasBeenSet;
}

string SearchTemplate::GetDisplayData() const
{
    return m_displayData;
}

void SearchTemplate::SetDisplayData(const string& _displayData)
{
    m_displayData = _displayData;
    m_displayDataHasBeenSet = true;
}

bool SearchTemplate::DisplayDataHasBeenSet() const
{
    return m_displayDataHasBeenSet;
}

uint64_t SearchTemplate::GetId() const
{
    return m_id;
}

void SearchTemplate::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool SearchTemplate::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

