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

#include <tencentcloud/cam/v20190116/model/GetServiceLinkedRoleDeletionStatusResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cam::V20190116::Model;
using namespace rapidjson;
using namespace std;

GetServiceLinkedRoleDeletionStatusResponse::GetServiceLinkedRoleDeletionStatusResponse() :
    m_statusHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_serviceTypeHasBeenSet(false),
    m_serviceNameHasBeenSet(false)
{
}

CoreInternalOutcome GetServiceLinkedRoleDeletionStatusResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsString())
        {
            return CoreInternalOutcome(Error("response `Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(rsp["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("Reason") && !rsp["Reason"].IsNull())
    {
        if (!rsp["Reason"].IsString())
        {
            return CoreInternalOutcome(Error("response `Reason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reason = string(rsp["Reason"].GetString());
        m_reasonHasBeenSet = true;
    }

    if (rsp.HasMember("ServiceType") && !rsp["ServiceType"].IsNull())
    {
        if (!rsp["ServiceType"].IsString())
        {
            return CoreInternalOutcome(Error("response `ServiceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceType = string(rsp["ServiceType"].GetString());
        m_serviceTypeHasBeenSet = true;
    }

    if (rsp.HasMember("ServiceName") && !rsp["ServiceName"].IsNull())
    {
        if (!rsp["ServiceName"].IsString())
        {
            return CoreInternalOutcome(Error("response `ServiceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceName = string(rsp["ServiceName"].GetString());
        m_serviceNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string GetServiceLinkedRoleDeletionStatusResponse::GetStatus() const
{
    return m_status;
}

bool GetServiceLinkedRoleDeletionStatusResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string GetServiceLinkedRoleDeletionStatusResponse::GetReason() const
{
    return m_reason;
}

bool GetServiceLinkedRoleDeletionStatusResponse::ReasonHasBeenSet() const
{
    return m_reasonHasBeenSet;
}

string GetServiceLinkedRoleDeletionStatusResponse::GetServiceType() const
{
    return m_serviceType;
}

bool GetServiceLinkedRoleDeletionStatusResponse::ServiceTypeHasBeenSet() const
{
    return m_serviceTypeHasBeenSet;
}

string GetServiceLinkedRoleDeletionStatusResponse::GetServiceName() const
{
    return m_serviceName;
}

bool GetServiceLinkedRoleDeletionStatusResponse::ServiceNameHasBeenSet() const
{
    return m_serviceNameHasBeenSet;
}


