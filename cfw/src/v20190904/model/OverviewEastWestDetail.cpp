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

#include <tencentcloud/cfw/v20190904/model/OverviewEastWestDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

OverviewEastWestDetail::OverviewEastWestDetail() :
    m_totalMbpsHasBeenSet(false),
    m_usedBpsHasBeenSet(false),
    m_usagePercentHasBeenSet(false),
    m_allocatedBandwidthUsedMbpsHasBeenSet(false),
    m_canUsedBandwidthMbpsHasBeenSet(false),
    m_clusterModeWidthMbpsHasBeenSet(false),
    m_masterSlaveModeWidthMbpsHasBeenSet(false),
    m_sameRegionFwInsIdHasBeenSet(false),
    m_sameRegionFwInsNameHasBeenSet(false),
    m_sameRegionMaxFlowBpsHasBeenSet(false),
    m_diffRegionFwInsIdHasBeenSet(false),
    m_diffRegionFwInsNameHasBeenSet(false),
    m_diffRegionMaxFlowBpsHasBeenSet(false),
    m_fwGroupIdHasBeenSet(false),
    m_fwGroupNameHasBeenSet(false),
    m_fwGroupMaxFlowBpsHasBeenSet(false),
    m_fwInsIdHasBeenSet(false),
    m_fwInsNameHasBeenSet(false),
    m_fwInsMaxFlowBpsHasBeenSet(false),
    m_clusterVpcMaxFlowBpsHasBeenSet(false)
{
}

