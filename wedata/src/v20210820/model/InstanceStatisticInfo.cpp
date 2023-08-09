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

#include <tencentcloud/wedata/v20210820/model/InstanceStatisticInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

InstanceStatisticInfo::InstanceStatisticInfo() :
    m_countListHasBeenSet(false),
    m_timeListHasBeenSet(false),
    m_instanceStatusHasBeenSet(false),
    m_instanceCountHasBeenSet(false),
    m_showTimeHasBeenSet(false),
    m_reportTimeHasBeenSet(false),
    m_countHasBeenSet(false)
{
}

CoreInternalOutcome InstanceStatisticInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CountList") && !value["CountList"].IsNull())
    {
        if (!value["CountList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceStatisticInfo.CountList` is not array type"));

        const rapidjson::Value &tmpValue = value["CountList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_countList.push_back((*itr).GetUint64());
        }
        m_countListHasBeenSet = true;
    }

    if (value.HasMember("TimeList") && !value["TimeList"].IsNull())
    {
        if (!value["TimeList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceStatisticInfo.TimeList` is not array type"));

        const rapidjson::Value &tmpValue = value["TimeList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_timeList.push_back((*itr).GetString());
        }
        m_timeListHasBeenSet = true;
    }

    if (value.HasMember("InstanceStatus") && !value["InstanceStatus"].IsNull())
    {
        if (!value["InstanceStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceStatisticInfo.InstanceStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceStatus = string(value["InstanceStatus"].GetString());
        m_instanceStatusHasBeenSet = true;
    }

    if (value.HasMember("InstanceCount") && !value["InstanceCount"].IsNull())
    {
        if (!value["InstanceCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceStatisticInfo.InstanceCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceCount = value["InstanceCount"].GetUint64();
        m_instanceCountHasBeenSet = true;
    }

    if (value.HasMember("ShowTime") && !value["ShowTime"].IsNull())
    {
        if (!value["ShowTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceStatisticInfo.ShowTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_showTime = string(value["ShowTime"].GetString());
        m_showTimeHasBeenSet = true;
    }

    if (value.HasMember("ReportTime") && !value["ReportTime"].IsNull())
    {
        if (!value["ReportTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceStatisticInfo.ReportTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reportTime = string(value["ReportTime"].GetString());
        m_reportTimeHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceStatisticInfo.Count` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetInt64();
        m_countHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceStatisticInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_countListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CountList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_countList.begin(); itr != m_countList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_timeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_timeList.begin(); itr != m_timeList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_instanceStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceCount, allocator);
    }

    if (m_showTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShowTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_showTime.c_str(), allocator).Move(), allocator);
    }

    if (m_reportTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reportTime.c_str(), allocator).Move(), allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

}


vector<uint64_t> InstanceStatisticInfo::GetCountList() const
{
    return m_countList;
}

void InstanceStatisticInfo::SetCountList(const vector<uint64_t>& _countList)
{
    m_countList = _countList;
    m_countListHasBeenSet = true;
}

bool InstanceStatisticInfo::CountListHasBeenSet() const
{
    return m_countListHasBeenSet;
}

vector<string> InstanceStatisticInfo::GetTimeList() const
{
    return m_timeList;
}

void InstanceStatisticInfo::SetTimeList(const vector<string>& _timeList)
{
    m_timeList = _timeList;
    m_timeListHasBeenSet = true;
}

bool InstanceStatisticInfo::TimeListHasBeenSet() const
{
    return m_timeListHasBeenSet;
}

string InstanceStatisticInfo::GetInstanceStatus() const
{
    return m_instanceStatus;
}

void InstanceStatisticInfo::SetInstanceStatus(const string& _instanceStatus)
{
    m_instanceStatus = _instanceStatus;
    m_instanceStatusHasBeenSet = true;
}

bool InstanceStatisticInfo::InstanceStatusHasBeenSet() const
{
    return m_instanceStatusHasBeenSet;
}

uint64_t InstanceStatisticInfo::GetInstanceCount() const
{
    return m_instanceCount;
}

void InstanceStatisticInfo::SetInstanceCount(const uint64_t& _instanceCount)
{
    m_instanceCount = _instanceCount;
    m_instanceCountHasBeenSet = true;
}

bool InstanceStatisticInfo::InstanceCountHasBeenSet() const
{
    return m_instanceCountHasBeenSet;
}

string InstanceStatisticInfo::GetShowTime() const
{
    return m_showTime;
}

void InstanceStatisticInfo::SetShowTime(const string& _showTime)
{
    m_showTime = _showTime;
    m_showTimeHasBeenSet = true;
}

bool InstanceStatisticInfo::ShowTimeHasBeenSet() const
{
    return m_showTimeHasBeenSet;
}

string InstanceStatisticInfo::GetReportTime() const
{
    return m_reportTime;
}

void InstanceStatisticInfo::SetReportTime(const string& _reportTime)
{
    m_reportTime = _reportTime;
    m_reportTimeHasBeenSet = true;
}

bool InstanceStatisticInfo::ReportTimeHasBeenSet() const
{
    return m_reportTimeHasBeenSet;
}

int64_t InstanceStatisticInfo::GetCount() const
{
    return m_count;
}

void InstanceStatisticInfo::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool InstanceStatisticInfo::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

