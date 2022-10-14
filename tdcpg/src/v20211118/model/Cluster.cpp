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

#include <tencentcloud/tdcpg/v20211118/model/Cluster.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdcpg::V20211118::Model;
using namespace std;

Cluster::Cluster() :
    m_clusterIdHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_dBVersionHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statusDescHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_storageUsedHasBeenSet(false),
    m_storageLimitHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_payPeriodEndTimeHasBeenSet(false),
    m_autoRenewFlagHasBeenSet(false),
    m_dBCharsetHasBeenSet(false),
    m_instanceCountHasBeenSet(false),
    m_endpointSetHasBeenSet(false),
    m_dBMajorVersionHasBeenSet(false),
    m_dBKernelVersionHasBeenSet(false),
    m_storagePayModeHasBeenSet(false)
{
}

CoreInternalOutcome Cluster::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("DBVersion") && !value["DBVersion"].IsNull())
    {
        if (!value["DBVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.DBVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dBVersion = string(value["DBVersion"].GetString());
        m_dBVersionHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.ProjectId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetUint64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("StatusDesc") && !value["StatusDesc"].IsNull())
    {
        if (!value["StatusDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.StatusDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusDesc = string(value["StatusDesc"].GetString());
        m_statusDescHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("StorageUsed") && !value["StorageUsed"].IsNull())
    {
        if (!value["StorageUsed"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.StorageUsed` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_storageUsed = value["StorageUsed"].GetDouble();
        m_storageUsedHasBeenSet = true;
    }

    if (value.HasMember("StorageLimit") && !value["StorageLimit"].IsNull())
    {
        if (!value["StorageLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.StorageLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_storageLimit = value["StorageLimit"].GetUint64();
        m_storageLimitHasBeenSet = true;
    }

    if (value.HasMember("PayMode") && !value["PayMode"].IsNull())
    {
        if (!value["PayMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.PayMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = string(value["PayMode"].GetString());
        m_payModeHasBeenSet = true;
    }

    if (value.HasMember("PayPeriodEndTime") && !value["PayPeriodEndTime"].IsNull())
    {
        if (!value["PayPeriodEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.PayPeriodEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payPeriodEndTime = string(value["PayPeriodEndTime"].GetString());
        m_payPeriodEndTimeHasBeenSet = true;
    }

    if (value.HasMember("AutoRenewFlag") && !value["AutoRenewFlag"].IsNull())
    {
        if (!value["AutoRenewFlag"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.AutoRenewFlag` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_autoRenewFlag = value["AutoRenewFlag"].GetUint64();
        m_autoRenewFlagHasBeenSet = true;
    }

    if (value.HasMember("DBCharset") && !value["DBCharset"].IsNull())
    {
        if (!value["DBCharset"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.DBCharset` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dBCharset = string(value["DBCharset"].GetString());
        m_dBCharsetHasBeenSet = true;
    }

    if (value.HasMember("InstanceCount") && !value["InstanceCount"].IsNull())
    {
        if (!value["InstanceCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.InstanceCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceCount = value["InstanceCount"].GetUint64();
        m_instanceCountHasBeenSet = true;
    }

    if (value.HasMember("EndpointSet") && !value["EndpointSet"].IsNull())
    {
        if (!value["EndpointSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Cluster.EndpointSet` is not array type"));

        const rapidjson::Value &tmpValue = value["EndpointSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Endpoint item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_endpointSet.push_back(item);
        }
        m_endpointSetHasBeenSet = true;
    }

    if (value.HasMember("DBMajorVersion") && !value["DBMajorVersion"].IsNull())
    {
        if (!value["DBMajorVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.DBMajorVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dBMajorVersion = string(value["DBMajorVersion"].GetString());
        m_dBMajorVersionHasBeenSet = true;
    }

    if (value.HasMember("DBKernelVersion") && !value["DBKernelVersion"].IsNull())
    {
        if (!value["DBKernelVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.DBKernelVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dBKernelVersion = string(value["DBKernelVersion"].GetString());
        m_dBKernelVersionHasBeenSet = true;
    }

    if (value.HasMember("StoragePayMode") && !value["StoragePayMode"].IsNull())
    {
        if (!value["StoragePayMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.StoragePayMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storagePayMode = string(value["StoragePayMode"].GetString());
        m_storagePayModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Cluster::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
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

    if (m_dBVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dBVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectId, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_statusDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_statusDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_storageUsedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageUsed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storageUsed, allocator);
    }

    if (m_storageLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storageLimit, allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payMode.c_str(), allocator).Move(), allocator);
    }

    if (m_payPeriodEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayPeriodEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payPeriodEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_autoRenewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoRenewFlag, allocator);
    }

    if (m_dBCharsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBCharset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dBCharset.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceCount, allocator);
    }

    if (m_endpointSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndpointSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_endpointSet.begin(); itr != m_endpointSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_dBMajorVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBMajorVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dBMajorVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_dBKernelVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBKernelVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dBKernelVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_storagePayModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StoragePayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storagePayMode.c_str(), allocator).Move(), allocator);
    }

}


string Cluster::GetClusterId() const
{
    return m_clusterId;
}

void Cluster::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool Cluster::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string Cluster::GetClusterName() const
{
    return m_clusterName;
}

void Cluster::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool Cluster::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string Cluster::GetRegion() const
{
    return m_region;
}

void Cluster::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool Cluster::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string Cluster::GetZone() const
{
    return m_zone;
}

void Cluster::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool Cluster::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string Cluster::GetDBVersion() const
{
    return m_dBVersion;
}

void Cluster::SetDBVersion(const string& _dBVersion)
{
    m_dBVersion = _dBVersion;
    m_dBVersionHasBeenSet = true;
}

bool Cluster::DBVersionHasBeenSet() const
{
    return m_dBVersionHasBeenSet;
}

uint64_t Cluster::GetProjectId() const
{
    return m_projectId;
}

void Cluster::SetProjectId(const uint64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool Cluster::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string Cluster::GetStatus() const
{
    return m_status;
}

void Cluster::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool Cluster::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string Cluster::GetStatusDesc() const
{
    return m_statusDesc;
}

void Cluster::SetStatusDesc(const string& _statusDesc)
{
    m_statusDesc = _statusDesc;
    m_statusDescHasBeenSet = true;
}

bool Cluster::StatusDescHasBeenSet() const
{
    return m_statusDescHasBeenSet;
}

string Cluster::GetCreateTime() const
{
    return m_createTime;
}

void Cluster::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool Cluster::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

double Cluster::GetStorageUsed() const
{
    return m_storageUsed;
}

void Cluster::SetStorageUsed(const double& _storageUsed)
{
    m_storageUsed = _storageUsed;
    m_storageUsedHasBeenSet = true;
}

bool Cluster::StorageUsedHasBeenSet() const
{
    return m_storageUsedHasBeenSet;
}

uint64_t Cluster::GetStorageLimit() const
{
    return m_storageLimit;
}

void Cluster::SetStorageLimit(const uint64_t& _storageLimit)
{
    m_storageLimit = _storageLimit;
    m_storageLimitHasBeenSet = true;
}

bool Cluster::StorageLimitHasBeenSet() const
{
    return m_storageLimitHasBeenSet;
}

string Cluster::GetPayMode() const
{
    return m_payMode;
}

void Cluster::SetPayMode(const string& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool Cluster::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

string Cluster::GetPayPeriodEndTime() const
{
    return m_payPeriodEndTime;
}

void Cluster::SetPayPeriodEndTime(const string& _payPeriodEndTime)
{
    m_payPeriodEndTime = _payPeriodEndTime;
    m_payPeriodEndTimeHasBeenSet = true;
}

bool Cluster::PayPeriodEndTimeHasBeenSet() const
{
    return m_payPeriodEndTimeHasBeenSet;
}

uint64_t Cluster::GetAutoRenewFlag() const
{
    return m_autoRenewFlag;
}

void Cluster::SetAutoRenewFlag(const uint64_t& _autoRenewFlag)
{
    m_autoRenewFlag = _autoRenewFlag;
    m_autoRenewFlagHasBeenSet = true;
}

bool Cluster::AutoRenewFlagHasBeenSet() const
{
    return m_autoRenewFlagHasBeenSet;
}

string Cluster::GetDBCharset() const
{
    return m_dBCharset;
}

void Cluster::SetDBCharset(const string& _dBCharset)
{
    m_dBCharset = _dBCharset;
    m_dBCharsetHasBeenSet = true;
}

bool Cluster::DBCharsetHasBeenSet() const
{
    return m_dBCharsetHasBeenSet;
}

uint64_t Cluster::GetInstanceCount() const
{
    return m_instanceCount;
}

void Cluster::SetInstanceCount(const uint64_t& _instanceCount)
{
    m_instanceCount = _instanceCount;
    m_instanceCountHasBeenSet = true;
}

bool Cluster::InstanceCountHasBeenSet() const
{
    return m_instanceCountHasBeenSet;
}

vector<Endpoint> Cluster::GetEndpointSet() const
{
    return m_endpointSet;
}

void Cluster::SetEndpointSet(const vector<Endpoint>& _endpointSet)
{
    m_endpointSet = _endpointSet;
    m_endpointSetHasBeenSet = true;
}

bool Cluster::EndpointSetHasBeenSet() const
{
    return m_endpointSetHasBeenSet;
}

string Cluster::GetDBMajorVersion() const
{
    return m_dBMajorVersion;
}

void Cluster::SetDBMajorVersion(const string& _dBMajorVersion)
{
    m_dBMajorVersion = _dBMajorVersion;
    m_dBMajorVersionHasBeenSet = true;
}

bool Cluster::DBMajorVersionHasBeenSet() const
{
    return m_dBMajorVersionHasBeenSet;
}

string Cluster::GetDBKernelVersion() const
{
    return m_dBKernelVersion;
}

void Cluster::SetDBKernelVersion(const string& _dBKernelVersion)
{
    m_dBKernelVersion = _dBKernelVersion;
    m_dBKernelVersionHasBeenSet = true;
}

bool Cluster::DBKernelVersionHasBeenSet() const
{
    return m_dBKernelVersionHasBeenSet;
}

string Cluster::GetStoragePayMode() const
{
    return m_storagePayMode;
}

void Cluster::SetStoragePayMode(const string& _storagePayMode)
{
    m_storagePayMode = _storagePayMode;
    m_storagePayModeHasBeenSet = true;
}

bool Cluster::StoragePayModeHasBeenSet() const
{
    return m_storagePayModeHasBeenSet;
}

