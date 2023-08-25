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

#include <tencentcloud/dsgc/v20190723/model/DescribeDSPAAssessmentNewDiscoveredRiskOverviewResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

DescribeDSPAAssessmentNewDiscoveredRiskOverviewResponse::DescribeDSPAAssessmentNewDiscoveredRiskOverviewResponse() :
    m_newDiscoveredRiskCountHasBeenSet(false),
    m_affectedAssetCountHasBeenSet(false),
    m_weekRatioHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDSPAAssessmentNewDiscoveredRiskOverviewResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("NewDiscoveredRiskCount") && !rsp["NewDiscoveredRiskCount"].IsNull())
    {
        if (!rsp["NewDiscoveredRiskCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NewDiscoveredRiskCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_newDiscoveredRiskCount = rsp["NewDiscoveredRiskCount"].GetInt64();
        m_newDiscoveredRiskCountHasBeenSet = true;
    }

    if (rsp.HasMember("AffectedAssetCount") && !rsp["AffectedAssetCount"].IsNull())
    {
        if (!rsp["AffectedAssetCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AffectedAssetCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_affectedAssetCount = rsp["AffectedAssetCount"].GetInt64();
        m_affectedAssetCountHasBeenSet = true;
    }

    if (rsp.HasMember("WeekRatio") && !rsp["WeekRatio"].IsNull())
    {
        if (!rsp["WeekRatio"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `WeekRatio` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_weekRatio = rsp["WeekRatio"].GetDouble();
        m_weekRatioHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeDSPAAssessmentNewDiscoveredRiskOverviewResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_newDiscoveredRiskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewDiscoveredRiskCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_newDiscoveredRiskCount, allocator);
    }

    if (m_affectedAssetCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AffectedAssetCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_affectedAssetCount, allocator);
    }

    if (m_weekRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WeekRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_weekRatio, allocator);
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


int64_t DescribeDSPAAssessmentNewDiscoveredRiskOverviewResponse::GetNewDiscoveredRiskCount() const
{
    return m_newDiscoveredRiskCount;
}

bool DescribeDSPAAssessmentNewDiscoveredRiskOverviewResponse::NewDiscoveredRiskCountHasBeenSet() const
{
    return m_newDiscoveredRiskCountHasBeenSet;
}

int64_t DescribeDSPAAssessmentNewDiscoveredRiskOverviewResponse::GetAffectedAssetCount() const
{
    return m_affectedAssetCount;
}

bool DescribeDSPAAssessmentNewDiscoveredRiskOverviewResponse::AffectedAssetCountHasBeenSet() const
{
    return m_affectedAssetCountHasBeenSet;
}

double DescribeDSPAAssessmentNewDiscoveredRiskOverviewResponse::GetWeekRatio() const
{
    return m_weekRatio;
}

bool DescribeDSPAAssessmentNewDiscoveredRiskOverviewResponse::WeekRatioHasBeenSet() const
{
    return m_weekRatioHasBeenSet;
}


