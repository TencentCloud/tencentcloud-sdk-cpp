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

#include <tencentcloud/scf/v20180416/model/AsyncEvent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Scf::V20180416::Model;
using namespace std;

AsyncEvent::AsyncEvent() :
    m_invokeRequestIdHasBeenSet(false),
    m_invokeTypeHasBeenSet(false),
    m_qualifierHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
}

CoreInternalOutcome AsyncEvent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InvokeRequestId") && !value["InvokeRequestId"].IsNull())
    {
        if (!value["InvokeRequestId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AsyncEvent.InvokeRequestId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_invokeRequestId = string(value["InvokeRequestId"].GetString());
        m_invokeRequestIdHasBeenSet = true;
    }

    if (value.HasMember("InvokeType") && !value["InvokeType"].IsNull())
    {
        if (!value["InvokeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AsyncEvent.InvokeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_invokeType = string(value["InvokeType"].GetString());
        m_invokeTypeHasBeenSet = true;
    }

    if (value.HasMember("Qualifier") && !value["Qualifier"].IsNull())
    {
        if (!value["Qualifier"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AsyncEvent.Qualifier` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_qualifier = string(value["Qualifier"].GetString());
        m_qualifierHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AsyncEvent.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AsyncEvent.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AsyncEvent.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AsyncEvent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_invokeRequestIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvokeRequestId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_invokeRequestId.c_str(), allocator).Move(), allocator);
    }

    if (m_invokeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvokeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_invokeType.c_str(), allocator).Move(), allocator);
    }

    if (m_qualifierHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Qualifier";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_qualifier.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

}


string AsyncEvent::GetInvokeRequestId() const
{
    return m_invokeRequestId;
}

void AsyncEvent::SetInvokeRequestId(const string& _invokeRequestId)
{
    m_invokeRequestId = _invokeRequestId;
    m_invokeRequestIdHasBeenSet = true;
}

bool AsyncEvent::InvokeRequestIdHasBeenSet() const
{
    return m_invokeRequestIdHasBeenSet;
}

string AsyncEvent::GetInvokeType() const
{
    return m_invokeType;
}

void AsyncEvent::SetInvokeType(const string& _invokeType)
{
    m_invokeType = _invokeType;
    m_invokeTypeHasBeenSet = true;
}

bool AsyncEvent::InvokeTypeHasBeenSet() const
{
    return m_invokeTypeHasBeenSet;
}

string AsyncEvent::GetQualifier() const
{
    return m_qualifier;
}

void AsyncEvent::SetQualifier(const string& _qualifier)
{
    m_qualifier = _qualifier;
    m_qualifierHasBeenSet = true;
}

bool AsyncEvent::QualifierHasBeenSet() const
{
    return m_qualifierHasBeenSet;
}

string AsyncEvent::GetStatus() const
{
    return m_status;
}

void AsyncEvent::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AsyncEvent::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string AsyncEvent::GetStartTime() const
{
    return m_startTime;
}

void AsyncEvent::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool AsyncEvent::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string AsyncEvent::GetEndTime() const
{
    return m_endTime;
}

void AsyncEvent::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool AsyncEvent::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

