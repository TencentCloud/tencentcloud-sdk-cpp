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

#include <tencentcloud/partners/v20180321/model/DescribeAgentClientGradeResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Partners::V20180321::Model;
using namespace std;

DescribeAgentClientGradeResponse::DescribeAgentClientGradeResponse() :
    m_auditStatusHasBeenSet(false),
    m_authStateHasBeenSet(false),
    m_clientGradeHasBeenSet(false),
    m_clientTypeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAgentClientGradeResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("AuditStatus") && !rsp["AuditStatus"].IsNull())
    {
        if (!rsp["AuditStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AuditStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_auditStatus = rsp["AuditStatus"].GetUint64();
        m_auditStatusHasBeenSet = true;
    }

    if (rsp.HasMember("AuthState") && !rsp["AuthState"].IsNull())
    {
        if (!rsp["AuthState"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AuthState` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_authState = rsp["AuthState"].GetUint64();
        m_authStateHasBeenSet = true;
    }

    if (rsp.HasMember("ClientGrade") && !rsp["ClientGrade"].IsNull())
    {
        if (!rsp["ClientGrade"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClientGrade` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientGrade = string(rsp["ClientGrade"].GetString());
        m_clientGradeHasBeenSet = true;
    }

    if (rsp.HasMember("ClientType") && !rsp["ClientType"].IsNull())
    {
        if (!rsp["ClientType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClientType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_clientType = rsp["ClientType"].GetUint64();
        m_clientTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeAgentClientGradeResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_auditStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuditStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_auditStatus, allocator);
    }

    if (m_authStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_authState, allocator);
    }

    if (m_clientGradeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientGrade";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientGrade.c_str(), allocator).Move(), allocator);
    }

    if (m_clientTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clientType, allocator);
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


uint64_t DescribeAgentClientGradeResponse::GetAuditStatus() const
{
    return m_auditStatus;
}

bool DescribeAgentClientGradeResponse::AuditStatusHasBeenSet() const
{
    return m_auditStatusHasBeenSet;
}

uint64_t DescribeAgentClientGradeResponse::GetAuthState() const
{
    return m_authState;
}

bool DescribeAgentClientGradeResponse::AuthStateHasBeenSet() const
{
    return m_authStateHasBeenSet;
}

string DescribeAgentClientGradeResponse::GetClientGrade() const
{
    return m_clientGrade;
}

bool DescribeAgentClientGradeResponse::ClientGradeHasBeenSet() const
{
    return m_clientGradeHasBeenSet;
}

uint64_t DescribeAgentClientGradeResponse::GetClientType() const
{
    return m_clientType;
}

bool DescribeAgentClientGradeResponse::ClientTypeHasBeenSet() const
{
    return m_clientTypeHasBeenSet;
}


