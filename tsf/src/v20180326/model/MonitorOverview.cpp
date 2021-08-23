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

#include <tencentcloud/tsf/v20180326/model/MonitorOverview.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

MonitorOverview::MonitorOverview() :
    m_invocationCountOfDayHasBeenSet(false),
    m_invocationCountHasBeenSet(false),
    m_errorCountOfDayHasBeenSet(false),
    m_errorCountHasBeenSet(false),
    m_successRatioOfDayHasBeenSet(false),
    m_successRatioHasBeenSet(false)
{
}

CoreInternalOutcome MonitorOverview::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InvocationCountOfDay") && !value["InvocationCountOfDay"].IsNull())
    {
        if (!value["InvocationCountOfDay"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorOverview.InvocationCountOfDay` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_invocationCountOfDay = string(value["InvocationCountOfDay"].GetString());
        m_invocationCountOfDayHasBeenSet = true;
    }

    if (value.HasMember("InvocationCount") && !value["InvocationCount"].IsNull())
    {
        if (!value["InvocationCount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorOverview.InvocationCount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_invocationCount = string(value["InvocationCount"].GetString());
        m_invocationCountHasBeenSet = true;
    }

    if (value.HasMember("ErrorCountOfDay") && !value["ErrorCountOfDay"].IsNull())
    {
        if (!value["ErrorCountOfDay"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorOverview.ErrorCountOfDay` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorCountOfDay = string(value["ErrorCountOfDay"].GetString());
        m_errorCountOfDayHasBeenSet = true;
    }

    if (value.HasMember("ErrorCount") && !value["ErrorCount"].IsNull())
    {
        if (!value["ErrorCount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorOverview.ErrorCount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorCount = string(value["ErrorCount"].GetString());
        m_errorCountHasBeenSet = true;
    }

    if (value.HasMember("SuccessRatioOfDay") && !value["SuccessRatioOfDay"].IsNull())
    {
        if (!value["SuccessRatioOfDay"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorOverview.SuccessRatioOfDay` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_successRatioOfDay = string(value["SuccessRatioOfDay"].GetString());
        m_successRatioOfDayHasBeenSet = true;
    }

    if (value.HasMember("SuccessRatio") && !value["SuccessRatio"].IsNull())
    {
        if (!value["SuccessRatio"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorOverview.SuccessRatio` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_successRatio = string(value["SuccessRatio"].GetString());
        m_successRatioHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MonitorOverview::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_invocationCountOfDayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvocationCountOfDay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_invocationCountOfDay.c_str(), allocator).Move(), allocator);
    }

    if (m_invocationCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvocationCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_invocationCount.c_str(), allocator).Move(), allocator);
    }

    if (m_errorCountOfDayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorCountOfDay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorCountOfDay.c_str(), allocator).Move(), allocator);
    }

    if (m_errorCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorCount.c_str(), allocator).Move(), allocator);
    }

    if (m_successRatioOfDayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuccessRatioOfDay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_successRatioOfDay.c_str(), allocator).Move(), allocator);
    }

    if (m_successRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuccessRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_successRatio.c_str(), allocator).Move(), allocator);
    }

}


string MonitorOverview::GetInvocationCountOfDay() const
{
    return m_invocationCountOfDay;
}

void MonitorOverview::SetInvocationCountOfDay(const string& _invocationCountOfDay)
{
    m_invocationCountOfDay = _invocationCountOfDay;
    m_invocationCountOfDayHasBeenSet = true;
}

bool MonitorOverview::InvocationCountOfDayHasBeenSet() const
{
    return m_invocationCountOfDayHasBeenSet;
}

string MonitorOverview::GetInvocationCount() const
{
    return m_invocationCount;
}

void MonitorOverview::SetInvocationCount(const string& _invocationCount)
{
    m_invocationCount = _invocationCount;
    m_invocationCountHasBeenSet = true;
}

bool MonitorOverview::InvocationCountHasBeenSet() const
{
    return m_invocationCountHasBeenSet;
}

string MonitorOverview::GetErrorCountOfDay() const
{
    return m_errorCountOfDay;
}

void MonitorOverview::SetErrorCountOfDay(const string& _errorCountOfDay)
{
    m_errorCountOfDay = _errorCountOfDay;
    m_errorCountOfDayHasBeenSet = true;
}

bool MonitorOverview::ErrorCountOfDayHasBeenSet() const
{
    return m_errorCountOfDayHasBeenSet;
}

string MonitorOverview::GetErrorCount() const
{
    return m_errorCount;
}

void MonitorOverview::SetErrorCount(const string& _errorCount)
{
    m_errorCount = _errorCount;
    m_errorCountHasBeenSet = true;
}

bool MonitorOverview::ErrorCountHasBeenSet() const
{
    return m_errorCountHasBeenSet;
}

string MonitorOverview::GetSuccessRatioOfDay() const
{
    return m_successRatioOfDay;
}

void MonitorOverview::SetSuccessRatioOfDay(const string& _successRatioOfDay)
{
    m_successRatioOfDay = _successRatioOfDay;
    m_successRatioOfDayHasBeenSet = true;
}

bool MonitorOverview::SuccessRatioOfDayHasBeenSet() const
{
    return m_successRatioOfDayHasBeenSet;
}

string MonitorOverview::GetSuccessRatio() const
{
    return m_successRatio;
}

void MonitorOverview::SetSuccessRatio(const string& _successRatio)
{
    m_successRatio = _successRatio;
    m_successRatioHasBeenSet = true;
}

bool MonitorOverview::SuccessRatioHasBeenSet() const
{
    return m_successRatioHasBeenSet;
}