CoreInternalOutcome OverviewEastWestDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TotalMbps") && !value["TotalMbps"].IsNull())
    {
        if (!value["TotalMbps"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewEastWestDetail.TotalMbps` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalMbps = value["TotalMbps"].GetInt64();
        m_totalMbpsHasBeenSet = true;
    }

    if (value.HasMember("UsedBps") && !value["UsedBps"].IsNull())
    {
        if (!value["UsedBps"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewEastWestDetail.UsedBps` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_usedBps = value["UsedBps"].GetInt64();
        m_usedBpsHasBeenSet = true;
    }

    if (value.HasMember("UsagePercent") && !value["UsagePercent"].IsNull())
    {
        if (!value["UsagePercent"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewEastWestDetail.UsagePercent` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_usagePercent = value["UsagePercent"].GetDouble();
        m_usagePercentHasBeenSet = true;
    }

    if (value.HasMember("AllocatedBandwidthUsedMbps") && !value["AllocatedBandwidthUsedMbps"].IsNull())
    {
        if (!value["AllocatedBandwidthUsedMbps"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewEastWestDetail.AllocatedBandwidthUsedMbps` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_allocatedBandwidthUsedMbps = value["AllocatedBandwidthUsedMbps"].GetInt64();
        m_allocatedBandwidthUsedMbpsHasBeenSet = true;
    }

    if (value.HasMember("CanUsedBandwidthMbps") && !value["CanUsedBandwidthMbps"].IsNull())
    {
        if (!value["CanUsedBandwidthMbps"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewEastWestDetail.CanUsedBandwidthMbps` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_canUsedBandwidthMbps = value["CanUsedBandwidthMbps"].GetInt64();
        m_canUsedBandwidthMbpsHasBeenSet = true;
    }

    if (value.HasMember("ClusterModeWidthMbps") && !value["ClusterModeWidthMbps"].IsNull())
    {
        if (!value["ClusterModeWidthMbps"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewEastWestDetail.ClusterModeWidthMbps` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_clusterModeWidthMbps = value["ClusterModeWidthMbps"].GetInt64();
        m_clusterModeWidthMbpsHasBeenSet = true;
    }

    if (value.HasMember("MasterSlaveModeWidthMbps") && !value["MasterSlaveModeWidthMbps"].IsNull())
    {
        if (!value["MasterSlaveModeWidthMbps"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewEastWestDetail.MasterSlaveModeWidthMbps` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_masterSlaveModeWidthMbps = value["MasterSlaveModeWidthMbps"].GetInt64();
        m_masterSlaveModeWidthMbpsHasBeenSet = true;
    }

    if (value.HasMember("SameRegionFwInsId") && !value["SameRegionFwInsId"].IsNull())
    {
        if (!value["SameRegionFwInsId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewEastWestDetail.SameRegionFwInsId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sameRegionFwInsId = string(value["SameRegionFwInsId"].GetString());
        m_sameRegionFwInsIdHasBeenSet = true;
    }

    if (value.HasMember("SameRegionFwInsName") && !value["SameRegionFwInsName"].IsNull())
    {
        if (!value["SameRegionFwInsName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewEastWestDetail.SameRegionFwInsName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sameRegionFwInsName = string(value["SameRegionFwInsName"].GetString());
        m_sameRegionFwInsNameHasBeenSet = true;
    }

    if (value.HasMember("SameRegionMaxFlowBps") && !value["SameRegionMaxFlowBps"].IsNull())
    {
        if (!value["SameRegionMaxFlowBps"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewEastWestDetail.SameRegionMaxFlowBps` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sameRegionMaxFlowBps = value["SameRegionMaxFlowBps"].GetInt64();
        m_sameRegionMaxFlowBpsHasBeenSet = true;
    }

    if (value.HasMember("DiffRegionFwInsId") && !value["DiffRegionFwInsId"].IsNull())
    {
        if (!value["DiffRegionFwInsId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewEastWestDetail.DiffRegionFwInsId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diffRegionFwInsId = string(value["DiffRegionFwInsId"].GetString());
        m_diffRegionFwInsIdHasBeenSet = true;
    }

    if (value.HasMember("DiffRegionFwInsName") && !value["DiffRegionFwInsName"].IsNull())
    {
        if (!value["DiffRegionFwInsName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewEastWestDetail.DiffRegionFwInsName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diffRegionFwInsName = string(value["DiffRegionFwInsName"].GetString());
        m_diffRegionFwInsNameHasBeenSet = true;
    }

    if (value.HasMember("DiffRegionMaxFlowBps") && !value["DiffRegionMaxFlowBps"].IsNull())
    {
        if (!value["DiffRegionMaxFlowBps"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewEastWestDetail.DiffRegionMaxFlowBps` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_diffRegionMaxFlowBps = value["DiffRegionMaxFlowBps"].GetInt64();
        m_diffRegionMaxFlowBpsHasBeenSet = true;
    }

    if (value.HasMember("FwGroupId") && !value["FwGroupId"].IsNull())
    {
        if (!value["FwGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewEastWestDetail.FwGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fwGroupId = string(value["FwGroupId"].GetString());
        m_fwGroupIdHasBeenSet = true;
    }

    if (value.HasMember("FwGroupName") && !value["FwGroupName"].IsNull())
    {
        if (!value["FwGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewEastWestDetail.FwGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fwGroupName = string(value["FwGroupName"].GetString());
        m_fwGroupNameHasBeenSet = true;
    }

    if (value.HasMember("FwGroupMaxFlowBps") && !value["FwGroupMaxFlowBps"].IsNull())
    {
        if (!value["FwGroupMaxFlowBps"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewEastWestDetail.FwGroupMaxFlowBps` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fwGroupMaxFlowBps = value["FwGroupMaxFlowBps"].GetInt64();
        m_fwGroupMaxFlowBpsHasBeenSet = true;
    }

    if (value.HasMember("FwInsId") && !value["FwInsId"].IsNull())
    {
        if (!value["FwInsId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewEastWestDetail.FwInsId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fwInsId = string(value["FwInsId"].GetString());
        m_fwInsIdHasBeenSet = true;
    }

    if (value.HasMember("FwInsName") && !value["FwInsName"].IsNull())
    {
        if (!value["FwInsName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewEastWestDetail.FwInsName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fwInsName = string(value["FwInsName"].GetString());
        m_fwInsNameHasBeenSet = true;
    }

    if (value.HasMember("FwInsMaxFlowBps") && !value["FwInsMaxFlowBps"].IsNull())
    {
        if (!value["FwInsMaxFlowBps"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewEastWestDetail.FwInsMaxFlowBps` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fwInsMaxFlowBps = value["FwInsMaxFlowBps"].GetInt64();
        m_fwInsMaxFlowBpsHasBeenSet = true;
    }

    if (value.HasMember("ClusterVpcMaxFlowBps") && !value["ClusterVpcMaxFlowBps"].IsNull())
    {
        if (!value["ClusterVpcMaxFlowBps"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewEastWestDetail.ClusterVpcMaxFlowBps` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_clusterVpcMaxFlowBps = value["ClusterVpcMaxFlowBps"].GetInt64();
        m_clusterVpcMaxFlowBpsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OverviewEastWestDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalMbpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalMbps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalMbps, allocator);
    }

    if (m_usedBpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedBps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usedBps, allocator);
    }

    if (m_usagePercentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsagePercent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usagePercent, allocator);
    }

    if (m_allocatedBandwidthUsedMbpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllocatedBandwidthUsedMbps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_allocatedBandwidthUsedMbps, allocator);
    }

    if (m_canUsedBandwidthMbpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CanUsedBandwidthMbps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_canUsedBandwidthMbps, allocator);
    }

    if (m_clusterModeWidthMbpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterModeWidthMbps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clusterModeWidthMbps, allocator);
    }

    if (m_masterSlaveModeWidthMbpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MasterSlaveModeWidthMbps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_masterSlaveModeWidthMbps, allocator);
    }

    if (m_sameRegionFwInsIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SameRegionFwInsId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sameRegionFwInsId.c_str(), allocator).Move(), allocator);
    }

    if (m_sameRegionFwInsNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SameRegionFwInsName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sameRegionFwInsName.c_str(), allocator).Move(), allocator);
    }

    if (m_sameRegionMaxFlowBpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SameRegionMaxFlowBps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sameRegionMaxFlowBps, allocator);
    }

    if (m_diffRegionFwInsIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiffRegionFwInsId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diffRegionFwInsId.c_str(), allocator).Move(), allocator);
    }

    if (m_diffRegionFwInsNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiffRegionFwInsName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diffRegionFwInsName.c_str(), allocator).Move(), allocator);
    }

    if (m_diffRegionMaxFlowBpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiffRegionMaxFlowBps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_diffRegionMaxFlowBps, allocator);
    }

    if (m_fwGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FwGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fwGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_fwGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FwGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fwGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_fwGroupMaxFlowBpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FwGroupMaxFlowBps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fwGroupMaxFlowBps, allocator);
    }

    if (m_fwInsIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FwInsId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fwInsId.c_str(), allocator).Move(), allocator);
    }

    if (m_fwInsNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FwInsName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fwInsName.c_str(), allocator).Move(), allocator);
    }

    if (m_fwInsMaxFlowBpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FwInsMaxFlowBps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fwInsMaxFlowBps, allocator);
    }

    if (m_clusterVpcMaxFlowBpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterVpcMaxFlowBps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clusterVpcMaxFlowBps, allocator);
    }

}


