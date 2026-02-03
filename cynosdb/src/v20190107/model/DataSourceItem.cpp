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

#include <tencentcloud/cynosdb/v20190107/model/DataSourceItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

DataSourceItem::DataSourceItem() :
    m_instanceIdHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_dBTypeHasBeenSet(false),
    m_iPHasBeenSet(false),
    m_portHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_srcUinHasBeenSet(false),
    m_accountModeHasBeenSet(false),
    m_replicationJobStatusHasBeenSet(false)
{
}

CoreInternalOutcome DataSourceItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceItem.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceItem.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("DBType") && !value["DBType"].IsNull())
    {
        if (!value["DBType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceItem.DBType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dBType = string(value["DBType"].GetString());
        m_dBTypeHasBeenSet = true;
    }

    if (value.HasMember("IP") && !value["IP"].IsNull())
    {
        if (!value["IP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceItem.IP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iP = string(value["IP"].GetString());
        m_iPHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceItem.Port` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetInt64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceItem.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceItem.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("SrcUin") && !value["SrcUin"].IsNull())
    {
        if (!value["SrcUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceItem.SrcUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcUin = string(value["SrcUin"].GetString());
        m_srcUinHasBeenSet = true;
    }

    if (value.HasMember("AccountMode") && !value["AccountMode"].IsNull())
    {
        if (!value["AccountMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceItem.AccountMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountMode = string(value["AccountMode"].GetString());
        m_accountModeHasBeenSet = true;
    }

    if (value.HasMember("ReplicationJobStatus") && !value["ReplicationJobStatus"].IsNull())
    {
        if (!value["ReplicationJobStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceItem.ReplicationJobStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_replicationJobStatus = string(value["ReplicationJobStatus"].GetString());
        m_replicationJobStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DataSourceItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_dBTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dBType.c_str(), allocator).Move(), allocator);
    }

    if (m_iPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iP.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_port, allocator);
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

    if (m_srcUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcUin.c_str(), allocator).Move(), allocator);
    }

    if (m_accountModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accountMode.c_str(), allocator).Move(), allocator);
    }

    if (m_replicationJobStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplicationJobStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_replicationJobStatus.c_str(), allocator).Move(), allocator);
    }

}


string DataSourceItem::GetInstanceId() const
{
    return m_instanceId;
}

void DataSourceItem::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DataSourceItem::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DataSourceItem::GetClusterId() const
{
    return m_clusterId;
}

void DataSourceItem::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool DataSourceItem::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string DataSourceItem::GetDBType() const
{
    return m_dBType;
}

void DataSourceItem::SetDBType(const string& _dBType)
{
    m_dBType = _dBType;
    m_dBTypeHasBeenSet = true;
}

bool DataSourceItem::DBTypeHasBeenSet() const
{
    return m_dBTypeHasBeenSet;
}

string DataSourceItem::GetIP() const
{
    return m_iP;
}

void DataSourceItem::SetIP(const string& _iP)
{
    m_iP = _iP;
    m_iPHasBeenSet = true;
}

bool DataSourceItem::IPHasBeenSet() const
{
    return m_iPHasBeenSet;
}

int64_t DataSourceItem::GetPort() const
{
    return m_port;
}

void DataSourceItem::SetPort(const int64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool DataSourceItem::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string DataSourceItem::GetRegion() const
{
    return m_region;
}

void DataSourceItem::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool DataSourceItem::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string DataSourceItem::GetZone() const
{
    return m_zone;
}

void DataSourceItem::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool DataSourceItem::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string DataSourceItem::GetSrcUin() const
{
    return m_srcUin;
}

void DataSourceItem::SetSrcUin(const string& _srcUin)
{
    m_srcUin = _srcUin;
    m_srcUinHasBeenSet = true;
}

bool DataSourceItem::SrcUinHasBeenSet() const
{
    return m_srcUinHasBeenSet;
}

string DataSourceItem::GetAccountMode() const
{
    return m_accountMode;
}

void DataSourceItem::SetAccountMode(const string& _accountMode)
{
    m_accountMode = _accountMode;
    m_accountModeHasBeenSet = true;
}

bool DataSourceItem::AccountModeHasBeenSet() const
{
    return m_accountModeHasBeenSet;
}

string DataSourceItem::GetReplicationJobStatus() const
{
    return m_replicationJobStatus;
}

void DataSourceItem::SetReplicationJobStatus(const string& _replicationJobStatus)
{
    m_replicationJobStatus = _replicationJobStatus;
    m_replicationJobStatusHasBeenSet = true;
}

bool DataSourceItem::ReplicationJobStatusHasBeenSet() const
{
    return m_replicationJobStatusHasBeenSet;
}

