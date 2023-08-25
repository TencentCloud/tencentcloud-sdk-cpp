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

#include <tencentcloud/dsgc/v20190723/model/CreateDSPAAssessmentRiskTemplateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

CreateDSPAAssessmentRiskTemplateRequest::CreateDSPAAssessmentRiskTemplateRequest() :
    m_dspaIdHasBeenSet(false),
    m_templateNameHasBeenSet(false),
    m_riskLevelIdHasBeenSet(false),
    m_riskIdListHasBeenSet(false),
    m_templateDescriptionHasBeenSet(false)
{
}

string CreateDSPAAssessmentRiskTemplateRequest::ToJsonString() const
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

    if (m_templateNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_templateName.c_str(), allocator).Move(), allocator);
    }

    if (m_riskLevelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLevelId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_riskLevelId, allocator);
    }

    if (m_riskIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_riskIdList.begin(); itr != m_riskIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_templateDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateDescription";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_templateDescription.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateDSPAAssessmentRiskTemplateRequest::GetDspaId() const
{
    return m_dspaId;
}

void CreateDSPAAssessmentRiskTemplateRequest::SetDspaId(const string& _dspaId)
{
    m_dspaId = _dspaId;
    m_dspaIdHasBeenSet = true;
}

bool CreateDSPAAssessmentRiskTemplateRequest::DspaIdHasBeenSet() const
{
    return m_dspaIdHasBeenSet;
}

string CreateDSPAAssessmentRiskTemplateRequest::GetTemplateName() const
{
    return m_templateName;
}

void CreateDSPAAssessmentRiskTemplateRequest::SetTemplateName(const string& _templateName)
{
    m_templateName = _templateName;
    m_templateNameHasBeenSet = true;
}

bool CreateDSPAAssessmentRiskTemplateRequest::TemplateNameHasBeenSet() const
{
    return m_templateNameHasBeenSet;
}

int64_t CreateDSPAAssessmentRiskTemplateRequest::GetRiskLevelId() const
{
    return m_riskLevelId;
}

void CreateDSPAAssessmentRiskTemplateRequest::SetRiskLevelId(const int64_t& _riskLevelId)
{
    m_riskLevelId = _riskLevelId;
    m_riskLevelIdHasBeenSet = true;
}

bool CreateDSPAAssessmentRiskTemplateRequest::RiskLevelIdHasBeenSet() const
{
    return m_riskLevelIdHasBeenSet;
}

vector<int64_t> CreateDSPAAssessmentRiskTemplateRequest::GetRiskIdList() const
{
    return m_riskIdList;
}

void CreateDSPAAssessmentRiskTemplateRequest::SetRiskIdList(const vector<int64_t>& _riskIdList)
{
    m_riskIdList = _riskIdList;
    m_riskIdListHasBeenSet = true;
}

bool CreateDSPAAssessmentRiskTemplateRequest::RiskIdListHasBeenSet() const
{
    return m_riskIdListHasBeenSet;
}

string CreateDSPAAssessmentRiskTemplateRequest::GetTemplateDescription() const
{
    return m_templateDescription;
}

void CreateDSPAAssessmentRiskTemplateRequest::SetTemplateDescription(const string& _templateDescription)
{
    m_templateDescription = _templateDescription;
    m_templateDescriptionHasBeenSet = true;
}

bool CreateDSPAAssessmentRiskTemplateRequest::TemplateDescriptionHasBeenSet() const
{
    return m_templateDescriptionHasBeenSet;
}


