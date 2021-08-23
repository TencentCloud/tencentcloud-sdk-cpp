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

#include <tencentcloud/live/v20180801/model/CallbackEventInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

CallbackEventInfo::CallbackEventInfo() :
    m_eventTimeHasBeenSet(false),
    m_eventTypeHasBeenSet(false),
    m_requestHasBeenSet(false),
    m_responseHasBeenSet(false),
    m_responseTimeHasBeenSet(false),
    m_resultCodeHasBeenSet(false),
    m_streamIdHasBeenSet(false)
{
}

CoreInternalOutcome CallbackEventInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EventTime") && !value["EventTime"].IsNull())
    {
        if (!value["EventTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CallbackEventInfo.EventTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventTime = string(value["EventTime"].GetString());
        m_eventTimeHasBeenSet = true;
    }

    if (value.HasMember("EventType") && !value["EventType"].IsNull())
    {
        if (!value["EventType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CallbackEventInfo.EventType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_eventType = value["EventType"].GetUint64();
        m_eventTypeHasBeenSet = true;
    }

    if (value.HasMember("Request") && !value["Request"].IsNull())
    {
        if (!value["Request"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CallbackEventInfo.Request` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_request = string(value["Request"].GetString());
        m_requestHasBeenSet = true;
    }

    if (value.HasMember("Response") && !value["Response"].IsNull())
    {
        if (!value["Response"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CallbackEventInfo.Response` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_response = string(value["Response"].GetString());
        m_responseHasBeenSet = true;
    }

    if (value.HasMember("ResponseTime") && !value["ResponseTime"].IsNull())
    {
        if (!value["ResponseTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CallbackEventInfo.ResponseTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_responseTime = string(value["ResponseTime"].GetString());
        m_responseTimeHasBeenSet = true;
    }

    if (value.HasMember("ResultCode") && !value["ResultCode"].IsNull())
    {
        if (!value["ResultCode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CallbackEventInfo.ResultCode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_resultCode = value["ResultCode"].GetUint64();
        m_resultCodeHasBeenSet = true;
    }

    if (value.HasMember("StreamId") && !value["StreamId"].IsNull())
    {
        if (!value["StreamId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CallbackEventInfo.StreamId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_streamId = string(value["StreamId"].GetString());
        m_streamIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CallbackEventInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_eventTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventTime.c_str(), allocator).Move(), allocator);
    }

    if (m_eventTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventType, allocator);
    }

    if (m_requestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Request";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_request.c_str(), allocator).Move(), allocator);
    }

    if (m_responseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Response";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_response.c_str(), allocator).Move(), allocator);
    }

    if (m_responseTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResponseTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_responseTime.c_str(), allocator).Move(), allocator);
    }

    if (m_resultCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resultCode, allocator);
    }

    if (m_streamIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_streamId.c_str(), allocator).Move(), allocator);
    }

}


string CallbackEventInfo::GetEventTime() const
{
    return m_eventTime;
}

void CallbackEventInfo::SetEventTime(const string& _eventTime)
{
    m_eventTime = _eventTime;
    m_eventTimeHasBeenSet = true;
}

bool CallbackEventInfo::EventTimeHasBeenSet() const
{
    return m_eventTimeHasBeenSet;
}

uint64_t CallbackEventInfo::GetEventType() const
{
    return m_eventType;
}

void CallbackEventInfo::SetEventType(const uint64_t& _eventType)
{
    m_eventType = _eventType;
    m_eventTypeHasBeenSet = true;
}

bool CallbackEventInfo::EventTypeHasBeenSet() const
{
    return m_eventTypeHasBeenSet;
}

string CallbackEventInfo::GetRequest() const
{
    return m_request;
}

void CallbackEventInfo::SetRequest(const string& _request)
{
    m_request = _request;
    m_requestHasBeenSet = true;
}

bool CallbackEventInfo::RequestHasBeenSet() const
{
    return m_requestHasBeenSet;
}

string CallbackEventInfo::GetResponse() const
{
    return m_response;
}

void CallbackEventInfo::SetResponse(const string& _response)
{
    m_response = _response;
    m_responseHasBeenSet = true;
}

bool CallbackEventInfo::ResponseHasBeenSet() const
{
    return m_responseHasBeenSet;
}

string CallbackEventInfo::GetResponseTime() const
{
    return m_responseTime;
}

void CallbackEventInfo::SetResponseTime(const string& _responseTime)
{
    m_responseTime = _responseTime;
    m_responseTimeHasBeenSet = true;
}

bool CallbackEventInfo::ResponseTimeHasBeenSet() const
{
    return m_responseTimeHasBeenSet;
}

uint64_t CallbackEventInfo::GetResultCode() const
{
    return m_resultCode;
}

void CallbackEventInfo::SetResultCode(const uint64_t& _resultCode)
{
    m_resultCode = _resultCode;
    m_resultCodeHasBeenSet = true;
}

bool CallbackEventInfo::ResultCodeHasBeenSet() const
{
    return m_resultCodeHasBeenSet;
}

string CallbackEventInfo::GetStreamId() const
{
    return m_streamId;
}

void CallbackEventInfo::SetStreamId(const string& _streamId)
{
    m_streamId = _streamId;
    m_streamIdHasBeenSet = true;
}

bool CallbackEventInfo::StreamIdHasBeenSet() const
{
    return m_streamIdHasBeenSet;
}

