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

#include <tencentcloud/dsgc/v20190723/model/DescribeDSPAAssessmentRiskDistributionOverviewResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

DescribeDSPAAssessmentRiskDistributionOverviewResponse::DescribeDSPAAssessmentRiskDistributionOverviewResponse() :
    m_riskTypeDistributionHasBeenSet(false),
    m_riskDetailDistributionHasBeenSet(false),
    m_riskAssetsDistributionHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDSPAAssessmentRiskDistributionOverviewResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("RiskTypeDistribution") && !rsp["RiskTypeDistribution"].IsNull())
    {
        if (!rsp["RiskTypeDistribution"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RiskTypeDistribution` is not array type"));

        const rapidjson::Value &tmpValue = rsp["RiskTypeDistribution"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Note item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_riskTypeDistribution.push_back(item);
        }
        m_riskTypeDistributionHasBeenSet = true;
    }

    if (rsp.HasMember("RiskDetailDistribution") && !rsp["RiskDetailDistribution"].IsNull())
    {
        if (!rsp["RiskDetailDistribution"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RiskDetailDistribution` is not array type"));

        const rapidjson::Value &tmpValue = rsp["RiskDetailDistribution"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Note item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_riskDetailDistribution.push_back(item);
        }
        m_riskDetailDistributionHasBeenSet = true;
    }

    if (rsp.HasMember("RiskAssetsDistribution") && !rsp["RiskAssetsDistribution"].IsNull())
    {
        if (!rsp["RiskAssetsDistribution"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RiskAssetsDistribution` is not array type"));

        const rapidjson::Value &tmpValue = rsp["RiskAssetsDistribution"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Note item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_riskAssetsDistribution.push_back(item);
        }
        m_riskAssetsDistributionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeDSPAAssessmentRiskDistributionOverviewResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_riskTypeDistributionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskTypeDistribution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_riskTypeDistribution.begin(); itr != m_riskTypeDistribution.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_riskDetailDistributionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskDetailDistribution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_riskDetailDistribution.begin(); itr != m_riskDetailDistribution.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_riskAssetsDistributionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskAssetsDistribution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_riskAssetsDistribution.begin(); itr != m_riskAssetsDistribution.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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


vector<Note> DescribeDSPAAssessmentRiskDistributionOverviewResponse::GetRiskTypeDistribution() const
{
    return m_riskTypeDistribution;
}

bool DescribeDSPAAssessmentRiskDistributionOverviewResponse::RiskTypeDistributionHasBeenSet() const
{
    return m_riskTypeDistributionHasBeenSet;
}

vector<Note> DescribeDSPAAssessmentRiskDistributionOverviewResponse::GetRiskDetailDistribution() const
{
    return m_riskDetailDistribution;
}

bool DescribeDSPAAssessmentRiskDistributionOverviewResponse::RiskDetailDistributionHasBeenSet() const
{
    return m_riskDetailDistributionHasBeenSet;
}

vector<Note> DescribeDSPAAssessmentRiskDistributionOverviewResponse::GetRiskAssetsDistribution() const
{
    return m_riskAssetsDistribution;
}

bool DescribeDSPAAssessmentRiskDistributionOverviewResponse::RiskAssetsDistributionHasBeenSet() const
{
    return m_riskAssetsDistributionHasBeenSet;
}


