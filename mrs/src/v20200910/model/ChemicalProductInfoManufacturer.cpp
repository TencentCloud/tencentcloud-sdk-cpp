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

#include <tencentcloud/mrs/v20200910/model/ChemicalProductInfoManufacturer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

ChemicalProductInfoManufacturer::ChemicalProductInfoManufacturer() :
    m_textHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_postalCodeHasBeenSet(false),
    m_phoneHasBeenSet(false),
    m_faxHasBeenSet(false),
    m_websiteHasBeenSet(false)
{
}

CoreInternalOutcome ChemicalProductInfoManufacturer::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Text") && !value["Text"].IsNull())
    {
        if (!value["Text"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChemicalProductInfoManufacturer.Text` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_text = string(value["Text"].GetString());
        m_textHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChemicalProductInfoManufacturer.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Address") && !value["Address"].IsNull())
    {
        if (!value["Address"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChemicalProductInfoManufacturer.Address` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_address = string(value["Address"].GetString());
        m_addressHasBeenSet = true;
    }

    if (value.HasMember("PostalCode") && !value["PostalCode"].IsNull())
    {
        if (!value["PostalCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChemicalProductInfoManufacturer.PostalCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_postalCode = string(value["PostalCode"].GetString());
        m_postalCodeHasBeenSet = true;
    }

    if (value.HasMember("Phone") && !value["Phone"].IsNull())
    {
        if (!value["Phone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChemicalProductInfoManufacturer.Phone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phone = string(value["Phone"].GetString());
        m_phoneHasBeenSet = true;
    }

    if (value.HasMember("Fax") && !value["Fax"].IsNull())
    {
        if (!value["Fax"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChemicalProductInfoManufacturer.Fax` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fax = string(value["Fax"].GetString());
        m_faxHasBeenSet = true;
    }

    if (value.HasMember("Website") && !value["Website"].IsNull())
    {
        if (!value["Website"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChemicalProductInfoManufacturer.Website` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_website = string(value["Website"].GetString());
        m_websiteHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ChemicalProductInfoManufacturer::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_textHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_text.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_addressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_address.c_str(), allocator).Move(), allocator);
    }

    if (m_postalCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PostalCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_postalCode.c_str(), allocator).Move(), allocator);
    }

    if (m_phoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Phone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_phone.c_str(), allocator).Move(), allocator);
    }

    if (m_faxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Fax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fax.c_str(), allocator).Move(), allocator);
    }

    if (m_websiteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Website";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_website.c_str(), allocator).Move(), allocator);
    }

}


string ChemicalProductInfoManufacturer::GetText() const
{
    return m_text;
}

void ChemicalProductInfoManufacturer::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool ChemicalProductInfoManufacturer::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

string ChemicalProductInfoManufacturer::GetName() const
{
    return m_name;
}

void ChemicalProductInfoManufacturer::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ChemicalProductInfoManufacturer::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ChemicalProductInfoManufacturer::GetAddress() const
{
    return m_address;
}

void ChemicalProductInfoManufacturer::SetAddress(const string& _address)
{
    m_address = _address;
    m_addressHasBeenSet = true;
}

bool ChemicalProductInfoManufacturer::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

string ChemicalProductInfoManufacturer::GetPostalCode() const
{
    return m_postalCode;
}

void ChemicalProductInfoManufacturer::SetPostalCode(const string& _postalCode)
{
    m_postalCode = _postalCode;
    m_postalCodeHasBeenSet = true;
}

bool ChemicalProductInfoManufacturer::PostalCodeHasBeenSet() const
{
    return m_postalCodeHasBeenSet;
}

string ChemicalProductInfoManufacturer::GetPhone() const
{
    return m_phone;
}

void ChemicalProductInfoManufacturer::SetPhone(const string& _phone)
{
    m_phone = _phone;
    m_phoneHasBeenSet = true;
}

bool ChemicalProductInfoManufacturer::PhoneHasBeenSet() const
{
    return m_phoneHasBeenSet;
}

string ChemicalProductInfoManufacturer::GetFax() const
{
    return m_fax;
}

void ChemicalProductInfoManufacturer::SetFax(const string& _fax)
{
    m_fax = _fax;
    m_faxHasBeenSet = true;
}

bool ChemicalProductInfoManufacturer::FaxHasBeenSet() const
{
    return m_faxHasBeenSet;
}

string ChemicalProductInfoManufacturer::GetWebsite() const
{
    return m_website;
}

void ChemicalProductInfoManufacturer::SetWebsite(const string& _website)
{
    m_website = _website;
    m_websiteHasBeenSet = true;
}

bool ChemicalProductInfoManufacturer::WebsiteHasBeenSet() const
{
    return m_websiteHasBeenSet;
}

