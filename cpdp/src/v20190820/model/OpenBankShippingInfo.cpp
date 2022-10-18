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

#include <tencentcloud/cpdp/v20190820/model/OpenBankShippingInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

OpenBankShippingInfo::OpenBankShippingInfo() :
    m_firstNameHasBeenSet(false),
    m_lastNameHasBeenSet(false),
    m_addressOneHasBeenSet(false),
    m_addressTwoHasBeenSet(false),
    m_cityHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_countryHasBeenSet(false),
    m_zipCodeHasBeenSet(false),
    m_phoneHasBeenSet(false)
{
}

CoreInternalOutcome OpenBankShippingInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FirstName") && !value["FirstName"].IsNull())
    {
        if (!value["FirstName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankShippingInfo.FirstName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstName = string(value["FirstName"].GetString());
        m_firstNameHasBeenSet = true;
    }

    if (value.HasMember("LastName") && !value["LastName"].IsNull())
    {
        if (!value["LastName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankShippingInfo.LastName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastName = string(value["LastName"].GetString());
        m_lastNameHasBeenSet = true;
    }

    if (value.HasMember("AddressOne") && !value["AddressOne"].IsNull())
    {
        if (!value["AddressOne"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankShippingInfo.AddressOne` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addressOne = string(value["AddressOne"].GetString());
        m_addressOneHasBeenSet = true;
    }

    if (value.HasMember("AddressTwo") && !value["AddressTwo"].IsNull())
    {
        if (!value["AddressTwo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankShippingInfo.AddressTwo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addressTwo = string(value["AddressTwo"].GetString());
        m_addressTwoHasBeenSet = true;
    }

    if (value.HasMember("City") && !value["City"].IsNull())
    {
        if (!value["City"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankShippingInfo.City` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_city = string(value["City"].GetString());
        m_cityHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankShippingInfo.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("Country") && !value["Country"].IsNull())
    {
        if (!value["Country"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankShippingInfo.Country` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_country = string(value["Country"].GetString());
        m_countryHasBeenSet = true;
    }

    if (value.HasMember("ZipCode") && !value["ZipCode"].IsNull())
    {
        if (!value["ZipCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankShippingInfo.ZipCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zipCode = string(value["ZipCode"].GetString());
        m_zipCodeHasBeenSet = true;
    }

    if (value.HasMember("Phone") && !value["Phone"].IsNull())
    {
        if (!value["Phone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankShippingInfo.Phone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phone = string(value["Phone"].GetString());
        m_phoneHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OpenBankShippingInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_firstNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_firstName.c_str(), allocator).Move(), allocator);
    }

    if (m_lastNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastName.c_str(), allocator).Move(), allocator);
    }

    if (m_addressOneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddressOne";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_addressOne.c_str(), allocator).Move(), allocator);
    }

    if (m_addressTwoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddressTwo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_addressTwo.c_str(), allocator).Move(), allocator);
    }

    if (m_cityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "City";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_city.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_countryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Country";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_country.c_str(), allocator).Move(), allocator);
    }

    if (m_zipCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZipCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zipCode.c_str(), allocator).Move(), allocator);
    }

    if (m_phoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Phone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_phone.c_str(), allocator).Move(), allocator);
    }

}


string OpenBankShippingInfo::GetFirstName() const
{
    return m_firstName;
}

void OpenBankShippingInfo::SetFirstName(const string& _firstName)
{
    m_firstName = _firstName;
    m_firstNameHasBeenSet = true;
}

bool OpenBankShippingInfo::FirstNameHasBeenSet() const
{
    return m_firstNameHasBeenSet;
}

string OpenBankShippingInfo::GetLastName() const
{
    return m_lastName;
}

void OpenBankShippingInfo::SetLastName(const string& _lastName)
{
    m_lastName = _lastName;
    m_lastNameHasBeenSet = true;
}

bool OpenBankShippingInfo::LastNameHasBeenSet() const
{
    return m_lastNameHasBeenSet;
}

string OpenBankShippingInfo::GetAddressOne() const
{
    return m_addressOne;
}

void OpenBankShippingInfo::SetAddressOne(const string& _addressOne)
{
    m_addressOne = _addressOne;
    m_addressOneHasBeenSet = true;
}

bool OpenBankShippingInfo::AddressOneHasBeenSet() const
{
    return m_addressOneHasBeenSet;
}

string OpenBankShippingInfo::GetAddressTwo() const
{
    return m_addressTwo;
}

void OpenBankShippingInfo::SetAddressTwo(const string& _addressTwo)
{
    m_addressTwo = _addressTwo;
    m_addressTwoHasBeenSet = true;
}

bool OpenBankShippingInfo::AddressTwoHasBeenSet() const
{
    return m_addressTwoHasBeenSet;
}

string OpenBankShippingInfo::GetCity() const
{
    return m_city;
}

void OpenBankShippingInfo::SetCity(const string& _city)
{
    m_city = _city;
    m_cityHasBeenSet = true;
}

bool OpenBankShippingInfo::CityHasBeenSet() const
{
    return m_cityHasBeenSet;
}

string OpenBankShippingInfo::GetState() const
{
    return m_state;
}

void OpenBankShippingInfo::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool OpenBankShippingInfo::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string OpenBankShippingInfo::GetCountry() const
{
    return m_country;
}

void OpenBankShippingInfo::SetCountry(const string& _country)
{
    m_country = _country;
    m_countryHasBeenSet = true;
}

bool OpenBankShippingInfo::CountryHasBeenSet() const
{
    return m_countryHasBeenSet;
}

string OpenBankShippingInfo::GetZipCode() const
{
    return m_zipCode;
}

void OpenBankShippingInfo::SetZipCode(const string& _zipCode)
{
    m_zipCode = _zipCode;
    m_zipCodeHasBeenSet = true;
}

bool OpenBankShippingInfo::ZipCodeHasBeenSet() const
{
    return m_zipCodeHasBeenSet;
}

string OpenBankShippingInfo::GetPhone() const
{
    return m_phone;
}

void OpenBankShippingInfo::SetPhone(const string& _phone)
{
    m_phone = _phone;
    m_phoneHasBeenSet = true;
}

bool OpenBankShippingInfo::PhoneHasBeenSet() const
{
    return m_phoneHasBeenSet;
}

