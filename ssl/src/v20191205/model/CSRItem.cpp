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

#include <tencentcloud/ssl/v20191205/model/CSRItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssl::V20191205::Model;
using namespace std;

CSRItem::CSRItem() :
    m_idHasBeenSet(false),
    m_ownerUinHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_organizationHasBeenSet(false),
    m_departmentHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_provinceHasBeenSet(false),
    m_cityHasBeenSet(false),
    m_countryHasBeenSet(false),
    m_remarksHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_encryptAlgoHasBeenSet(false),
    m_keyParameterHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_subjectAltNameHasBeenSet(false)
{
}

CoreInternalOutcome CSRItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CSRItem.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("OwnerUin") && !value["OwnerUin"].IsNull())
    {
        if (!value["OwnerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CSRItem.OwnerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUin = string(value["OwnerUin"].GetString());
        m_ownerUinHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CSRItem.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("Organization") && !value["Organization"].IsNull())
    {
        if (!value["Organization"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CSRItem.Organization` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_organization = string(value["Organization"].GetString());
        m_organizationHasBeenSet = true;
    }

    if (value.HasMember("Department") && !value["Department"].IsNull())
    {
        if (!value["Department"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CSRItem.Department` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_department = string(value["Department"].GetString());
        m_departmentHasBeenSet = true;
    }

    if (value.HasMember("Email") && !value["Email"].IsNull())
    {
        if (!value["Email"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CSRItem.Email` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_email = string(value["Email"].GetString());
        m_emailHasBeenSet = true;
    }

    if (value.HasMember("Province") && !value["Province"].IsNull())
    {
        if (!value["Province"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CSRItem.Province` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_province = string(value["Province"].GetString());
        m_provinceHasBeenSet = true;
    }

    if (value.HasMember("City") && !value["City"].IsNull())
    {
        if (!value["City"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CSRItem.City` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_city = string(value["City"].GetString());
        m_cityHasBeenSet = true;
    }

    if (value.HasMember("Country") && !value["Country"].IsNull())
    {
        if (!value["Country"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CSRItem.Country` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_country = string(value["Country"].GetString());
        m_countryHasBeenSet = true;
    }

    if (value.HasMember("Remarks") && !value["Remarks"].IsNull())
    {
        if (!value["Remarks"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CSRItem.Remarks` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remarks = string(value["Remarks"].GetString());
        m_remarksHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CSRItem.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CSRItem.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("EncryptAlgo") && !value["EncryptAlgo"].IsNull())
    {
        if (!value["EncryptAlgo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CSRItem.EncryptAlgo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_encryptAlgo = string(value["EncryptAlgo"].GetString());
        m_encryptAlgoHasBeenSet = true;
    }

    if (value.HasMember("KeyParameter") && !value["KeyParameter"].IsNull())
    {
        if (!value["KeyParameter"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CSRItem.KeyParameter` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyParameter = string(value["KeyParameter"].GetString());
        m_keyParameterHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CSRItem.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tags item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("SubjectAltName") && !value["SubjectAltName"].IsNull())
    {
        if (!value["SubjectAltName"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CSRItem.SubjectAltName` is not array type"));

        const rapidjson::Value &tmpValue = value["SubjectAltName"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_subjectAltName.push_back((*itr).GetString());
        }
        m_subjectAltNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CSRItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_ownerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerUin.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_organizationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Organization";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_organization.c_str(), allocator).Move(), allocator);
    }

    if (m_departmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Department";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_department.c_str(), allocator).Move(), allocator);
    }

    if (m_emailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Email";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_email.c_str(), allocator).Move(), allocator);
    }

    if (m_provinceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Province";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_province.c_str(), allocator).Move(), allocator);
    }

    if (m_cityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "City";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_city.c_str(), allocator).Move(), allocator);
    }

    if (m_countryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Country";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_country.c_str(), allocator).Move(), allocator);
    }

    if (m_remarksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remarks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remarks.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_encryptAlgoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptAlgo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_encryptAlgo.c_str(), allocator).Move(), allocator);
    }

    if (m_keyParameterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyParameter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyParameter.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_subjectAltNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubjectAltName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_subjectAltName.begin(); itr != m_subjectAltName.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


int64_t CSRItem::GetId() const
{
    return m_id;
}

void CSRItem::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool CSRItem::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string CSRItem::GetOwnerUin() const
{
    return m_ownerUin;
}

void CSRItem::SetOwnerUin(const string& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool CSRItem::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

string CSRItem::GetDomain() const
{
    return m_domain;
}

void CSRItem::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool CSRItem::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string CSRItem::GetOrganization() const
{
    return m_organization;
}

void CSRItem::SetOrganization(const string& _organization)
{
    m_organization = _organization;
    m_organizationHasBeenSet = true;
}

bool CSRItem::OrganizationHasBeenSet() const
{
    return m_organizationHasBeenSet;
}

string CSRItem::GetDepartment() const
{
    return m_department;
}

void CSRItem::SetDepartment(const string& _department)
{
    m_department = _department;
    m_departmentHasBeenSet = true;
}

bool CSRItem::DepartmentHasBeenSet() const
{
    return m_departmentHasBeenSet;
}

string CSRItem::GetEmail() const
{
    return m_email;
}

void CSRItem::SetEmail(const string& _email)
{
    m_email = _email;
    m_emailHasBeenSet = true;
}

bool CSRItem::EmailHasBeenSet() const
{
    return m_emailHasBeenSet;
}

string CSRItem::GetProvince() const
{
    return m_province;
}

void CSRItem::SetProvince(const string& _province)
{
    m_province = _province;
    m_provinceHasBeenSet = true;
}

bool CSRItem::ProvinceHasBeenSet() const
{
    return m_provinceHasBeenSet;
}

string CSRItem::GetCity() const
{
    return m_city;
}

void CSRItem::SetCity(const string& _city)
{
    m_city = _city;
    m_cityHasBeenSet = true;
}

bool CSRItem::CityHasBeenSet() const
{
    return m_cityHasBeenSet;
}

string CSRItem::GetCountry() const
{
    return m_country;
}

void CSRItem::SetCountry(const string& _country)
{
    m_country = _country;
    m_countryHasBeenSet = true;
}

bool CSRItem::CountryHasBeenSet() const
{
    return m_countryHasBeenSet;
}

string CSRItem::GetRemarks() const
{
    return m_remarks;
}

void CSRItem::SetRemarks(const string& _remarks)
{
    m_remarks = _remarks;
    m_remarksHasBeenSet = true;
}

bool CSRItem::RemarksHasBeenSet() const
{
    return m_remarksHasBeenSet;
}

int64_t CSRItem::GetStatus() const
{
    return m_status;
}

void CSRItem::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CSRItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string CSRItem::GetCreateTime() const
{
    return m_createTime;
}

void CSRItem::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool CSRItem::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string CSRItem::GetEncryptAlgo() const
{
    return m_encryptAlgo;
}

void CSRItem::SetEncryptAlgo(const string& _encryptAlgo)
{
    m_encryptAlgo = _encryptAlgo;
    m_encryptAlgoHasBeenSet = true;
}

bool CSRItem::EncryptAlgoHasBeenSet() const
{
    return m_encryptAlgoHasBeenSet;
}

string CSRItem::GetKeyParameter() const
{
    return m_keyParameter;
}

void CSRItem::SetKeyParameter(const string& _keyParameter)
{
    m_keyParameter = _keyParameter;
    m_keyParameterHasBeenSet = true;
}

bool CSRItem::KeyParameterHasBeenSet() const
{
    return m_keyParameterHasBeenSet;
}

vector<Tags> CSRItem::GetTags() const
{
    return m_tags;
}

void CSRItem::SetTags(const vector<Tags>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CSRItem::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

vector<string> CSRItem::GetSubjectAltName() const
{
    return m_subjectAltName;
}

void CSRItem::SetSubjectAltName(const vector<string>& _subjectAltName)
{
    m_subjectAltName = _subjectAltName;
    m_subjectAltNameHasBeenSet = true;
}

bool CSRItem::SubjectAltNameHasBeenSet() const
{
    return m_subjectAltNameHasBeenSet;
}

