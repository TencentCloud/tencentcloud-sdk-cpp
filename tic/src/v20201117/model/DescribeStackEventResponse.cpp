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
using namespace rapidjson;
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
    Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("EventId") && !rsp["EventId"].IsNull())
    {
        if (!rsp["EventId"].IsString())
        {
            return CoreInternalOutcome(Error("response `EventId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventId = string(rsp["EventId"].GetString());
        m_eventIdHasBeenSet = true;
    }

    if (rsp.HasMember("VersionId") && !rsp["VersionId"].IsNull())
    {
        if (!rsp["VersionId"].IsString())
        {
            return CoreInternalOutcome(Error("response `VersionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionId = string(rsp["VersionId"].GetString());
        m_versionIdHasBeenSet = true;
    }

    if (rsp.HasMember("StackId") && !rsp["StackId"].IsNull())
    {
        if (!rsp["StackId"].IsString())
        {
            return CoreInternalOutcome(Error("response `StackId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stackId = string(rsp["StackId"].GetString());
        m_stackIdHasBeenSet = true;
    }

    if (rsp.HasMember("Type") && !rsp["Type"].IsNull())
    {
        if (!rsp["Type"].IsString())
        {
            return CoreInternalOutcome(Error("response `Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(rsp["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsString())
        {
            return CoreInternalOutcome(Error("response `Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(rsp["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("EventMessage") && !rsp["EventMessage"].IsNull())
    {
        if (!rsp["EventMessage"].IsString())
        {
            return CoreInternalOutcome(Error("response `EventMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventMessage = string(rsp["EventMessage"].GetString());
        m_eventMessageHasBeenSet = true;
    }

    if (rsp.HasMember("CreateTime") && !rsp["CreateTime"].IsNull())
    {
        if (!rsp["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(rsp["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (rsp.HasMember("ConsoleLog") && !rsp["ConsoleLog"].IsNull())
    {
        if (!rsp["ConsoleLog"].IsString())
        {
            return CoreInternalOutcome(Error("response `ConsoleLog` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_consoleLog = string(rsp["ConsoleLog"].GetString());
        m_consoleLogHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
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


