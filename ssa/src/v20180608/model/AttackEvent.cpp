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

#include <tencentcloud/ssa/v20180608/model/AttackEvent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssa::V20180608::Model;
using namespace std;

AttackEvent::AttackEvent() :
    m_ssaSrcIpHasBeenSet(false),
    m_ssaDstIpHasBeenSet(false),
    m_ssaDstProvinceHasBeenSet(false),
    m_ssaDstCityHasBeenSet(false),
    m_ssaDstCountryHasBeenSet(false),
    m_ssaSrcProvinceHasBeenSet(false),
    m_ssaSrcCountryHasBeenSet(false),
    m_ssaSrcCityHasBeenSet(false)
{
}

CoreInternalOutcome AttackEvent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SsaSrcIp") && !value["SsaSrcIp"].IsNull())
    {
        if (!value["SsaSrcIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AttackEvent.SsaSrcIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ssaSrcIp = string(value["SsaSrcIp"].GetString());
        m_ssaSrcIpHasBeenSet = true;
    }

    if (value.HasMember("SsaDstIp") && !value["SsaDstIp"].IsNull())
    {
        if (!value["SsaDstIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AttackEvent.SsaDstIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ssaDstIp = string(value["SsaDstIp"].GetString());
        m_ssaDstIpHasBeenSet = true;
    }

    if (value.HasMember("SsaDstProvince") && !value["SsaDstProvince"].IsNull())
    {
        if (!value["SsaDstProvince"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AttackEvent.SsaDstProvince` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ssaDstProvince = string(value["SsaDstProvince"].GetString());
        m_ssaDstProvinceHasBeenSet = true;
    }

    if (value.HasMember("SsaDstCity") && !value["SsaDstCity"].IsNull())
    {
        if (!value["SsaDstCity"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AttackEvent.SsaDstCity` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ssaDstCity = string(value["SsaDstCity"].GetString());
        m_ssaDstCityHasBeenSet = true;
    }

    if (value.HasMember("SsaDstCountry") && !value["SsaDstCountry"].IsNull())
    {
        if (!value["SsaDstCountry"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AttackEvent.SsaDstCountry` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ssaDstCountry = string(value["SsaDstCountry"].GetString());
        m_ssaDstCountryHasBeenSet = true;
    }

    if (value.HasMember("SsaSrcProvince") && !value["SsaSrcProvince"].IsNull())
    {
        if (!value["SsaSrcProvince"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AttackEvent.SsaSrcProvince` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ssaSrcProvince = string(value["SsaSrcProvince"].GetString());
        m_ssaSrcProvinceHasBeenSet = true;
    }

    if (value.HasMember("SsaSrcCountry") && !value["SsaSrcCountry"].IsNull())
    {
        if (!value["SsaSrcCountry"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AttackEvent.SsaSrcCountry` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ssaSrcCountry = string(value["SsaSrcCountry"].GetString());
        m_ssaSrcCountryHasBeenSet = true;
    }

    if (value.HasMember("SsaSrcCity") && !value["SsaSrcCity"].IsNull())
    {
        if (!value["SsaSrcCity"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AttackEvent.SsaSrcCity` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ssaSrcCity = string(value["SsaSrcCity"].GetString());
        m_ssaSrcCityHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AttackEvent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ssaSrcIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SsaSrcIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ssaSrcIp.c_str(), allocator).Move(), allocator);
    }

    if (m_ssaDstIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SsaDstIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ssaDstIp.c_str(), allocator).Move(), allocator);
    }

    if (m_ssaDstProvinceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SsaDstProvince";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ssaDstProvince.c_str(), allocator).Move(), allocator);
    }

    if (m_ssaDstCityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SsaDstCity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ssaDstCity.c_str(), allocator).Move(), allocator);
    }

    if (m_ssaDstCountryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SsaDstCountry";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ssaDstCountry.c_str(), allocator).Move(), allocator);
    }

    if (m_ssaSrcProvinceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SsaSrcProvince";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ssaSrcProvince.c_str(), allocator).Move(), allocator);
    }

    if (m_ssaSrcCountryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SsaSrcCountry";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ssaSrcCountry.c_str(), allocator).Move(), allocator);
    }

    if (m_ssaSrcCityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SsaSrcCity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ssaSrcCity.c_str(), allocator).Move(), allocator);
    }

}


string AttackEvent::GetSsaSrcIp() const
{
    return m_ssaSrcIp;
}

void AttackEvent::SetSsaSrcIp(const string& _ssaSrcIp)
{
    m_ssaSrcIp = _ssaSrcIp;
    m_ssaSrcIpHasBeenSet = true;
}

bool AttackEvent::SsaSrcIpHasBeenSet() const
{
    return m_ssaSrcIpHasBeenSet;
}

string AttackEvent::GetSsaDstIp() const
{
    return m_ssaDstIp;
}

void AttackEvent::SetSsaDstIp(const string& _ssaDstIp)
{
    m_ssaDstIp = _ssaDstIp;
    m_ssaDstIpHasBeenSet = true;
}

bool AttackEvent::SsaDstIpHasBeenSet() const
{
    return m_ssaDstIpHasBeenSet;
}

string AttackEvent::GetSsaDstProvince() const
{
    return m_ssaDstProvince;
}

void AttackEvent::SetSsaDstProvince(const string& _ssaDstProvince)
{
    m_ssaDstProvince = _ssaDstProvince;
    m_ssaDstProvinceHasBeenSet = true;
}

bool AttackEvent::SsaDstProvinceHasBeenSet() const
{
    return m_ssaDstProvinceHasBeenSet;
}

string AttackEvent::GetSsaDstCity() const
{
    return m_ssaDstCity;
}

void AttackEvent::SetSsaDstCity(const string& _ssaDstCity)
{
    m_ssaDstCity = _ssaDstCity;
    m_ssaDstCityHasBeenSet = true;
}

bool AttackEvent::SsaDstCityHasBeenSet() const
{
    return m_ssaDstCityHasBeenSet;
}

string AttackEvent::GetSsaDstCountry() const
{
    return m_ssaDstCountry;
}

void AttackEvent::SetSsaDstCountry(const string& _ssaDstCountry)
{
    m_ssaDstCountry = _ssaDstCountry;
    m_ssaDstCountryHasBeenSet = true;
}

bool AttackEvent::SsaDstCountryHasBeenSet() const
{
    return m_ssaDstCountryHasBeenSet;
}

string AttackEvent::GetSsaSrcProvince() const
{
    return m_ssaSrcProvince;
}

void AttackEvent::SetSsaSrcProvince(const string& _ssaSrcProvince)
{
    m_ssaSrcProvince = _ssaSrcProvince;
    m_ssaSrcProvinceHasBeenSet = true;
}

bool AttackEvent::SsaSrcProvinceHasBeenSet() const
{
    return m_ssaSrcProvinceHasBeenSet;
}

string AttackEvent::GetSsaSrcCountry() const
{
    return m_ssaSrcCountry;
}

void AttackEvent::SetSsaSrcCountry(const string& _ssaSrcCountry)
{
    m_ssaSrcCountry = _ssaSrcCountry;
    m_ssaSrcCountryHasBeenSet = true;
}

bool AttackEvent::SsaSrcCountryHasBeenSet() const
{
    return m_ssaSrcCountryHasBeenSet;
}

string AttackEvent::GetSsaSrcCity() const
{
    return m_ssaSrcCity;
}

void AttackEvent::SetSsaSrcCity(const string& _ssaSrcCity)
{
    m_ssaSrcCity = _ssaSrcCity;
    m_ssaSrcCityHasBeenSet = true;
}

bool AttackEvent::SsaSrcCityHasBeenSet() const
{
    return m_ssaSrcCityHasBeenSet;
}

