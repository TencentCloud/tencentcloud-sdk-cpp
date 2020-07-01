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

#include <tencentcloud/postgres/v20170312/model/DBInstance.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Postgres::V20170312::Model;
using namespace rapidjson;
using namespace std;

DBInstance::DBInstance() :
    m_regionHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_dBInstanceIdHasBeenSet(false),
    m_dBInstanceNameHasBeenSet(false),
    m_dBInstanceStatusHasBeenSet(false),
    m_dBInstanceMemoryHasBeenSet(false),
    m_dBInstanceStorageHasBeenSet(false),
    m_dBInstanceCpuHasBeenSet(false),
    m_dBInstanceClassHasBeenSet(false),
    m_dBInstanceTypeHasBeenSet(false),
    m_dBInstanceVersionHasBeenSet(false),
    m_dBCharsetHasBeenSet(false),
    m_dBVersionHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_isolatedTimeHasBeenSet(false),
    m_payTypeHasBeenSet(false),
    m_autoRenewHasBeenSet(false),
    m_dBInstanceNetInfoHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_uidHasBeenSet(false),
    m_supportIpv6HasBeenSet(false)
{
}

CoreInternalOutcome DBInstance::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Error("response `DBInstance.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Error("response `DBInstance.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `DBInstance.ProjectId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetUint64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Error("response `DBInstance.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Error("response `DBInstance.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("DBInstanceId") && !value["DBInstanceId"].IsNull())
    {
        if (!value["DBInstanceId"].IsString())
        {
            return CoreInternalOutcome(Error("response `DBInstance.DBInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dBInstanceId = string(value["DBInstanceId"].GetString());
        m_dBInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("DBInstanceName") && !value["DBInstanceName"].IsNull())
    {
        if (!value["DBInstanceName"].IsString())
        {
            return CoreInternalOutcome(Error("response `DBInstance.DBInstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dBInstanceName = string(value["DBInstanceName"].GetString());
        m_dBInstanceNameHasBeenSet = true;
    }

    if (value.HasMember("DBInstanceStatus") && !value["DBInstanceStatus"].IsNull())
    {
        if (!value["DBInstanceStatus"].IsString())
        {
            return CoreInternalOutcome(Error("response `DBInstance.DBInstanceStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dBInstanceStatus = string(value["DBInstanceStatus"].GetString());
        m_dBInstanceStatusHasBeenSet = true;
    }

    if (value.HasMember("DBInstanceMemory") && !value["DBInstanceMemory"].IsNull())
    {
        if (!value["DBInstanceMemory"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `DBInstance.DBInstanceMemory` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dBInstanceMemory = value["DBInstanceMemory"].GetUint64();
        m_dBInstanceMemoryHasBeenSet = true;
    }

    if (value.HasMember("DBInstanceStorage") && !value["DBInstanceStorage"].IsNull())
    {
        if (!value["DBInstanceStorage"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `DBInstance.DBInstanceStorage` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dBInstanceStorage = value["DBInstanceStorage"].GetUint64();
        m_dBInstanceStorageHasBeenSet = true;
    }

    if (value.HasMember("DBInstanceCpu") && !value["DBInstanceCpu"].IsNull())
    {
        if (!value["DBInstanceCpu"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `DBInstance.DBInstanceCpu` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dBInstanceCpu = value["DBInstanceCpu"].GetUint64();
        m_dBInstanceCpuHasBeenSet = true;
    }

    if (value.HasMember("DBInstanceClass") && !value["DBInstanceClass"].IsNull())
    {
        if (!value["DBInstanceClass"].IsString())
        {
            return CoreInternalOutcome(Error("response `DBInstance.DBInstanceClass` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dBInstanceClass = string(value["DBInstanceClass"].GetString());
        m_dBInstanceClassHasBeenSet = true;
    }

    if (value.HasMember("DBInstanceType") && !value["DBInstanceType"].IsNull())
    {
        if (!value["DBInstanceType"].IsString())
        {
            return CoreInternalOutcome(Error("response `DBInstance.DBInstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dBInstanceType = string(value["DBInstanceType"].GetString());
        m_dBInstanceTypeHasBeenSet = true;
    }

    if (value.HasMember("DBInstanceVersion") && !value["DBInstanceVersion"].IsNull())
    {
        if (!value["DBInstanceVersion"].IsString())
        {
            return CoreInternalOutcome(Error("response `DBInstance.DBInstanceVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dBInstanceVersion = string(value["DBInstanceVersion"].GetString());
        m_dBInstanceVersionHasBeenSet = true;
    }

    if (value.HasMember("DBCharset") && !value["DBCharset"].IsNull())
    {
        if (!value["DBCharset"].IsString())
        {
            return CoreInternalOutcome(Error("response `DBInstance.DBCharset` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dBCharset = string(value["DBCharset"].GetString());
        m_dBCharsetHasBeenSet = true;
    }

    if (value.HasMember("DBVersion") && !value["DBVersion"].IsNull())
    {
        if (!value["DBVersion"].IsString())
        {
            return CoreInternalOutcome(Error("response `DBInstance.DBVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dBVersion = string(value["DBVersion"].GetString());
        m_dBVersionHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `DBInstance.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `DBInstance.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `DBInstance.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("IsolatedTime") && !value["IsolatedTime"].IsNull())
    {
        if (!value["IsolatedTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `DBInstance.IsolatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isolatedTime = string(value["IsolatedTime"].GetString());
        m_isolatedTimeHasBeenSet = true;
    }

    if (value.HasMember("PayType") && !value["PayType"].IsNull())
    {
        if (!value["PayType"].IsString())
        {
            return CoreInternalOutcome(Error("response `DBInstance.PayType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payType = string(value["PayType"].GetString());
        m_payTypeHasBeenSet = true;
    }

    if (value.HasMember("AutoRenew") && !value["AutoRenew"].IsNull())
    {
        if (!value["AutoRenew"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `DBInstance.AutoRenew` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_autoRenew = value["AutoRenew"].GetUint64();
        m_autoRenewHasBeenSet = true;
    }

    if (value.HasMember("DBInstanceNetInfo") && !value["DBInstanceNetInfo"].IsNull())
    {
        if (!value["DBInstanceNetInfo"].IsArray())
            return CoreInternalOutcome(Error("response `DBInstance.DBInstanceNetInfo` is not array type"));

        const Value &tmpValue = value["DBInstanceNetInfo"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
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

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Error("response `DBInstance.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `DBInstance.AppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetUint64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("Uid") && !value["Uid"].IsNull())
    {
        if (!value["Uid"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `DBInstance.Uid` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_uid = value["Uid"].GetUint64();
        m_uidHasBeenSet = true;
    }

    if (value.HasMember("SupportIpv6") && !value["SupportIpv6"].IsNull())
    {
        if (!value["SupportIpv6"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `DBInstance.SupportIpv6` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_supportIpv6 = value["SupportIpv6"].GetUint64();
        m_supportIpv6HasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DBInstance::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_regionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectId, allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_dBInstanceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DBInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_dBInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_dBInstanceNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DBInstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_dBInstanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_dBInstanceStatusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DBInstanceStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_dBInstanceStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_dBInstanceMemoryHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DBInstanceMemory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dBInstanceMemory, allocator);
    }

    if (m_dBInstanceStorageHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DBInstanceStorage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dBInstanceStorage, allocator);
    }

    if (m_dBInstanceCpuHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DBInstanceCpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dBInstanceCpu, allocator);
    }

    if (m_dBInstanceClassHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DBInstanceClass";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_dBInstanceClass.c_str(), allocator).Move(), allocator);
    }

    if (m_dBInstanceTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DBInstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_dBInstanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_dBInstanceVersionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DBInstanceVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_dBInstanceVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_dBCharsetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DBCharset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_dBCharset.c_str(), allocator).Move(), allocator);
    }

    if (m_dBVersionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DBVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_dBVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_isolatedTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IsolatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_isolatedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_payTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PayType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_payType.c_str(), allocator).Move(), allocator);
    }

    if (m_autoRenewHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AutoRenew";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoRenew, allocator);
    }

    if (m_dBInstanceNetInfoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DBInstanceNetInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dBInstanceNetInfo.begin(); itr != m_dBInstanceNetInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_typeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_uidHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Uid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_uid, allocator);
    }

    if (m_supportIpv6HasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SupportIpv6";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_supportIpv6, allocator);
    }

}


string DBInstance::GetRegion() const
{
    return m_region;
}

void DBInstance::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool DBInstance::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string DBInstance::GetZone() const
{
    return m_zone;
}

void DBInstance::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool DBInstance::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

uint64_t DBInstance::GetProjectId() const
{
    return m_projectId;
}

void DBInstance::SetProjectId(const uint64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DBInstance::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string DBInstance::GetVpcId() const
{
    return m_vpcId;
}

void DBInstance::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool DBInstance::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string DBInstance::GetSubnetId() const
{
    return m_subnetId;
}

void DBInstance::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool DBInstance::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string DBInstance::GetDBInstanceId() const
{
    return m_dBInstanceId;
}

void DBInstance::SetDBInstanceId(const string& _dBInstanceId)
{
    m_dBInstanceId = _dBInstanceId;
    m_dBInstanceIdHasBeenSet = true;
}

bool DBInstance::DBInstanceIdHasBeenSet() const
{
    return m_dBInstanceIdHasBeenSet;
}

string DBInstance::GetDBInstanceName() const
{
    return m_dBInstanceName;
}

void DBInstance::SetDBInstanceName(const string& _dBInstanceName)
{
    m_dBInstanceName = _dBInstanceName;
    m_dBInstanceNameHasBeenSet = true;
}

bool DBInstance::DBInstanceNameHasBeenSet() const
{
    return m_dBInstanceNameHasBeenSet;
}

string DBInstance::GetDBInstanceStatus() const
{
    return m_dBInstanceStatus;
}

void DBInstance::SetDBInstanceStatus(const string& _dBInstanceStatus)
{
    m_dBInstanceStatus = _dBInstanceStatus;
    m_dBInstanceStatusHasBeenSet = true;
}

bool DBInstance::DBInstanceStatusHasBeenSet() const
{
    return m_dBInstanceStatusHasBeenSet;
}

uint64_t DBInstance::GetDBInstanceMemory() const
{
    return m_dBInstanceMemory;
}

void DBInstance::SetDBInstanceMemory(const uint64_t& _dBInstanceMemory)
{
    m_dBInstanceMemory = _dBInstanceMemory;
    m_dBInstanceMemoryHasBeenSet = true;
}

bool DBInstance::DBInstanceMemoryHasBeenSet() const
{
    return m_dBInstanceMemoryHasBeenSet;
}

uint64_t DBInstance::GetDBInstanceStorage() const
{
    return m_dBInstanceStorage;
}

void DBInstance::SetDBInstanceStorage(const uint64_t& _dBInstanceStorage)
{
    m_dBInstanceStorage = _dBInstanceStorage;
    m_dBInstanceStorageHasBeenSet = true;
}

bool DBInstance::DBInstanceStorageHasBeenSet() const
{
    return m_dBInstanceStorageHasBeenSet;
}

uint64_t DBInstance::GetDBInstanceCpu() const
{
    return m_dBInstanceCpu;
}

void DBInstance::SetDBInstanceCpu(const uint64_t& _dBInstanceCpu)
{
    m_dBInstanceCpu = _dBInstanceCpu;
    m_dBInstanceCpuHasBeenSet = true;
}

bool DBInstance::DBInstanceCpuHasBeenSet() const
{
    return m_dBInstanceCpuHasBeenSet;
}

string DBInstance::GetDBInstanceClass() const
{
    return m_dBInstanceClass;
}

void DBInstance::SetDBInstanceClass(const string& _dBInstanceClass)
{
    m_dBInstanceClass = _dBInstanceClass;
    m_dBInstanceClassHasBeenSet = true;
}

bool DBInstance::DBInstanceClassHasBeenSet() const
{
    return m_dBInstanceClassHasBeenSet;
}

string DBInstance::GetDBInstanceType() const
{
    return m_dBInstanceType;
}

void DBInstance::SetDBInstanceType(const string& _dBInstanceType)
{
    m_dBInstanceType = _dBInstanceType;
    m_dBInstanceTypeHasBeenSet = true;
}

bool DBInstance::DBInstanceTypeHasBeenSet() const
{
    return m_dBInstanceTypeHasBeenSet;
}

string DBInstance::GetDBInstanceVersion() const
{
    return m_dBInstanceVersion;
}

void DBInstance::SetDBInstanceVersion(const string& _dBInstanceVersion)
{
    m_dBInstanceVersion = _dBInstanceVersion;
    m_dBInstanceVersionHasBeenSet = true;
}

bool DBInstance::DBInstanceVersionHasBeenSet() const
{
    return m_dBInstanceVersionHasBeenSet;
}

string DBInstance::GetDBCharset() const
{
    return m_dBCharset;
}

void DBInstance::SetDBCharset(const string& _dBCharset)
{
    m_dBCharset = _dBCharset;
    m_dBCharsetHasBeenSet = true;
}

bool DBInstance::DBCharsetHasBeenSet() const
{
    return m_dBCharsetHasBeenSet;
}

string DBInstance::GetDBVersion() const
{
    return m_dBVersion;
}

void DBInstance::SetDBVersion(const string& _dBVersion)
{
    m_dBVersion = _dBVersion;
    m_dBVersionHasBeenSet = true;
}

bool DBInstance::DBVersionHasBeenSet() const
{
    return m_dBVersionHasBeenSet;
}

string DBInstance::GetCreateTime() const
{
    return m_createTime;
}

void DBInstance::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DBInstance::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DBInstance::GetUpdateTime() const
{
    return m_updateTime;
}

void DBInstance::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool DBInstance::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string DBInstance::GetExpireTime() const
{
    return m_expireTime;
}

void DBInstance::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool DBInstance::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string DBInstance::GetIsolatedTime() const
{
    return m_isolatedTime;
}

void DBInstance::SetIsolatedTime(const string& _isolatedTime)
{
    m_isolatedTime = _isolatedTime;
    m_isolatedTimeHasBeenSet = true;
}

bool DBInstance::IsolatedTimeHasBeenSet() const
{
    return m_isolatedTimeHasBeenSet;
}

string DBInstance::GetPayType() const
{
    return m_payType;
}

void DBInstance::SetPayType(const string& _payType)
{
    m_payType = _payType;
    m_payTypeHasBeenSet = true;
}

bool DBInstance::PayTypeHasBeenSet() const
{
    return m_payTypeHasBeenSet;
}

uint64_t DBInstance::GetAutoRenew() const
{
    return m_autoRenew;
}

void DBInstance::SetAutoRenew(const uint64_t& _autoRenew)
{
    m_autoRenew = _autoRenew;
    m_autoRenewHasBeenSet = true;
}

bool DBInstance::AutoRenewHasBeenSet() const
{
    return m_autoRenewHasBeenSet;
}

vector<DBInstanceNetInfo> DBInstance::GetDBInstanceNetInfo() const
{
    return m_dBInstanceNetInfo;
}

void DBInstance::SetDBInstanceNetInfo(const vector<DBInstanceNetInfo>& _dBInstanceNetInfo)
{
    m_dBInstanceNetInfo = _dBInstanceNetInfo;
    m_dBInstanceNetInfoHasBeenSet = true;
}

bool DBInstance::DBInstanceNetInfoHasBeenSet() const
{
    return m_dBInstanceNetInfoHasBeenSet;
}

string DBInstance::GetType() const
{
    return m_type;
}

void DBInstance::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DBInstance::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

uint64_t DBInstance::GetAppId() const
{
    return m_appId;
}

void DBInstance::SetAppId(const uint64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool DBInstance::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

uint64_t DBInstance::GetUid() const
{
    return m_uid;
}

void DBInstance::SetUid(const uint64_t& _uid)
{
    m_uid = _uid;
    m_uidHasBeenSet = true;
}

bool DBInstance::UidHasBeenSet() const
{
    return m_uidHasBeenSet;
}

uint64_t DBInstance::GetSupportIpv6() const
{
    return m_supportIpv6;
}

void DBInstance::SetSupportIpv6(const uint64_t& _supportIpv6)
{
    m_supportIpv6 = _supportIpv6;
    m_supportIpv6HasBeenSet = true;
}

bool DBInstance::SupportIpv6HasBeenSet() const
{
    return m_supportIpv6HasBeenSet;
}

