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

#include <tencentcloud/dsgc/v20190723/model/CreateDSPAAssessmentRiskLevelRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

CreateDSPAAssessmentRiskLevelRequest::CreateDSPAAssessmentRiskLevelRequest() :
    m_dspaIdHasBeenSet(false),
    m_riskLevelNameHasBeenSet(false),
    m_identifyComplianceIdHasBeenSet(false),
    m_riskLevelRuleHasBeenSet(false),
    m_riskLevelDescriptionHasBeenSet(false)
{
}

string CreateDSPAAssessmentRiskLevelRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dspaIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DspaId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dspaId.c_str(), allocator).Move(), allocator);
    }

    if (m_riskLevelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLevelName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_riskLevelName.c_str(), allocator).Move(), allocator);
    }

    if (m_identifyComplianceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdentifyComplianceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_identifyComplianceId, allocator);
    }

    if (m_riskLevelRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLevelRule";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_riskLevelRule.begin(); itr != m_riskLevelRule.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_riskLevelDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLevelDescription";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_riskLevelDescription.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateDSPAAssessmentRiskLevelRequest::GetDspaId() const
{
    return m_dspaId;
}

void CreateDSPAAssessmentRiskLevelRequest::SetDspaId(const string& _dspaId)
{
    m_dspaId = _dspaId;
    m_dspaIdHasBeenSet = true;
}

bool CreateDSPAAssessmentRiskLevelRequest::DspaIdHasBeenSet() const
{
    return m_dspaIdHasBeenSet;
}

string CreateDSPAAssessmentRiskLevelRequest::GetRiskLevelName() const
{
    return m_riskLevelName;
}

void CreateDSPAAssessmentRiskLevelRequest::SetRiskLevelName(const string& _riskLevelName)
{
    m_riskLevelName = _riskLevelName;
    m_riskLevelNameHasBeenSet = true;
}

bool CreateDSPAAssessmentRiskLevelRequest::RiskLevelNameHasBeenSet() const
{
    return m_riskLevelNameHasBeenSet;
}

int64_t CreateDSPAAssessmentRiskLevelRequest::GetIdentifyComplianceId() const
{
    return m_identifyComplianceId;
}

void CreateDSPAAssessmentRiskLevelRequest::SetIdentifyComplianceId(const int64_t& _identifyComplianceId)
{
    m_identifyComplianceId = _identifyComplianceId;
    m_identifyComplianceIdHasBeenSet = true;
}

bool CreateDSPAAssessmentRiskLevelRequest::IdentifyComplianceIdHasBeenSet() const
{
    return m_identifyComplianceIdHasBeenSet;
}

vector<RiskLevelMatrix> CreateDSPAAssessmentRiskLevelRequest::GetRiskLevelRule() const
{
    return m_riskLevelRule;
}

void CreateDSPAAssessmentRiskLevelRequest::SetRiskLevelRule(const vector<RiskLevelMatrix>& _riskLevelRule)
{
    m_riskLevelRule = _riskLevelRule;
    m_riskLevelRuleHasBeenSet = true;
}

bool CreateDSPAAssessmentRiskLevelRequest::RiskLevelRuleHasBeenSet() const
{
    return m_riskLevelRuleHasBeenSet;
}

string CreateDSPAAssessmentRiskLevelRequest::GetRiskLevelDescription() const
{
    return m_riskLevelDescription;
}

void CreateDSPAAssessmentRiskLevelRequest::SetRiskLevelDescription(const string& _riskLevelDescription)
{
    m_riskLevelDescription = _riskLevelDescription;
    m_riskLevelDescriptionHasBeenSet = true;
}

bool CreateDSPAAssessmentRiskLevelRequest::RiskLevelDescriptionHasBeenSet() const
{
    return m_riskLevelDescriptionHasBeenSet;
}