int64_t OverviewEastWestDetail::GetTotalMbps() const
{
    return m_totalMbps;
}

void OverviewEastWestDetail::SetTotalMbps(const int64_t& _totalMbps)
{
    m_totalMbps = _totalMbps;
    m_totalMbpsHasBeenSet = true;
}

bool OverviewEastWestDetail::TotalMbpsHasBeenSet() const
{
    return m_totalMbpsHasBeenSet;
}

int64_t OverviewEastWestDetail::GetUsedBps() const
{
    return m_usedBps;
}

void OverviewEastWestDetail::SetUsedBps(const int64_t& _usedBps)
{
    m_usedBps = _usedBps;
    m_usedBpsHasBeenSet = true;
}

bool OverviewEastWestDetail::UsedBpsHasBeenSet() const
{
    return m_usedBpsHasBeenSet;
}

double OverviewEastWestDetail::GetUsagePercent() const
{
    return m_usagePercent;
}

void OverviewEastWestDetail::SetUsagePercent(const double& _usagePercent)
{
    m_usagePercent = _usagePercent;
    m_usagePercentHasBeenSet = true;
}

bool OverviewEastWestDetail::UsagePercentHasBeenSet() const
{
    return m_usagePercentHasBeenSet;
}

int64_t OverviewEastWestDetail::GetAllocatedBandwidthUsedMbps() const
{
    return m_allocatedBandwidthUsedMbps;
}

void OverviewEastWestDetail::SetAllocatedBandwidthUsedMbps(const int64_t& _allocatedBandwidthUsedMbps)
{
    m_allocatedBandwidthUsedMbps = _allocatedBandwidthUsedMbps;
    m_allocatedBandwidthUsedMbpsHasBeenSet = true;
}

bool OverviewEastWestDetail::AllocatedBandwidthUsedMbpsHasBeenSet() const
{
    return m_allocatedBandwidthUsedMbpsHasBeenSet;
}

