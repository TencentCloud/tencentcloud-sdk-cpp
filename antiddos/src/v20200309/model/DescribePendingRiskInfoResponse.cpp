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

#include <tencentcloud/antiddos/v20200309/model/DescribePendingRiskInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Antiddos::V20200309::Model;
using namespace std;

DescribePendingRiskInfoResponse::DescribePendingRiskInfoResponse() :
    m_isPaidUsrHasBeenSet(false),
    m_attackingCountHasBeenSet(false),
    m_blockingCountHasBeenSet(false),
    m_expiredCountHasBeenSet(false),
    m_totalHasBeenSet(false)
{
}

CoreInternalOutcome DescribePendingRiskInfoResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("IsPaidUsr") && !rsp["IsPaidUsr"].IsNull())
    {
        if (!rsp["IsPaidUsr"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IsPaidUsr` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isPaidUsr = rsp["IsPaidUsr"].GetBool();
        m_isPaidUsrHasBeenSet = true;
    }

    if (rsp.HasMember("AttackingCount") && !rsp["AttackingCount"].IsNull())
    {
        if (!rsp["AttackingCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AttackingCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_attackingCount = rsp["AttackingCount"].GetInt64();
        m_attackingCountHasBeenSet = true;
    }

    if (rsp.HasMember("BlockingCount") && !rsp["BlockingCount"].IsNull())
    {
        if (!rsp["BlockingCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BlockingCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_blockingCount = rsp["BlockingCount"].GetInt64();
        m_blockingCountHasBeenSet = true;
    }

    if (rsp.HasMember("ExpiredCount") && !rsp["ExpiredCount"].IsNull())
    {
        if (!rsp["ExpiredCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExpiredCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expiredCount = rsp["ExpiredCount"].GetInt64();
        m_expiredCountHasBeenSet = true;
    }

    if (rsp.HasMember("Total") && !rsp["Total"].IsNull())
    {
        if (!rsp["Total"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Total` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_total = rsp["Total"].GetInt64();
        m_totalHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribePendingRiskInfoResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_isPaidUsrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPaidUsr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isPaidUsr, allocator);
    }

    if (m_attackingCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackingCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_attackingCount, allocator);
    }

    if (m_blockingCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockingCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_blockingCount, allocator);
    }

    if (m_expiredCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpiredCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expiredCount, allocator);
    }

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_total, allocator);
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


bool DescribePendingRiskInfoResponse::GetIsPaidUsr() const
{
    return m_isPaidUsr;
}

bool DescribePendingRiskInfoResponse::IsPaidUsrHasBeenSet() const
{
    return m_isPaidUsrHasBeenSet;
}

int64_t DescribePendingRiskInfoResponse::GetAttackingCount() const
{
    return m_attackingCount;
}

bool DescribePendingRiskInfoResponse::AttackingCountHasBeenSet() const
{
    return m_attackingCountHasBeenSet;
}

int64_t DescribePendingRiskInfoResponse::GetBlockingCount() const
{
    return m_blockingCount;
}

bool DescribePendingRiskInfoResponse::BlockingCountHasBeenSet() const
{
    return m_blockingCountHasBeenSet;
}

int64_t DescribePendingRiskInfoResponse::GetExpiredCount() const
{
    return m_expiredCount;
}

bool DescribePendingRiskInfoResponse::ExpiredCountHasBeenSet() const
{
    return m_expiredCountHasBeenSet;
}

int64_t DescribePendingRiskInfoResponse::GetTotal() const
{
    return m_total;
}

bool DescribePendingRiskInfoResponse::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}


