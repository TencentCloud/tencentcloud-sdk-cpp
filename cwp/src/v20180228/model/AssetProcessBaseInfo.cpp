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

#include <tencentcloud/cwp/v20180228/model/AssetProcessBaseInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

AssetProcessBaseInfo::AssetProcessBaseInfo() :
    m_machineIpHasBeenSet(false),
    m_machineWanIpHasBeenSet(false),
    m_quuidHasBeenSet(false),
    m_uuidHasBeenSet(false),
    m_osInfoHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_tagHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_pidHasBeenSet(false),
    m_userHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_paramHasBeenSet(false),
    m_ttyHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_md5HasBeenSet(false),
    m_ppidHasBeenSet(false),
    m_parentProcessNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_hasSignHasBeenSet(false),
    m_installByPackageHasBeenSet(false),
    m_packageNameHasBeenSet(false),
    m_machineNameHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_firstTimeHasBeenSet(false),
    m_isNewHasBeenSet(false),
    m_machineExtraInfoHasBeenSet(false)
{
}

CoreInternalOutcome AssetProcessBaseInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MachineIp") && !value["MachineIp"].IsNull())
    {
        if (!value["MachineIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetProcessBaseInfo.MachineIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineIp = string(value["MachineIp"].GetString());
        m_machineIpHasBeenSet = true;
    }

    if (value.HasMember("MachineWanIp") && !value["MachineWanIp"].IsNull())
    {
        if (!value["MachineWanIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetProcessBaseInfo.MachineWanIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineWanIp = string(value["MachineWanIp"].GetString());
        m_machineWanIpHasBeenSet = true;
    }

    if (value.HasMember("Quuid") && !value["Quuid"].IsNull())
    {
        if (!value["Quuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetProcessBaseInfo.Quuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quuid = string(value["Quuid"].GetString());
        m_quuidHasBeenSet = true;
    }

    if (value.HasMember("Uuid") && !value["Uuid"].IsNull())
    {
        if (!value["Uuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetProcessBaseInfo.Uuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uuid = string(value["Uuid"].GetString());
        m_uuidHasBeenSet = true;
    }

    if (value.HasMember("OsInfo") && !value["OsInfo"].IsNull())
    {
        if (!value["OsInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetProcessBaseInfo.OsInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_osInfo = string(value["OsInfo"].GetString());
        m_osInfoHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetProcessBaseInfo.ProjectId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetUint64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("Tag") && !value["Tag"].IsNull())
    {
        if (!value["Tag"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AssetProcessBaseInfo.Tag` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `AssetProcessBaseInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Desc") && !value["Desc"].IsNull())
    {
        if (!value["Desc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetProcessBaseInfo.Desc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_desc = string(value["Desc"].GetString());
        m_descHasBeenSet = true;
    }

    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetProcessBaseInfo.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }

    if (value.HasMember("Pid") && !value["Pid"].IsNull())
    {
        if (!value["Pid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetProcessBaseInfo.Pid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pid = string(value["Pid"].GetString());
        m_pidHasBeenSet = true;
    }

    if (value.HasMember("User") && !value["User"].IsNull())
    {
        if (!value["User"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetProcessBaseInfo.User` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_user = string(value["User"].GetString());
        m_userHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetProcessBaseInfo.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("Param") && !value["Param"].IsNull())
    {
        if (!value["Param"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetProcessBaseInfo.Param` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_param = string(value["Param"].GetString());
        m_paramHasBeenSet = true;
    }

    if (value.HasMember("Tty") && !value["Tty"].IsNull())
    {
        if (!value["Tty"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetProcessBaseInfo.Tty` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tty = string(value["Tty"].GetString());
        m_ttyHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetProcessBaseInfo.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetProcessBaseInfo.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("Md5") && !value["Md5"].IsNull())
    {
        if (!value["Md5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetProcessBaseInfo.Md5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_md5 = string(value["Md5"].GetString());
        m_md5HasBeenSet = true;
    }

    if (value.HasMember("Ppid") && !value["Ppid"].IsNull())
    {
        if (!value["Ppid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetProcessBaseInfo.Ppid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ppid = string(value["Ppid"].GetString());
        m_ppidHasBeenSet = true;
    }

    if (value.HasMember("ParentProcessName") && !value["ParentProcessName"].IsNull())
    {
        if (!value["ParentProcessName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetProcessBaseInfo.ParentProcessName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parentProcessName = string(value["ParentProcessName"].GetString());
        m_parentProcessNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetProcessBaseInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("HasSign") && !value["HasSign"].IsNull())
    {
        if (!value["HasSign"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetProcessBaseInfo.HasSign` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_hasSign = value["HasSign"].GetUint64();
        m_hasSignHasBeenSet = true;
    }

    if (value.HasMember("InstallByPackage") && !value["InstallByPackage"].IsNull())
    {
        if (!value["InstallByPackage"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetProcessBaseInfo.InstallByPackage` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_installByPackage = value["InstallByPackage"].GetUint64();
        m_installByPackageHasBeenSet = true;
    }

    if (value.HasMember("PackageName") && !value["PackageName"].IsNull())
    {
        if (!value["PackageName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetProcessBaseInfo.PackageName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageName = string(value["PackageName"].GetString());
        m_packageNameHasBeenSet = true;
    }

    if (value.HasMember("MachineName") && !value["MachineName"].IsNull())
    {
        if (!value["MachineName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetProcessBaseInfo.MachineName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineName = string(value["MachineName"].GetString());
        m_machineNameHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetProcessBaseInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("FirstTime") && !value["FirstTime"].IsNull())
    {
        if (!value["FirstTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetProcessBaseInfo.FirstTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstTime = string(value["FirstTime"].GetString());
        m_firstTimeHasBeenSet = true;
    }

    if (value.HasMember("IsNew") && !value["IsNew"].IsNull())
    {
        if (!value["IsNew"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetProcessBaseInfo.IsNew` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isNew = value["IsNew"].GetInt64();
        m_isNewHasBeenSet = true;
    }

    if (value.HasMember("MachineExtraInfo") && !value["MachineExtraInfo"].IsNull())
    {
        if (!value["MachineExtraInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AssetProcessBaseInfo.MachineExtraInfo` is not object type").SetRequestId(requestId));
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

void AssetProcessBaseInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_descHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Desc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_desc.c_str(), allocator).Move(), allocator);
    }

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_pidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pid.c_str(), allocator).Move(), allocator);
    }

    if (m_userHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "User";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_user.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_paramHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Param";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_param.c_str(), allocator).Move(), allocator);
    }

    if (m_ttyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tty";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tty.c_str(), allocator).Move(), allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_md5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Md5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_md5.c_str(), allocator).Move(), allocator);
    }

    if (m_ppidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ppid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ppid.c_str(), allocator).Move(), allocator);
    }

    if (m_parentProcessNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentProcessName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parentProcessName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_hasSignHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasSign";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hasSign, allocator);
    }

    if (m_installByPackageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstallByPackage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_installByPackage, allocator);
    }

    if (m_packageNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_packageName.c_str(), allocator).Move(), allocator);
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


string AssetProcessBaseInfo::GetMachineIp() const
{
    return m_machineIp;
}

void AssetProcessBaseInfo::SetMachineIp(const string& _machineIp)
{
    m_machineIp = _machineIp;
    m_machineIpHasBeenSet = true;
}

bool AssetProcessBaseInfo::MachineIpHasBeenSet() const
{
    return m_machineIpHasBeenSet;
}

string AssetProcessBaseInfo::GetMachineWanIp() const
{
    return m_machineWanIp;
}

void AssetProcessBaseInfo::SetMachineWanIp(const string& _machineWanIp)
{
    m_machineWanIp = _machineWanIp;
    m_machineWanIpHasBeenSet = true;
}

bool AssetProcessBaseInfo::MachineWanIpHasBeenSet() const
{
    return m_machineWanIpHasBeenSet;
}

string AssetProcessBaseInfo::GetQuuid() const
{
    return m_quuid;
}

void AssetProcessBaseInfo::SetQuuid(const string& _quuid)
{
    m_quuid = _quuid;
    m_quuidHasBeenSet = true;
}

bool AssetProcessBaseInfo::QuuidHasBeenSet() const
{
    return m_quuidHasBeenSet;
}

string AssetProcessBaseInfo::GetUuid() const
{
    return m_uuid;
}

void AssetProcessBaseInfo::SetUuid(const string& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool AssetProcessBaseInfo::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}

string AssetProcessBaseInfo::GetOsInfo() const
{
    return m_osInfo;
}

void AssetProcessBaseInfo::SetOsInfo(const string& _osInfo)
{
    m_osInfo = _osInfo;
    m_osInfoHasBeenSet = true;
}

bool AssetProcessBaseInfo::OsInfoHasBeenSet() const
{
    return m_osInfoHasBeenSet;
}

uint64_t AssetProcessBaseInfo::GetProjectId() const
{
    return m_projectId;
}

void AssetProcessBaseInfo::SetProjectId(const uint64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool AssetProcessBaseInfo::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

vector<MachineTag> AssetProcessBaseInfo::GetTag() const
{
    return m_tag;
}

void AssetProcessBaseInfo::SetTag(const vector<MachineTag>& _tag)
{
    m_tag = _tag;
    m_tagHasBeenSet = true;
}

bool AssetProcessBaseInfo::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}

string AssetProcessBaseInfo::GetName() const
{
    return m_name;
}

void AssetProcessBaseInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AssetProcessBaseInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string AssetProcessBaseInfo::GetDesc() const
{
    return m_desc;
}

void AssetProcessBaseInfo::SetDesc(const string& _desc)
{
    m_desc = _desc;
    m_descHasBeenSet = true;
}

bool AssetProcessBaseInfo::DescHasBeenSet() const
{
    return m_descHasBeenSet;
}

string AssetProcessBaseInfo::GetPath() const
{
    return m_path;
}

void AssetProcessBaseInfo::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool AssetProcessBaseInfo::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

string AssetProcessBaseInfo::GetPid() const
{
    return m_pid;
}

void AssetProcessBaseInfo::SetPid(const string& _pid)
{
    m_pid = _pid;
    m_pidHasBeenSet = true;
}

bool AssetProcessBaseInfo::PidHasBeenSet() const
{
    return m_pidHasBeenSet;
}

string AssetProcessBaseInfo::GetUser() const
{
    return m_user;
}

void AssetProcessBaseInfo::SetUser(const string& _user)
{
    m_user = _user;
    m_userHasBeenSet = true;
}

bool AssetProcessBaseInfo::UserHasBeenSet() const
{
    return m_userHasBeenSet;
}

string AssetProcessBaseInfo::GetStartTime() const
{
    return m_startTime;
}

void AssetProcessBaseInfo::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool AssetProcessBaseInfo::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string AssetProcessBaseInfo::GetParam() const
{
    return m_param;
}

void AssetProcessBaseInfo::SetParam(const string& _param)
{
    m_param = _param;
    m_paramHasBeenSet = true;
}

bool AssetProcessBaseInfo::ParamHasBeenSet() const
{
    return m_paramHasBeenSet;
}

string AssetProcessBaseInfo::GetTty() const
{
    return m_tty;
}

void AssetProcessBaseInfo::SetTty(const string& _tty)
{
    m_tty = _tty;
    m_ttyHasBeenSet = true;
}

bool AssetProcessBaseInfo::TtyHasBeenSet() const
{
    return m_ttyHasBeenSet;
}

string AssetProcessBaseInfo::GetVersion() const
{
    return m_version;
}

void AssetProcessBaseInfo::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool AssetProcessBaseInfo::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string AssetProcessBaseInfo::GetGroupName() const
{
    return m_groupName;
}

void AssetProcessBaseInfo::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool AssetProcessBaseInfo::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

string AssetProcessBaseInfo::GetMd5() const
{
    return m_md5;
}

void AssetProcessBaseInfo::SetMd5(const string& _md5)
{
    m_md5 = _md5;
    m_md5HasBeenSet = true;
}

bool AssetProcessBaseInfo::Md5HasBeenSet() const
{
    return m_md5HasBeenSet;
}

string AssetProcessBaseInfo::GetPpid() const
{
    return m_ppid;
}

void AssetProcessBaseInfo::SetPpid(const string& _ppid)
{
    m_ppid = _ppid;
    m_ppidHasBeenSet = true;
}

bool AssetProcessBaseInfo::PpidHasBeenSet() const
{
    return m_ppidHasBeenSet;
}

string AssetProcessBaseInfo::GetParentProcessName() const
{
    return m_parentProcessName;
}

void AssetProcessBaseInfo::SetParentProcessName(const string& _parentProcessName)
{
    m_parentProcessName = _parentProcessName;
    m_parentProcessNameHasBeenSet = true;
}

bool AssetProcessBaseInfo::ParentProcessNameHasBeenSet() const
{
    return m_parentProcessNameHasBeenSet;
}

string AssetProcessBaseInfo::GetStatus() const
{
    return m_status;
}

void AssetProcessBaseInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AssetProcessBaseInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t AssetProcessBaseInfo::GetHasSign() const
{
    return m_hasSign;
}

void AssetProcessBaseInfo::SetHasSign(const uint64_t& _hasSign)
{
    m_hasSign = _hasSign;
    m_hasSignHasBeenSet = true;
}

bool AssetProcessBaseInfo::HasSignHasBeenSet() const
{
    return m_hasSignHasBeenSet;
}

uint64_t AssetProcessBaseInfo::GetInstallByPackage() const
{
    return m_installByPackage;
}

void AssetProcessBaseInfo::SetInstallByPackage(const uint64_t& _installByPackage)
{
    m_installByPackage = _installByPackage;
    m_installByPackageHasBeenSet = true;
}

bool AssetProcessBaseInfo::InstallByPackageHasBeenSet() const
{
    return m_installByPackageHasBeenSet;
}

string AssetProcessBaseInfo::GetPackageName() const
{
    return m_packageName;
}

void AssetProcessBaseInfo::SetPackageName(const string& _packageName)
{
    m_packageName = _packageName;
    m_packageNameHasBeenSet = true;
}

bool AssetProcessBaseInfo::PackageNameHasBeenSet() const
{
    return m_packageNameHasBeenSet;
}

string AssetProcessBaseInfo::GetMachineName() const
{
    return m_machineName;
}

void AssetProcessBaseInfo::SetMachineName(const string& _machineName)
{
    m_machineName = _machineName;
    m_machineNameHasBeenSet = true;
}

bool AssetProcessBaseInfo::MachineNameHasBeenSet() const
{
    return m_machineNameHasBeenSet;
}

string AssetProcessBaseInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void AssetProcessBaseInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool AssetProcessBaseInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string AssetProcessBaseInfo::GetFirstTime() const
{
    return m_firstTime;
}

void AssetProcessBaseInfo::SetFirstTime(const string& _firstTime)
{
    m_firstTime = _firstTime;
    m_firstTimeHasBeenSet = true;
}

bool AssetProcessBaseInfo::FirstTimeHasBeenSet() const
{
    return m_firstTimeHasBeenSet;
}

int64_t AssetProcessBaseInfo::GetIsNew() const
{
    return m_isNew;
}

void AssetProcessBaseInfo::SetIsNew(const int64_t& _isNew)
{
    m_isNew = _isNew;
    m_isNewHasBeenSet = true;
}

bool AssetProcessBaseInfo::IsNewHasBeenSet() const
{
    return m_isNewHasBeenSet;
}

MachineExtraInfo AssetProcessBaseInfo::GetMachineExtraInfo() const
{
    return m_machineExtraInfo;
}

void AssetProcessBaseInfo::SetMachineExtraInfo(const MachineExtraInfo& _machineExtraInfo)
{
    m_machineExtraInfo = _machineExtraInfo;
    m_machineExtraInfoHasBeenSet = true;
}

bool AssetProcessBaseInfo::MachineExtraInfoHasBeenSet() const
{
    return m_machineExtraInfoHasBeenSet;
}

