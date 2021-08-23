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

#include <tencentcloud/gpm/v20200820/model/ReportTrendData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gpm::V20200820::Model;
using namespace std;

ReportTrendData::ReportTrendData() :
    m_totalListHasBeenSet(false),
    m_cancelListHasBeenSet(false),
    m_successListHasBeenSet(false),
    m_failListHasBeenSet(false),
    m_timeoutListHasBeenSet(false),
    m_timeListHasBeenSet(false)
{
}

CoreInternalOutcome ReportTrendData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TotalList") && !value["TotalList"].IsNull())
    {
        if (!value["TotalList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ReportTrendData.TotalList` is not array type"));

        const rapidjson::Value &tmpValue = value["TotalList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_totalList.push_back((*itr).GetString());
        }
        m_totalListHasBeenSet = true;
    }

    if (value.HasMember("CancelList") && !value["CancelList"].IsNull())
    {
        if (!value["CancelList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ReportTrendData.CancelList` is not array type"));

        const rapidjson::Value &tmpValue = value["CancelList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_cancelList.push_back((*itr).GetString());
        }
        m_cancelListHasBeenSet = true;
    }

    if (value.HasMember("SuccessList") && !value["SuccessList"].IsNull())
    {
        if (!value["SuccessList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ReportTrendData.SuccessList` is not array type"));

        const rapidjson::Value &tmpValue = value["SuccessList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_successList.push_back((*itr).GetString());
        }
        m_successListHasBeenSet = true;
    }

    if (value.HasMember("FailList") && !value["FailList"].IsNull())
    {
        if (!value["FailList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ReportTrendData.FailList` is not array type"));

        const rapidjson::Value &tmpValue = value["FailList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_failList.push_back((*itr).GetString());
        }
        m_failListHasBeenSet = true;
    }

    if (value.HasMember("TimeoutList") && !value["TimeoutList"].IsNull())
    {
        if (!value["TimeoutList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ReportTrendData.TimeoutList` is not array type"));

        const rapidjson::Value &tmpValue = value["TimeoutList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_timeoutList.push_back((*itr).GetString());
        }
        m_timeoutListHasBeenSet = true;
    }

    if (value.HasMember("TimeList") && !value["TimeList"].IsNull())
    {
        if (!value["TimeList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ReportTrendData.TimeList` is not array type"));

        const rapidjson::Value &tmpValue = value["TimeList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_timeList.push_back((*itr).GetString());
        }
        m_timeListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReportTrendData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_totalList.begin(); itr != m_totalList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_cancelListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CancelList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_cancelList.begin(); itr != m_cancelList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_successListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuccessList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_successList.begin(); itr != m_successList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_failListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_failList.begin(); itr != m_failList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_timeoutListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeoutList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_timeoutList.begin(); itr != m_timeoutList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
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

}


vector<string> ReportTrendData::GetTotalList() const
{
    return m_totalList;
}

void ReportTrendData::SetTotalList(const vector<string>& _totalList)
{
    m_totalList = _totalList;
    m_totalListHasBeenSet = true;
}

bool ReportTrendData::TotalListHasBeenSet() const
{
    return m_totalListHasBeenSet;
}

vector<string> ReportTrendData::GetCancelList() const
{
    return m_cancelList;
}

void ReportTrendData::SetCancelList(const vector<string>& _cancelList)
{
    m_cancelList = _cancelList;
    m_cancelListHasBeenSet = true;
}

bool ReportTrendData::CancelListHasBeenSet() const
{
    return m_cancelListHasBeenSet;
}

vector<string> ReportTrendData::GetSuccessList() const
{
    return m_successList;
}

void ReportTrendData::SetSuccessList(const vector<string>& _successList)
{
    m_successList = _successList;
    m_successListHasBeenSet = true;
}

bool ReportTrendData::SuccessListHasBeenSet() const
{
    return m_successListHasBeenSet;
}

vector<string> ReportTrendData::GetFailList() const
{
    return m_failList;
}

void ReportTrendData::SetFailList(const vector<string>& _failList)
{
    m_failList = _failList;
    m_failListHasBeenSet = true;
}

bool ReportTrendData::FailListHasBeenSet() const
{
    return m_failListHasBeenSet;
}

vector<string> ReportTrendData::GetTimeoutList() const
{
    return m_timeoutList;
}

void ReportTrendData::SetTimeoutList(const vector<string>& _timeoutList)
{
    m_timeoutList = _timeoutList;
    m_timeoutListHasBeenSet = true;
}

bool ReportTrendData::TimeoutListHasBeenSet() const
{
    return m_timeoutListHasBeenSet;
}

vector<string> ReportTrendData::GetTimeList() const
{
    return m_timeList;
}

void ReportTrendData::SetTimeList(const vector<string>& _timeList)
{
    m_timeList = _timeList;
    m_timeListHasBeenSet = true;
}

bool ReportTrendData::TimeListHasBeenSet() const
{
    return m_timeListHasBeenSet;
}

