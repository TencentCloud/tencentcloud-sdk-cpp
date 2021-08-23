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

#include <tencentcloud/tic/v20201117/model/DescribeStackEventResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tic::V20201117::Model;
using namespace std;

DescribeStackEventResponse::DescribeStackEventResponse() :
    m_eventIdHasBeenSet(false),
    m_versionIdHasBeenSet(false),
    m_stackIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_eventMessageHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_consoleLogHasBeenSet(false)
{
}

CoreInternalOutcome DescribeStackEventResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("EventId") && !rsp["EventId"].IsNull())
    {
        if (!rsp["EventId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventId = string(rsp["EventId"].GetString());
        m_eventIdHasBeenSet = true;
    }

    if (rsp.HasMember("VersionId") && !rsp["VersionId"].IsNull())
    {
        if (!rsp["VersionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VersionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionId = string(rsp["VersionId"].GetString());
        m_versionIdHasBeenSet = true;
    }

    if (rsp.HasMember("StackId") && !rsp["StackId"].IsNull())
    {
        if (!rsp["StackId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StackId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stackId = string(rsp["StackId"].GetString());
        m_stackIdHasBeenSet = true;
    }

    if (rsp.HasMember("Type") && !rsp["Type"].IsNull())
    {
        if (!rsp["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(rsp["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(rsp["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("EventMessage") && !rsp["EventMessage"].IsNull())
    {
        if (!rsp["EventMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventMessage = string(rsp["EventMessage"].GetString());
        m_eventMessageHasBeenSet = true;
    }

    if (rsp.HasMember("CreateTime") && !rsp["CreateTime"].IsNull())
    {
        if (!rsp["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(rsp["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (rsp.HasMember("ConsoleLog") && !rsp["ConsoleLog"].IsNull())
    {
        if (!rsp["ConsoleLog"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsoleLog` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_consoleLog = string(rsp["ConsoleLog"].GetString());
        m_consoleLogHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeStackEventResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_eventIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventId.c_str(), allocator).Move(), allocator);
    }

    if (m_versionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_versionId.c_str(), allocator).Move(), allocator);
    }

    if (m_stackIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StackId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stackId.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_eventMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_consoleLogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsoleLog";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_consoleLog.c_str(), allocator).Move(), allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string DescribeStackEventResponse::GetEventId() const
{
    return m_eventId;
}

bool DescribeStackEventResponse::EventIdHasBeenSet() const
{
    return m_eventIdHasBeenSet;
}

string DescribeStackEventResponse::GetVersionId() const
{
    return m_versionId;
}

bool DescribeStackEventResponse::VersionIdHasBeenSet() const
{
    return m_versionIdHasBeenSet;
}

string DescribeStackEventResponse::GetStackId() const
{
    return m_stackId;
}

bool DescribeStackEventResponse::StackIdHasBeenSet() const
{
    return m_stackIdHasBeenSet;
}

string DescribeStackEventResponse::GetType() const
{
    return m_type;
}

bool DescribeStackEventResponse::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string DescribeStackEventResponse::GetStatus() const
{
    return m_status;
}

bool DescribeStackEventResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeStackEventResponse::GetEventMessage() const
{
    return m_eventMessage;
}

bool DescribeStackEventResponse::EventMessageHasBeenSet() const
{
    return m_eventMessageHasBeenSet;
}

string DescribeStackEventResponse::GetCreateTime() const
{
    return m_createTime;
}

bool DescribeStackEventResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DescribeStackEventResponse::GetConsoleLog() const
{
    return m_consoleLog;
}

bool DescribeStackEventResponse::ConsoleLogHasBeenSet() const
{
    return m_consoleLogHasBeenSet;
}


