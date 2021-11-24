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

#include <tencentcloud/postgres/v20170312/model/ReadOnlyGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Postgres::V20170312::Model;
using namespace std;

ReadOnlyGroup::ReadOnlyGroup() :
    m_readOnlyGroupIdHasBeenSet(false),
    m_readOnlyGroupNameHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_masterDBInstanceIdHasBeenSet(false),
    m_minDelayEliminateReserveHasBeenSet(false),
    m_maxReplayLatencyHasBeenSet(false),
    m_replayLatencyEliminateHasBeenSet(false),
    m_maxReplayLagHasBeenSet(false),
    m_replayLagEliminateHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_readOnlyDBInstanceListHasBeenSet(false),
    m_rebalanceHasBeenSet(false),
    m_dBInstanceNetInfoHasBeenSet(false),
    m_networkAccessListHasBeenSet(false)
{
}

CoreInternalOutcome ReadOnlyGroup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ReadOnlyGroupId") && !value["ReadOnlyGroupId"].IsNull())
    {
        if (!value["ReadOnlyGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReadOnlyGroup.ReadOnlyGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_readOnlyGroupId = string(value["ReadOnlyGroupId"].GetString());
        m_readOnlyGroupIdHasBeenSet = true;
    }

    if (value.HasMember("ReadOnlyGroupName") && !value["ReadOnlyGroupName"].IsNull())
    {
        if (!value["ReadOnlyGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReadOnlyGroup.ReadOnlyGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_readOnlyGroupName = string(value["ReadOnlyGroupName"].GetString());
        m_readOnlyGroupNameHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ReadOnlyGroup.ProjectId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetUint64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("MasterDBInstanceId") && !value["MasterDBInstanceId"].IsNull())
    {
        if (!value["MasterDBInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReadOnlyGroup.MasterDBInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_masterDBInstanceId = string(value["MasterDBInstanceId"].GetString());
        m_masterDBInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("MinDelayEliminateReserve") && !value["MinDelayEliminateReserve"].IsNull())
    {
        if (!value["MinDelayEliminateReserve"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ReadOnlyGroup.MinDelayEliminateReserve` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_minDelayEliminateReserve = value["MinDelayEliminateReserve"].GetInt64();
        m_minDelayEliminateReserveHasBeenSet = true;
    }

    if (value.HasMember("MaxReplayLatency") && !value["MaxReplayLatency"].IsNull())
    {
        if (!value["MaxReplayLatency"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ReadOnlyGroup.MaxReplayLatency` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxReplayLatency = value["MaxReplayLatency"].GetInt64();
        m_maxReplayLatencyHasBeenSet = true;
    }

    if (value.HasMember("ReplayLatencyEliminate") && !value["ReplayLatencyEliminate"].IsNull())
    {
        if (!value["ReplayLatencyEliminate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ReadOnlyGroup.ReplayLatencyEliminate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_replayLatencyEliminate = value["ReplayLatencyEliminate"].GetInt64();
        m_replayLatencyEliminateHasBeenSet = true;
    }

    if (value.HasMember("MaxReplayLag") && !value["MaxReplayLag"].IsNull())
    {
        if (!value["MaxReplayLag"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ReadOnlyGroup.MaxReplayLag` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_maxReplayLag = value["MaxReplayLag"].GetDouble();
        m_maxReplayLagHasBeenSet = true;
    }

    if (value.HasMember("ReplayLagEliminate") && !value["ReplayLagEliminate"].IsNull())
    {
        if (!value["ReplayLagEliminate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ReadOnlyGroup.ReplayLagEliminate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_replayLagEliminate = value["ReplayLagEliminate"].GetInt64();
        m_replayLagEliminateHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReadOnlyGroup.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReadOnlyGroup.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReadOnlyGroup.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReadOnlyGroup.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReadOnlyGroup.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ReadOnlyDBInstanceList") && !value["ReadOnlyDBInstanceList"].IsNull())
    {
        if (!value["ReadOnlyDBInstanceList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ReadOnlyGroup.ReadOnlyDBInstanceList` is not array type"));

        const rapidjson::Value &tmpValue = value["ReadOnlyDBInstanceList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DBInstance item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_readOnlyDBInstanceList.push_back(item);
        }
        m_readOnlyDBInstanceListHasBeenSet = true;
    }

    if (value.HasMember("Rebalance") && !value["Rebalance"].IsNull())
    {
        if (!value["Rebalance"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ReadOnlyGroup.Rebalance` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rebalance = value["Rebalance"].GetInt64();
        m_rebalanceHasBeenSet = true;
    }

    if (value.HasMember("DBInstanceNetInfo") && !value["DBInstanceNetInfo"].IsNull())
    {
        if (!value["DBInstanceNetInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ReadOnlyGroup.DBInstanceNetInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["DBInstanceNetInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DBInstanceNetInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dBInstanceNetInfo.push_back(item);
        }
        m_dBInstanceNetInfoHasBeenSet = true;
    }

    if (value.HasMember("NetworkAccessList") && !value["NetworkAccessList"].IsNull())
    {
        if (!value["NetworkAccessList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ReadOnlyGroup.NetworkAccessList` is not array type"));

        const rapidjson::Value &tmpValue = value["NetworkAccessList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            NetworkAccess item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_networkAccessList.push_back(item);
        }
        m_networkAccessListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReadOnlyGroup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_readOnlyGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadOnlyGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_readOnlyGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_readOnlyGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadOnlyGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_readOnlyGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectId, allocator);
    }

    if (m_masterDBInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MasterDBInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_masterDBInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_minDelayEliminateReserveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinDelayEliminateReserve";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minDelayEliminateReserve, allocator);
    }

    if (m_maxReplayLatencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxReplayLatency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxReplayLatency, allocator);
    }

    if (m_replayLatencyEliminateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplayLatencyEliminate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_replayLatencyEliminate, allocator);
    }

    if (m_maxReplayLagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxReplayLag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxReplayLag, allocator);
    }

    if (m_replayLagEliminateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplayLagEliminate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_replayLagEliminate, allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_readOnlyDBInstanceListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadOnlyDBInstanceList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_readOnlyDBInstanceList.begin(); itr != m_readOnlyDBInstanceList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_rebalanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rebalance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rebalance, allocator);
    }

    if (m_dBInstanceNetInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBInstanceNetInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dBInstanceNetInfo.begin(); itr != m_dBInstanceNetInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_networkAccessListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkAccessList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_networkAccessList.begin(); itr != m_networkAccessList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string ReadOnlyGroup::GetReadOnlyGroupId() const
{
    return m_readOnlyGroupId;
}

void ReadOnlyGroup::SetReadOnlyGroupId(const string& _readOnlyGroupId)
{
    m_readOnlyGroupId = _readOnlyGroupId;
    m_readOnlyGroupIdHasBeenSet = true;
}

bool ReadOnlyGroup::ReadOnlyGroupIdHasBeenSet() const
{
    return m_readOnlyGroupIdHasBeenSet;
}

string ReadOnlyGroup::GetReadOnlyGroupName() const
{
    return m_readOnlyGroupName;
}

void ReadOnlyGroup::SetReadOnlyGroupName(const string& _readOnlyGroupName)
{
    m_readOnlyGroupName = _readOnlyGroupName;
    m_readOnlyGroupNameHasBeenSet = true;
}

bool ReadOnlyGroup::ReadOnlyGroupNameHasBeenSet() const
{
    return m_readOnlyGroupNameHasBeenSet;
}

uint64_t ReadOnlyGroup::GetProjectId() const
{
    return m_projectId;
}

void ReadOnlyGroup::SetProjectId(const uint64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ReadOnlyGroup::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string ReadOnlyGroup::GetMasterDBInstanceId() const
{
    return m_masterDBInstanceId;
}

void ReadOnlyGroup::SetMasterDBInstanceId(const string& _masterDBInstanceId)
{
    m_masterDBInstanceId = _masterDBInstanceId;
    m_masterDBInstanceIdHasBeenSet = true;
}

bool ReadOnlyGroup::MasterDBInstanceIdHasBeenSet() const
{
    return m_masterDBInstanceIdHasBeenSet;
}

int64_t ReadOnlyGroup::GetMinDelayEliminateReserve() const
{
    return m_minDelayEliminateReserve;
}

void ReadOnlyGroup::SetMinDelayEliminateReserve(const int64_t& _minDelayEliminateReserve)
{
    m_minDelayEliminateReserve = _minDelayEliminateReserve;
    m_minDelayEliminateReserveHasBeenSet = true;
}

bool ReadOnlyGroup::MinDelayEliminateReserveHasBeenSet() const
{
    return m_minDelayEliminateReserveHasBeenSet;
}

int64_t ReadOnlyGroup::GetMaxReplayLatency() const
{
    return m_maxReplayLatency;
}

void ReadOnlyGroup::SetMaxReplayLatency(const int64_t& _maxReplayLatency)
{
    m_maxReplayLatency = _maxReplayLatency;
    m_maxReplayLatencyHasBeenSet = true;
}

bool ReadOnlyGroup::MaxReplayLatencyHasBeenSet() const
{
    return m_maxReplayLatencyHasBeenSet;
}

int64_t ReadOnlyGroup::GetReplayLatencyEliminate() const
{
    return m_replayLatencyEliminate;
}

void ReadOnlyGroup::SetReplayLatencyEliminate(const int64_t& _replayLatencyEliminate)
{
    m_replayLatencyEliminate = _replayLatencyEliminate;
    m_replayLatencyEliminateHasBeenSet = true;
}

bool ReadOnlyGroup::ReplayLatencyEliminateHasBeenSet() const
{
    return m_replayLatencyEliminateHasBeenSet;
}

double ReadOnlyGroup::GetMaxReplayLag() const
{
    return m_maxReplayLag;
}

void ReadOnlyGroup::SetMaxReplayLag(const double& _maxReplayLag)
{
    m_maxReplayLag = _maxReplayLag;
    m_maxReplayLagHasBeenSet = true;
}

bool ReadOnlyGroup::MaxReplayLagHasBeenSet() const
{
    return m_maxReplayLagHasBeenSet;
}

int64_t ReadOnlyGroup::GetReplayLagEliminate() const
{
    return m_replayLagEliminate;
}

void ReadOnlyGroup::SetReplayLagEliminate(const int64_t& _replayLagEliminate)
{
    m_replayLagEliminate = _replayLagEliminate;
    m_replayLagEliminateHasBeenSet = true;
}

bool ReadOnlyGroup::ReplayLagEliminateHasBeenSet() const
{
    return m_replayLagEliminateHasBeenSet;
}

string ReadOnlyGroup::GetVpcId() const
{
    return m_vpcId;
}

void ReadOnlyGroup::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool ReadOnlyGroup::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string ReadOnlyGroup::GetSubnetId() const
{
    return m_subnetId;
}

void ReadOnlyGroup::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool ReadOnlyGroup::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string ReadOnlyGroup::GetRegion() const
{
    return m_region;
}

void ReadOnlyGroup::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool ReadOnlyGroup::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string ReadOnlyGroup::GetZone() const
{
    return m_zone;
}

void ReadOnlyGroup::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool ReadOnlyGroup::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string ReadOnlyGroup::GetStatus() const
{
    return m_status;
}

void ReadOnlyGroup::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ReadOnlyGroup::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<DBInstance> ReadOnlyGroup::GetReadOnlyDBInstanceList() const
{
    return m_readOnlyDBInstanceList;
}

void ReadOnlyGroup::SetReadOnlyDBInstanceList(const vector<DBInstance>& _readOnlyDBInstanceList)
{
    m_readOnlyDBInstanceList = _readOnlyDBInstanceList;
    m_readOnlyDBInstanceListHasBeenSet = true;
}

bool ReadOnlyGroup::ReadOnlyDBInstanceListHasBeenSet() const
{
    return m_readOnlyDBInstanceListHasBeenSet;
}

int64_t ReadOnlyGroup::GetRebalance() const
{
    return m_rebalance;
}

void ReadOnlyGroup::SetRebalance(const int64_t& _rebalance)
{
    m_rebalance = _rebalance;
    m_rebalanceHasBeenSet = true;
}

bool ReadOnlyGroup::RebalanceHasBeenSet() const
{
    return m_rebalanceHasBeenSet;
}

vector<DBInstanceNetInfo> ReadOnlyGroup::GetDBInstanceNetInfo() const
{
    return m_dBInstanceNetInfo;
}

void ReadOnlyGroup::SetDBInstanceNetInfo(const vector<DBInstanceNetInfo>& _dBInstanceNetInfo)
{
    m_dBInstanceNetInfo = _dBInstanceNetInfo;
    m_dBInstanceNetInfoHasBeenSet = true;
}

bool ReadOnlyGroup::DBInstanceNetInfoHasBeenSet() const
{
    return m_dBInstanceNetInfoHasBeenSet;
}

vector<NetworkAccess> ReadOnlyGroup::GetNetworkAccessList() const
{
    return m_networkAccessList;
}

void ReadOnlyGroup::SetNetworkAccessList(const vector<NetworkAccess>& _networkAccessList)
{
    m_networkAccessList = _networkAccessList;
    m_networkAccessListHasBeenSet = true;
}

bool ReadOnlyGroup::NetworkAccessListHasBeenSet() const
{
    return m_networkAccessListHasBeenSet;
}

