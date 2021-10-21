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

#include <tencentcloud/cdn/v20180606/model/DDoSAttackIPTopData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

DDoSAttackIPTopData::DDoSAttackIPTopData() :
    m_attackIPHasBeenSet(false),
    m_provinceHasBeenSet(false),
    m_countryHasBeenSet(false),
    m_ispHasBeenSet(false),
    m_attackCountHasBeenSet(false)
{
}

CoreInternalOutcome DDoSAttackIPTopData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AttackIP") && !value["AttackIP"].IsNull())
    {
        if (!value["AttackIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSAttackIPTopData.AttackIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attackIP = string(value["AttackIP"].GetString());
        m_attackIPHasBeenSet = true;
    }

    if (value.HasMember("Province") && !value["Province"].IsNull())
    {
        if (!value["Province"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSAttackIPTopData.Province` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_province = string(value["Province"].GetString());
        m_provinceHasBeenSet = true;
    }

    if (value.HasMember("Country") && !value["Country"].IsNull())
    {
        if (!value["Country"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSAttackIPTopData.Country` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_country = string(value["Country"].GetString());
        m_countryHasBeenSet = true;
    }

    if (value.HasMember("Isp") && !value["Isp"].IsNull())
    {
        if (!value["Isp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSAttackIPTopData.Isp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isp = string(value["Isp"].GetString());
        m_ispHasBeenSet = true;
    }

    if (value.HasMember("AttackCount") && !value["AttackCount"].IsNull())
    {
        if (!value["AttackCount"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSAttackIPTopData.AttackCount` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_attackCount = value["AttackCount"].GetDouble();
        m_attackCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DDoSAttackIPTopData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_attackIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attackIP.c_str(), allocator).Move(), allocator);
    }

    if (m_provinceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Province";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_province.c_str(), allocator).Move(), allocator);
    }

    if (m_countryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Country";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_country.c_str(), allocator).Move(), allocator);
    }

    if (m_ispHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Isp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isp.c_str(), allocator).Move(), allocator);
    }

    if (m_attackCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_attackCount, allocator);
    }

}


string DDoSAttackIPTopData::GetAttackIP() const
{
    return m_attackIP;
}

void DDoSAttackIPTopData::SetAttackIP(const string& _attackIP)
{
    m_attackIP = _attackIP;
    m_attackIPHasBeenSet = true;
}

bool DDoSAttackIPTopData::AttackIPHasBeenSet() const
{
    return m_attackIPHasBeenSet;
}

string DDoSAttackIPTopData::GetProvince() const
{
    return m_province;
}

void DDoSAttackIPTopData::SetProvince(const string& _province)
{
    m_province = _province;
    m_provinceHasBeenSet = true;
}

bool DDoSAttackIPTopData::ProvinceHasBeenSet() const
{
    return m_provinceHasBeenSet;
}

string DDoSAttackIPTopData::GetCountry() const
{
    return m_country;
}

void DDoSAttackIPTopData::SetCountry(const string& _country)
{
    m_country = _country;
    m_countryHasBeenSet = true;
}

bool DDoSAttackIPTopData::CountryHasBeenSet() const
{
    return m_countryHasBeenSet;
}

string DDoSAttackIPTopData::GetIsp() const
{
    return m_isp;
}

void DDoSAttackIPTopData::SetIsp(const string& _isp)
{
    m_isp = _isp;
    m_ispHasBeenSet = true;
}

bool DDoSAttackIPTopData::IspHasBeenSet() const
{
    return m_ispHasBeenSet;
}

double DDoSAttackIPTopData::GetAttackCount() const
{
    return m_attackCount;
}

void DDoSAttackIPTopData::SetAttackCount(const double& _attackCount)
{
    m_attackCount = _attackCount;
    m_attackCountHasBeenSet = true;
}

bool DDoSAttackIPTopData::AttackCountHasBeenSet() const
{
    return m_attackCountHasBeenSet;
}

