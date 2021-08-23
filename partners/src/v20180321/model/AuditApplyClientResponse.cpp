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

#include <tencentcloud/partners/v20180321/model/AuditApplyClientResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Partners::V20180321::Model;
using namespace std;

AuditApplyClientResponse::AuditApplyClientResponse() :
    m_uinHasBeenSet(false),
    m_clientUinHasBeenSet(false),
    m_auditResultHasBeenSet(false),
    m_agentTimeHasBeenSet(false)
{
}

CoreInternalOutcome AuditApplyClientResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Uin") && !rsp["Uin"].IsNull())
    {
        if (!rsp["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(rsp["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (rsp.HasMember("ClientUin") && !rsp["ClientUin"].IsNull())
    {
        if (!rsp["ClientUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClientUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientUin = string(rsp["ClientUin"].GetString());
        m_clientUinHasBeenSet = true;
    }

    if (rsp.HasMember("AuditResult") && !rsp["AuditResult"].IsNull())
    {
        if (!rsp["AuditResult"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuditResult` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_auditResult = string(rsp["AuditResult"].GetString());
        m_auditResultHasBeenSet = true;
    }

    if (rsp.HasMember("AgentTime") && !rsp["AgentTime"].IsNull())
    {
        if (!rsp["AgentTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_agentTime = rsp["AgentTime"].GetUint64();
        m_agentTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string AuditApplyClientResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_clientUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientUin.c_str(), allocator).Move(), allocator);
    }

    if (m_auditResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuditResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_auditResult.c_str(), allocator).Move(), allocator);
    }

    if (m_agentTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_agentTime, allocator);
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


string AuditApplyClientResponse::GetUin() const
{
    return m_uin;
}

bool AuditApplyClientResponse::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string AuditApplyClientResponse::GetClientUin() const
{
    return m_clientUin;
}

bool AuditApplyClientResponse::ClientUinHasBeenSet() const
{
    return m_clientUinHasBeenSet;
}

string AuditApplyClientResponse::GetAuditResult() const
{
    return m_auditResult;
}

bool AuditApplyClientResponse::AuditResultHasBeenSet() const
{
    return m_auditResultHasBeenSet;
}

uint64_t AuditApplyClientResponse::GetAgentTime() const
{
    return m_agentTime;
}

bool AuditApplyClientResponse::AgentTimeHasBeenSet() const
{
    return m_agentTimeHasBeenSet;
}


