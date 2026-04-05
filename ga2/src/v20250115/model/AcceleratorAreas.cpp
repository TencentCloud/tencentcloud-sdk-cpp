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

#include <tencentcloud/ga2/v20250115/model/AcceleratorAreas.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ga2::V20250115::Model;
using namespace std;

AcceleratorAreas::AcceleratorAreas() :
    m_accelerateRegionHasBeenSet(false),
    m_bandwidthHasBeenSet(false),
    m_ispTypeHasBeenSet(false),
    m_ipVersionHasBeenSet(false),
    m_acceleratorAreaIdHasBeenSet(false),
    m_ipAddressHasBeenSet(false),
    m_ipAddressInfoSetHasBeenSet(false)
{
}

CoreInternalOutcome AcceleratorAreas::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AccelerateRegion") && !value["AccelerateRegion"].IsNull())
    {
        if (!value["AccelerateRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AcceleratorAreas.AccelerateRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accelerateRegion = string(value["AccelerateRegion"].GetString());
        m_accelerateRegionHasBeenSet = true;
    }

    if (value.HasMember("Bandwidth") && !value["Bandwidth"].IsNull())
    {
        if (!value["Bandwidth"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AcceleratorAreas.Bandwidth` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_bandwidth = value["Bandwidth"].GetUint64();
        m_bandwidthHasBeenSet = true;
    }

    if (value.HasMember("IspType") && !value["IspType"].IsNull())
    {
        if (!value["IspType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AcceleratorAreas.IspType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ispType = string(value["IspType"].GetString());
        m_ispTypeHasBeenSet = true;
    }

    if (value.HasMember("IpVersion") && !value["IpVersion"].IsNull())
    {
        if (!value["IpVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AcceleratorAreas.IpVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ipVersion = string(value["IpVersion"].GetString());
        m_ipVersionHasBeenSet = true;
    }

    if (value.HasMember("AcceleratorAreaId") && !value["AcceleratorAreaId"].IsNull())
    {
        if (!value["AcceleratorAreaId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AcceleratorAreas.AcceleratorAreaId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_acceleratorAreaId = string(value["AcceleratorAreaId"].GetString());
        m_acceleratorAreaIdHasBeenSet = true;
    }

    if (value.HasMember("IpAddress") && !value["IpAddress"].IsNull())
    {
        if (!value["IpAddress"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AcceleratorAreas.IpAddress` is not array type"));

        const rapidjson::Value &tmpValue = value["IpAddress"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_ipAddress.push_back((*itr).GetString());
        }
        m_ipAddressHasBeenSet = true;
    }

    if (value.HasMember("IpAddressInfoSet") && !value["IpAddressInfoSet"].IsNull())
    {
        if (!value["IpAddressInfoSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AcceleratorAreas.IpAddressInfoSet` is not array type"));

        const rapidjson::Value &tmpValue = value["IpAddressInfoSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            IpAddressInfoSet item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_ipAddressInfoSet.push_back(item);
        }
        m_ipAddressInfoSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AcceleratorAreas::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_acceleratorAreaIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AcceleratorAreaId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_acceleratorAreaId.c_str(), allocator).Move(), allocator);
    }

    if (m_ipAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ipAddress.begin(); itr != m_ipAddress.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_ipAddressInfoSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpAddressInfoSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ipAddressInfoSet.begin(); itr != m_ipAddressInfoSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string AcceleratorAreas::GetAccelerateRegion() const
{
    return m_accelerateRegion;
}

void AcceleratorAreas::SetAccelerateRegion(const string& _accelerateRegion)
{
    m_accelerateRegion = _accelerateRegion;
    m_accelerateRegionHasBeenSet = true;
}

bool AcceleratorAreas::AccelerateRegionHasBeenSet() const
{
    return m_accelerateRegionHasBeenSet;
}

uint64_t AcceleratorAreas::GetBandwidth() const
{
    return m_bandwidth;
}

void AcceleratorAreas::SetBandwidth(const uint64_t& _bandwidth)
{
    m_bandwidth = _bandwidth;
    m_bandwidthHasBeenSet = true;
}

bool AcceleratorAreas::BandwidthHasBeenSet() const
{
    return m_bandwidthHasBeenSet;
}

string AcceleratorAreas::GetIspType() const
{
    return m_ispType;
}

void AcceleratorAreas::SetIspType(const string& _ispType)
{
    m_ispType = _ispType;
    m_ispTypeHasBeenSet = true;
}

bool AcceleratorAreas::IspTypeHasBeenSet() const
{
    return m_ispTypeHasBeenSet;
}

string AcceleratorAreas::GetIpVersion() const
{
    return m_ipVersion;
}

void AcceleratorAreas::SetIpVersion(const string& _ipVersion)
{
    m_ipVersion = _ipVersion;
    m_ipVersionHasBeenSet = true;
}

bool AcceleratorAreas::IpVersionHasBeenSet() const
{
    return m_ipVersionHasBeenSet;
}

string AcceleratorAreas::GetAcceleratorAreaId() const
{
    return m_acceleratorAreaId;
}

void AcceleratorAreas::SetAcceleratorAreaId(const string& _acceleratorAreaId)
{
    m_acceleratorAreaId = _acceleratorAreaId;
    m_acceleratorAreaIdHasBeenSet = true;
}

bool AcceleratorAreas::AcceleratorAreaIdHasBeenSet() const
{
    return m_acceleratorAreaIdHasBeenSet;
}

vector<string> AcceleratorAreas::GetIpAddress() const
{
    return m_ipAddress;
}

void AcceleratorAreas::SetIpAddress(const vector<string>& _ipAddress)
{
    m_ipAddress = _ipAddress;
    m_ipAddressHasBeenSet = true;
}

bool AcceleratorAreas::IpAddressHasBeenSet() const
{
    return m_ipAddressHasBeenSet;
}

vector<IpAddressInfoSet> AcceleratorAreas::GetIpAddressInfoSet() const
{
    return m_ipAddressInfoSet;
}

void AcceleratorAreas::SetIpAddressInfoSet(const vector<IpAddressInfoSet>& _ipAddressInfoSet)
{
    m_ipAddressInfoSet = _ipAddressInfoSet;
    m_ipAddressInfoSetHasBeenSet = true;
}

bool AcceleratorAreas::IpAddressInfoSetHasBeenSet() const
{
    return m_ipAddressInfoSetHasBeenSet;
}

