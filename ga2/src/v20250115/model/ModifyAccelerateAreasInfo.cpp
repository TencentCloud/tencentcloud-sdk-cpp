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

#include <tencentcloud/ga2/v20250115/model/ModifyAccelerateAreasInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ga2::V20250115::Model;
using namespace std;

ModifyAccelerateAreasInfo::ModifyAccelerateAreasInfo() :
    m_accelerateRegionHasBeenSet(false),
    m_bandwidthHasBeenSet(false),
    m_ispTypeHasBeenSet(false),
    m_ipVersionHasBeenSet(false)
{
}

CoreInternalOutcome ModifyAccelerateAreasInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AccelerateRegion") && !value["AccelerateRegion"].IsNull())
    {
        if (!value["AccelerateRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyAccelerateAreasInfo.AccelerateRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accelerateRegion = string(value["AccelerateRegion"].GetString());
        m_accelerateRegionHasBeenSet = true;
    }

    if (value.HasMember("Bandwidth") && !value["Bandwidth"].IsNull())
    {
        if (!value["Bandwidth"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyAccelerateAreasInfo.Bandwidth` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_bandwidth = value["Bandwidth"].GetUint64();
        m_bandwidthHasBeenSet = true;
    }

    if (value.HasMember("IspType") && !value["IspType"].IsNull())
    {
        if (!value["IspType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyAccelerateAreasInfo.IspType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ispType = string(value["IspType"].GetString());
        m_ispTypeHasBeenSet = true;
    }

    if (value.HasMember("IpVersion") && !value["IpVersion"].IsNull())
    {
        if (!value["IpVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyAccelerateAreasInfo.IpVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ipVersion = string(value["IpVersion"].GetString());
        m_ipVersionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModifyAccelerateAreasInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_accelerateRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccelerateRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accelerateRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_bandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bandwidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bandwidth, allocator);
    }

    if (m_ispTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IspType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ispType.c_str(), allocator).Move(), allocator);
    }

    if (m_ipVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ipVersion.c_str(), allocator).Move(), allocator);
    }

}


string ModifyAccelerateAreasInfo::GetAccelerateRegion() const
{
    return m_accelerateRegion;
}

void ModifyAccelerateAreasInfo::SetAccelerateRegion(const string& _accelerateRegion)
{
    m_accelerateRegion = _accelerateRegion;
    m_accelerateRegionHasBeenSet = true;
}

bool ModifyAccelerateAreasInfo::AccelerateRegionHasBeenSet() const
{
    return m_accelerateRegionHasBeenSet;
}

uint64_t ModifyAccelerateAreasInfo::GetBandwidth() const
{
    return m_bandwidth;
}

void ModifyAccelerateAreasInfo::SetBandwidth(const uint64_t& _bandwidth)
{
    m_bandwidth = _bandwidth;
    m_bandwidthHasBeenSet = true;
}

bool ModifyAccelerateAreasInfo::BandwidthHasBeenSet() const
{
    return m_bandwidthHasBeenSet;
}

string ModifyAccelerateAreasInfo::GetIspType() const
{
    return m_ispType;
}

void ModifyAccelerateAreasInfo::SetIspType(const string& _ispType)
{
    m_ispType = _ispType;
    m_ispTypeHasBeenSet = true;
}

bool ModifyAccelerateAreasInfo::IspTypeHasBeenSet() const
{
    return m_ispTypeHasBeenSet;
}

string ModifyAccelerateAreasInfo::GetIpVersion() const
{
    return m_ipVersion;
}

void ModifyAccelerateAreasInfo::SetIpVersion(const string& _ipVersion)
{
    m_ipVersion = _ipVersion;
    m_ipVersionHasBeenSet = true;
}

bool ModifyAccelerateAreasInfo::IpVersionHasBeenSet() const
{
    return m_ipVersionHasBeenSet;
}

