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

#include <tencentcloud/dsgc/v20190723/model/DescribeDSPAAssessmentRiskOverviewResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

DescribeDSPAAssessmentRiskOverviewResponse::DescribeDSPAAssessmentRiskOverviewResponse() :
    m_totalCountHasBeenSet(false),
    m_highRiskCountHasBeenSet(false),
    m_highRiskWeekRatioHasBeenSet(false),
    m_highRiskDayRatioHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDSPAAssessmentRiskOverviewResponse::Deserialize(const string &payload)
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

    if (rsp.HasMember("HighRiskCount") && !rsp["HighRiskCount"].IsNull())
    {
        if (!rsp["HighRiskCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HighRiskCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_highRiskCount = rsp["HighRiskCount"].GetUint64();
        m_highRiskCountHasBeenSet = true;
    }

    if (rsp.HasMember("HighRiskWeekRatio") && !rsp["HighRiskWeekRatio"].IsNull())
    {
        if (!rsp["HighRiskWeekRatio"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `HighRiskWeekRatio` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_highRiskWeekRatio = rsp["HighRiskWeekRatio"].GetDouble();
        m_highRiskWeekRatioHasBeenSet = true;
    }

    if (rsp.HasMember("HighRiskDayRatio") && !rsp["HighRiskDayRatio"].IsNull())
    {
        if (!rsp["HighRiskDayRatio"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `HighRiskDayRatio` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_highRiskDayRatio = rsp["HighRiskDayRatio"].GetDouble();
        m_highRiskDayRatioHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeDSPAAssessmentRiskOverviewResponse::ToJsonString() const
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

    if (m_highRiskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HighRiskCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_highRiskCount, allocator);
    }

    if (m_highRiskWeekRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HighRiskWeekRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_highRiskWeekRatio, allocator);
    }

    if (m_highRiskDayRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HighRiskDayRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_highRiskDayRatio, allocator);
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


uint64_t DescribeDSPAAssessmentRiskOverviewResponse::GetTotalCount() const
{
    return m_totalCount;
}

bool DescribeDSPAAssessmentRiskOverviewResponse::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

uint64_t DescribeDSPAAssessmentRiskOverviewResponse::GetHighRiskCount() const
{
    return m_highRiskCount;
}

bool DescribeDSPAAssessmentRiskOverviewResponse::HighRiskCountHasBeenSet() const
{
    return m_highRiskCountHasBeenSet;
}

double DescribeDSPAAssessmentRiskOverviewResponse::GetHighRiskWeekRatio() const
{
    return m_highRiskWeekRatio;
}

bool DescribeDSPAAssessmentRiskOverviewResponse::HighRiskWeekRatioHasBeenSet() const
{
    return m_highRiskWeekRatioHasBeenSet;
}

double DescribeDSPAAssessmentRiskOverviewResponse::GetHighRiskDayRatio() const
{
    return m_highRiskDayRatio;
}

bool DescribeDSPAAssessmentRiskOverviewResponse::HighRiskDayRatioHasBeenSet() const
{
    return m_highRiskDayRatioHasBeenSet;
}


