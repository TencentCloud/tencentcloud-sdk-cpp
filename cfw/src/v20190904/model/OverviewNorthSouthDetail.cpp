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

#include <tencentcloud/cfw/v20190904/model/OverviewNorthSouthDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

OverviewNorthSouthDetail::OverviewNorthSouthDetail() :
    m_internetBandwidthTotalMbpsHasBeenSet(false),
    m_netMaxFlowBpsHasBeenSet(false),
    m_serialBandwidthTotalMbpsHasBeenSet(false),
    m_natBandwidthTotalMbpsHasBeenSet(false),
    m_bypassOnlyBandwidthMbpsHasBeenSet(false),
    m_unusedBandwidthMbpsHasBeenSet(false),
    m_canUsedBandwidthMbpsHasBeenSet(false),
    m_maxSerialRegionHasBeenSet(false),
    m_serialRegionInFlowMaxHasBeenSet(false),
    m_serialRegionOutFlowMaxHasBeenSet(false)
{
}

CoreInternalOutcome OverviewNorthSouthDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InternetBandwidthTotalMbps") && !value["InternetBandwidthTotalMbps"].IsNull())
    {
        if (!value["InternetBandwidthTotalMbps"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewNorthSouthDetail.InternetBandwidthTotalMbps` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_internetBandwidthTotalMbps = value["InternetBandwidthTotalMbps"].GetDouble();
        m_internetBandwidthTotalMbpsHasBeenSet = true;
    }

    if (value.HasMember("NetMaxFlowBps") && !value["NetMaxFlowBps"].IsNull())
    {
        if (!value["NetMaxFlowBps"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewNorthSouthDetail.NetMaxFlowBps` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_netMaxFlowBps = value["NetMaxFlowBps"].GetDouble();
        m_netMaxFlowBpsHasBeenSet = true;
    }

    if (value.HasMember("SerialBandwidthTotalMbps") && !value["SerialBandwidthTotalMbps"].IsNull())
    {
        if (!value["SerialBandwidthTotalMbps"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewNorthSouthDetail.SerialBandwidthTotalMbps` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_serialBandwidthTotalMbps = value["SerialBandwidthTotalMbps"].GetInt64();
        m_serialBandwidthTotalMbpsHasBeenSet = true;
    }

    if (value.HasMember("NatBandwidthTotalMbps") && !value["NatBandwidthTotalMbps"].IsNull())
    {
        if (!value["NatBandwidthTotalMbps"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewNorthSouthDetail.NatBandwidthTotalMbps` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_natBandwidthTotalMbps = value["NatBandwidthTotalMbps"].GetInt64();
        m_natBandwidthTotalMbpsHasBeenSet = true;
    }

    if (value.HasMember("BypassOnlyBandwidthMbps") && !value["BypassOnlyBandwidthMbps"].IsNull())
    {
        if (!value["BypassOnlyBandwidthMbps"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewNorthSouthDetail.BypassOnlyBandwidthMbps` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bypassOnlyBandwidthMbps = value["BypassOnlyBandwidthMbps"].GetInt64();
        m_bypassOnlyBandwidthMbpsHasBeenSet = true;
    }

    if (value.HasMember("UnusedBandwidthMbps") && !value["UnusedBandwidthMbps"].IsNull())
    {
        if (!value["UnusedBandwidthMbps"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewNorthSouthDetail.UnusedBandwidthMbps` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_unusedBandwidthMbps = value["UnusedBandwidthMbps"].GetInt64();
        m_unusedBandwidthMbpsHasBeenSet = true;
    }

    if (value.HasMember("CanUsedBandwidthMbps") && !value["CanUsedBandwidthMbps"].IsNull())
    {
        if (!value["CanUsedBandwidthMbps"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewNorthSouthDetail.CanUsedBandwidthMbps` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_canUsedBandwidthMbps = value["CanUsedBandwidthMbps"].GetInt64();
        m_canUsedBandwidthMbpsHasBeenSet = true;
    }

    if (value.HasMember("MaxSerialRegion") && !value["MaxSerialRegion"].IsNull())
    {
        if (!value["MaxSerialRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewNorthSouthDetail.MaxSerialRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_maxSerialRegion = string(value["MaxSerialRegion"].GetString());
        m_maxSerialRegionHasBeenSet = true;
    }

    if (value.HasMember("SerialRegionInFlowMax") && !value["SerialRegionInFlowMax"].IsNull())
    {
        if (!value["SerialRegionInFlowMax"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewNorthSouthDetail.SerialRegionInFlowMax` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_serialRegionInFlowMax = value["SerialRegionInFlowMax"].GetInt64();
        m_serialRegionInFlowMaxHasBeenSet = true;
    }

    if (value.HasMember("SerialRegionOutFlowMax") && !value["SerialRegionOutFlowMax"].IsNull())
    {
        if (!value["SerialRegionOutFlowMax"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewNorthSouthDetail.SerialRegionOutFlowMax` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_serialRegionOutFlowMax = value["SerialRegionOutFlowMax"].GetInt64();
        m_serialRegionOutFlowMaxHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OverviewNorthSouthDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_internetBandwidthTotalMbpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternetBandwidthTotalMbps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_internetBandwidthTotalMbps, allocator);
    }

    if (m_netMaxFlowBpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetMaxFlowBps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_netMaxFlowBps, allocator);
    }

    if (m_serialBandwidthTotalMbpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SerialBandwidthTotalMbps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_serialBandwidthTotalMbps, allocator);
    }

    if (m_natBandwidthTotalMbpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NatBandwidthTotalMbps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_natBandwidthTotalMbps, allocator);
    }

    if (m_bypassOnlyBandwidthMbpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BypassOnlyBandwidthMbps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bypassOnlyBandwidthMbps, allocator);
    }

    if (m_unusedBandwidthMbpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnusedBandwidthMbps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unusedBandwidthMbps, allocator);
    }

    if (m_canUsedBandwidthMbpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CanUsedBandwidthMbps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_canUsedBandwidthMbps, allocator);
    }

    if (m_maxSerialRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxSerialRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_maxSerialRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_serialRegionInFlowMaxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SerialRegionInFlowMax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_serialRegionInFlowMax, allocator);
    }

    if (m_serialRegionOutFlowMaxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SerialRegionOutFlowMax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_serialRegionOutFlowMax, allocator);
    }

}


double OverviewNorthSouthDetail::GetInternetBandwidthTotalMbps() const
{
    return m_internetBandwidthTotalMbps;
}

void OverviewNorthSouthDetail::SetInternetBandwidthTotalMbps(const double& _internetBandwidthTotalMbps)
{
    m_internetBandwidthTotalMbps = _internetBandwidthTotalMbps;
    m_internetBandwidthTotalMbpsHasBeenSet = true;
}

bool OverviewNorthSouthDetail::InternetBandwidthTotalMbpsHasBeenSet() const
{
    return m_internetBandwidthTotalMbpsHasBeenSet;
}

double OverviewNorthSouthDetail::GetNetMaxFlowBps() const
{
    return m_netMaxFlowBps;
}

void OverviewNorthSouthDetail::SetNetMaxFlowBps(const double& _netMaxFlowBps)
{
    m_netMaxFlowBps = _netMaxFlowBps;
    m_netMaxFlowBpsHasBeenSet = true;
}

bool OverviewNorthSouthDetail::NetMaxFlowBpsHasBeenSet() const
{
    return m_netMaxFlowBpsHasBeenSet;
}

int64_t OverviewNorthSouthDetail::GetSerialBandwidthTotalMbps() const
{
    return m_serialBandwidthTotalMbps;
}

void OverviewNorthSouthDetail::SetSerialBandwidthTotalMbps(const int64_t& _serialBandwidthTotalMbps)
{
    m_serialBandwidthTotalMbps = _serialBandwidthTotalMbps;
    m_serialBandwidthTotalMbpsHasBeenSet = true;
}

bool OverviewNorthSouthDetail::SerialBandwidthTotalMbpsHasBeenSet() const
{
    return m_serialBandwidthTotalMbpsHasBeenSet;
}

int64_t OverviewNorthSouthDetail::GetNatBandwidthTotalMbps() const
{
    return m_natBandwidthTotalMbps;
}

void OverviewNorthSouthDetail::SetNatBandwidthTotalMbps(const int64_t& _natBandwidthTotalMbps)
{
    m_natBandwidthTotalMbps = _natBandwidthTotalMbps;
    m_natBandwidthTotalMbpsHasBeenSet = true;
}

bool OverviewNorthSouthDetail::NatBandwidthTotalMbpsHasBeenSet() const
{
    return m_natBandwidthTotalMbpsHasBeenSet;
}

int64_t OverviewNorthSouthDetail::GetBypassOnlyBandwidthMbps() const
{
    return m_bypassOnlyBandwidthMbps;
}

void OverviewNorthSouthDetail::SetBypassOnlyBandwidthMbps(const int64_t& _bypassOnlyBandwidthMbps)
{
    m_bypassOnlyBandwidthMbps = _bypassOnlyBandwidthMbps;
    m_bypassOnlyBandwidthMbpsHasBeenSet = true;
}

bool OverviewNorthSouthDetail::BypassOnlyBandwidthMbpsHasBeenSet() const
{
    return m_bypassOnlyBandwidthMbpsHasBeenSet;
}

int64_t OverviewNorthSouthDetail::GetUnusedBandwidthMbps() const
{
    return m_unusedBandwidthMbps;
}

void OverviewNorthSouthDetail::SetUnusedBandwidthMbps(const int64_t& _unusedBandwidthMbps)
{
    m_unusedBandwidthMbps = _unusedBandwidthMbps;
    m_unusedBandwidthMbpsHasBeenSet = true;
}

bool OverviewNorthSouthDetail::UnusedBandwidthMbpsHasBeenSet() const
{
    return m_unusedBandwidthMbpsHasBeenSet;
}

int64_t OverviewNorthSouthDetail::GetCanUsedBandwidthMbps() const
{
    return m_canUsedBandwidthMbps;
}

void OverviewNorthSouthDetail::SetCanUsedBandwidthMbps(const int64_t& _canUsedBandwidthMbps)
{
    m_canUsedBandwidthMbps = _canUsedBandwidthMbps;
    m_canUsedBandwidthMbpsHasBeenSet = true;
}

bool OverviewNorthSouthDetail::CanUsedBandwidthMbpsHasBeenSet() const
{
    return m_canUsedBandwidthMbpsHasBeenSet;
}

string OverviewNorthSouthDetail::GetMaxSerialRegion() const
{
    return m_maxSerialRegion;
}

void OverviewNorthSouthDetail::SetMaxSerialRegion(const string& _maxSerialRegion)
{
    m_maxSerialRegion = _maxSerialRegion;
    m_maxSerialRegionHasBeenSet = true;
}

bool OverviewNorthSouthDetail::MaxSerialRegionHasBeenSet() const
{
    return m_maxSerialRegionHasBeenSet;
}

int64_t OverviewNorthSouthDetail::GetSerialRegionInFlowMax() const
{
    return m_serialRegionInFlowMax;
}

void OverviewNorthSouthDetail::SetSerialRegionInFlowMax(const int64_t& _serialRegionInFlowMax)
{
    m_serialRegionInFlowMax = _serialRegionInFlowMax;
    m_serialRegionInFlowMaxHasBeenSet = true;
}

bool OverviewNorthSouthDetail::SerialRegionInFlowMaxHasBeenSet() const
{
    return m_serialRegionInFlowMaxHasBeenSet;
}

int64_t OverviewNorthSouthDetail::GetSerialRegionOutFlowMax() const
{
    return m_serialRegionOutFlowMax;
}

void OverviewNorthSouthDetail::SetSerialRegionOutFlowMax(const int64_t& _serialRegionOutFlowMax)
{
    m_serialRegionOutFlowMax = _serialRegionOutFlowMax;
    m_serialRegionOutFlowMaxHasBeenSet = true;
}

bool OverviewNorthSouthDetail::SerialRegionOutFlowMaxHasBeenSet() const
{
    return m_serialRegionOutFlowMaxHasBeenSet;
}

