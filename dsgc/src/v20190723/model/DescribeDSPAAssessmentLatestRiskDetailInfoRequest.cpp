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

#include <tencentcloud/dsgc/v20190723/model/DescribeDSPAAssessmentLatestRiskDetailInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

DescribeDSPAAssessmentLatestRiskDetailInfoRequest::DescribeDSPAAssessmentLatestRiskDetailInfoRequest() :
    m_dspaIdHasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_riskIdHasBeenSet(false)
{
}

string DescribeDSPAAssessmentLatestRiskDetailInfoRequest::ToJsonString() const
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

    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_templateId, allocator);
    }

    if (m_riskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_riskId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeDSPAAssessmentLatestRiskDetailInfoRequest::GetDspaId() const
{
    return m_dspaId;
}

void DescribeDSPAAssessmentLatestRiskDetailInfoRequest::SetDspaId(const string& _dspaId)
{
    m_dspaId = _dspaId;
    m_dspaIdHasBeenSet = true;
}

bool DescribeDSPAAssessmentLatestRiskDetailInfoRequest::DspaIdHasBeenSet() const
{
    return m_dspaIdHasBeenSet;
}

int64_t DescribeDSPAAssessmentLatestRiskDetailInfoRequest::GetTemplateId() const
{
    return m_templateId;
}

void DescribeDSPAAssessmentLatestRiskDetailInfoRequest::SetTemplateId(const int64_t& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool DescribeDSPAAssessmentLatestRiskDetailInfoRequest::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

int64_t DescribeDSPAAssessmentLatestRiskDetailInfoRequest::GetRiskId() const
{
    return m_riskId;
}

void DescribeDSPAAssessmentLatestRiskDetailInfoRequest::SetRiskId(const int64_t& _riskId)
{
    m_riskId = _riskId;
    m_riskIdHasBeenSet = true;
}

bool DescribeDSPAAssessmentLatestRiskDetailInfoRequest::RiskIdHasBeenSet() const
{
    return m_riskIdHasBeenSet;
}


