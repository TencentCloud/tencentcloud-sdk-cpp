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

#include <tencentcloud/dnspod/v20210323/model/WhoisContactAddress.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dnspod::V20210323::Model;
using namespace std;

WhoisContactAddress::WhoisContactAddress() :
    m_cityHasBeenSet(false),
    m_countryHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_faxHasBeenSet(false),
    m_faxExtHasBeenSet(false),
    m_handleHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_organizationHasBeenSet(false),
    m_phoneHasBeenSet(false),
    m_postalCodeHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_streetHasBeenSet(false)
{
}

CoreInternalOutcome WhoisContactAddress::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("City") && !value["City"].IsNull())
    {
        if (!value["City"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WhoisContactAddress.City` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_city = string(value["City"].GetString());
        m_cityHasBeenSet = true;
    }

    if (value.HasMember("Country") && !value["Country"].IsNull())
    {
        if (!value["Country"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WhoisContactAddress.Country` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_country = string(value["Country"].GetString());
        m_countryHasBeenSet = true;
    }

    if (value.HasMember("Email") && !value["Email"].IsNull())
    {
        if (!value["Email"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WhoisContactAddress.Email` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_email = string(value["Email"].GetString());
        m_emailHasBeenSet = true;
    }

    if (value.HasMember("Fax") && !value["Fax"].IsNull())
    {
        if (!value["Fax"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WhoisContactAddress.Fax` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fax = string(value["Fax"].GetString());
        m_faxHasBeenSet = true;
    }

    if (value.HasMember("FaxExt") && !value["FaxExt"].IsNull())
    {
        if (!value["FaxExt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WhoisContactAddress.FaxExt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_faxExt = string(value["FaxExt"].GetString());
        m_faxExtHasBeenSet = true;
    }

    if (value.HasMember("Handle") && !value["Handle"].IsNull())
    {
        if (!value["Handle"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WhoisContactAddress.Handle` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_handle = string(value["Handle"].GetString());
        m_handleHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WhoisContactAddress.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Organization") && !value["Organization"].IsNull())
    {
        if (!value["Organization"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WhoisContactAddress.Organization` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_organization = string(value["Organization"].GetString());
        m_organizationHasBeenSet = true;
    }

    if (value.HasMember("Phone") && !value["Phone"].IsNull())
    {
        if (!value["Phone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WhoisContactAddress.Phone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phone = string(value["Phone"].GetString());
        m_phoneHasBeenSet = true;
    }

    if (value.HasMember("PostalCode") && !value["PostalCode"].IsNull())
    {
        if (!value["PostalCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WhoisContactAddress.PostalCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_postalCode = string(value["PostalCode"].GetString());
        m_postalCodeHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WhoisContactAddress.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("Street") && !value["Street"].IsNull())
    {
        if (!value["Street"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WhoisContactAddress.Street` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_street = string(value["Street"].GetString());
        m_streetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WhoisContactAddress::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_emailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Email";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_email.c_str(), allocator).Move(), allocator);
    }

    if (m_faxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Fax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fax.c_str(), allocator).Move(), allocator);
    }

    if (m_faxExtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FaxExt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_faxExt.c_str(), allocator).Move(), allocator);
    }

    if (m_handleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Handle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_handle.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_organizationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Organization";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_organization.c_str(), allocator).Move(), allocator);
    }

    if (m_phoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Phone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_phone.c_str(), allocator).Move(), allocator);
    }

    if (m_postalCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PostalCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_postalCode.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_streetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Street";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_street.c_str(), allocator).Move(), allocator);
    }

}


string WhoisContactAddress::GetCity() const
{
    return m_city;
}

void WhoisContactAddress::SetCity(const string& _city)
{
    m_city = _city;
    m_cityHasBeenSet = true;
}

bool WhoisContactAddress::CityHasBeenSet() const
{
    return m_cityHasBeenSet;
}

string WhoisContactAddress::GetCountry() const
{
    return m_country;
}

void WhoisContactAddress::SetCountry(const string& _country)
{
    m_country = _country;
    m_countryHasBeenSet = true;
}

bool WhoisContactAddress::CountryHasBeenSet() const
{
    return m_countryHasBeenSet;
}

string WhoisContactAddress::GetEmail() const
{
    return m_email;
}

void WhoisContactAddress::SetEmail(const string& _email)
{
    m_email = _email;
    m_emailHasBeenSet = true;
}

bool WhoisContactAddress::EmailHasBeenSet() const
{
    return m_emailHasBeenSet;
}

string WhoisContactAddress::GetFax() const
{
    return m_fax;
}

void WhoisContactAddress::SetFax(const string& _fax)
{
    m_fax = _fax;
    m_faxHasBeenSet = true;
}

bool WhoisContactAddress::FaxHasBeenSet() const
{
    return m_faxHasBeenSet;
}

string WhoisContactAddress::GetFaxExt() const
{
    return m_faxExt;
}

void WhoisContactAddress::SetFaxExt(const string& _faxExt)
{
    m_faxExt = _faxExt;
    m_faxExtHasBeenSet = true;
}

bool WhoisContactAddress::FaxExtHasBeenSet() const
{
    return m_faxExtHasBeenSet;
}

string WhoisContactAddress::GetHandle() const
{
    return m_handle;
}

void WhoisContactAddress::SetHandle(const string& _handle)
{
    m_handle = _handle;
    m_handleHasBeenSet = true;
}

bool WhoisContactAddress::HandleHasBeenSet() const
{
    return m_handleHasBeenSet;
}

string WhoisContactAddress::GetName() const
{
    return m_name;
}

void WhoisContactAddress::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool WhoisContactAddress::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string WhoisContactAddress::GetOrganization() const
{
    return m_organization;
}

void WhoisContactAddress::SetOrganization(const string& _organization)
{
    m_organization = _organization;
    m_organizationHasBeenSet = true;
}

bool WhoisContactAddress::OrganizationHasBeenSet() const
{
    return m_organizationHasBeenSet;
}

string WhoisContactAddress::GetPhone() const
{
    return m_phone;
}

void WhoisContactAddress::SetPhone(const string& _phone)
{
    m_phone = _phone;
    m_phoneHasBeenSet = true;
}

bool WhoisContactAddress::PhoneHasBeenSet() const
{
    return m_phoneHasBeenSet;
}

string WhoisContactAddress::GetPostalCode() const
{
    return m_postalCode;
}

void WhoisContactAddress::SetPostalCode(const string& _postalCode)
{
    m_postalCode = _postalCode;
    m_postalCodeHasBeenSet = true;
}

bool WhoisContactAddress::PostalCodeHasBeenSet() const
{
    return m_postalCodeHasBeenSet;
}

string WhoisContactAddress::GetState() const
{
    return m_state;
}

void WhoisContactAddress::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool WhoisContactAddress::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string WhoisContactAddress::GetStreet() const
{
    return m_street;
}

void WhoisContactAddress::SetStreet(const string& _street)
{
    m_street = _street;
    m_streetHasBeenSet = true;
}

bool WhoisContactAddress::StreetHasBeenSet() const
{
    return m_streetHasBeenSet;
}

