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

#include <tencentcloud/dsgc/v20190723/model/DescribeDSPAAssessmentRiskAmountOverviewResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

DescribeDSPAAssessmentRiskAmountOverviewResponse::DescribeDSPAAssessmentRiskAmountOverviewResponse() :
    m_totalRiskCountHasBeenSet(false),
    m_totalAffectedAssetCountHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDSPAAssessmentRiskAmountOverviewResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TotalRiskCount") && !rsp["TotalRiskCount"].IsNull())
    {
        if (!rsp["TotalRiskCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalRiskCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalRiskCount = rsp["TotalRiskCount"].GetInt64();
        m_totalRiskCountHasBeenSet = true;
    }

    if (rsp.HasMember("TotalAffectedAssetCount") && !rsp["TotalAffectedAssetCount"].IsNull())
    {
        if (!rsp["TotalAffectedAssetCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalAffectedAssetCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalAffectedAssetCount = rsp["TotalAffectedAssetCount"].GetInt64();
        m_totalAffectedAssetCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeDSPAAssessmentRiskAmountOverviewResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_totalRiskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalRiskCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalRiskCount, allocator);
    }

    if (m_totalAffectedAssetCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalAffectedAssetCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalAffectedAssetCount, allocator);
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


int64_t DescribeDSPAAssessmentRiskAmountOverviewResponse::GetTotalRiskCount() const
{
    return m_totalRiskCount;
}

bool DescribeDSPAAssessmentRiskAmountOverviewResponse::TotalRiskCountHasBeenSet() const
{
    return m_totalRiskCountHasBeenSet;
}

int64_t DescribeDSPAAssessmentRiskAmountOverviewResponse::GetTotalAffectedAssetCount() const
{
    return m_totalAffectedAssetCount;
}

bool DescribeDSPAAssessmentRiskAmountOverviewResponse::TotalAffectedAssetCountHasBeenSet() const
{
    return m_totalAffectedAssetCountHasBeenSet;
}


