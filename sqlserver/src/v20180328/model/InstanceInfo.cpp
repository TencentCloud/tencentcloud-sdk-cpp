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

#include <tencentcloud/sqlserver/v20180328/model/InstanceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

InstanceInfo::InstanceInfo() :
    m_instanceNameHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_tagListHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_vipHasBeenSet(false),
    m_vportHasBeenSet(false),
    m_architectureHasBeenSet(false),
    m_rOFlagHasBeenSet(false),
    m_hAFlagHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_auditLogStatusHasBeenSet(false),
    m_auditLogHostsHasBeenSet(false),
    m_auditLogStatusMessageHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_versionNameHasBeenSet(false),
    m_regionIdHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_zoneHasBeenSet(false)
{
}

CoreInternalOutcome InstanceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
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

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.ProjectId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetInt64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("TagList") && !value["TagList"].IsNull())
    {
        if (!value["TagList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.TagList` is not array type"));

        const rapidjson::Value &tmpValue = value["TagList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TagList item;
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

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Vip") && !value["Vip"].IsNull())
    {
        if (!value["Vip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Vip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vip = string(value["Vip"].GetString());
        m_vipHasBeenSet = true;
    }

    if (value.HasMember("Vport") && !value["Vport"].IsNull())
    {
        if (!value["Vport"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Vport` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vport = value["Vport"].GetInt64();
        m_vportHasBeenSet = true;
    }

    if (value.HasMember("Architecture") && !value["Architecture"].IsNull())
    {
        if (!value["Architecture"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Architecture` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_architecture = string(value["Architecture"].GetString());
        m_architectureHasBeenSet = true;
    }

    if (value.HasMember("ROFlag") && !value["ROFlag"].IsNull())
    {
        if (!value["ROFlag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.ROFlag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rOFlag = string(value["ROFlag"].GetString());
        m_rOFlagHasBeenSet = true;
    }

    if (value.HasMember("HAFlag") && !value["HAFlag"].IsNull())
    {
        if (!value["HAFlag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.HAFlag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hAFlag = string(value["HAFlag"].GetString());
        m_hAFlagHasBeenSet = true;
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

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("AuditLogStatus") && !value["AuditLogStatus"].IsNull())
    {
        if (!value["AuditLogStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.AuditLogStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_auditLogStatus = string(value["AuditLogStatus"].GetString());
        m_auditLogStatusHasBeenSet = true;
    }

    if (value.HasMember("AuditLogHosts") && !value["AuditLogHosts"].IsNull())
    {
        if (!value["AuditLogHosts"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.AuditLogHosts` is not array type"));

        const rapidjson::Value &tmpValue = value["AuditLogHosts"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_auditLogHosts.push_back((*itr).GetString());
        }
        m_auditLogHostsHasBeenSet = true;
    }

    if (value.HasMember("AuditLogStatusMessage") && !value["AuditLogStatusMessage"].IsNull())
    {
        if (!value["AuditLogStatusMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.AuditLogStatusMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_auditLogStatusMessage = string(value["AuditLogStatusMessage"].GetString());
        m_auditLogStatusMessageHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("VersionName") && !value["VersionName"].IsNull())
    {
        if (!value["VersionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.VersionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionName = string(value["VersionName"].GetString());
        m_versionNameHasBeenSet = true;
    }

    if (value.HasMember("RegionId") && !value["RegionId"].IsNull())
    {
        if (!value["RegionId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.RegionId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_regionId = value["RegionId"].GetInt64();
        m_regionIdHasBeenSet = true;
    }

    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.ZoneId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = value["ZoneId"].GetInt64();
        m_zoneIdHasBeenSet = true;
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

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceInfo.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectId, allocator);
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

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_vipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vip.c_str(), allocator).Move(), allocator);
    }

    if (m_vportHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vport";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vport, allocator);
    }

    if (m_architectureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Architecture";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_architecture.c_str(), allocator).Move(), allocator);
    }

    if (m_rOFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ROFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rOFlag.c_str(), allocator).Move(), allocator);
    }

    if (m_hAFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HAFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hAFlag.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_auditLogStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuditLogStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_auditLogStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_auditLogHostsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuditLogHosts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_auditLogHosts.begin(); itr != m_auditLogHosts.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_auditLogStatusMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuditLogStatusMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_auditLogStatusMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_versionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_versionName.c_str(), allocator).Move(), allocator);
    }

    if (m_regionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_regionId, allocator);
    }

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_zoneId, allocator);
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

int64_t InstanceInfo::GetProjectId() const
{
    return m_projectId;
}

void InstanceInfo::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool InstanceInfo::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

vector<TagList> InstanceInfo::GetTagList() const
{
    return m_tagList;
}

void InstanceInfo::SetTagList(const vector<TagList>& _tagList)
{
    m_tagList = _tagList;
    m_tagListHasBeenSet = true;
}

bool InstanceInfo::TagListHasBeenSet() const
{
    return m_tagListHasBeenSet;
}

int64_t InstanceInfo::GetStatus() const
{
    return m_status;
}

void InstanceInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool InstanceInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string InstanceInfo::GetVip() const
{
    return m_vip;
}

void InstanceInfo::SetVip(const string& _vip)
{
    m_vip = _vip;
    m_vipHasBeenSet = true;
}

bool InstanceInfo::VipHasBeenSet() const
{
    return m_vipHasBeenSet;
}

int64_t InstanceInfo::GetVport() const
{
    return m_vport;
}

void InstanceInfo::SetVport(const int64_t& _vport)
{
    m_vport = _vport;
    m_vportHasBeenSet = true;
}

bool InstanceInfo::VportHasBeenSet() const
{
    return m_vportHasBeenSet;
}

string InstanceInfo::GetArchitecture() const
{
    return m_architecture;
}

void InstanceInfo::SetArchitecture(const string& _architecture)
{
    m_architecture = _architecture;
    m_architectureHasBeenSet = true;
}

bool InstanceInfo::ArchitectureHasBeenSet() const
{
    return m_architectureHasBeenSet;
}

string InstanceInfo::GetROFlag() const
{
    return m_rOFlag;
}

void InstanceInfo::SetROFlag(const string& _rOFlag)
{
    m_rOFlag = _rOFlag;
    m_rOFlagHasBeenSet = true;
}

bool InstanceInfo::ROFlagHasBeenSet() const
{
    return m_rOFlagHasBeenSet;
}

string InstanceInfo::GetHAFlag() const
{
    return m_hAFlag;
}

void InstanceInfo::SetHAFlag(const string& _hAFlag)
{
    m_hAFlag = _hAFlag;
    m_hAFlagHasBeenSet = true;
}

bool InstanceInfo::HAFlagHasBeenSet() const
{
    return m_hAFlagHasBeenSet;
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

string InstanceInfo::GetType() const
{
    return m_type;
}

void InstanceInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool InstanceInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string InstanceInfo::GetAuditLogStatus() const
{
    return m_auditLogStatus;
}

void InstanceInfo::SetAuditLogStatus(const string& _auditLogStatus)
{
    m_auditLogStatus = _auditLogStatus;
    m_auditLogStatusHasBeenSet = true;
}

bool InstanceInfo::AuditLogStatusHasBeenSet() const
{
    return m_auditLogStatusHasBeenSet;
}

vector<string> InstanceInfo::GetAuditLogHosts() const
{
    return m_auditLogHosts;
}

void InstanceInfo::SetAuditLogHosts(const vector<string>& _auditLogHosts)
{
    m_auditLogHosts = _auditLogHosts;
    m_auditLogHostsHasBeenSet = true;
}

bool InstanceInfo::AuditLogHostsHasBeenSet() const
{
    return m_auditLogHostsHasBeenSet;
}

string InstanceInfo::GetAuditLogStatusMessage() const
{
    return m_auditLogStatusMessage;
}

void InstanceInfo::SetAuditLogStatusMessage(const string& _auditLogStatusMessage)
{
    m_auditLogStatusMessage = _auditLogStatusMessage;
    m_auditLogStatusMessageHasBeenSet = true;
}

bool InstanceInfo::AuditLogStatusMessageHasBeenSet() const
{
    return m_auditLogStatusMessageHasBeenSet;
}

string InstanceInfo::GetVersion() const
{
    return m_version;
}

void InstanceInfo::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool InstanceInfo::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string InstanceInfo::GetVersionName() const
{
    return m_versionName;
}

void InstanceInfo::SetVersionName(const string& _versionName)
{
    m_versionName = _versionName;
    m_versionNameHasBeenSet = true;
}

bool InstanceInfo::VersionNameHasBeenSet() const
{
    return m_versionNameHasBeenSet;
}

int64_t InstanceInfo::GetRegionId() const
{
    return m_regionId;
}

void InstanceInfo::SetRegionId(const int64_t& _regionId)
{
    m_regionId = _regionId;
    m_regionIdHasBeenSet = true;
}

bool InstanceInfo::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

int64_t InstanceInfo::GetZoneId() const
{
    return m_zoneId;
}

void InstanceInfo::SetZoneId(const int64_t& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool InstanceInfo::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
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

