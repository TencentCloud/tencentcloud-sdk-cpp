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

#include <tencentcloud/mongodb/v20190725/model/InstanceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mongodb::V20190725::Model;
using namespace std;

InstanceInfo::InstanceInfo() :
    m_auditLogExpireDayHasBeenSet(false),
    m_auditStatusHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_instanceRoleHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_mongodbVersionHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_supportAuditHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_tagListHasBeenSet(false)
{
}

CoreInternalOutcome InstanceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AuditLogExpireDay") && !value["AuditLogExpireDay"].IsNull())
    {
        if (!value["AuditLogExpireDay"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.AuditLogExpireDay` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_auditLogExpireDay = value["AuditLogExpireDay"].GetUint64();
        m_auditLogExpireDayHasBeenSet = true;
    }

    if (value.HasMember("AuditStatus") && !value["AuditStatus"].IsNull())
    {
        if (!value["AuditStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.AuditStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_auditStatus = string(value["AuditStatus"].GetString());
        m_auditStatusHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceRole") && !value["InstanceRole"].IsNull())
    {
        if (!value["InstanceRole"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.InstanceRole` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceRole = string(value["InstanceRole"].GetString());
        m_instanceRoleHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("MongodbVersion") && !value["MongodbVersion"].IsNull())
    {
        if (!value["MongodbVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.MongodbVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mongodbVersion = string(value["MongodbVersion"].GetString());
        m_mongodbVersionHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.ProjectId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetUint64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("SupportAudit") && !value["SupportAudit"].IsNull())
    {
        if (!value["SupportAudit"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.SupportAudit` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_supportAudit = value["SupportAudit"].GetBool();
        m_supportAuditHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("TagList") && !value["TagList"].IsNull())
    {
        if (!value["TagList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.TagList` is not array type"));

        const rapidjson::Value &tmpValue = value["TagList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TagInfo item;
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


    return CoreInternalOutcome(true);
}

void InstanceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_auditLogExpireDayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuditLogExpireDay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_auditLogExpireDay, allocator);
    }

    if (m_auditStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuditStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_auditStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceRoleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceRole";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceRole.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_mongodbVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MongodbVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mongodbVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectId, allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_supportAuditHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportAudit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_supportAudit, allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
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

}


uint64_t InstanceInfo::GetAuditLogExpireDay() const
{
    return m_auditLogExpireDay;
}

void InstanceInfo::SetAuditLogExpireDay(const uint64_t& _auditLogExpireDay)
{
    m_auditLogExpireDay = _auditLogExpireDay;
    m_auditLogExpireDayHasBeenSet = true;
}

bool InstanceInfo::AuditLogExpireDayHasBeenSet() const
{
    return m_auditLogExpireDayHasBeenSet;
}

string InstanceInfo::GetAuditStatus() const
{
    return m_auditStatus;
}

void InstanceInfo::SetAuditStatus(const string& _auditStatus)
{
    m_auditStatus = _auditStatus;
    m_auditStatusHasBeenSet = true;
}

bool InstanceInfo::AuditStatusHasBeenSet() const
{
    return m_auditStatusHasBeenSet;
}

string InstanceInfo::GetInstanceId() const
{
    return m_instanceId;
}

void InstanceInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool InstanceInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string InstanceInfo::GetInstanceName() const
{
    return m_instanceName;
}

void InstanceInfo::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool InstanceInfo::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string InstanceInfo::GetInstanceRole() const
{
    return m_instanceRole;
}

void InstanceInfo::SetInstanceRole(const string& _instanceRole)
{
    m_instanceRole = _instanceRole;
    m_instanceRoleHasBeenSet = true;
}

bool InstanceInfo::InstanceRoleHasBeenSet() const
{
    return m_instanceRoleHasBeenSet;
}

string InstanceInfo::GetInstanceType() const
{
    return m_instanceType;
}

void InstanceInfo::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool InstanceInfo::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string InstanceInfo::GetMongodbVersion() const
{
    return m_mongodbVersion;
}

void InstanceInfo::SetMongodbVersion(const string& _mongodbVersion)
{
    m_mongodbVersion = _mongodbVersion;
    m_mongodbVersionHasBeenSet = true;
}

bool InstanceInfo::MongodbVersionHasBeenSet() const
{
    return m_mongodbVersionHasBeenSet;
}

uint64_t InstanceInfo::GetProjectId() const
{
    return m_projectId;
}

void InstanceInfo::SetProjectId(const uint64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool InstanceInfo::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string InstanceInfo::GetRegion() const
{
    return m_region;
}

void InstanceInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool InstanceInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string InstanceInfo::GetStatus() const
{
    return m_status;
}

void InstanceInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool InstanceInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

bool InstanceInfo::GetSupportAudit() const
{
    return m_supportAudit;
}

void InstanceInfo::SetSupportAudit(const bool& _supportAudit)
{
    m_supportAudit = _supportAudit;
    m_supportAuditHasBeenSet = true;
}

bool InstanceInfo::SupportAuditHasBeenSet() const
{
    return m_supportAuditHasBeenSet;
}

string InstanceInfo::GetZone() const
{
    return m_zone;
}

void InstanceInfo::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool InstanceInfo::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

vector<TagInfo> InstanceInfo::GetTagList() const
{
    return m_tagList;
}

void InstanceInfo::SetTagList(const vector<TagInfo>& _tagList)
{
    m_tagList = _tagList;
    m_tagListHasBeenSet = true;
}

bool InstanceInfo::TagListHasBeenSet() const
{
    return m_tagListHasBeenSet;
}

