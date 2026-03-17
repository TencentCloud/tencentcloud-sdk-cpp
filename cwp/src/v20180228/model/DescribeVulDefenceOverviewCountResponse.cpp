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

#include <tencentcloud/cwp/v20180228/model/DescribeVulDefenceOverviewCountResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

DescribeVulDefenceOverviewCountResponse::DescribeVulDefenceOverviewCountResponse() :
    m_strategyCountHasBeenSet(false),
    m_strategyOpenCountHasBeenSet(false),
    m_supportDefenceVulCountHasBeenSet(false)
{
}

CoreInternalOutcome DescribeVulDefenceOverviewCountResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("StrategyCount") && !rsp["StrategyCount"].IsNull())
    {
        if (!rsp["StrategyCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `StrategyCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_strategyCount = rsp["StrategyCount"].GetUint64();
        m_strategyCountHasBeenSet = true;
    }

    if (rsp.HasMember("StrategyOpenCount") && !rsp["StrategyOpenCount"].IsNull())
    {
        if (!rsp["StrategyOpenCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `StrategyOpenCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_strategyOpenCount = rsp["StrategyOpenCount"].GetUint64();
        m_strategyOpenCountHasBeenSet = true;
    }

    if (rsp.HasMember("SupportDefenceVulCount") && !rsp["SupportDefenceVulCount"].IsNull())
    {
        if (!rsp["SupportDefenceVulCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SupportDefenceVulCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_supportDefenceVulCount = rsp["SupportDefenceVulCount"].GetUint64();
        m_supportDefenceVulCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeVulDefenceOverviewCountResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_strategyCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_strategyCount, allocator);
    }

    if (m_strategyOpenCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyOpenCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_strategyOpenCount, allocator);
    }

    if (m_supportDefenceVulCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportDefenceVulCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_supportDefenceVulCount, allocator);
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


uint64_t DescribeVulDefenceOverviewCountResponse::GetStrategyCount() const
{
    return m_strategyCount;
}

bool DescribeVulDefenceOverviewCountResponse::StrategyCountHasBeenSet() const
{
    return m_strategyCountHasBeenSet;
}

uint64_t DescribeVulDefenceOverviewCountResponse::GetStrategyOpenCount() const
{
    return m_strategyOpenCount;
}

bool DescribeVulDefenceOverviewCountResponse::StrategyOpenCountHasBeenSet() const
{
    return m_strategyOpenCountHasBeenSet;
}

uint64_t DescribeVulDefenceOverviewCountResponse::GetSupportDefenceVulCount() const
{
    return m_supportDefenceVulCount;
}

bool DescribeVulDefenceOverviewCountResponse::SupportDefenceVulCountHasBeenSet() const
{
    return m_supportDefenceVulCountHasBeenSet;
}


