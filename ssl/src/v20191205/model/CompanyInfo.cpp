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

#include <tencentcloud/ssl/v20191205/model/CompanyInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssl::V20191205::Model;
using namespace std;

CompanyInfo::CompanyInfo() :
    m_companyNameHasBeenSet(false),
    m_companyIdHasBeenSet(false),
    m_companyCountryHasBeenSet(false),
    m_companyProvinceHasBeenSet(false),
    m_companyCityHasBeenSet(false),
    m_companyAddressHasBeenSet(false),
    m_companyPhoneHasBeenSet(false),
    m_idTypeHasBeenSet(false),
    m_idNumberHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

CoreInternalOutcome CompanyInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CompanyName") && !value["CompanyName"].IsNull())
    {
        if (!value["CompanyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompanyInfo.CompanyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_companyName = string(value["CompanyName"].GetString());
        m_companyNameHasBeenSet = true;
    }

    if (value.HasMember("CompanyId") && !value["CompanyId"].IsNull())
    {
        if (!value["CompanyId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CompanyInfo.CompanyId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_companyId = value["CompanyId"].GetInt64();
        m_companyIdHasBeenSet = true;
    }

    if (value.HasMember("CompanyCountry") && !value["CompanyCountry"].IsNull())
    {
        if (!value["CompanyCountry"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompanyInfo.CompanyCountry` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_companyCountry = string(value["CompanyCountry"].GetString());
        m_companyCountryHasBeenSet = true;
    }

    if (value.HasMember("CompanyProvince") && !value["CompanyProvince"].IsNull())
    {
        if (!value["CompanyProvince"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompanyInfo.CompanyProvince` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_companyProvince = string(value["CompanyProvince"].GetString());
        m_companyProvinceHasBeenSet = true;
    }

    if (value.HasMember("CompanyCity") && !value["CompanyCity"].IsNull())
    {
        if (!value["CompanyCity"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompanyInfo.CompanyCity` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_companyCity = string(value["CompanyCity"].GetString());
        m_companyCityHasBeenSet = true;
    }

    if (value.HasMember("CompanyAddress") && !value["CompanyAddress"].IsNull())
    {
        if (!value["CompanyAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompanyInfo.CompanyAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_companyAddress = string(value["CompanyAddress"].GetString());
        m_companyAddressHasBeenSet = true;
    }

    if (value.HasMember("CompanyPhone") && !value["CompanyPhone"].IsNull())
    {
        if (!value["CompanyPhone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompanyInfo.CompanyPhone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_companyPhone = string(value["CompanyPhone"].GetString());
        m_companyPhoneHasBeenSet = true;
    }

    if (value.HasMember("IdType") && !value["IdType"].IsNull())
    {
        if (!value["IdType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompanyInfo.IdType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idType = string(value["IdType"].GetString());
        m_idTypeHasBeenSet = true;
    }

    if (value.HasMember("IdNumber") && !value["IdNumber"].IsNull())
    {
        if (!value["IdNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompanyInfo.IdNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idNumber = string(value["IdNumber"].GetString());
        m_idNumberHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CompanyInfo.Tags` is not array type"));

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


    return CoreInternalOutcome(true);
}

void CompanyInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_companyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompanyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_companyName.c_str(), allocator).Move(), allocator);
    }

    if (m_companyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompanyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_companyId, allocator);
    }

    if (m_companyCountryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompanyCountry";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_companyCountry.c_str(), allocator).Move(), allocator);
    }

    if (m_companyProvinceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompanyProvince";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_companyProvince.c_str(), allocator).Move(), allocator);
    }

    if (m_companyCityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompanyCity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_companyCity.c_str(), allocator).Move(), allocator);
    }

    if (m_companyAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompanyAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_companyAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_companyPhoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompanyPhone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_companyPhone.c_str(), allocator).Move(), allocator);
    }

    if (m_idTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idType.c_str(), allocator).Move(), allocator);
    }

    if (m_idNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idNumber.c_str(), allocator).Move(), allocator);
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

}


string CompanyInfo::GetCompanyName() const
{
    return m_companyName;
}

void CompanyInfo::SetCompanyName(const string& _companyName)
{
    m_companyName = _companyName;
    m_companyNameHasBeenSet = true;
}

bool CompanyInfo::CompanyNameHasBeenSet() const
{
    return m_companyNameHasBeenSet;
}

int64_t CompanyInfo::GetCompanyId() const
{
    return m_companyId;
}

void CompanyInfo::SetCompanyId(const int64_t& _companyId)
{
    m_companyId = _companyId;
    m_companyIdHasBeenSet = true;
}

bool CompanyInfo::CompanyIdHasBeenSet() const
{
    return m_companyIdHasBeenSet;
}

string CompanyInfo::GetCompanyCountry() const
{
    return m_companyCountry;
}

void CompanyInfo::SetCompanyCountry(const string& _companyCountry)
{
    m_companyCountry = _companyCountry;
    m_companyCountryHasBeenSet = true;
}

bool CompanyInfo::CompanyCountryHasBeenSet() const
{
    return m_companyCountryHasBeenSet;
}

string CompanyInfo::GetCompanyProvince() const
{
    return m_companyProvince;
}

void CompanyInfo::SetCompanyProvince(const string& _companyProvince)
{
    m_companyProvince = _companyProvince;
    m_companyProvinceHasBeenSet = true;
}

bool CompanyInfo::CompanyProvinceHasBeenSet() const
{
    return m_companyProvinceHasBeenSet;
}

string CompanyInfo::GetCompanyCity() const
{
    return m_companyCity;
}

void CompanyInfo::SetCompanyCity(const string& _companyCity)
{
    m_companyCity = _companyCity;
    m_companyCityHasBeenSet = true;
}

bool CompanyInfo::CompanyCityHasBeenSet() const
{
    return m_companyCityHasBeenSet;
}

string CompanyInfo::GetCompanyAddress() const
{
    return m_companyAddress;
}

void CompanyInfo::SetCompanyAddress(const string& _companyAddress)
{
    m_companyAddress = _companyAddress;
    m_companyAddressHasBeenSet = true;
}

bool CompanyInfo::CompanyAddressHasBeenSet() const
{
    return m_companyAddressHasBeenSet;
}

string CompanyInfo::GetCompanyPhone() const
{
    return m_companyPhone;
}

void CompanyInfo::SetCompanyPhone(const string& _companyPhone)
{
    m_companyPhone = _companyPhone;
    m_companyPhoneHasBeenSet = true;
}

bool CompanyInfo::CompanyPhoneHasBeenSet() const
{
    return m_companyPhoneHasBeenSet;
}

string CompanyInfo::GetIdType() const
{
    return m_idType;
}

void CompanyInfo::SetIdType(const string& _idType)
{
    m_idType = _idType;
    m_idTypeHasBeenSet = true;
}

bool CompanyInfo::IdTypeHasBeenSet() const
{
    return m_idTypeHasBeenSet;
}

string CompanyInfo::GetIdNumber() const
{
    return m_idNumber;
}

void CompanyInfo::SetIdNumber(const string& _idNumber)
{
    m_idNumber = _idNumber;
    m_idNumberHasBeenSet = true;
}

bool CompanyInfo::IdNumberHasBeenSet() const
{
    return m_idNumberHasBeenSet;
}

vector<Tags> CompanyInfo::GetTags() const
{
    return m_tags;
}

void CompanyInfo::SetTags(const vector<Tags>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CompanyInfo::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

