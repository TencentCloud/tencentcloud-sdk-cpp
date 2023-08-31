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

#include <tencentcloud/dsgc/v20190723/model/DescribeDSPAAssessmentRiskTemplateVulnerableListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

DescribeDSPAAssessmentRiskTemplateVulnerableListRequest::DescribeDSPAAssessmentRiskTemplateVulnerableListRequest() :
    m_dspaIdHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_riskTypeHasBeenSet(false),
    m_riskNameHasBeenSet(false),
    m_riskSideHasBeenSet(false)
{
}

string DescribeDSPAAssessmentRiskTemplateVulnerableListRequest::ToJsonString() const
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

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_riskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_riskType.c_str(), allocator).Move(), allocator);
    }

    if (m_riskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_riskName.c_str(), allocator).Move(), allocator);
    }

    if (m_riskSideHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskSide";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_riskSide.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeDSPAAssessmentRiskTemplateVulnerableListRequest::GetDspaId() const
{
    return m_dspaId;
}

void DescribeDSPAAssessmentRiskTemplateVulnerableListRequest::SetDspaId(const string& _dspaId)
{
    m_dspaId = _dspaId;
    m_dspaIdHasBeenSet = true;
}

bool DescribeDSPAAssessmentRiskTemplateVulnerableListRequest::DspaIdHasBeenSet() const
{
    return m_dspaIdHasBeenSet;
}

int64_t DescribeDSPAAssessmentRiskTemplateVulnerableListRequest::GetLimit() const
{
    return m_limit;
}

void DescribeDSPAAssessmentRiskTemplateVulnerableListRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeDSPAAssessmentRiskTemplateVulnerableListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeDSPAAssessmentRiskTemplateVulnerableListRequest::GetOffset() const
{
    return m_offset;
}

void DescribeDSPAAssessmentRiskTemplateVulnerableListRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeDSPAAssessmentRiskTemplateVulnerableListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string DescribeDSPAAssessmentRiskTemplateVulnerableListRequest::GetRiskType() const
{
    return m_riskType;
}

void DescribeDSPAAssessmentRiskTemplateVulnerableListRequest::SetRiskType(const string& _riskType)
{
    m_riskType = _riskType;
    m_riskTypeHasBeenSet = true;
}

bool DescribeDSPAAssessmentRiskTemplateVulnerableListRequest::RiskTypeHasBeenSet() const
{
    return m_riskTypeHasBeenSet;
}

string DescribeDSPAAssessmentRiskTemplateVulnerableListRequest::GetRiskName() const
{
    return m_riskName;
}

void DescribeDSPAAssessmentRiskTemplateVulnerableListRequest::SetRiskName(const string& _riskName)
{
    m_riskName = _riskName;
    m_riskNameHasBeenSet = true;
}

bool DescribeDSPAAssessmentRiskTemplateVulnerableListRequest::RiskNameHasBeenSet() const
{
    return m_riskNameHasBeenSet;
}

string DescribeDSPAAssessmentRiskTemplateVulnerableListRequest::GetRiskSide() const
{
    return m_riskSide;
}

void DescribeDSPAAssessmentRiskTemplateVulnerableListRequest::SetRiskSide(const string& _riskSide)
{
    m_riskSide = _riskSide;
    m_riskSideHasBeenSet = true;
}

bool DescribeDSPAAssessmentRiskTemplateVulnerableListRequest::RiskSideHasBeenSet() const
{
    return m_riskSideHasBeenSet;
}


