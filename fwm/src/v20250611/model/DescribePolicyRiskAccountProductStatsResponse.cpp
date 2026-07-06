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

#include <tencentcloud/fwm/v20250611/model/DescribePolicyRiskAccountProductStatsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Fwm::V20250611::Model;
using namespace std;

DescribePolicyRiskAccountProductStatsResponse::DescribePolicyRiskAccountProductStatsResponse() :
    m_accountStatsHasBeenSet(false),
    m_totalCountHasBeenSet(false),
    m_overdueAccountCountHasBeenSet(false),
    m_overdueProductCountHasBeenSet(false)
{
}

CoreInternalOutcome DescribePolicyRiskAccountProductStatsResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("AccountStats") && !rsp["AccountStats"].IsNull())
    {
        if (!rsp["AccountStats"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AccountStats` is not array type"));

        const rapidjson::Value &tmpValue = rsp["AccountStats"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AccountStatsGroup item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_accountStats.push_back(item);
        }
        m_accountStatsHasBeenSet = true;
    }

    if (rsp.HasMember("TotalCount") && !rsp["TotalCount"].IsNull())
    {
        if (!rsp["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = rsp["TotalCount"].GetInt64();
        m_totalCountHasBeenSet = true;
    }

    if (rsp.HasMember("OverdueAccountCount") && !rsp["OverdueAccountCount"].IsNull())
    {
        if (!rsp["OverdueAccountCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverdueAccountCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_overdueAccountCount = rsp["OverdueAccountCount"].GetInt64();
        m_overdueAccountCountHasBeenSet = true;
    }

    if (rsp.HasMember("OverdueProductCount") && !rsp["OverdueProductCount"].IsNull())
    {
        if (!rsp["OverdueProductCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverdueProductCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_overdueProductCount = rsp["OverdueProductCount"].GetInt64();
        m_overdueProductCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribePolicyRiskAccountProductStatsResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_accountStatsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountStats";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_accountStats.begin(); itr != m_accountStats.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_overdueAccountCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OverdueAccountCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_overdueAccountCount, allocator);
    }

    if (m_overdueProductCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OverdueProductCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_overdueProductCount, allocator);
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


vector<AccountStatsGroup> DescribePolicyRiskAccountProductStatsResponse::GetAccountStats() const
{
    return m_accountStats;
}

bool DescribePolicyRiskAccountProductStatsResponse::AccountStatsHasBeenSet() const
{
    return m_accountStatsHasBeenSet;
}

int64_t DescribePolicyRiskAccountProductStatsResponse::GetTotalCount() const
{
    return m_totalCount;
}

bool DescribePolicyRiskAccountProductStatsResponse::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

int64_t DescribePolicyRiskAccountProductStatsResponse::GetOverdueAccountCount() const
{
    return m_overdueAccountCount;
}

bool DescribePolicyRiskAccountProductStatsResponse::OverdueAccountCountHasBeenSet() const
{
    return m_overdueAccountCountHasBeenSet;
}

int64_t DescribePolicyRiskAccountProductStatsResponse::GetOverdueProductCount() const
{
    return m_overdueProductCount;
}

bool DescribePolicyRiskAccountProductStatsResponse::OverdueProductCountHasBeenSet() const
{
    return m_overdueProductCountHasBeenSet;
}


