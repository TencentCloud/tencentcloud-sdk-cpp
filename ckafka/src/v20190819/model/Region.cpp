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

#include <tencentcloud/ckafka/v20190819/model/Region.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

Region::Region() :
    m_regionIdHasBeenSet(false),
    m_regionNameHasBeenSet(false),
    m_areaNameHasBeenSet(false),
    m_regionCodeHasBeenSet(false),
    m_regionCodeV3HasBeenSet(false),
    m_supportHasBeenSet(false),
    m_ipv6HasBeenSet(false),
    m_multiZoneHasBeenSet(false)
{
}

CoreInternalOutcome Region::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RegionId") && !value["RegionId"].IsNull())
    {
        if (!value["RegionId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Region.RegionId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_regionId = value["RegionId"].GetInt64();
        m_regionIdHasBeenSet = true;
    }

    if (value.HasMember("RegionName") && !value["RegionName"].IsNull())
    {
        if (!value["RegionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Region.RegionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionName = string(value["RegionName"].GetString());
        m_regionNameHasBeenSet = true;
    }

    if (value.HasMember("AreaName") && !value["AreaName"].IsNull())
    {
        if (!value["AreaName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Region.AreaName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_areaName = string(value["AreaName"].GetString());
        m_areaNameHasBeenSet = true;
    }

    if (value.HasMember("RegionCode") && !value["RegionCode"].IsNull())
    {
        if (!value["RegionCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Region.RegionCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionCode = string(value["RegionCode"].GetString());
        m_regionCodeHasBeenSet = true;
    }

    if (value.HasMember("RegionCodeV3") && !value["RegionCodeV3"].IsNull())
    {
        if (!value["RegionCodeV3"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Region.RegionCodeV3` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionCodeV3 = string(value["RegionCodeV3"].GetString());
        m_regionCodeV3HasBeenSet = true;
    }

    if (value.HasMember("Support") && !value["Support"].IsNull())
    {
        if (!value["Support"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Region.Support` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_support = string(value["Support"].GetString());
        m_supportHasBeenSet = true;
    }

    if (value.HasMember("Ipv6") && !value["Ipv6"].IsNull())
    {
        if (!value["Ipv6"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Region.Ipv6` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ipv6 = value["Ipv6"].GetInt64();
        m_ipv6HasBeenSet = true;
    }

    if (value.HasMember("MultiZone") && !value["MultiZone"].IsNull())
    {
        if (!value["MultiZone"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Region.MultiZone` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_multiZone = value["MultiZone"].GetInt64();
        m_multiZoneHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Region::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_regionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_regionId, allocator);
    }

    if (m_regionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionName.c_str(), allocator).Move(), allocator);
    }

    if (m_areaNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AreaName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_areaName.c_str(), allocator).Move(), allocator);
    }

    if (m_regionCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionCode.c_str(), allocator).Move(), allocator);
    }

    if (m_regionCodeV3HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionCodeV3";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionCodeV3.c_str(), allocator).Move(), allocator);
    }

    if (m_supportHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Support";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_support.c_str(), allocator).Move(), allocator);
    }

    if (m_ipv6HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ipv6";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ipv6, allocator);
    }

    if (m_multiZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MultiZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_multiZone, allocator);
    }

}


int64_t Region::GetRegionId() const
{
    return m_regionId;
}

void Region::SetRegionId(const int64_t& _regionId)
{
    m_regionId = _regionId;
    m_regionIdHasBeenSet = true;
}

bool Region::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

string Region::GetRegionName() const
{
    return m_regionName;
}

void Region::SetRegionName(const string& _regionName)
{
    m_regionName = _regionName;
    m_regionNameHasBeenSet = true;
}

bool Region::RegionNameHasBeenSet() const
{
    return m_regionNameHasBeenSet;
}

string Region::GetAreaName() const
{
    return m_areaName;
}

void Region::SetAreaName(const string& _areaName)
{
    m_areaName = _areaName;
    m_areaNameHasBeenSet = true;
}

bool Region::AreaNameHasBeenSet() const
{
    return m_areaNameHasBeenSet;
}

string Region::GetRegionCode() const
{
    return m_regionCode;
}

void Region::SetRegionCode(const string& _regionCode)
{
    m_regionCode = _regionCode;
    m_regionCodeHasBeenSet = true;
}

bool Region::RegionCodeHasBeenSet() const
{
    return m_regionCodeHasBeenSet;
}

string Region::GetRegionCodeV3() const
{
    return m_regionCodeV3;
}

void Region::SetRegionCodeV3(const string& _regionCodeV3)
{
    m_regionCodeV3 = _regionCodeV3;
    m_regionCodeV3HasBeenSet = true;
}

bool Region::RegionCodeV3HasBeenSet() const
{
    return m_regionCodeV3HasBeenSet;
}

string Region::GetSupport() const
{
    return m_support;
}

void Region::SetSupport(const string& _support)
{
    m_support = _support;
    m_supportHasBeenSet = true;
}

bool Region::SupportHasBeenSet() const
{
    return m_supportHasBeenSet;
}

int64_t Region::GetIpv6() const
{
    return m_ipv6;
}

void Region::SetIpv6(const int64_t& _ipv6)
{
    m_ipv6 = _ipv6;
    m_ipv6HasBeenSet = true;
}

bool Region::Ipv6HasBeenSet() const
{
    return m_ipv6HasBeenSet;
}

int64_t Region::GetMultiZone() const
{
    return m_multiZone;
}

void Region::SetMultiZone(const int64_t& _multiZone)
{
    m_multiZone = _multiZone;
    m_multiZoneHasBeenSet = true;
}

bool Region::MultiZoneHasBeenSet() const
{
    return m_multiZoneHasBeenSet;
}

