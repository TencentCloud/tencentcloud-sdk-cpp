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

#include <tencentcloud/dsgc/v20190723/model/DescribeDSPAAssessmentRiskDealedOverviewResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

DescribeDSPAAssessmentRiskDealedOverviewResponse::DescribeDSPAAssessmentRiskDealedOverviewResponse() :
    m_totalCountHasBeenSet(false),
    m_yesterdayDealedCountHasBeenSet(false),
    m_unDealedRiskWeekRatioHasBeenSet(false),
    m_unDealedRiskDayRatioHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDSPAAssessmentRiskDealedOverviewResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TotalCount") && !rsp["TotalCount"].IsNull())
    {
        if (!rsp["TotalCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = rsp["TotalCount"].GetUint64();
        m_totalCountHasBeenSet = true;
    }

    if (rsp.HasMember("YesterdayDealedCount") && !rsp["YesterdayDealedCount"].IsNull())
    {
        if (!rsp["YesterdayDealedCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `YesterdayDealedCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_yesterdayDealedCount = rsp["YesterdayDealedCount"].GetUint64();
        m_yesterdayDealedCountHasBeenSet = true;
    }

    if (rsp.HasMember("UnDealedRiskWeekRatio") && !rsp["UnDealedRiskWeekRatio"].IsNull())
    {
        if (!rsp["UnDealedRiskWeekRatio"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `UnDealedRiskWeekRatio` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_unDealedRiskWeekRatio = rsp["UnDealedRiskWeekRatio"].GetDouble();
        m_unDealedRiskWeekRatioHasBeenSet = true;
    }

    if (rsp.HasMember("UnDealedRiskDayRatio") && !rsp["UnDealedRiskDayRatio"].IsNull())
    {
        if (!rsp["UnDealedRiskDayRatio"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `UnDealedRiskDayRatio` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_unDealedRiskDayRatio = rsp["UnDealedRiskDayRatio"].GetDouble();
        m_unDealedRiskDayRatioHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeDSPAAssessmentRiskDealedOverviewResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_yesterdayDealedCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "YesterdayDealedCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_yesterdayDealedCount, allocator);
    }

    if (m_unDealedRiskWeekRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnDealedRiskWeekRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unDealedRiskWeekRatio, allocator);
    }

    if (m_unDealedRiskDayRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnDealedRiskDayRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unDealedRiskDayRatio, allocator);
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


uint64_t DescribeDSPAAssessmentRiskDealedOverviewResponse::GetTotalCount() const
{
    return m_totalCount;
}

bool DescribeDSPAAssessmentRiskDealedOverviewResponse::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

uint64_t DescribeDSPAAssessmentRiskDealedOverviewResponse::GetYesterdayDealedCount() const
{
    return m_yesterdayDealedCount;
}

bool DescribeDSPAAssessmentRiskDealedOverviewResponse::YesterdayDealedCountHasBeenSet() const
{
    return m_yesterdayDealedCountHasBeenSet;
}

double DescribeDSPAAssessmentRiskDealedOverviewResponse::GetUnDealedRiskWeekRatio() const
{
    return m_unDealedRiskWeekRatio;
}

bool DescribeDSPAAssessmentRiskDealedOverviewResponse::UnDealedRiskWeekRatioHasBeenSet() const
{
    return m_unDealedRiskWeekRatioHasBeenSet;
}

double DescribeDSPAAssessmentRiskDealedOverviewResponse::GetUnDealedRiskDayRatio() const
{
    return m_unDealedRiskDayRatio;
}

bool DescribeDSPAAssessmentRiskDealedOverviewResponse::UnDealedRiskDayRatioHasBeenSet() const
{
    return m_unDealedRiskDayRatioHasBeenSet;
}


