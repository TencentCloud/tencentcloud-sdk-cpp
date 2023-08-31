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

#include <tencentcloud/dsgc/v20190723/model/CreateDSPAAssessmentTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

CreateDSPAAssessmentTaskRequest::CreateDSPAAssessmentTaskRequest() :
    m_dspaIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_businessNameHasBeenSet(false),
    m_businessDeptHasBeenSet(false),
    m_businessOwnerHasBeenSet(false),
    m_complianceIdHasBeenSet(false),
    m_discoveryConditionHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

string CreateDSPAAssessmentTaskRequest::ToJsonString() const
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

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_templateId.c_str(), allocator).Move(), allocator);
    }

    if (m_businessNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_businessName.c_str(), allocator).Move(), allocator);
    }

    if (m_businessDeptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessDept";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_businessDept.c_str(), allocator).Move(), allocator);
    }

    if (m_businessOwnerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessOwner";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_businessOwner.c_str(), allocator).Move(), allocator);
    }

    if (m_complianceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComplianceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_complianceId, allocator);
    }

    if (m_discoveryConditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiscoveryCondition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_discoveryCondition.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateDSPAAssessmentTaskRequest::GetDspaId() const
{
    return m_dspaId;
}

void CreateDSPAAssessmentTaskRequest::SetDspaId(const string& _dspaId)
{
    m_dspaId = _dspaId;
    m_dspaIdHasBeenSet = true;
}

bool CreateDSPAAssessmentTaskRequest::DspaIdHasBeenSet() const
{
    return m_dspaIdHasBeenSet;
}

string CreateDSPAAssessmentTaskRequest::GetName() const
{
    return m_name;
}

void CreateDSPAAssessmentTaskRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateDSPAAssessmentTaskRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateDSPAAssessmentTaskRequest::GetTemplateId() const
{
    return m_templateId;
}

void CreateDSPAAssessmentTaskRequest::SetTemplateId(const string& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool CreateDSPAAssessmentTaskRequest::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

string CreateDSPAAssessmentTaskRequest::GetBusinessName() const
{
    return m_businessName;
}

void CreateDSPAAssessmentTaskRequest::SetBusinessName(const string& _businessName)
{
    m_businessName = _businessName;
    m_businessNameHasBeenSet = true;
}

bool CreateDSPAAssessmentTaskRequest::BusinessNameHasBeenSet() const
{
    return m_businessNameHasBeenSet;
}

string CreateDSPAAssessmentTaskRequest::GetBusinessDept() const
{
    return m_businessDept;
}

void CreateDSPAAssessmentTaskRequest::SetBusinessDept(const string& _businessDept)
{
    m_businessDept = _businessDept;
    m_businessDeptHasBeenSet = true;
}

bool CreateDSPAAssessmentTaskRequest::BusinessDeptHasBeenSet() const
{
    return m_businessDeptHasBeenSet;
}

string CreateDSPAAssessmentTaskRequest::GetBusinessOwner() const
{
    return m_businessOwner;
}

void CreateDSPAAssessmentTaskRequest::SetBusinessOwner(const string& _businessOwner)
{
    m_businessOwner = _businessOwner;
    m_businessOwnerHasBeenSet = true;
}

bool CreateDSPAAssessmentTaskRequest::BusinessOwnerHasBeenSet() const
{
    return m_businessOwnerHasBeenSet;
}

int64_t CreateDSPAAssessmentTaskRequest::GetComplianceId() const
{
    return m_complianceId;
}

void CreateDSPAAssessmentTaskRequest::SetComplianceId(const int64_t& _complianceId)
{
    m_complianceId = _complianceId;
    m_complianceIdHasBeenSet = true;
}

bool CreateDSPAAssessmentTaskRequest::ComplianceIdHasBeenSet() const
{
    return m_complianceIdHasBeenSet;
}

DiscoveryCondition CreateDSPAAssessmentTaskRequest::GetDiscoveryCondition() const
{
    return m_discoveryCondition;
}

void CreateDSPAAssessmentTaskRequest::SetDiscoveryCondition(const DiscoveryCondition& _discoveryCondition)
{
    m_discoveryCondition = _discoveryCondition;
    m_discoveryConditionHasBeenSet = true;
}

bool CreateDSPAAssessmentTaskRequest::DiscoveryConditionHasBeenSet() const
{
    return m_discoveryConditionHasBeenSet;
}

string CreateDSPAAssessmentTaskRequest::GetDescription() const
{
    return m_description;
}

void CreateDSPAAssessmentTaskRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateDSPAAssessmentTaskRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}


