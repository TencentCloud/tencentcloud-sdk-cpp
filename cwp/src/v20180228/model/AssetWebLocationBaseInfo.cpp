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

#include <tencentcloud/cwp/v20180228/model/AssetWebLocationBaseInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

AssetWebLocationBaseInfo::AssetWebLocationBaseInfo() :
    m_uuidHasBeenSet(false),
    m_quuidHasBeenSet(false),
    m_machineIpHasBeenSet(false),
    m_machineWanIpHasBeenSet(false),
    m_machineNameHasBeenSet(false),
    m_osInfoHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_portHasBeenSet(false),
    m_protoHasBeenSet(false),
    m_serviceTypeHasBeenSet(false),
    m_pathCountHasBeenSet(false),
    m_userHasBeenSet(false),
    m_mainPathHasBeenSet(false),
    m_mainPathOwnerHasBeenSet(false),
    m_permissionHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_tagHasBeenSet(false),
    m_idHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_firstTimeHasBeenSet(false),
    m_isNewHasBeenSet(false),
    m_machineExtraInfoHasBeenSet(false)
{
}

CoreInternalOutcome AssetWebLocationBaseInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Uuid") && !value["Uuid"].IsNull())
    {
        if (!value["Uuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetWebLocationBaseInfo.Uuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uuid = string(value["Uuid"].GetString());
        m_uuidHasBeenSet = true;
    }

    if (value.HasMember("Quuid") && !value["Quuid"].IsNull())
    {
        if (!value["Quuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetWebLocationBaseInfo.Quuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quuid = string(value["Quuid"].GetString());
        m_quuidHasBeenSet = true;
    }

    if (value.HasMember("MachineIp") && !value["MachineIp"].IsNull())
    {
        if (!value["MachineIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetWebLocationBaseInfo.MachineIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineIp = string(value["MachineIp"].GetString());
        m_machineIpHasBeenSet = true;
    }

    if (value.HasMember("MachineWanIp") && !value["MachineWanIp"].IsNull())
    {
        if (!value["MachineWanIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetWebLocationBaseInfo.MachineWanIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineWanIp = string(value["MachineWanIp"].GetString());
        m_machineWanIpHasBeenSet = true;
    }

    if (value.HasMember("MachineName") && !value["MachineName"].IsNull())
    {
        if (!value["MachineName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetWebLocationBaseInfo.MachineName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineName = string(value["MachineName"].GetString());
        m_machineNameHasBeenSet = true;
    }

    if (value.HasMember("OsInfo") && !value["OsInfo"].IsNull())
    {
        if (!value["OsInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetWebLocationBaseInfo.OsInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_osInfo = string(value["OsInfo"].GetString());
        m_osInfoHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetWebLocationBaseInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetWebLocationBaseInfo.Port` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_port = string(value["Port"].GetString());
        m_portHasBeenSet = true;
    }

    if (value.HasMember("Proto") && !value["Proto"].IsNull())
    {
        if (!value["Proto"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetWebLocationBaseInfo.Proto` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_proto = string(value["Proto"].GetString());
        m_protoHasBeenSet = true;
    }

    if (value.HasMember("ServiceType") && !value["ServiceType"].IsNull())
    {
        if (!value["ServiceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetWebLocationBaseInfo.ServiceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceType = string(value["ServiceType"].GetString());
        m_serviceTypeHasBeenSet = true;
    }

    if (value.HasMember("PathCount") && !value["PathCount"].IsNull())
    {
        if (!value["PathCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetWebLocationBaseInfo.PathCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_pathCount = value["PathCount"].GetUint64();
        m_pathCountHasBeenSet = true;
    }

    if (value.HasMember("User") && !value["User"].IsNull())
    {
        if (!value["User"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetWebLocationBaseInfo.User` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_user = string(value["User"].GetString());
        m_userHasBeenSet = true;
    }

    if (value.HasMember("MainPath") && !value["MainPath"].IsNull())
    {
        if (!value["MainPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetWebLocationBaseInfo.MainPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mainPath = string(value["MainPath"].GetString());
        m_mainPathHasBeenSet = true;
    }

    if (value.HasMember("MainPathOwner") && !value["MainPathOwner"].IsNull())
    {
        if (!value["MainPathOwner"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetWebLocationBaseInfo.MainPathOwner` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mainPathOwner = string(value["MainPathOwner"].GetString());
        m_mainPathOwnerHasBeenSet = true;
    }

    if (value.HasMember("Permission") && !value["Permission"].IsNull())
    {
        if (!value["Permission"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetWebLocationBaseInfo.Permission` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_permission = string(value["Permission"].GetString());
        m_permissionHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetWebLocationBaseInfo.ProjectId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetUint64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("Tag") && !value["Tag"].IsNull())
    {
        if (!value["Tag"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AssetWebLocationBaseInfo.Tag` is not array type"));

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

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetWebLocationBaseInfo.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetWebLocationBaseInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("FirstTime") && !value["FirstTime"].IsNull())
    {
        if (!value["FirstTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetWebLocationBaseInfo.FirstTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstTime = string(value["FirstTime"].GetString());
        m_firstTimeHasBeenSet = true;
    }

    if (value.HasMember("IsNew") && !value["IsNew"].IsNull())
    {
        if (!value["IsNew"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetWebLocationBaseInfo.IsNew` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isNew = value["IsNew"].GetInt64();
        m_isNewHasBeenSet = true;
    }

    if (value.HasMember("MachineExtraInfo") && !value["MachineExtraInfo"].IsNull())
    {
        if (!value["MachineExtraInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AssetWebLocationBaseInfo.MachineExtraInfo` is not object type").SetRequestId(requestId));
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

void AssetWebLocationBaseInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_uuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uuid.c_str(), allocator).Move(), allocator);
    }

    if (m_quuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_quuid.c_str(), allocator).Move(), allocator);
    }

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

    if (m_machineNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineName.c_str(), allocator).Move(), allocator);
    }

    if (m_osInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_osInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_port.c_str(), allocator).Move(), allocator);
    }

    if (m_protoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Proto";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_proto.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_pathCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PathCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pathCount, allocator);
    }

    if (m_userHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "User";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_user.c_str(), allocator).Move(), allocator);
    }

    if (m_mainPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MainPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mainPath.c_str(), allocator).Move(), allocator);
    }

    if (m_mainPathOwnerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MainPathOwner";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mainPathOwner.c_str(), allocator).Move(), allocator);
    }

    if (m_permissionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Permission";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_permission.c_str(), allocator).Move(), allocator);
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

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
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


string AssetWebLocationBaseInfo::GetUuid() const
{
    return m_uuid;
}

void AssetWebLocationBaseInfo::SetUuid(const string& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool AssetWebLocationBaseInfo::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}

string AssetWebLocationBaseInfo::GetQuuid() const
{
    return m_quuid;
}

void AssetWebLocationBaseInfo::SetQuuid(const string& _quuid)
{
    m_quuid = _quuid;
    m_quuidHasBeenSet = true;
}

bool AssetWebLocationBaseInfo::QuuidHasBeenSet() const
{
    return m_quuidHasBeenSet;
}

string AssetWebLocationBaseInfo::GetMachineIp() const
{
    return m_machineIp;
}

void AssetWebLocationBaseInfo::SetMachineIp(const string& _machineIp)
{
    m_machineIp = _machineIp;
    m_machineIpHasBeenSet = true;
}

bool AssetWebLocationBaseInfo::MachineIpHasBeenSet() const
{
    return m_machineIpHasBeenSet;
}

string AssetWebLocationBaseInfo::GetMachineWanIp() const
{
    return m_machineWanIp;
}

void AssetWebLocationBaseInfo::SetMachineWanIp(const string& _machineWanIp)
{
    m_machineWanIp = _machineWanIp;
    m_machineWanIpHasBeenSet = true;
}

bool AssetWebLocationBaseInfo::MachineWanIpHasBeenSet() const
{
    return m_machineWanIpHasBeenSet;
}

string AssetWebLocationBaseInfo::GetMachineName() const
{
    return m_machineName;
}

void AssetWebLocationBaseInfo::SetMachineName(const string& _machineName)
{
    m_machineName = _machineName;
    m_machineNameHasBeenSet = true;
}

bool AssetWebLocationBaseInfo::MachineNameHasBeenSet() const
{
    return m_machineNameHasBeenSet;
}

string AssetWebLocationBaseInfo::GetOsInfo() const
{
    return m_osInfo;
}

void AssetWebLocationBaseInfo::SetOsInfo(const string& _osInfo)
{
    m_osInfo = _osInfo;
    m_osInfoHasBeenSet = true;
}

bool AssetWebLocationBaseInfo::OsInfoHasBeenSet() const
{
    return m_osInfoHasBeenSet;
}

string AssetWebLocationBaseInfo::GetName() const
{
    return m_name;
}

void AssetWebLocationBaseInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AssetWebLocationBaseInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string AssetWebLocationBaseInfo::GetPort() const
{
    return m_port;
}

void AssetWebLocationBaseInfo::SetPort(const string& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool AssetWebLocationBaseInfo::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string AssetWebLocationBaseInfo::GetProto() const
{
    return m_proto;
}

void AssetWebLocationBaseInfo::SetProto(const string& _proto)
{
    m_proto = _proto;
    m_protoHasBeenSet = true;
}

bool AssetWebLocationBaseInfo::ProtoHasBeenSet() const
{
    return m_protoHasBeenSet;
}

string AssetWebLocationBaseInfo::GetServiceType() const
{
    return m_serviceType;
}

void AssetWebLocationBaseInfo::SetServiceType(const string& _serviceType)
{
    m_serviceType = _serviceType;
    m_serviceTypeHasBeenSet = true;
}

bool AssetWebLocationBaseInfo::ServiceTypeHasBeenSet() const
{
    return m_serviceTypeHasBeenSet;
}

uint64_t AssetWebLocationBaseInfo::GetPathCount() const
{
    return m_pathCount;
}

void AssetWebLocationBaseInfo::SetPathCount(const uint64_t& _pathCount)
{
    m_pathCount = _pathCount;
    m_pathCountHasBeenSet = true;
}

bool AssetWebLocationBaseInfo::PathCountHasBeenSet() const
{
    return m_pathCountHasBeenSet;
}

string AssetWebLocationBaseInfo::GetUser() const
{
    return m_user;
}

void AssetWebLocationBaseInfo::SetUser(const string& _user)
{
    m_user = _user;
    m_userHasBeenSet = true;
}

bool AssetWebLocationBaseInfo::UserHasBeenSet() const
{
    return m_userHasBeenSet;
}

string AssetWebLocationBaseInfo::GetMainPath() const
{
    return m_mainPath;
}

void AssetWebLocationBaseInfo::SetMainPath(const string& _mainPath)
{
    m_mainPath = _mainPath;
    m_mainPathHasBeenSet = true;
}

bool AssetWebLocationBaseInfo::MainPathHasBeenSet() const
{
    return m_mainPathHasBeenSet;
}

string AssetWebLocationBaseInfo::GetMainPathOwner() const
{
    return m_mainPathOwner;
}

void AssetWebLocationBaseInfo::SetMainPathOwner(const string& _mainPathOwner)
{
    m_mainPathOwner = _mainPathOwner;
    m_mainPathOwnerHasBeenSet = true;
}

bool AssetWebLocationBaseInfo::MainPathOwnerHasBeenSet() const
{
    return m_mainPathOwnerHasBeenSet;
}

string AssetWebLocationBaseInfo::GetPermission() const
{
    return m_permission;
}

void AssetWebLocationBaseInfo::SetPermission(const string& _permission)
{
    m_permission = _permission;
    m_permissionHasBeenSet = true;
}

bool AssetWebLocationBaseInfo::PermissionHasBeenSet() const
{
    return m_permissionHasBeenSet;
}

uint64_t AssetWebLocationBaseInfo::GetProjectId() const
{
    return m_projectId;
}

void AssetWebLocationBaseInfo::SetProjectId(const uint64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool AssetWebLocationBaseInfo::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

vector<MachineTag> AssetWebLocationBaseInfo::GetTag() const
{
    return m_tag;
}

void AssetWebLocationBaseInfo::SetTag(const vector<MachineTag>& _tag)
{
    m_tag = _tag;
    m_tagHasBeenSet = true;
}

bool AssetWebLocationBaseInfo::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}

string AssetWebLocationBaseInfo::GetId() const
{
    return m_id;
}

void AssetWebLocationBaseInfo::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool AssetWebLocationBaseInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string AssetWebLocationBaseInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void AssetWebLocationBaseInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool AssetWebLocationBaseInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string AssetWebLocationBaseInfo::GetFirstTime() const
{
    return m_firstTime;
}

void AssetWebLocationBaseInfo::SetFirstTime(const string& _firstTime)
{
    m_firstTime = _firstTime;
    m_firstTimeHasBeenSet = true;
}

bool AssetWebLocationBaseInfo::FirstTimeHasBeenSet() const
{
    return m_firstTimeHasBeenSet;
}

int64_t AssetWebLocationBaseInfo::GetIsNew() const
{
    return m_isNew;
}

void AssetWebLocationBaseInfo::SetIsNew(const int64_t& _isNew)
{
    m_isNew = _isNew;
    m_isNewHasBeenSet = true;
}

bool AssetWebLocationBaseInfo::IsNewHasBeenSet() const
{
    return m_isNewHasBeenSet;
}

MachineExtraInfo AssetWebLocationBaseInfo::GetMachineExtraInfo() const
{
    return m_machineExtraInfo;
}

void AssetWebLocationBaseInfo::SetMachineExtraInfo(const MachineExtraInfo& _machineExtraInfo)
{
    m_machineExtraInfo = _machineExtraInfo;
    m_machineExtraInfoHasBeenSet = true;
}

bool AssetWebLocationBaseInfo::MachineExtraInfoHasBeenSet() const
{
    return m_machineExtraInfoHasBeenSet;
}