int64_t OverviewEastWestDetail::GetCanUsedBandwidthMbps() const
{
    return m_canUsedBandwidthMbps;
}

void OverviewEastWestDetail::SetCanUsedBandwidthMbps(const int64_t& _canUsedBandwidthMbps)
{
    m_canUsedBandwidthMbps = _canUsedBandwidthMbps;
    m_canUsedBandwidthMbpsHasBeenSet = true;
}

bool OverviewEastWestDetail::CanUsedBandwidthMbpsHasBeenSet() const
{
    return m_canUsedBandwidthMbpsHasBeenSet;
}

int64_t OverviewEastWestDetail::GetClusterModeWidthMbps() const
{
    return m_clusterModeWidthMbps;
}

void OverviewEastWestDetail::SetClusterModeWidthMbps(const int64_t& _clusterModeWidthMbps)
{
    m_clusterModeWidthMbps = _clusterModeWidthMbps;
    m_clusterModeWidthMbpsHasBeenSet = true;
}

bool OverviewEastWestDetail::ClusterModeWidthMbpsHasBeenSet() const
{
    return m_clusterModeWidthMbpsHasBeenSet;
}

int64_t OverviewEastWestDetail::GetMasterSlaveModeWidthMbps() const
{
    return m_masterSlaveModeWidthMbps;
}

void OverviewEastWestDetail::SetMasterSlaveModeWidthMbps(const int64_t& _masterSlaveModeWidthMbps)
{
    m_masterSlaveModeWidthMbps = _masterSlaveModeWidthMbps;
    m_masterSlaveModeWidthMbpsHasBeenSet = true;
}

bool OverviewEastWestDetail::MasterSlaveModeWidthMbpsHasBeenSet() const
{
    return m_masterSlaveModeWidthMbpsHasBeenSet;
}

string OverviewEastWestDetail::GetSameRegionFwInsId() const
{
    return m_sameRegionFwInsId;
}

void OverviewEastWestDetail::SetSameRegionFwInsId(const string& _sameRegionFwInsId)
{
    m_sameRegionFwInsId = _sameRegionFwInsId;
    m_sameRegionFwInsIdHasBeenSet = true;
}

bool OverviewEastWestDetail::SameRegionFwInsIdHasBeenSet() const
{
    return m_sameRegionFwInsIdHasBeenSet;
}

string OverviewEastWestDetail::GetSameRegionFwInsName() const
{
    return m_sameRegionFwInsName;
}

void OverviewEastWestDetail::SetSameRegionFwInsName(const string& _sameRegionFwInsName)
{
    m_sameRegionFwInsName = _sameRegionFwInsName;
    m_sameRegionFwInsNameHasBeenSet = true;
}

bool OverviewEastWestDetail::SameRegionFwInsNameHasBeenSet() const
{
    return m_sameRegionFwInsNameHasBeenSet;
}

int64_t OverviewEastWestDetail::GetSameRegionMaxFlowBps() const
{
    return m_sameRegionMaxFlowBps;
}

void OverviewEastWestDetail::SetSameRegionMaxFlowBps(const int64_t& _sameRegionMaxFlowBps)
{
    m_sameRegionMaxFlowBps = _sameRegionMaxFlowBps;
    m_sameRegionMaxFlowBpsHasBeenSet = true;
}

bool OverviewEastWestDetail::SameRegionMaxFlowBpsHasBeenSet() const
{
    return m_sameRegionMaxFlowBpsHasBeenSet;
}

string OverviewEastWestDetail::GetDiffRegionFwInsId() const
{
    return m_diffRegionFwInsId;
}

void OverviewEastWestDetail::SetDiffRegionFwInsId(const string& _diffRegionFwInsId)
{
    m_diffRegionFwInsId = _diffRegionFwInsId;
    m_diffRegionFwInsIdHasBeenSet = true;
}

bool OverviewEastWestDetail::DiffRegionFwInsIdHasBeenSet() const
{
    return m_diffRegionFwInsIdHasBeenSet;
}

string OverviewEastWestDetail::GetDiffRegionFwInsName() const
{
    return m_diffRegionFwInsName;
}

void OverviewEastWestDetail::SetDiffRegionFwInsName(const string& _diffRegionFwInsName)
{
    m_diffRegionFwInsName = _diffRegionFwInsName;
    m_diffRegionFwInsNameHasBeenSet = true;
}

