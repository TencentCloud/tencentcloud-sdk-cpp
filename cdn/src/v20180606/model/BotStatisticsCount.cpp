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

#include <tencentcloud/cdn/v20180606/model/BotStatisticsCount.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

BotStatisticsCount::BotStatisticsCount() :
    m_countHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_countryHasBeenSet(false),
    m_provinceHasBeenSet(false),
    m_ispHasBeenSet(false)
{
}

CoreInternalOutcome BotStatisticsCount::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BotStatisticsCount.Count` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetInt64();
        m_countHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BotStatisticsCount.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("Country") && !value["Country"].IsNull())
    {
        if (!value["Country"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BotStatisticsCount.Country` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_country = string(value["Country"].GetString());
        m_countryHasBeenSet = true;
    }

    if (value.HasMember("Province") && !value["Province"].IsNull())
    {
        if (!value["Province"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BotStatisticsCount.Province` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_province = string(value["Province"].GetString());
        m_provinceHasBeenSet = true;
    }

    if (value.HasMember("Isp") && !value["Isp"].IsNull())
    {
        if (!value["Isp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BotStatisticsCount.Isp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isp = string(value["Isp"].GetString());
        m_ispHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BotStatisticsCount::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

    if (m_countryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Country";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_country.c_str(), allocator).Move(), allocator);
    }

    if (m_provinceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Province";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_province.c_str(), allocator).Move(), allocator);
    }

    if (m_ispHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Isp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isp.c_str(), allocator).Move(), allocator);
    }

}


int64_t BotStatisticsCount::GetCount() const
{
    return m_count;
}

void BotStatisticsCount::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool BotStatisticsCount::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

string BotStatisticsCount::GetValue() const
{
    return m_value;
}

void BotStatisticsCount::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool BotStatisticsCount::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

string BotStatisticsCount::GetCountry() const
{
    return m_country;
}

void BotStatisticsCount::SetCountry(const string& _country)
{
    m_country = _country;
    m_countryHasBeenSet = true;
}

bool BotStatisticsCount::CountryHasBeenSet() const
{
    return m_countryHasBeenSet;
}

string BotStatisticsCount::GetProvince() const
{
    return m_province;
}

void BotStatisticsCount::SetProvince(const string& _province)
{
    m_province = _province;
    m_provinceHasBeenSet = true;
}

bool BotStatisticsCount::ProvinceHasBeenSet() const
{
    return m_provinceHasBeenSet;
}

string BotStatisticsCount::GetIsp() const
{
    return m_isp;
}

void BotStatisticsCount::SetIsp(const string& _isp)
{
    m_isp = _isp;
    m_ispHasBeenSet = true;
}

bool BotStatisticsCount::IspHasBeenSet() const
{
    return m_ispHasBeenSet;
}

