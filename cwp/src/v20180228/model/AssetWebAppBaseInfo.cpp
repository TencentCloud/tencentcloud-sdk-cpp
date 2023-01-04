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

#include <tencentcloud/cwp/v20180228/model/AssetWebAppBaseInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

AssetWebAppBaseInfo::AssetWebAppBaseInfo() :
    m_machineIpHasBeenSet(false),
    m_machineWanIpHasBeenSet(false),
    m_quuidHasBeenSet(false),
    m_uuidHasBeenSet(false),
    m_osInfoHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_tagHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_rootPathHasBeenSet(false),
    m_serviceTypeHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_virtualPathHasBeenSet(false),
    m_pluginCountHasBeenSet(false),
    m_idHasBeenSet(false),
    m_descHasBeenSet(false),
    m_machineNameHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_firstTimeHasBeenSet(false),
    m_isNewHasBeenSet(false),
    m_machineExtraInfoHasBeenSet(false)
{
}

CoreInternalOutcome AssetWebAppBaseInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MachineIp") && !value["MachineIp"].IsNull())
    {
        if (!value["MachineIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetWebAppBaseInfo.MachineIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineIp = string(value["MachineIp"].GetString());
        m_machineIpHasBeenSet = true;
    }

    if (value.HasMember("MachineWanIp") && !value["MachineWanIp"].IsNull())
    {
        if (!value["MachineWanIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetWebAppBaseInfo.MachineWanIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineWanIp = string(value["MachineWanIp"].GetString());
        m_machineWanIpHasBeenSet = true;
    }

    if (value.HasMember("Quuid") && !value["Quuid"].IsNull())
    {
        if (!value["Quuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetWebAppBaseInfo.Quuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quuid = string(value["Quuid"].GetString());
        m_quuidHasBeenSet = true;
    }

    if (value.HasMember("Uuid") && !value["Uuid"].IsNull())
    {
        if (!value["Uuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetWebAppBaseInfo.Uuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uuid = string(value["Uuid"].GetString());
        m_uuidHasBeenSet = true;
    }

    if (value.HasMember("OsInfo") && !value["OsInfo"].IsNull())
    {
        if (!value["OsInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetWebAppBaseInfo.OsInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_osInfo = string(value["OsInfo"].GetString());
        m_osInfoHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetWebAppBaseInfo.ProjectId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetUint64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("Tag") && !value["Tag"].IsNull())
    {
        if (!value["Tag"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AssetWebAppBaseInfo.Tag` is not array type"));

        const rapidjson::Value &tmpValue = value["Tag"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MachineTag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tag.push_back(item);
        }
        m_tagHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetWebAppBaseInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetWebAppBaseInfo.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("RootPath") && !value["RootPath"].IsNull())
    {
        if (!value["RootPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetWebAppBaseInfo.RootPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rootPath = string(value["RootPath"].GetString());
        m_rootPathHasBeenSet = true;
    }

    if (value.HasMember("ServiceType") && !value["ServiceType"].IsNull())
    {
        if (!value["ServiceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetWebAppBaseInfo.ServiceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceType = string(value["ServiceType"].GetString());
        m_serviceTypeHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetWebAppBaseInfo.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("VirtualPath") && !value["VirtualPath"].IsNull())
    {
        if (!value["VirtualPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetWebAppBaseInfo.VirtualPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_virtualPath = string(value["VirtualPath"].GetString());
        m_virtualPathHasBeenSet = true;
    }

    if (value.HasMember("PluginCount") && !value["PluginCount"].IsNull())
    {
        if (!value["PluginCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetWebAppBaseInfo.PluginCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_pluginCount = value["PluginCount"].GetUint64();
        m_pluginCountHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetWebAppBaseInfo.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Desc") && !value["Desc"].IsNull())
    {
        if (!value["Desc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetWebAppBaseInfo.Desc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_desc = string(value["Desc"].GetString());
        m_descHasBeenSet = true;
    }

    if (value.HasMember("MachineName") && !value["MachineName"].IsNull())
    {
        if (!value["MachineName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetWebAppBaseInfo.MachineName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineName = string(value["MachineName"].GetString());
        m_machineNameHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetWebAppBaseInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("FirstTime") && !value["FirstTime"].IsNull())
    {
        if (!value["FirstTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetWebAppBaseInfo.FirstTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstTime = string(value["FirstTime"].GetString());
        m_firstTimeHasBeenSet = true;
    }

    if (value.HasMember("IsNew") && !value["IsNew"].IsNull())
    {
        if (!value["IsNew"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetWebAppBaseInfo.IsNew` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isNew = value["IsNew"].GetInt64();
        m_isNewHasBeenSet = true;
    }

    if (value.HasMember("MachineExtraInfo") && !value["MachineExtraInfo"].IsNull())
    {
        if (!value["MachineExtraInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AssetWebAppBaseInfo.MachineExtraInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_machineExtraInfo.Deserialize(value["MachineExtraInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_machineExtraInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AssetWebAppBaseInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_machineIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineIp.c_str(), allocator).Move(), allocator);
    }

    if (m_machineWanIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineWanIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineWanIp.c_str(), allocator).Move(), allocator);
    }

    if (m_quuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_quuid.c_str(), allocator).Move(), allocator);
    }

    if (m_uuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uuid.c_str(), allocator).Move(), allocator);
    }

    if (m_osInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_osInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectId, allocator);
    }

    if (m_tagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tag.begin(); itr != m_tag.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_rootPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RootPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rootPath.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_virtualPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirtualPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_virtualPath.c_str(), allocator).Move(), allocator);
    }

    if (m_pluginCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PluginCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pluginCount, allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_descHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Desc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_desc.c_str(), allocator).Move(), allocator);
    }

    if (m_machineNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineName.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_firstTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_firstTime.c_str(), allocator).Move(), allocator);
    }

    if (m_isNewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsNew";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isNew, allocator);
    }

    if (m_machineExtraInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineExtraInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_machineExtraInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


string AssetWebAppBaseInfo::GetMachineIp() const
{
    return m_machineIp;
}

void AssetWebAppBaseInfo::SetMachineIp(const string& _machineIp)
{
    m_machineIp = _machineIp;
    m_machineIpHasBeenSet = true;
}

bool AssetWebAppBaseInfo::MachineIpHasBeenSet() const
{
    return m_machineIpHasBeenSet;
}

string AssetWebAppBaseInfo::GetMachineWanIp() const
{
    return m_machineWanIp;
}

void AssetWebAppBaseInfo::SetMachineWanIp(const string& _machineWanIp)
{
    m_machineWanIp = _machineWanIp;
    m_machineWanIpHasBeenSet = true;
}

bool AssetWebAppBaseInfo::MachineWanIpHasBeenSet() const
{
    return m_machineWanIpHasBeenSet;
}

string AssetWebAppBaseInfo::GetQuuid() const
{
    return m_quuid;
}

void AssetWebAppBaseInfo::SetQuuid(const string& _quuid)
{
    m_quuid = _quuid;
    m_quuidHasBeenSet = true;
}

bool AssetWebAppBaseInfo::QuuidHasBeenSet() const
{
    return m_quuidHasBeenSet;
}

string AssetWebAppBaseInfo::GetUuid() const
{
    return m_uuid;
}

void AssetWebAppBaseInfo::SetUuid(const string& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool AssetWebAppBaseInfo::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}

string AssetWebAppBaseInfo::GetOsInfo() const
{
    return m_osInfo;
}

void AssetWebAppBaseInfo::SetOsInfo(const string& _osInfo)
{
    m_osInfo = _osInfo;
    m_osInfoHasBeenSet = true;
}

bool AssetWebAppBaseInfo::OsInfoHasBeenSet() const
{
    return m_osInfoHasBeenSet;
}

uint64_t AssetWebAppBaseInfo::GetProjectId() const
{
    return m_projectId;
}

void AssetWebAppBaseInfo::SetProjectId(const uint64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool AssetWebAppBaseInfo::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

vector<MachineTag> AssetWebAppBaseInfo::GetTag() const
{
    return m_tag;
}

void AssetWebAppBaseInfo::SetTag(const vector<MachineTag>& _tag)
{
    m_tag = _tag;
    m_tagHasBeenSet = true;
}

bool AssetWebAppBaseInfo::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}

string AssetWebAppBaseInfo::GetName() const
{
    return m_name;
}

void AssetWebAppBaseInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AssetWebAppBaseInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string AssetWebAppBaseInfo::GetVersion() const
{
    return m_version;
}

void AssetWebAppBaseInfo::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool AssetWebAppBaseInfo::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string AssetWebAppBaseInfo::GetRootPath() const
{
    return m_rootPath;
}

void AssetWebAppBaseInfo::SetRootPath(const string& _rootPath)
{
    m_rootPath = _rootPath;
    m_rootPathHasBeenSet = true;
}

bool AssetWebAppBaseInfo::RootPathHasBeenSet() const
{
    return m_rootPathHasBeenSet;
}

string AssetWebAppBaseInfo::GetServiceType() const
{
    return m_serviceType;
}

void AssetWebAppBaseInfo::SetServiceType(const string& _serviceType)
{
    m_serviceType = _serviceType;
    m_serviceTypeHasBeenSet = true;
}

bool AssetWebAppBaseInfo::ServiceTypeHasBeenSet() const
{
    return m_serviceTypeHasBeenSet;
}

string AssetWebAppBaseInfo::GetDomain() const
{
    return m_domain;
}

void AssetWebAppBaseInfo::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool AssetWebAppBaseInfo::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string AssetWebAppBaseInfo::GetVirtualPath() const
{
    return m_virtualPath;
}

void AssetWebAppBaseInfo::SetVirtualPath(const string& _virtualPath)
{
    m_virtualPath = _virtualPath;
    m_virtualPathHasBeenSet = true;
}

bool AssetWebAppBaseInfo::VirtualPathHasBeenSet() const
{
    return m_virtualPathHasBeenSet;
}

uint64_t AssetWebAppBaseInfo::GetPluginCount() const
{
    return m_pluginCount;
}

void AssetWebAppBaseInfo::SetPluginCount(const uint64_t& _pluginCount)
{
    m_pluginCount = _pluginCount;
    m_pluginCountHasBeenSet = true;
}

bool AssetWebAppBaseInfo::PluginCountHasBeenSet() const
{
    return m_pluginCountHasBeenSet;
}

string AssetWebAppBaseInfo::GetId() const
{
    return m_id;
}

void AssetWebAppBaseInfo::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool AssetWebAppBaseInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string AssetWebAppBaseInfo::GetDesc() const
{
    return m_desc;
}

void AssetWebAppBaseInfo::SetDesc(const string& _desc)
{
    m_desc = _desc;
    m_descHasBeenSet = true;
}

bool AssetWebAppBaseInfo::DescHasBeenSet() const
{
    return m_descHasBeenSet;
}

string AssetWebAppBaseInfo::GetMachineName() const
{
    return m_machineName;
}

void AssetWebAppBaseInfo::SetMachineName(const string& _machineName)
{
    m_machineName = _machineName;
    m_machineNameHasBeenSet = true;
}

bool AssetWebAppBaseInfo::MachineNameHasBeenSet() const
{
    return m_machineNameHasBeenSet;
}

string AssetWebAppBaseInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void AssetWebAppBaseInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool AssetWebAppBaseInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string AssetWebAppBaseInfo::GetFirstTime() const
{
    return m_firstTime;
}

void AssetWebAppBaseInfo::SetFirstTime(const string& _firstTime)
{
    m_firstTime = _firstTime;
    m_firstTimeHasBeenSet = true;
}

bool AssetWebAppBaseInfo::FirstTimeHasBeenSet() const
{
    return m_firstTimeHasBeenSet;
}

int64_t AssetWebAppBaseInfo::GetIsNew() const
{
    return m_isNew;
}

void AssetWebAppBaseInfo::SetIsNew(const int64_t& _isNew)
{
    m_isNew = _isNew;
    m_isNewHasBeenSet = true;
}

bool AssetWebAppBaseInfo::IsNewHasBeenSet() const
{
    return m_isNewHasBeenSet;
}

MachineExtraInfo AssetWebAppBaseInfo::GetMachineExtraInfo() const
{
    return m_machineExtraInfo;
}

void AssetWebAppBaseInfo::SetMachineExtraInfo(const MachineExtraInfo& _machineExtraInfo)
{
    m_machineExtraInfo = _machineExtraInfo;
    m_machineExtraInfoHasBeenSet = true;
}

bool AssetWebAppBaseInfo::MachineExtraInfoHasBeenSet() const
{
    return m_machineExtraInfoHasBeenSet;
}

