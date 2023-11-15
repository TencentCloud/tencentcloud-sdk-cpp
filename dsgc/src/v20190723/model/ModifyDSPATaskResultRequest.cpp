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

#include <tencentcloud/dsgc/v20190723/model/ModifyDSPATaskResultRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

ModifyDSPATaskResultRequest::ModifyDSPATaskResultRequest() :
    m_dspaIdHasBeenSet(false),
    m_fieldResultIdHasBeenSet(false),
    m_complianceIdHasBeenSet(false),
    m_isSetNonSensitiveFieldHasBeenSet(false),
    m_destRuleIdHasBeenSet(false),
    m_destCategoryIdHasBeenSet(false),
    m_destLevelIdHasBeenSet(false),
    m_srcRuleIdHasBeenSet(false),
    m_srcCategoryIdHasBeenSet(false),
    m_srcLevelIdHasBeenSet(false),
    m_identifyTypeHasBeenSet(false)
{
}

string ModifyDSPATaskResultRequest::ToJsonString() const
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

    if (m_fieldResultIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FieldResultId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_fieldResultId, allocator);
    }

    if (m_complianceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComplianceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_complianceId, allocator);
    }

    if (m_isSetNonSensitiveFieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSetNonSensitiveField";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isSetNonSensitiveField, allocator);
    }

    if (m_destRuleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestRuleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_destRuleId, allocator);
    }

    if (m_destCategoryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestCategoryId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_destCategoryId, allocator);
    }

    if (m_destLevelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestLevelId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_destLevelId, allocator);
    }

    if (m_srcRuleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcRuleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_srcRuleId, allocator);
    }

    if (m_srcCategoryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcCategoryId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_srcCategoryId, allocator);
    }

    if (m_srcLevelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcLevelId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_srcLevelId, allocator);
    }

    if (m_identifyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdentifyType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_identifyType, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyDSPATaskResultRequest::GetDspaId() const
{
    return m_dspaId;
}

void ModifyDSPATaskResultRequest::SetDspaId(const string& _dspaId)
{
    m_dspaId = _dspaId;
    m_dspaIdHasBeenSet = true;
}

bool ModifyDSPATaskResultRequest::DspaIdHasBeenSet() const
{
    return m_dspaIdHasBeenSet;
}

int64_t ModifyDSPATaskResultRequest::GetFieldResultId() const
{
    return m_fieldResultId;
}

void ModifyDSPATaskResultRequest::SetFieldResultId(const int64_t& _fieldResultId)
{
    m_fieldResultId = _fieldResultId;
    m_fieldResultIdHasBeenSet = true;
}

bool ModifyDSPATaskResultRequest::FieldResultIdHasBeenSet() const
{
    return m_fieldResultIdHasBeenSet;
}

int64_t ModifyDSPATaskResultRequest::GetComplianceId() const
{
    return m_complianceId;
}

void ModifyDSPATaskResultRequest::SetComplianceId(const int64_t& _complianceId)
{
    m_complianceId = _complianceId;
    m_complianceIdHasBeenSet = true;
}

bool ModifyDSPATaskResultRequest::ComplianceIdHasBeenSet() const
{
    return m_complianceIdHasBeenSet;
}

bool ModifyDSPATaskResultRequest::GetIsSetNonSensitiveField() const
{
    return m_isSetNonSensitiveField;
}

void ModifyDSPATaskResultRequest::SetIsSetNonSensitiveField(const bool& _isSetNonSensitiveField)
{
    m_isSetNonSensitiveField = _isSetNonSensitiveField;
    m_isSetNonSensitiveFieldHasBeenSet = true;
}

bool ModifyDSPATaskResultRequest::IsSetNonSensitiveFieldHasBeenSet() const
{
    return m_isSetNonSensitiveFieldHasBeenSet;
}

int64_t ModifyDSPATaskResultRequest::GetDestRuleId() const
{
    return m_destRuleId;
}

void ModifyDSPATaskResultRequest::SetDestRuleId(const int64_t& _destRuleId)
{
    m_destRuleId = _destRuleId;
    m_destRuleIdHasBeenSet = true;
}

bool ModifyDSPATaskResultRequest::DestRuleIdHasBeenSet() const
{
    return m_destRuleIdHasBeenSet;
}

int64_t ModifyDSPATaskResultRequest::GetDestCategoryId() const
{
    return m_destCategoryId;
}

void ModifyDSPATaskResultRequest::SetDestCategoryId(const int64_t& _destCategoryId)
{
    m_destCategoryId = _destCategoryId;
    m_destCategoryIdHasBeenSet = true;
}

bool ModifyDSPATaskResultRequest::DestCategoryIdHasBeenSet() const
{
    return m_destCategoryIdHasBeenSet;
}

int64_t ModifyDSPATaskResultRequest::GetDestLevelId() const
{
    return m_destLevelId;
}

void ModifyDSPATaskResultRequest::SetDestLevelId(const int64_t& _destLevelId)
{
    m_destLevelId = _destLevelId;
    m_destLevelIdHasBeenSet = true;
}

bool ModifyDSPATaskResultRequest::DestLevelIdHasBeenSet() const
{
    return m_destLevelIdHasBeenSet;
}

int64_t ModifyDSPATaskResultRequest::GetSrcRuleId() const
{
    return m_srcRuleId;
}

void ModifyDSPATaskResultRequest::SetSrcRuleId(const int64_t& _srcRuleId)
{
    m_srcRuleId = _srcRuleId;
    m_srcRuleIdHasBeenSet = true;
}

bool ModifyDSPATaskResultRequest::SrcRuleIdHasBeenSet() const
{
    return m_srcRuleIdHasBeenSet;
}

int64_t ModifyDSPATaskResultRequest::GetSrcCategoryId() const
{
    return m_srcCategoryId;
}

void ModifyDSPATaskResultRequest::SetSrcCategoryId(const int64_t& _srcCategoryId)
{
    m_srcCategoryId = _srcCategoryId;
    m_srcCategoryIdHasBeenSet = true;
}

bool ModifyDSPATaskResultRequest::SrcCategoryIdHasBeenSet() const
{
    return m_srcCategoryIdHasBeenSet;
}

int64_t ModifyDSPATaskResultRequest::GetSrcLevelId() const
{
    return m_srcLevelId;
}

void ModifyDSPATaskResultRequest::SetSrcLevelId(const int64_t& _srcLevelId)
{
    m_srcLevelId = _srcLevelId;
    m_srcLevelIdHasBeenSet = true;
}

bool ModifyDSPATaskResultRequest::SrcLevelIdHasBeenSet() const
{
    return m_srcLevelIdHasBeenSet;
}

int64_t ModifyDSPATaskResultRequest::GetIdentifyType() const
{
    return m_identifyType;
}

void ModifyDSPATaskResultRequest::SetIdentifyType(const int64_t& _identifyType)
{
    m_identifyType = _identifyType;
    m_identifyTypeHasBeenSet = true;
}

bool ModifyDSPATaskResultRequest::IdentifyTypeHasBeenSet() const
{
    return m_identifyTypeHasBeenSet;
}


