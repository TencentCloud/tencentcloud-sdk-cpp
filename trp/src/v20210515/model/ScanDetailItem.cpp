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

#include <tencentcloud/trp/v20210515/model/ScanDetailItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trp::V20210515::Model;
using namespace std;

ScanDetailItem::ScanDetailItem() :
    m_uidHasBeenSet(false),
    m_timeHasBeenSet(false),
    m_provinceNameHasBeenSet(false),
    m_cityNameHasBeenSet(false),
    m_regionNameHasBeenSet(false),
    m_brandNameHasBeenSet(false),
    m_specNameHasBeenSet(false),
    m_iPHasBeenSet(false),
    m_codeHasBeenSet(false)
{
}

CoreInternalOutcome ScanDetailItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Uid") && !value["Uid"].IsNull())
    {
        if (!value["Uid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanDetailItem.Uid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uid = string(value["Uid"].GetString());
        m_uidHasBeenSet = true;
    }

    if (value.HasMember("Time") && !value["Time"].IsNull())
    {
        if (!value["Time"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanDetailItem.Time` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_time = string(value["Time"].GetString());
        m_timeHasBeenSet = true;
    }

    if (value.HasMember("ProvinceName") && !value["ProvinceName"].IsNull())
    {
        if (!value["ProvinceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanDetailItem.ProvinceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_provinceName = string(value["ProvinceName"].GetString());
        m_provinceNameHasBeenSet = true;
    }

    if (value.HasMember("CityName") && !value["CityName"].IsNull())
    {
        if (!value["CityName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanDetailItem.CityName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cityName = string(value["CityName"].GetString());
        m_cityNameHasBeenSet = true;
    }

    if (value.HasMember("RegionName") && !value["RegionName"].IsNull())
    {
        if (!value["RegionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanDetailItem.RegionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionName = string(value["RegionName"].GetString());
        m_regionNameHasBeenSet = true;
    }

    if (value.HasMember("BrandName") && !value["BrandName"].IsNull())
    {
        if (!value["BrandName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanDetailItem.BrandName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_brandName = string(value["BrandName"].GetString());
        m_brandNameHasBeenSet = true;
    }

    if (value.HasMember("SpecName") && !value["SpecName"].IsNull())
    {
        if (!value["SpecName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanDetailItem.SpecName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_specName = string(value["SpecName"].GetString());
        m_specNameHasBeenSet = true;
    }

    if (value.HasMember("IP") && !value["IP"].IsNull())
    {
        if (!value["IP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanDetailItem.IP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iP = string(value["IP"].GetString());
        m_iPHasBeenSet = true;
    }

    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanDetailItem.Code` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_code = string(value["Code"].GetString());
        m_codeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ScanDetailItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_uidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uid.c_str(), allocator).Move(), allocator);
    }

    if (m_timeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_time.c_str(), allocator).Move(), allocator);
    }

    if (m_provinceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProvinceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_provinceName.c_str(), allocator).Move(), allocator);
    }

    if (m_cityNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CityName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cityName.c_str(), allocator).Move(), allocator);
    }

    if (m_regionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionName.c_str(), allocator).Move(), allocator);
    }

    if (m_brandNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BrandName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_brandName.c_str(), allocator).Move(), allocator);
    }

    if (m_specNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_specName.c_str(), allocator).Move(), allocator);
    }

    if (m_iPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iP.c_str(), allocator).Move(), allocator);
    }

    if (m_codeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Code";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_code.c_str(), allocator).Move(), allocator);
    }

}


string ScanDetailItem::GetUid() const
{
    return m_uid;
}

void ScanDetailItem::SetUid(const string& _uid)
{
    m_uid = _uid;
    m_uidHasBeenSet = true;
}

bool ScanDetailItem::UidHasBeenSet() const
{
    return m_uidHasBeenSet;
}

string ScanDetailItem::GetTime() const
{
    return m_time;
}

void ScanDetailItem::SetTime(const string& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool ScanDetailItem::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

string ScanDetailItem::GetProvinceName() const
{
    return m_provinceName;
}

void ScanDetailItem::SetProvinceName(const string& _provinceName)
{
    m_provinceName = _provinceName;
    m_provinceNameHasBeenSet = true;
}

bool ScanDetailItem::ProvinceNameHasBeenSet() const
{
    return m_provinceNameHasBeenSet;
}

string ScanDetailItem::GetCityName() const
{
    return m_cityName;
}

void ScanDetailItem::SetCityName(const string& _cityName)
{
    m_cityName = _cityName;
    m_cityNameHasBeenSet = true;
}

bool ScanDetailItem::CityNameHasBeenSet() const
{
    return m_cityNameHasBeenSet;
}

string ScanDetailItem::GetRegionName() const
{
    return m_regionName;
}

void ScanDetailItem::SetRegionName(const string& _regionName)
{
    m_regionName = _regionName;
    m_regionNameHasBeenSet = true;
}

bool ScanDetailItem::RegionNameHasBeenSet() const
{
    return m_regionNameHasBeenSet;
}

string ScanDetailItem::GetBrandName() const
{
    return m_brandName;
}

void ScanDetailItem::SetBrandName(const string& _brandName)
{
    m_brandName = _brandName;
    m_brandNameHasBeenSet = true;
}

bool ScanDetailItem::BrandNameHasBeenSet() const
{
    return m_brandNameHasBeenSet;
}

string ScanDetailItem::GetSpecName() const
{
    return m_specName;
}

void ScanDetailItem::SetSpecName(const string& _specName)
{
    m_specName = _specName;
    m_specNameHasBeenSet = true;
}

bool ScanDetailItem::SpecNameHasBeenSet() const
{
    return m_specNameHasBeenSet;
}

string ScanDetailItem::GetIP() const
{
    return m_iP;
}

void ScanDetailItem::SetIP(const string& _iP)
{
    m_iP = _iP;
    m_iPHasBeenSet = true;
}

bool ScanDetailItem::IPHasBeenSet() const
{
    return m_iPHasBeenSet;
}

string ScanDetailItem::GetCode() const
{
    return m_code;
}

void ScanDetailItem::SetCode(const string& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool ScanDetailItem::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

