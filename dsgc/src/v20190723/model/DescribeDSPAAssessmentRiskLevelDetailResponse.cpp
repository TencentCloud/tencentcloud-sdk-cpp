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

#include <tencentcloud/dsgc/v20190723/model/DescribeDSPAAssessmentRiskLevelDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

DescribeDSPAAssessmentRiskLevelDetailResponse::DescribeDSPAAssessmentRiskLevelDetailResponse() :
    m_riskLevelNameHasBeenSet(false),
    m_riskLevelDescriptionHasBeenSet(false),
    m_identifyComplianceIdHasBeenSet(false),
    m_identifyComplianceNameHasBeenSet(false),
    m_riskLevelMatrixHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDSPAAssessmentRiskLevelDetailResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("RiskLevelName") && !rsp["RiskLevelName"].IsNull())
    {
        if (!rsp["RiskLevelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskLevelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskLevelName = string(rsp["RiskLevelName"].GetString());
        m_riskLevelNameHasBeenSet = true;
    }

    if (rsp.HasMember("RiskLevelDescription") && !rsp["RiskLevelDescription"].IsNull())
    {
        if (!rsp["RiskLevelDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskLevelDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskLevelDescription = string(rsp["RiskLevelDescription"].GetString());
        m_riskLevelDescriptionHasBeenSet = true;
    }

    if (rsp.HasMember("IdentifyComplianceId") && !rsp["IdentifyComplianceId"].IsNull())
    {
        if (!rsp["IdentifyComplianceId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IdentifyComplianceId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_identifyComplianceId = rsp["IdentifyComplianceId"].GetInt64();
        m_identifyComplianceIdHasBeenSet = true;
    }

    if (rsp.HasMember("IdentifyComplianceName") && !rsp["IdentifyComplianceName"].IsNull())
    {
        if (!rsp["IdentifyComplianceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IdentifyComplianceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_identifyComplianceName = string(rsp["IdentifyComplianceName"].GetString());
        m_identifyComplianceNameHasBeenSet = true;
    }

    if (rsp.HasMember("RiskLevelMatrix") && !rsp["RiskLevelMatrix"].IsNull())
    {
        if (!rsp["RiskLevelMatrix"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RiskLevelMatrix` is not array type"));

        const rapidjson::Value &tmpValue = rsp["RiskLevelMatrix"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RiskLevelMatrix item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_riskLevelMatrix.push_back(item);
        }
        m_riskLevelMatrixHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeDSPAAssessmentRiskLevelDetailResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_riskLevelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLevelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskLevelName.c_str(), allocator).Move(), allocator);
    }

    if (m_riskLevelDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLevelDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskLevelDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_identifyComplianceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdentifyComplianceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_identifyComplianceId, allocator);
    }

    if (m_identifyComplianceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdentifyComplianceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_identifyComplianceName.c_str(), allocator).Move(), allocator);
    }

    if (m_riskLevelMatrixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLevelMatrix";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_riskLevelMatrix.begin(); itr != m_riskLevelMatrix.end(); ++itr, ++i)
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


string DescribeDSPAAssessmentRiskLevelDetailResponse::GetRiskLevelName() const
{
    return m_riskLevelName;
}

bool DescribeDSPAAssessmentRiskLevelDetailResponse::RiskLevelNameHasBeenSet() const
{
    return m_riskLevelNameHasBeenSet;
}

string DescribeDSPAAssessmentRiskLevelDetailResponse::GetRiskLevelDescription() const
{
    return m_riskLevelDescription;
}

bool DescribeDSPAAssessmentRiskLevelDetailResponse::RiskLevelDescriptionHasBeenSet() const
{
    return m_riskLevelDescriptionHasBeenSet;
}

int64_t DescribeDSPAAssessmentRiskLevelDetailResponse::GetIdentifyComplianceId() const
{
    return m_identifyComplianceId;
}

bool DescribeDSPAAssessmentRiskLevelDetailResponse::IdentifyComplianceIdHasBeenSet() const
{
    return m_identifyComplianceIdHasBeenSet;
}

string DescribeDSPAAssessmentRiskLevelDetailResponse::GetIdentifyComplianceName() const
{
    return m_identifyComplianceName;
}

bool DescribeDSPAAssessmentRiskLevelDetailResponse::IdentifyComplianceNameHasBeenSet() const
{
    return m_identifyComplianceNameHasBeenSet;
}

vector<RiskLevelMatrix> DescribeDSPAAssessmentRiskLevelDetailResponse::GetRiskLevelMatrix() const
{
    return m_riskLevelMatrix;
}

bool DescribeDSPAAssessmentRiskLevelDetailResponse::RiskLevelMatrixHasBeenSet() const
{
    return m_riskLevelMatrixHasBeenSet;
}


