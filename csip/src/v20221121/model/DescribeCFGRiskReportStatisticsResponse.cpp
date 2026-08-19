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

#include <tencentcloud/csip/v20221121/model/DescribeCFGRiskReportStatisticsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeCFGRiskReportStatisticsResponse::DescribeCFGRiskReportStatisticsResponse() :
    m_totalRuleCountHasBeenSet(false),
    m_totalAssetCountHasBeenSet(false),
    m_totalRiskCountHasBeenSet(false)
{
}

CoreInternalOutcome DescribeCFGRiskReportStatisticsResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TotalRuleCount") && !rsp["TotalRuleCount"].IsNull())
    {
        if (!rsp["TotalRuleCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalRuleCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalRuleCount = rsp["TotalRuleCount"].GetUint64();
        m_totalRuleCountHasBeenSet = true;
    }

    if (rsp.HasMember("TotalAssetCount") && !rsp["TotalAssetCount"].IsNull())
    {
        if (!rsp["TotalAssetCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalAssetCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalAssetCount = rsp["TotalAssetCount"].GetUint64();
        m_totalAssetCountHasBeenSet = true;
    }

    if (rsp.HasMember("TotalRiskCount") && !rsp["TotalRiskCount"].IsNull())
    {
        if (!rsp["TotalRiskCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalRiskCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalRiskCount = rsp["TotalRiskCount"].GetUint64();
        m_totalRiskCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeCFGRiskReportStatisticsResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_totalRuleCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalRuleCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalRuleCount, allocator);
    }

    if (m_totalAssetCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalAssetCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalAssetCount, allocator);
    }

    if (m_totalRiskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalRiskCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalRiskCount, allocator);
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


uint64_t DescribeCFGRiskReportStatisticsResponse::GetTotalRuleCount() const
{
    return m_totalRuleCount;
}

bool DescribeCFGRiskReportStatisticsResponse::TotalRuleCountHasBeenSet() const
{
    return m_totalRuleCountHasBeenSet;
}

uint64_t DescribeCFGRiskReportStatisticsResponse::GetTotalAssetCount() const
{
    return m_totalAssetCount;
}

bool DescribeCFGRiskReportStatisticsResponse::TotalAssetCountHasBeenSet() const
{
    return m_totalAssetCountHasBeenSet;
}

uint64_t DescribeCFGRiskReportStatisticsResponse::GetTotalRiskCount() const
{
    return m_totalRiskCount;
}

bool DescribeCFGRiskReportStatisticsResponse::TotalRiskCountHasBeenSet() const
{
    return m_totalRiskCountHasBeenSet;
}


