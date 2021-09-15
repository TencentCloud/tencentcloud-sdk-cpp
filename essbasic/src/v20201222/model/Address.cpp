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

#include <tencentcloud/essbasic/v20201222/model/Address.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Essbasic::V20201222::Model;
using namespace std;

Address::Address() :
    m_provinceHasBeenSet(false),
    m_cityHasBeenSet(false),
    m_countyHasBeenSet(false),
    m_detailsHasBeenSet(false),
    m_countryHasBeenSet(false)
{
}

CoreInternalOutcome Address::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Province") && !value["Province"].IsNull())
    {
        if (!value["Province"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Address.Province` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_province = string(value["Province"].GetString());
        m_provinceHasBeenSet = true;
    }

    if (value.HasMember("City") && !value["City"].IsNull())
    {
        if (!value["City"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Address.City` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_city = string(value["City"].GetString());
        m_cityHasBeenSet = true;
    }

    if (value.HasMember("County") && !value["County"].IsNull())
    {
        if (!value["County"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Address.County` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_county = string(value["County"].GetString());
        m_countyHasBeenSet = true;
    }

    if (value.HasMember("Details") && !value["Details"].IsNull())
    {
        if (!value["Details"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Address.Details` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_details = string(value["Details"].GetString());
        m_detailsHasBeenSet = true;
    }

    if (value.HasMember("Country") && !value["Country"].IsNull())
    {
        if (!value["Country"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Address.Country` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_country = string(value["Country"].GetString());
        m_countryHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Address::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_countyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "County";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_county.c_str(), allocator).Move(), allocator);
    }

    if (m_detailsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Details";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_details.c_str(), allocator).Move(), allocator);
    }

    if (m_countryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Country";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_country.c_str(), allocator).Move(), allocator);
    }

}


string Address::GetProvince() const
{
    return m_province;
}

void Address::SetProvince(const string& _province)
{
    m_province = _province;
    m_provinceHasBeenSet = true;
}

bool Address::ProvinceHasBeenSet() const
{
    return m_provinceHasBeenSet;
}

string Address::GetCity() const
{
    return m_city;
}

void Address::SetCity(const string& _city)
{
    m_city = _city;
    m_cityHasBeenSet = true;
}

bool Address::CityHasBeenSet() const
{
    return m_cityHasBeenSet;
}

string Address::GetCounty() const
{
    return m_county;
}

void Address::SetCounty(const string& _county)
{
    m_county = _county;
    m_countyHasBeenSet = true;
}

bool Address::CountyHasBeenSet() const
{
    return m_countyHasBeenSet;
}

string Address::GetDetails() const
{
    return m_details;
}

void Address::SetDetails(const string& _details)
{
    m_details = _details;
    m_detailsHasBeenSet = true;
}

bool Address::DetailsHasBeenSet() const
{
    return m_detailsHasBeenSet;
}

string Address::GetCountry() const
{
    return m_country;
}

void Address::SetCountry(const string& _country)
{
    m_country = _country;
    m_countryHasBeenSet = true;
}

bool Address::CountryHasBeenSet() const
{
    return m_countryHasBeenSet;
}

