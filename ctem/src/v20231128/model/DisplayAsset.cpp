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

#include <tencentcloud/ctem/v20231128/model/DisplayAsset.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ctem::V20231128::Model;
using namespace std;

DisplayAsset::DisplayAsset() :
    m_idHasBeenSet(false),
    m_osHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_countryHasBeenSet(false),
    m_provinceHasBeenSet(false),
    m_cityHasBeenSet(false),
    m_ispHasBeenSet(false),
    m_displayToolCommonHasBeenSet(false),
    m_portsHasBeenSet(false),
    m_servicesHasBeenSet(false),
    m_domainsHasBeenSet(false),
    m_lastModifyHasBeenSet(false)
{
}

CoreInternalOutcome DisplayAsset::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayAsset.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Os") && !value["Os"].IsNull())
    {
        if (!value["Os"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayAsset.Os` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_os = string(value["Os"].GetString());
        m_osHasBeenSet = true;
    }

    if (value.HasMember("Ip") && !value["Ip"].IsNull())
    {
        if (!value["Ip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayAsset.Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(value["Ip"].GetString());
        m_ipHasBeenSet = true;
    }

    if (value.HasMember("Country") && !value["Country"].IsNull())
    {
        if (!value["Country"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayAsset.Country` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_country = string(value["Country"].GetString());
        m_countryHasBeenSet = true;
    }

    if (value.HasMember("Province") && !value["Province"].IsNull())
    {
        if (!value["Province"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayAsset.Province` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_province = string(value["Province"].GetString());
        m_provinceHasBeenSet = true;
    }

    if (value.HasMember("City") && !value["City"].IsNull())
    {
        if (!value["City"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayAsset.City` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_city = string(value["City"].GetString());
        m_cityHasBeenSet = true;
    }

    if (value.HasMember("Isp") && !value["Isp"].IsNull())
    {
        if (!value["Isp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayAsset.Isp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isp = string(value["Isp"].GetString());
        m_ispHasBeenSet = true;
    }

    if (value.HasMember("DisplayToolCommon") && !value["DisplayToolCommon"].IsNull())
    {
        if (!value["DisplayToolCommon"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayAsset.DisplayToolCommon` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_displayToolCommon.Deserialize(value["DisplayToolCommon"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_displayToolCommonHasBeenSet = true;
    }

    if (value.HasMember("Ports") && !value["Ports"].IsNull())
    {
        if (!value["Ports"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayAsset.Ports` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ports = string(value["Ports"].GetString());
        m_portsHasBeenSet = true;
    }

    if (value.HasMember("Services") && !value["Services"].IsNull())
    {
        if (!value["Services"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayAsset.Services` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_services = string(value["Services"].GetString());
        m_servicesHasBeenSet = true;
    }

    if (value.HasMember("Domains") && !value["Domains"].IsNull())
    {
        if (!value["Domains"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayAsset.Domains` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domains = string(value["Domains"].GetString());
        m_domainsHasBeenSet = true;
    }

    if (value.HasMember("LastModify") && !value["LastModify"].IsNull())
    {
        if (!value["LastModify"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayAsset.LastModify` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastModify = string(value["LastModify"].GetString());
        m_lastModifyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DisplayAsset::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_osHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Os";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_os.c_str(), allocator).Move(), allocator);
    }

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
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

    if (m_cityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "City";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_city.c_str(), allocator).Move(), allocator);
    }

    if (m_ispHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Isp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isp.c_str(), allocator).Move(), allocator);
    }

    if (m_displayToolCommonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayToolCommon";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_displayToolCommon.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_portsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ports";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ports.c_str(), allocator).Move(), allocator);
    }

    if (m_servicesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Services";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_services.c_str(), allocator).Move(), allocator);
    }

    if (m_domainsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domains";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domains.c_str(), allocator).Move(), allocator);
    }

    if (m_lastModifyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastModify";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastModify.c_str(), allocator).Move(), allocator);
    }

}


int64_t DisplayAsset::GetId() const
{
    return m_id;
}

void DisplayAsset::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DisplayAsset::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string DisplayAsset::GetOs() const
{
    return m_os;
}

void DisplayAsset::SetOs(const string& _os)
{
    m_os = _os;
    m_osHasBeenSet = true;
}

bool DisplayAsset::OsHasBeenSet() const
{
    return m_osHasBeenSet;
}

string DisplayAsset::GetIp() const
{
    return m_ip;
}

void DisplayAsset::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool DisplayAsset::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

string DisplayAsset::GetCountry() const
{
    return m_country;
}

void DisplayAsset::SetCountry(const string& _country)
{
    m_country = _country;
    m_countryHasBeenSet = true;
}

bool DisplayAsset::CountryHasBeenSet() const
{
    return m_countryHasBeenSet;
}

string DisplayAsset::GetProvince() const
{
    return m_province;
}

void DisplayAsset::SetProvince(const string& _province)
{
    m_province = _province;
    m_provinceHasBeenSet = true;
}

bool DisplayAsset::ProvinceHasBeenSet() const
{
    return m_provinceHasBeenSet;
}

string DisplayAsset::GetCity() const
{
    return m_city;
}

void DisplayAsset::SetCity(const string& _city)
{
    m_city = _city;
    m_cityHasBeenSet = true;
}

bool DisplayAsset::CityHasBeenSet() const
{
    return m_cityHasBeenSet;
}

string DisplayAsset::GetIsp() const
{
    return m_isp;
}

void DisplayAsset::SetIsp(const string& _isp)
{
    m_isp = _isp;
    m_ispHasBeenSet = true;
}

bool DisplayAsset::IspHasBeenSet() const
{
    return m_ispHasBeenSet;
}

DisplayToolCommon DisplayAsset::GetDisplayToolCommon() const
{
    return m_displayToolCommon;
}

void DisplayAsset::SetDisplayToolCommon(const DisplayToolCommon& _displayToolCommon)
{
    m_displayToolCommon = _displayToolCommon;
    m_displayToolCommonHasBeenSet = true;
}

bool DisplayAsset::DisplayToolCommonHasBeenSet() const
{
    return m_displayToolCommonHasBeenSet;
}

string DisplayAsset::GetPorts() const
{
    return m_ports;
}

void DisplayAsset::SetPorts(const string& _ports)
{
    m_ports = _ports;
    m_portsHasBeenSet = true;
}

bool DisplayAsset::PortsHasBeenSet() const
{
    return m_portsHasBeenSet;
}

string DisplayAsset::GetServices() const
{
    return m_services;
}

void DisplayAsset::SetServices(const string& _services)
{
    m_services = _services;
    m_servicesHasBeenSet = true;
}

bool DisplayAsset::ServicesHasBeenSet() const
{
    return m_servicesHasBeenSet;
}

string DisplayAsset::GetDomains() const
{
    return m_domains;
}

void DisplayAsset::SetDomains(const string& _domains)
{
    m_domains = _domains;
    m_domainsHasBeenSet = true;
}

bool DisplayAsset::DomainsHasBeenSet() const
{
    return m_domainsHasBeenSet;
}

string DisplayAsset::GetLastModify() const
{
    return m_lastModify;
}

void DisplayAsset::SetLastModify(const string& _lastModify)
{
    m_lastModify = _lastModify;
    m_lastModifyHasBeenSet = true;
}

bool DisplayAsset::LastModifyHasBeenSet() const
{
    return m_lastModifyHasBeenSet;
}

