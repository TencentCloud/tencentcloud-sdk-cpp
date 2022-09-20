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

#include <tencentcloud/teo/v20220901/model/PlanInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

PlanInfo::PlanInfo() :
    m_currencyHasBeenSet(false),
    m_fluxHasBeenSet(false),
    m_frequencyHasBeenSet(false),
    m_planTypeHasBeenSet(false),
    m_priceHasBeenSet(false),
    m_requestHasBeenSet(false),
    m_siteNumberHasBeenSet(false),
    m_areaHasBeenSet(false)
{
}

CoreInternalOutcome PlanInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Currency") && !value["Currency"].IsNull())
    {
        if (!value["Currency"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlanInfo.Currency` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_currency = string(value["Currency"].GetString());
        m_currencyHasBeenSet = true;
    }

    if (value.HasMember("Flux") && !value["Flux"].IsNull())
    {
        if (!value["Flux"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PlanInfo.Flux` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_flux = value["Flux"].GetUint64();
        m_fluxHasBeenSet = true;
    }

    if (value.HasMember("Frequency") && !value["Frequency"].IsNull())
    {
        if (!value["Frequency"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlanInfo.Frequency` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_frequency = string(value["Frequency"].GetString());
        m_frequencyHasBeenSet = true;
    }

    if (value.HasMember("PlanType") && !value["PlanType"].IsNull())
    {
        if (!value["PlanType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlanInfo.PlanType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_planType = string(value["PlanType"].GetString());
        m_planTypeHasBeenSet = true;
    }

    if (value.HasMember("Price") && !value["Price"].IsNull())
    {
        if (!value["Price"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `PlanInfo.Price` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_price = value["Price"].GetDouble();
        m_priceHasBeenSet = true;
    }

    if (value.HasMember("Request") && !value["Request"].IsNull())
    {
        if (!value["Request"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PlanInfo.Request` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_request = value["Request"].GetUint64();
        m_requestHasBeenSet = true;
    }

    if (value.HasMember("SiteNumber") && !value["SiteNumber"].IsNull())
    {
        if (!value["SiteNumber"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PlanInfo.SiteNumber` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_siteNumber = value["SiteNumber"].GetUint64();
        m_siteNumberHasBeenSet = true;
    }

    if (value.HasMember("Area") && !value["Area"].IsNull())
    {
        if (!value["Area"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlanInfo.Area` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_area = string(value["Area"].GetString());
        m_areaHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PlanInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_currencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Currency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_currency.c_str(), allocator).Move(), allocator);
    }

    if (m_fluxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Flux";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_flux, allocator);
    }

    if (m_frequencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Frequency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_frequency.c_str(), allocator).Move(), allocator);
    }

    if (m_planTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlanType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_planType.c_str(), allocator).Move(), allocator);
    }

    if (m_priceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Price";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_price, allocator);
    }

    if (m_requestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Request";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_request, allocator);
    }

    if (m_siteNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SiteNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_siteNumber, allocator);
    }

    if (m_areaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Area";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_area.c_str(), allocator).Move(), allocator);
    }

}


string PlanInfo::GetCurrency() const
{
    return m_currency;
}

void PlanInfo::SetCurrency(const string& _currency)
{
    m_currency = _currency;
    m_currencyHasBeenSet = true;
}

bool PlanInfo::CurrencyHasBeenSet() const
{
    return m_currencyHasBeenSet;
}

uint64_t PlanInfo::GetFlux() const
{
    return m_flux;
}

void PlanInfo::SetFlux(const uint64_t& _flux)
{
    m_flux = _flux;
    m_fluxHasBeenSet = true;
}

bool PlanInfo::FluxHasBeenSet() const
{
    return m_fluxHasBeenSet;
}

string PlanInfo::GetFrequency() const
{
    return m_frequency;
}

void PlanInfo::SetFrequency(const string& _frequency)
{
    m_frequency = _frequency;
    m_frequencyHasBeenSet = true;
}

bool PlanInfo::FrequencyHasBeenSet() const
{
    return m_frequencyHasBeenSet;
}

string PlanInfo::GetPlanType() const
{
    return m_planType;
}

void PlanInfo::SetPlanType(const string& _planType)
{
    m_planType = _planType;
    m_planTypeHasBeenSet = true;
}

bool PlanInfo::PlanTypeHasBeenSet() const
{
    return m_planTypeHasBeenSet;
}

double PlanInfo::GetPrice() const
{
    return m_price;
}

void PlanInfo::SetPrice(const double& _price)
{
    m_price = _price;
    m_priceHasBeenSet = true;
}

bool PlanInfo::PriceHasBeenSet() const
{
    return m_priceHasBeenSet;
}

uint64_t PlanInfo::GetRequest() const
{
    return m_request;
}

void PlanInfo::SetRequest(const uint64_t& _request)
{
    m_request = _request;
    m_requestHasBeenSet = true;
}

bool PlanInfo::RequestHasBeenSet() const
{
    return m_requestHasBeenSet;
}

uint64_t PlanInfo::GetSiteNumber() const
{
    return m_siteNumber;
}

void PlanInfo::SetSiteNumber(const uint64_t& _siteNumber)
{
    m_siteNumber = _siteNumber;
    m_siteNumberHasBeenSet = true;
}

bool PlanInfo::SiteNumberHasBeenSet() const
{
    return m_siteNumberHasBeenSet;
}

string PlanInfo::GetArea() const
{
    return m_area;
}

void PlanInfo::SetArea(const string& _area)
{
    m_area = _area;
    m_areaHasBeenSet = true;
}

bool PlanInfo::AreaHasBeenSet() const
{
    return m_areaHasBeenSet;
}

