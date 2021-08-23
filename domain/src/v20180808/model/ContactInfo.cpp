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

#include <tencentcloud/domain/v20180808/model/ContactInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Domain::V20180808::Model;
using namespace std;

ContactInfo::ContactInfo() :
    m_organizationNameCNHasBeenSet(false),
    m_organizationNameHasBeenSet(false),
    m_registrantNameCNHasBeenSet(false),
    m_registrantNameHasBeenSet(false),
    m_provinceCNHasBeenSet(false),
    m_cityCNHasBeenSet(false),
    m_streetCNHasBeenSet(false),
    m_streetHasBeenSet(false),
    m_countryCNHasBeenSet(false),
    m_telephoneHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_zipCodeHasBeenSet(false),
    m_registrantTypeHasBeenSet(false),
    m_provinceHasBeenSet(false),
    m_cityHasBeenSet(false),
    m_countryHasBeenSet(false)
{
}

CoreInternalOutcome ContactInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OrganizationNameCN") && !value["OrganizationNameCN"].IsNull())
    {
        if (!value["OrganizationNameCN"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContactInfo.OrganizationNameCN` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_organizationNameCN = string(value["OrganizationNameCN"].GetString());
        m_organizationNameCNHasBeenSet = true;
    }

    if (value.HasMember("OrganizationName") && !value["OrganizationName"].IsNull())
    {
        if (!value["OrganizationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContactInfo.OrganizationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_organizationName = string(value["OrganizationName"].GetString());
        m_organizationNameHasBeenSet = true;
    }

    if (value.HasMember("RegistrantNameCN") && !value["RegistrantNameCN"].IsNull())
    {
        if (!value["RegistrantNameCN"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContactInfo.RegistrantNameCN` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registrantNameCN = string(value["RegistrantNameCN"].GetString());
        m_registrantNameCNHasBeenSet = true;
    }

    if (value.HasMember("RegistrantName") && !value["RegistrantName"].IsNull())
    {
        if (!value["RegistrantName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContactInfo.RegistrantName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registrantName = string(value["RegistrantName"].GetString());
        m_registrantNameHasBeenSet = true;
    }

    if (value.HasMember("ProvinceCN") && !value["ProvinceCN"].IsNull())
    {
        if (!value["ProvinceCN"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContactInfo.ProvinceCN` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_provinceCN = string(value["ProvinceCN"].GetString());
        m_provinceCNHasBeenSet = true;
    }

    if (value.HasMember("CityCN") && !value["CityCN"].IsNull())
    {
        if (!value["CityCN"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContactInfo.CityCN` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cityCN = string(value["CityCN"].GetString());
        m_cityCNHasBeenSet = true;
    }

    if (value.HasMember("StreetCN") && !value["StreetCN"].IsNull())
    {
        if (!value["StreetCN"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContactInfo.StreetCN` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_streetCN = string(value["StreetCN"].GetString());
        m_streetCNHasBeenSet = true;
    }

    if (value.HasMember("Street") && !value["Street"].IsNull())
    {
        if (!value["Street"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContactInfo.Street` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_street = string(value["Street"].GetString());
        m_streetHasBeenSet = true;
    }

    if (value.HasMember("CountryCN") && !value["CountryCN"].IsNull())
    {
        if (!value["CountryCN"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContactInfo.CountryCN` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_countryCN = string(value["CountryCN"].GetString());
        m_countryCNHasBeenSet = true;
    }

    if (value.HasMember("Telephone") && !value["Telephone"].IsNull())
    {
        if (!value["Telephone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContactInfo.Telephone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_telephone = string(value["Telephone"].GetString());
        m_telephoneHasBeenSet = true;
    }

    if (value.HasMember("Email") && !value["Email"].IsNull())
    {
        if (!value["Email"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContactInfo.Email` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_email = string(value["Email"].GetString());
        m_emailHasBeenSet = true;
    }

    if (value.HasMember("ZipCode") && !value["ZipCode"].IsNull())
    {
        if (!value["ZipCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContactInfo.ZipCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zipCode = string(value["ZipCode"].GetString());
        m_zipCodeHasBeenSet = true;
    }

    if (value.HasMember("RegistrantType") && !value["RegistrantType"].IsNull())
    {
        if (!value["RegistrantType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContactInfo.RegistrantType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registrantType = string(value["RegistrantType"].GetString());
        m_registrantTypeHasBeenSet = true;
    }

    if (value.HasMember("Province") && !value["Province"].IsNull())
    {
        if (!value["Province"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContactInfo.Province` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_province = string(value["Province"].GetString());
        m_provinceHasBeenSet = true;
    }

    if (value.HasMember("City") && !value["City"].IsNull())
    {
        if (!value["City"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContactInfo.City` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_city = string(value["City"].GetString());
        m_cityHasBeenSet = true;
    }

    if (value.HasMember("Country") && !value["Country"].IsNull())
    {
        if (!value["Country"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContactInfo.Country` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_country = string(value["Country"].GetString());
        m_countryHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ContactInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_organizationNameCNHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationNameCN";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_organizationNameCN.c_str(), allocator).Move(), allocator);
    }

    if (m_organizationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_organizationName.c_str(), allocator).Move(), allocator);
    }

    if (m_registrantNameCNHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistrantNameCN";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_registrantNameCN.c_str(), allocator).Move(), allocator);
    }

    if (m_registrantNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistrantName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_registrantName.c_str(), allocator).Move(), allocator);
    }

    if (m_provinceCNHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProvinceCN";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_provinceCN.c_str(), allocator).Move(), allocator);
    }

    if (m_cityCNHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CityCN";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cityCN.c_str(), allocator).Move(), allocator);
    }

    if (m_streetCNHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreetCN";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_streetCN.c_str(), allocator).Move(), allocator);
    }

    if (m_streetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Street";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_street.c_str(), allocator).Move(), allocator);
    }

    if (m_countryCNHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CountryCN";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_countryCN.c_str(), allocator).Move(), allocator);
    }

    if (m_telephoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Telephone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_telephone.c_str(), allocator).Move(), allocator);
    }

    if (m_emailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Email";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_email.c_str(), allocator).Move(), allocator);
    }

    if (m_zipCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZipCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zipCode.c_str(), allocator).Move(), allocator);
    }

    if (m_registrantTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistrantType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_registrantType.c_str(), allocator).Move(), allocator);
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

}


string ContactInfo::GetOrganizationNameCN() const
{
    return m_organizationNameCN;
}

void ContactInfo::SetOrganizationNameCN(const string& _organizationNameCN)
{
    m_organizationNameCN = _organizationNameCN;
    m_organizationNameCNHasBeenSet = true;
}

bool ContactInfo::OrganizationNameCNHasBeenSet() const
{
    return m_organizationNameCNHasBeenSet;
}

string ContactInfo::GetOrganizationName() const
{
    return m_organizationName;
}

void ContactInfo::SetOrganizationName(const string& _organizationName)
{
    m_organizationName = _organizationName;
    m_organizationNameHasBeenSet = true;
}

bool ContactInfo::OrganizationNameHasBeenSet() const
{
    return m_organizationNameHasBeenSet;
}

string ContactInfo::GetRegistrantNameCN() const
{
    return m_registrantNameCN;
}

void ContactInfo::SetRegistrantNameCN(const string& _registrantNameCN)
{
    m_registrantNameCN = _registrantNameCN;
    m_registrantNameCNHasBeenSet = true;
}

bool ContactInfo::RegistrantNameCNHasBeenSet() const
{
    return m_registrantNameCNHasBeenSet;
}

string ContactInfo::GetRegistrantName() const
{
    return m_registrantName;
}

void ContactInfo::SetRegistrantName(const string& _registrantName)
{
    m_registrantName = _registrantName;
    m_registrantNameHasBeenSet = true;
}

bool ContactInfo::RegistrantNameHasBeenSet() const
{
    return m_registrantNameHasBeenSet;
}

string ContactInfo::GetProvinceCN() const
{
    return m_provinceCN;
}

void ContactInfo::SetProvinceCN(const string& _provinceCN)
{
    m_provinceCN = _provinceCN;
    m_provinceCNHasBeenSet = true;
}

bool ContactInfo::ProvinceCNHasBeenSet() const
{
    return m_provinceCNHasBeenSet;
}

string ContactInfo::GetCityCN() const
{
    return m_cityCN;
}

void ContactInfo::SetCityCN(const string& _cityCN)
{
    m_cityCN = _cityCN;
    m_cityCNHasBeenSet = true;
}

bool ContactInfo::CityCNHasBeenSet() const
{
    return m_cityCNHasBeenSet;
}

string ContactInfo::GetStreetCN() const
{
    return m_streetCN;
}

void ContactInfo::SetStreetCN(const string& _streetCN)
{
    m_streetCN = _streetCN;
    m_streetCNHasBeenSet = true;
}

bool ContactInfo::StreetCNHasBeenSet() const
{
    return m_streetCNHasBeenSet;
}

string ContactInfo::GetStreet() const
{
    return m_street;
}

void ContactInfo::SetStreet(const string& _street)
{
    m_street = _street;
    m_streetHasBeenSet = true;
}

bool ContactInfo::StreetHasBeenSet() const
{
    return m_streetHasBeenSet;
}

string ContactInfo::GetCountryCN() const
{
    return m_countryCN;
}

void ContactInfo::SetCountryCN(const string& _countryCN)
{
    m_countryCN = _countryCN;
    m_countryCNHasBeenSet = true;
}

bool ContactInfo::CountryCNHasBeenSet() const
{
    return m_countryCNHasBeenSet;
}

string ContactInfo::GetTelephone() const
{
    return m_telephone;
}

void ContactInfo::SetTelephone(const string& _telephone)
{
    m_telephone = _telephone;
    m_telephoneHasBeenSet = true;
}

bool ContactInfo::TelephoneHasBeenSet() const
{
    return m_telephoneHasBeenSet;
}

string ContactInfo::GetEmail() const
{
    return m_email;
}

void ContactInfo::SetEmail(const string& _email)
{
    m_email = _email;
    m_emailHasBeenSet = true;
}

bool ContactInfo::EmailHasBeenSet() const
{
    return m_emailHasBeenSet;
}

string ContactInfo::GetZipCode() const
{
    return m_zipCode;
}

void ContactInfo::SetZipCode(const string& _zipCode)
{
    m_zipCode = _zipCode;
    m_zipCodeHasBeenSet = true;
}

bool ContactInfo::ZipCodeHasBeenSet() const
{
    return m_zipCodeHasBeenSet;
}

string ContactInfo::GetRegistrantType() const
{
    return m_registrantType;
}

void ContactInfo::SetRegistrantType(const string& _registrantType)
{
    m_registrantType = _registrantType;
    m_registrantTypeHasBeenSet = true;
}

bool ContactInfo::RegistrantTypeHasBeenSet() const
{
    return m_registrantTypeHasBeenSet;
}

string ContactInfo::GetProvince() const
{
    return m_province;
}

void ContactInfo::SetProvince(const string& _province)
{
    m_province = _province;
    m_provinceHasBeenSet = true;
}

bool ContactInfo::ProvinceHasBeenSet() const
{
    return m_provinceHasBeenSet;
}

string ContactInfo::GetCity() const
{
    return m_city;
}

void ContactInfo::SetCity(const string& _city)
{
    m_city = _city;
    m_cityHasBeenSet = true;
}

bool ContactInfo::CityHasBeenSet() const
{
    return m_cityHasBeenSet;
}

string ContactInfo::GetCountry() const
{
    return m_country;
}

void ContactInfo::SetCountry(const string& _country)
{
    m_country = _country;
    m_countryHasBeenSet = true;
}

bool ContactInfo::CountryHasBeenSet() const
{
    return m_countryHasBeenSet;
}

