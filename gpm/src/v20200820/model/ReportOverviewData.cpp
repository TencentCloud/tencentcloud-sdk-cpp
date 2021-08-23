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

#include <tencentcloud/gpm/v20200820/model/ReportOverviewData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gpm::V20200820::Model;
using namespace std;

ReportOverviewData::ReportOverviewData() :
    m_totalTimesHasBeenSet(false),
    m_successPercentHasBeenSet(false),
    m_timeoutPercentHasBeenSet(false),
    m_failPercentHasBeenSet(false),
    m_averageSecHasBeenSet(false)
{
}

CoreInternalOutcome ReportOverviewData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TotalTimes") && !value["TotalTimes"].IsNull())
    {
        if (!value["TotalTimes"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReportOverviewData.TotalTimes` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_totalTimes = string(value["TotalTimes"].GetString());
        m_totalTimesHasBeenSet = true;
    }

    if (value.HasMember("SuccessPercent") && !value["SuccessPercent"].IsNull())
    {
        if (!value["SuccessPercent"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ReportOverviewData.SuccessPercent` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_successPercent = value["SuccessPercent"].GetDouble();
        m_successPercentHasBeenSet = true;
    }

    if (value.HasMember("TimeoutPercent") && !value["TimeoutPercent"].IsNull())
    {
        if (!value["TimeoutPercent"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ReportOverviewData.TimeoutPercent` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_timeoutPercent = value["TimeoutPercent"].GetDouble();
        m_timeoutPercentHasBeenSet = true;
    }

    if (value.HasMember("FailPercent") && !value["FailPercent"].IsNull())
    {
        if (!value["FailPercent"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ReportOverviewData.FailPercent` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_failPercent = value["FailPercent"].GetDouble();
        m_failPercentHasBeenSet = true;
    }

    if (value.HasMember("AverageSec") && !value["AverageSec"].IsNull())
    {
        if (!value["AverageSec"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ReportOverviewData.AverageSec` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_averageSec = value["AverageSec"].GetDouble();
        m_averageSecHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReportOverviewData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalTimesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalTimes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_totalTimes.c_str(), allocator).Move(), allocator);
    }

    if (m_successPercentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuccessPercent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_successPercent, allocator);
    }

    if (m_timeoutPercentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeoutPercent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeoutPercent, allocator);
    }

    if (m_failPercentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailPercent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_failPercent, allocator);
    }

    if (m_averageSecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AverageSec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_averageSec, allocator);
    }

}


string ReportOverviewData::GetTotalTimes() const
{
    return m_totalTimes;
}

void ReportOverviewData::SetTotalTimes(const string& _totalTimes)
{
    m_totalTimes = _totalTimes;
    m_totalTimesHasBeenSet = true;
}

bool ReportOverviewData::TotalTimesHasBeenSet() const
{
    return m_totalTimesHasBeenSet;
}

double ReportOverviewData::GetSuccessPercent() const
{
    return m_successPercent;
}

void ReportOverviewData::SetSuccessPercent(const double& _successPercent)
{
    m_successPercent = _successPercent;
    m_successPercentHasBeenSet = true;
}

bool ReportOverviewData::SuccessPercentHasBeenSet() const
{
    return m_successPercentHasBeenSet;
}

double ReportOverviewData::GetTimeoutPercent() const
{
    return m_timeoutPercent;
}

void ReportOverviewData::SetTimeoutPercent(const double& _timeoutPercent)
{
    m_timeoutPercent = _timeoutPercent;
    m_timeoutPercentHasBeenSet = true;
}

bool ReportOverviewData::TimeoutPercentHasBeenSet() const
{
    return m_timeoutPercentHasBeenSet;
}

double ReportOverviewData::GetFailPercent() const
{
    return m_failPercent;
}

void ReportOverviewData::SetFailPercent(const double& _failPercent)
{
    m_failPercent = _failPercent;
    m_failPercentHasBeenSet = true;
}

bool ReportOverviewData::FailPercentHasBeenSet() const
{
    return m_failPercentHasBeenSet;
}

double ReportOverviewData::GetAverageSec() const
{
    return m_averageSec;
}

void ReportOverviewData::SetAverageSec(const double& _averageSec)
{
    m_averageSec = _averageSec;
    m_averageSecHasBeenSet = true;
}

bool ReportOverviewData::AverageSecHasBeenSet() const
{
    return m_averageSecHasBeenSet;
}

