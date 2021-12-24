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
    m_dBDatabaseListHasBeenSet(false),
    m_tagListHasBeenSet(false),
    m_dBKernelVersionHasBeenSet(false),
    m_dBMajorVersionHasBeenSet(false)
{
}

CoreInternalOutcome ServerlessDBInstance::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DBInstanceId") && !value["DBInstanceId"].IsNull())
    {
        if (!value["DBInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerlessDBInstance.DBInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dBInstanceId = string(value["DBInstanceId"].GetString());
        m_dBInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("DBInstanceName") && !value["DBInstanceName"].IsNull())
    {
        if (!value["DBInstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerlessDBInstance.DBInstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dBInstanceName = string(value["DBInstanceName"].GetString());
        m_dBInstanceNameHasBeenSet = true;
    }

    if (value.HasMember("DBInstanceStatus") && !value["DBInstanceStatus"].IsNull())
    {
        if (!value["DBInstanceStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerlessDBInstance.DBInstanceStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dBInstanceStatus = string(value["DBInstanceStatus"].GetString());
        m_dBInstanceStatusHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerlessDBInstance.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerlessDBInstance.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ServerlessDBInstance.ProjectId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetInt64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerlessDBInstance.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerlessDBInstance.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("DBCharset") && !value["DBCharset"].IsNull())
    {
        if (!value["DBCharset"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerlessDBInstance.DBCharset` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dBCharset = string(value["DBCharset"].GetString());
        m_dBCharsetHasBeenSet = true;
    }

    if (value.HasMember("DBVersion") && !value["DBVersion"].IsNull())
    {
        if (!value["DBVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerlessDBInstance.DBVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dBVersion = string(value["DBVersion"].GetString());
        m_dBVersionHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerlessDBInstance.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("DBInstanceNetInfo") && !value["DBInstanceNetInfo"].IsNull())
    {
        if (!value["DBInstanceNetInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ServerlessDBInstance.DBInstanceNetInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["DBInstanceNetInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
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
            return CoreInternalOutcome(Core::Error("response `ServerlessDBInstance.DBAccountSet` is not array type"));

        const rapidjson::Value &tmpValue = value["DBAccountSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
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
            return CoreInternalOutcome(Core::Error("response `ServerlessDBInstance.DBDatabaseList` is not array type"));

        const rapidjson::Value &tmpValue = value["DBDatabaseList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_dBDatabaseList.push_back((*itr).GetString());
        }
        m_dBDatabaseListHasBeenSet = true;
    }

    if (value.HasMember("TagList") && !value["TagList"].IsNull())
    {
        if (!value["TagList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ServerlessDBInstance.TagList` is not array type"));

        const rapidjson::Value &tmpValue = value["TagList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tagList.push_back(item);
        }
        m_tagListHasBeenSet = true;
    }

    if (value.HasMember("DBKernelVersion") && !value["DBKernelVersion"].IsNull())
    {
        if (!value["DBKernelVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerlessDBInstance.DBKernelVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dBKernelVersion = string(value["DBKernelVersion"].GetString());
        m_dBKernelVersionHasBeenSet = true;
    }

    if (value.HasMember("DBMajorVersion") && !value["DBMajorVersion"].IsNull())
    {
        if (!value["DBMajorVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerlessDBInstance.DBMajorVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dBMajorVersion = string(value["DBMajorVersion"].GetString());
        m_dBMajorVersionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ServerlessDBInstance::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dBInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dBInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_dBInstanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBInstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dBInstanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_dBInstanceStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBInstanceStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dBInstanceStatus.c_str(), allocator).Move(), allocator);
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

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectId, allocator);
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

    if (m_dBCharsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBCharset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dBCharset.c_str(), allocator).Move(), allocator);
    }

    if (m_dBVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dBVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
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

    if (m_dBAccountSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBAccountSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dBAccountSet.begin(); itr != m_dBAccountSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_dBDatabaseListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBDatabaseList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dBDatabaseList.begin(); itr != m_dBDatabaseList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_tagListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagList.begin(); itr != m_tagList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_dBKernelVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBKernelVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dBKernelVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_dBMajorVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBMajorVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dBMajorVersion.c_str(), allocator).Move(), allocator);
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

vector<Tag> ServerlessDBInstance::GetTagList() const
{
    return m_tagList;
}

void ServerlessDBInstance::SetTagList(const vector<Tag>& _tagList)
{
    m_tagList = _tagList;
    m_tagListHasBeenSet = true;
}

bool ServerlessDBInstance::TagListHasBeenSet() const
{
    return m_tagListHasBeenSet;
}

string ServerlessDBInstance::GetDBKernelVersion() const
{
    return m_dBKernelVersion;
}

void ServerlessDBInstance::SetDBKernelVersion(const string& _dBKernelVersion)
{
    m_dBKernelVersion = _dBKernelVersion;
    m_dBKernelVersionHasBeenSet = true;
}

bool ServerlessDBInstance::DBKernelVersionHasBeenSet() const
{
    return m_dBKernelVersionHasBeenSet;
}

string ServerlessDBInstance::GetDBMajorVersion() const
{
    return m_dBMajorVersion;
}

void ServerlessDBInstance::SetDBMajorVersion(const string& _dBMajorVersion)
{
    m_dBMajorVersion = _dBMajorVersion;
    m_dBMajorVersionHasBeenSet = true;
}

bool ServerlessDBInstance::DBMajorVersionHasBeenSet() const
{
    return m_dBMajorVersionHasBeenSet;
}

