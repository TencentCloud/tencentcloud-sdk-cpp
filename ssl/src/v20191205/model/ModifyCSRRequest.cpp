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

#include <tencentcloud/ssl/v20191205/model/ModifyCSRRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ssl::V20191205::Model;
using namespace std;

ModifyCSRRequest::ModifyCSRRequest() :
    m_cSRIdHasBeenSet(false),
    m_generateHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_organizationHasBeenSet(false),
    m_departmentHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_provinceHasBeenSet(false),
    m_cityHasBeenSet(false),
    m_countryHasBeenSet(false),
    m_encryptAlgoHasBeenSet(false),
    m_keyParameterHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_keyPasswordHasBeenSet(false),
    m_subjectAltNameHasBeenSet(false)
{
}

string ModifyCSRRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_cSRIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CSRId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cSRId, allocator);
    }

    if (m_generateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Generate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_generate, allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_organizationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Organization";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_organization.c_str(), allocator).Move(), allocator);
    }

    if (m_departmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Department";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_department.c_str(), allocator).Move(), allocator);
    }

    if (m_emailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Email";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_email.c_str(), allocator).Move(), allocator);
    }

    if (m_provinceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Province";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_province.c_str(), allocator).Move(), allocator);
    }

    if (m_cityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "City";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_city.c_str(), allocator).Move(), allocator);
    }

    if (m_countryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Country";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_country.c_str(), allocator).Move(), allocator);
    }

    if (m_encryptAlgoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptAlgo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_encryptAlgo.c_str(), allocator).Move(), allocator);
    }

    if (m_keyParameterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyParameter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyParameter.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_keyPasswordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyPassword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyPassword.c_str(), allocator).Move(), allocator);
    }

    if (m_subjectAltNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubjectAltName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_subjectAltName.begin(); itr != m_subjectAltName.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t ModifyCSRRequest::GetCSRId() const
{
    return m_cSRId;
}

void ModifyCSRRequest::SetCSRId(const int64_t& _cSRId)
{
    m_cSRId = _cSRId;
    m_cSRIdHasBeenSet = true;
}

bool ModifyCSRRequest::CSRIdHasBeenSet() const
{
    return m_cSRIdHasBeenSet;
}

bool ModifyCSRRequest::GetGenerate() const
{
    return m_generate;
}

void ModifyCSRRequest::SetGenerate(const bool& _generate)
{
    m_generate = _generate;
    m_generateHasBeenSet = true;
}

bool ModifyCSRRequest::GenerateHasBeenSet() const
{
    return m_generateHasBeenSet;
}

string ModifyCSRRequest::GetDomain() const
{
    return m_domain;
}

void ModifyCSRRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool ModifyCSRRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string ModifyCSRRequest::GetOrganization() const
{
    return m_organization;
}

void ModifyCSRRequest::SetOrganization(const string& _organization)
{
    m_organization = _organization;
    m_organizationHasBeenSet = true;
}

bool ModifyCSRRequest::OrganizationHasBeenSet() const
{
    return m_organizationHasBeenSet;
}

string ModifyCSRRequest::GetDepartment() const
{
    return m_department;
}

void ModifyCSRRequest::SetDepartment(const string& _department)
{
    m_department = _department;
    m_departmentHasBeenSet = true;
}

bool ModifyCSRRequest::DepartmentHasBeenSet() const
{
    return m_departmentHasBeenSet;
}

string ModifyCSRRequest::GetEmail() const
{
    return m_email;
}

void ModifyCSRRequest::SetEmail(const string& _email)
{
    m_email = _email;
    m_emailHasBeenSet = true;
}

bool ModifyCSRRequest::EmailHasBeenSet() const
{
    return m_emailHasBeenSet;
}

string ModifyCSRRequest::GetProvince() const
{
    return m_province;
}

void ModifyCSRRequest::SetProvince(const string& _province)
{
    m_province = _province;
    m_provinceHasBeenSet = true;
}

bool ModifyCSRRequest::ProvinceHasBeenSet() const
{
    return m_provinceHasBeenSet;
}

string ModifyCSRRequest::GetCity() const
{
    return m_city;
}

void ModifyCSRRequest::SetCity(const string& _city)
{
    m_city = _city;
    m_cityHasBeenSet = true;
}

bool ModifyCSRRequest::CityHasBeenSet() const
{
    return m_cityHasBeenSet;
}

string ModifyCSRRequest::GetCountry() const
{
    return m_country;
}

void ModifyCSRRequest::SetCountry(const string& _country)
{
    m_country = _country;
    m_countryHasBeenSet = true;
}

bool ModifyCSRRequest::CountryHasBeenSet() const
{
    return m_countryHasBeenSet;
}

string ModifyCSRRequest::GetEncryptAlgo() const
{
    return m_encryptAlgo;
}

void ModifyCSRRequest::SetEncryptAlgo(const string& _encryptAlgo)
{
    m_encryptAlgo = _encryptAlgo;
    m_encryptAlgoHasBeenSet = true;
}

bool ModifyCSRRequest::EncryptAlgoHasBeenSet() const
{
    return m_encryptAlgoHasBeenSet;
}

string ModifyCSRRequest::GetKeyParameter() const
{
    return m_keyParameter;
}

void ModifyCSRRequest::SetKeyParameter(const string& _keyParameter)
{
    m_keyParameter = _keyParameter;
    m_keyParameterHasBeenSet = true;
}

bool ModifyCSRRequest::KeyParameterHasBeenSet() const
{
    return m_keyParameterHasBeenSet;
}

string ModifyCSRRequest::GetRemark() const
{
    return m_remark;
}

void ModifyCSRRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool ModifyCSRRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string ModifyCSRRequest::GetKeyPassword() const
{
    return m_keyPassword;
}

void ModifyCSRRequest::SetKeyPassword(const string& _keyPassword)
{
    m_keyPassword = _keyPassword;
    m_keyPasswordHasBeenSet = true;
}

bool ModifyCSRRequest::KeyPasswordHasBeenSet() const
{
    return m_keyPasswordHasBeenSet;
}

vector<string> ModifyCSRRequest::GetSubjectAltName() const
{
    return m_subjectAltName;
}

void ModifyCSRRequest::SetSubjectAltName(const vector<string>& _subjectAltName)
{
    m_subjectAltName = _subjectAltName;
    m_subjectAltNameHasBeenSet = true;
}

bool ModifyCSRRequest::SubjectAltNameHasBeenSet() const
{
    return m_subjectAltNameHasBeenSet;
}