bool OverviewEastWestDetail::DiffRegionFwInsNameHasBeenSet() const
{
    return m_diffRegionFwInsNameHasBeenSet;
}

int64_t OverviewEastWestDetail::GetDiffRegionMaxFlowBps() const
{
    return m_diffRegionMaxFlowBps;
}

void OverviewEastWestDetail::SetDiffRegionMaxFlowBps(const int64_t& _diffRegionMaxFlowBps)
{
    m_diffRegionMaxFlowBps = _diffRegionMaxFlowBps;
    m_diffRegionMaxFlowBpsHasBeenSet = true;
}

bool OverviewEastWestDetail::DiffRegionMaxFlowBpsHasBeenSet() const
{
    return m_diffRegionMaxFlowBpsHasBeenSet;
}

string OverviewEastWestDetail::GetFwGroupId() const
{
    return m_fwGroupId;
}

void OverviewEastWestDetail::SetFwGroupId(const string& _fwGroupId)
{
    m_fwGroupId = _fwGroupId;
    m_fwGroupIdHasBeenSet = true;
}

bool OverviewEastWestDetail::FwGroupIdHasBeenSet() const
{
    return m_fwGroupIdHasBeenSet;
}

string OverviewEastWestDetail::GetFwGroupName() const
{
    return m_fwGroupName;
}

void OverviewEastWestDetail::SetFwGroupName(const string& _fwGroupName)
{
    m_fwGroupName = _fwGroupName;
    m_fwGroupNameHasBeenSet = true;
}

bool OverviewEastWestDetail::FwGroupNameHasBeenSet() const
{
    return m_fwGroupNameHasBeenSet;
}

int64_t OverviewEastWestDetail::GetFwGroupMaxFlowBps() const
{
    return m_fwGroupMaxFlowBps;
}

void OverviewEastWestDetail::SetFwGroupMaxFlowBps(const int64_t& _fwGroupMaxFlowBps)
{
    m_fwGroupMaxFlowBps = _fwGroupMaxFlowBps;
    m_fwGroupMaxFlowBpsHasBeenSet = true;
}

bool OverviewEastWestDetail::FwGroupMaxFlowBpsHasBeenSet() const
{
    return m_fwGroupMaxFlowBpsHasBeenSet;
}

string OverviewEastWestDetail::GetFwInsId() const
{
    return m_fwInsId;
}

void OverviewEastWestDetail::SetFwInsId(const string& _fwInsId)
{
    m_fwInsId = _fwInsId;
    m_fwInsIdHasBeenSet = true;
}

bool OverviewEastWestDetail::FwInsIdHasBeenSet() const
{
    return m_fwInsIdHasBeenSet;
}

string OverviewEastWestDetail::GetFwInsName() const
{
    return m_fwInsName;
}

void OverviewEastWestDetail::SetFwInsName(const string& _fwInsName)
{
    m_fwInsName = _fwInsName;
    m_fwInsNameHasBeenSet = true;
}

bool OverviewEastWestDetail::FwInsNameHasBeenSet() const
{
    return m_fwInsNameHasBeenSet;
}

int64_t OverviewEastWestDetail::GetFwInsMaxFlowBps() const
{
    return m_fwInsMaxFlowBps;
}

void OverviewEastWestDetail::SetFwInsMaxFlowBps(const int64_t& _fwInsMaxFlowBps)
{
    m_fwInsMaxFlowBps = _fwInsMaxFlowBps;
    m_fwInsMaxFlowBpsHasBeenSet = true;
}

bool OverviewEastWestDetail::FwInsMaxFlowBpsHasBeenSet() const
{
    return m_fwInsMaxFlowBpsHasBeenSet;
}

int64_t OverviewEastWestDetail::GetClusterVpcMaxFlowBps() const
{
    return m_clusterVpcMaxFlowBps;
}

void OverviewEastWestDetail::SetClusterVpcMaxFlowBps(const int64_t& _clusterVpcMaxFlowBps)
{
    m_clusterVpcMaxFlowBps = _clusterVpcMaxFlowBps;
    m_clusterVpcMaxFlowBpsHasBeenSet = true;
}

bool OverviewEastWestDetail::ClusterVpcMaxFlowBpsHasBeenSet() const
{
    return m_clusterVpcMaxFlowBpsHasBeenSet;
}

