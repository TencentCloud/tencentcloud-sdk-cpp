/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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


    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(rsp["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("Reason") && !rsp["Reason"].IsNull())
    {
        if (!rsp["Reason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Reason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reason = string(rsp["Reason"].GetString());
        m_reasonHasBeenSet = true;
    }

    if (rsp.HasMember("ServiceType") && !rsp["ServiceType"].IsNull())
    {
        if (!rsp["ServiceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceType = string(rsp["ServiceType"].GetString());
        m_serviceTypeHasBeenSet = true;
    }

    if (rsp.HasMember("ServiceName") && !rsp["ServiceName"].IsNull())
    {
        if (!rsp["ServiceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceName = string(rsp["ServiceName"].GetString());
        m_serviceNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string GetServiceLinkedRoleDeletionStatusResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_reasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reason.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceName.c_str(), allocator).Move(), allocator);
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


