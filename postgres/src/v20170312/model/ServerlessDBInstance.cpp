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

#include <tencentcloud/postgres/v20170312/model/ServerlessDBInstance.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Postgres::V20170312::Model;
using namespace rapidjson;
using namespace std;

ServerlessDBInstance::ServerlessDBInstance() :
    m_dBInstanceIdHasBeenSet(false),
    m_dBInstanceNameHasBeenSet(false),
    m_dBInstanceStatusHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_dBCharsetHasBeenSet(false),
    m_dBVersionHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_dBInstanceNetInfoHasBeenSet(false),
    m_dBAccountSetHasBeenSet(false),
    m_dBDatabaseListHasBeenSet(false)
{
}

CoreInternalOutcome ServerlessDBInstance::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("DBInstanceId") && !value["DBInstanceId"].IsNull())
    {
        if (!value["DBInstanceId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ServerlessDBInstance.DBInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dBInstanceId = string(value["DBInstanceId"].GetString());
        m_dBInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("DBInstanceName") && !value["DBInstanceName"].IsNull())
    {
        if (!value["DBInstanceName"].IsString())
        {
            return CoreInternalOutcome(Error("response `ServerlessDBInstance.DBInstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dBInstanceName = string(value["DBInstanceName"].GetString());
        m_dBInstanceNameHasBeenSet = true;
    }

    if (value.HasMember("DBInstanceStatus") && !value["DBInstanceStatus"].IsNull())
    {
        if (!value["DBInstanceStatus"].IsString())
        {
            return CoreInternalOutcome(Error("response `ServerlessDBInstance.DBInstanceStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dBInstanceStatus = string(value["DBInstanceStatus"].GetString());
        m_dBInstanceStatusHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Error("response `ServerlessDBInstance.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Error("response `ServerlessDBInstance.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ServerlessDBInstance.ProjectId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetInt64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ServerlessDBInstance.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ServerlessDBInstance.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("DBCharset") && !value["DBCharset"].IsNull())
    {
        if (!value["DBCharset"].IsString())
        {
            return CoreInternalOutcome(Error("response `ServerlessDBInstance.DBCharset` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dBCharset = string(value["DBCharset"].GetString());
        m_dBCharsetHasBeenSet = true;
    }

    if (value.HasMember("DBVersion") && !value["DBVersion"].IsNull())
    {
        if (!value["DBVersion"].IsString())
        {
            return CoreInternalOutcome(Error("response `ServerlessDBInstance.DBVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dBVersion = string(value["DBVersion"].GetString());
        m_dBVersionHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `ServerlessDBInstance.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("DBInstanceNetInfo") && !value["DBInstanceNetInfo"].IsNull())
    {
        if (!value["DBInstanceNetInfo"].IsArray())
            return CoreInternalOutcome(Error("response `ServerlessDBInstance.DBInstanceNetInfo` is not array type"));

        const Value &tmpValue = value["DBInstanceNetInfo"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ServerlessDBInstanceNetInfo item;
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

    if (value.HasMember("DBAccountSet") && !value["DBAccountSet"].IsNull())
    {
        if (!value["DBAccountSet"].IsArray())
            return CoreInternalOutcome(Error("response `ServerlessDBInstance.DBAccountSet` is not array type"));

        const Value &tmpValue = value["DBAccountSet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ServerlessDBAccount item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dBAccountSet.push_back(item);
        }
        m_dBAccountSetHasBeenSet = true;
    }

    if (value.HasMember("DBDatabaseList") && !value["DBDatabaseList"].IsNull())
    {
        if (!value["DBDatabaseList"].IsArray())
            return CoreInternalOutcome(Error("response `ServerlessDBInstance.DBDatabaseList` is not array type"));

        const Value &tmpValue = value["DBDatabaseList"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_dBDatabaseList.push_back((*itr).GetString());
        }
        m_dBDatabaseListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ServerlessDBInstance::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

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

    if (m_dBAccountSetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DBAccountSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dBAccountSet.begin(); itr != m_dBAccountSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_dBDatabaseListHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DBDatabaseList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_dBDatabaseList.begin(); itr != m_dBDatabaseList.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string ServerlessDBInstance::GetDBInstanceId() const
{
    return m_dBInstanceId;
}

void ServerlessDBInstance::SetDBInstanceId(const string& _dBInstanceId)
{
    m_dBInstanceId = _dBInstanceId;
    m_dBInstanceIdHasBeenSet = true;
}

bool ServerlessDBInstance::DBInstanceIdHasBeenSet() const
{
    return m_dBInstanceIdHasBeenSet;
}

string ServerlessDBInstance::GetDBInstanceName() const
{
    return m_dBInstanceName;
}

void ServerlessDBInstance::SetDBInstanceName(const string& _dBInstanceName)
{
    m_dBInstanceName = _dBInstanceName;
    m_dBInstanceNameHasBeenSet = true;
}

bool ServerlessDBInstance::DBInstanceNameHasBeenSet() const
{
    return m_dBInstanceNameHasBeenSet;
}

string ServerlessDBInstance::GetDBInstanceStatus() const
{
    return m_dBInstanceStatus;
}

void ServerlessDBInstance::SetDBInstanceStatus(const string& _dBInstanceStatus)
{
    m_dBInstanceStatus = _dBInstanceStatus;
    m_dBInstanceStatusHasBeenSet = true;
}

bool ServerlessDBInstance::DBInstanceStatusHasBeenSet() const
{
    return m_dBInstanceStatusHasBeenSet;
}

string ServerlessDBInstance::GetRegion() const
{
    return m_region;
}

void ServerlessDBInstance::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool ServerlessDBInstance::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string ServerlessDBInstance::GetZone() const
{
    return m_zone;
}

void ServerlessDBInstance::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool ServerlessDBInstance::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

int64_t ServerlessDBInstance::GetProjectId() const
{
    return m_projectId;
}

void ServerlessDBInstance::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ServerlessDBInstance::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string ServerlessDBInstance::GetVpcId() const
{
    return m_vpcId;
}

void ServerlessDBInstance::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool ServerlessDBInstance::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string ServerlessDBInstance::GetSubnetId() const
{
    return m_subnetId;
}

void ServerlessDBInstance::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool ServerlessDBInstance::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string ServerlessDBInstance::GetDBCharset() const
{
    return m_dBCharset;
}

void ServerlessDBInstance::SetDBCharset(const string& _dBCharset)
{
    m_dBCharset = _dBCharset;
    m_dBCharsetHasBeenSet = true;
}

bool ServerlessDBInstance::DBCharsetHasBeenSet() const
{
    return m_dBCharsetHasBeenSet;
}

string ServerlessDBInstance::GetDBVersion() const
{
    return m_dBVersion;
}

void ServerlessDBInstance::SetDBVersion(const string& _dBVersion)
{
    m_dBVersion = _dBVersion;
    m_dBVersionHasBeenSet = true;
}

bool ServerlessDBInstance::DBVersionHasBeenSet() const
{
    return m_dBVersionHasBeenSet;
}

string ServerlessDBInstance::GetCreateTime() const
{
    return m_createTime;
}

void ServerlessDBInstance::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ServerlessDBInstance::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

vector<ServerlessDBInstanceNetInfo> ServerlessDBInstance::GetDBInstanceNetInfo() const
{
    return m_dBInstanceNetInfo;
}

void ServerlessDBInstance::SetDBInstanceNetInfo(const vector<ServerlessDBInstanceNetInfo>& _dBInstanceNetInfo)
{
    m_dBInstanceNetInfo = _dBInstanceNetInfo;
    m_dBInstanceNetInfoHasBeenSet = true;
}

bool ServerlessDBInstance::DBInstanceNetInfoHasBeenSet() const
{
    return m_dBInstanceNetInfoHasBeenSet;
}

vector<ServerlessDBAccount> ServerlessDBInstance::GetDBAccountSet() const
{
    return m_dBAccountSet;
}

void ServerlessDBInstance::SetDBAccountSet(const vector<ServerlessDBAccount>& _dBAccountSet)
{
    m_dBAccountSet = _dBAccountSet;
    m_dBAccountSetHasBeenSet = true;
}

bool ServerlessDBInstance::DBAccountSetHasBeenSet() const
{
    return m_dBAccountSetHasBeenSet;
}

vector<string> ServerlessDBInstance::GetDBDatabaseList() const
{
    return m_dBDatabaseList;
}

void ServerlessDBInstance::SetDBDatabaseList(const vector<string>& _dBDatabaseList)
{
    m_dBDatabaseList = _dBDatabaseList;
    m_dBDatabaseListHasBeenSet = true;
}

bool ServerlessDBInstance::DBDatabaseListHasBeenSet() const
{
    return m_dBDatabaseListHasBeenSet;
}

