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

#include <tencentcloud/cdc/v20201214/model/ModifySiteInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdc::V20201214::Model;
using namespace std;

ModifySiteInfoRequest::ModifySiteInfoRequest() :
    m_siteIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_noteHasBeenSet(false),
    m_countryHasBeenSet(false),
    m_provinceHasBeenSet(false),
    m_cityHasBeenSet(false),
    m_postalCodeHasBeenSet(false),
    m_addressLineHasBeenSet(false)
{
}

string ModifySiteInfoRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_siteIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SiteId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_siteId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_noteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Note";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_note.c_str(), allocator).Move(), allocator);
    }

    if (m_countryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Country";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_country.c_str(), allocator).Move(), allocator);
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

    if (m_postalCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PostalCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_postalCode.c_str(), allocator).Move(), allocator);
    }

    if (m_addressLineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddressLine";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_addressLine.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifySiteInfoRequest::GetSiteId() const
{
    return m_siteId;
}

void ModifySiteInfoRequest::SetSiteId(const string& _siteId)
{
    m_siteId = _siteId;
    m_siteIdHasBeenSet = true;
}

bool ModifySiteInfoRequest::SiteIdHasBeenSet() const
{
    return m_siteIdHasBeenSet;
}

string ModifySiteInfoRequest::GetName() const
{
    return m_name;
}

void ModifySiteInfoRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifySiteInfoRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ModifySiteInfoRequest::GetDescription() const
{
    return m_description;
}

void ModifySiteInfoRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModifySiteInfoRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string ModifySiteInfoRequest::GetNote() const
{
    return m_note;
}

void ModifySiteInfoRequest::SetNote(const string& _note)
{
    m_note = _note;
    m_noteHasBeenSet = true;
}

bool ModifySiteInfoRequest::NoteHasBeenSet() const
{
    return m_noteHasBeenSet;
}

string ModifySiteInfoRequest::GetCountry() const
{
    return m_country;
}

void ModifySiteInfoRequest::SetCountry(const string& _country)
{
    m_country = _country;
    m_countryHasBeenSet = true;
}

bool ModifySiteInfoRequest::CountryHasBeenSet() const
{
    return m_countryHasBeenSet;
}

string ModifySiteInfoRequest::GetProvince() const
{
    return m_province;
}

void ModifySiteInfoRequest::SetProvince(const string& _province)
{
    m_province = _province;
    m_provinceHasBeenSet = true;
}

bool ModifySiteInfoRequest::ProvinceHasBeenSet() const
{
    return m_provinceHasBeenSet;
}

string ModifySiteInfoRequest::GetCity() const
{
    return m_city;
}

void ModifySiteInfoRequest::SetCity(const string& _city)
{
    m_city = _city;
    m_cityHasBeenSet = true;
}

bool ModifySiteInfoRequest::CityHasBeenSet() const
{
    return m_cityHasBeenSet;
}

string ModifySiteInfoRequest::GetPostalCode() const
{
    return m_postalCode;
}

void ModifySiteInfoRequest::SetPostalCode(const string& _postalCode)
{
    m_postalCode = _postalCode;
    m_postalCodeHasBeenSet = true;
}

bool ModifySiteInfoRequest::PostalCodeHasBeenSet() const
{
    return m_postalCodeHasBeenSet;
}

string ModifySiteInfoRequest::GetAddressLine() const
{
    return m_addressLine;
}

void ModifySiteInfoRequest::SetAddressLine(const string& _addressLine)
{
    m_addressLine = _addressLine;
    m_addressLineHasBeenSet = true;
}

bool ModifySiteInfoRequest::AddressLineHasBeenSet() const
{
    return m_addressLineHasBeenSet;
}


