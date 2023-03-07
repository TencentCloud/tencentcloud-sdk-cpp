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

#include <tencentcloud/intlpartnersmgt/v20220928/model/QueryVoucherPoolResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Intlpartnersmgt::V20220928::Model;
using namespace std;

QueryVoucherPoolResponse::QueryVoucherPoolResponse() :
    m_agentNameHasBeenSet(false),
    m_accountTypeHasBeenSet(false),
    m_totalQuotaHasBeenSet(false),
    m_remainingQuotaHasBeenSet(false),
    m_issuedNumHasBeenSet(false)
{
}

CoreInternalOutcome QueryVoucherPoolResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("AgentName") && !rsp["AgentName"].IsNull())
    {
        if (!rsp["AgentName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentName = string(rsp["AgentName"].GetString());
        m_agentNameHasBeenSet = true;
    }

    if (rsp.HasMember("AccountType") && !rsp["AccountType"].IsNull())
    {
        if (!rsp["AccountType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AccountType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_accountType = rsp["AccountType"].GetInt64();
        m_accountTypeHasBeenSet = true;
    }

    if (rsp.HasMember("TotalQuota") && !rsp["TotalQuota"].IsNull())
    {
        if (!rsp["TotalQuota"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TotalQuota` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_totalQuota = rsp["TotalQuota"].GetDouble();
        m_totalQuotaHasBeenSet = true;
    }

    if (rsp.HasMember("RemainingQuota") && !rsp["RemainingQuota"].IsNull())
    {
        if (!rsp["RemainingQuota"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `RemainingQuota` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_remainingQuota = rsp["RemainingQuota"].GetDouble();
        m_remainingQuotaHasBeenSet = true;
    }

    if (rsp.HasMember("IssuedNum") && !rsp["IssuedNum"].IsNull())
    {
        if (!rsp["IssuedNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IssuedNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_issuedNum = rsp["IssuedNum"].GetInt64();
        m_issuedNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string QueryVoucherPoolResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_agentNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agentName.c_str(), allocator).Move(), allocator);
    }

    if (m_accountTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accountType, allocator);
    }

    if (m_totalQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalQuota, allocator);
    }

    if (m_remainingQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemainingQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_remainingQuota, allocator);
    }

    if (m_issuedNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IssuedNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_issuedNum, allocator);
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


string QueryVoucherPoolResponse::GetAgentName() const
{
    return m_agentName;
}

bool QueryVoucherPoolResponse::AgentNameHasBeenSet() const
{
    return m_agentNameHasBeenSet;
}

int64_t QueryVoucherPoolResponse::GetAccountType() const
{
    return m_accountType;
}

bool QueryVoucherPoolResponse::AccountTypeHasBeenSet() const
{
    return m_accountTypeHasBeenSet;
}

double QueryVoucherPoolResponse::GetTotalQuota() const
{
    return m_totalQuota;
}

bool QueryVoucherPoolResponse::TotalQuotaHasBeenSet() const
{
    return m_totalQuotaHasBeenSet;
}

double QueryVoucherPoolResponse::GetRemainingQuota() const
{
    return m_remainingQuota;
}

bool QueryVoucherPoolResponse::RemainingQuotaHasBeenSet() const
{
    return m_remainingQuotaHasBeenSet;
}

int64_t QueryVoucherPoolResponse::GetIssuedNum() const
{
    return m_issuedNum;
}

bool QueryVoucherPoolResponse::IssuedNumHasBeenSet() const
{
    return m_issuedNumHasBeenSet;
}


