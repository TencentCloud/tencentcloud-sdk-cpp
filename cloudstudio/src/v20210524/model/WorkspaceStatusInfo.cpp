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

#include <tencentcloud/cloudstudio/v20210524/model/WorkspaceStatusInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cloudstudio::V20210524::Model;
using namespace std;

WorkspaceStatusInfo::WorkspaceStatusInfo() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_spaceKeyHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_lastOpsDateHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_shareHasBeenSet(false),
    m_workspaceTypeHasBeenSet(false),
    m_labelHasBeenSet(false),
    m_workspaceVersionHasBeenSet(false),
    m_imageIconHasBeenSet(false),
    m_createDateHasBeenSet(false),
    m_versionControlUrlHasBeenSet(false),
    m_versionControlDescHasBeenSet(false),
    m_versionControlRefHasBeenSet(false),
    m_versionControlRefTypeHasBeenSet(false),
    m_versionControlTypeHasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_snapshotUidHasBeenSet(false),
    m_specDescHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_memoryHasBeenSet(false)
{
}

CoreInternalOutcome WorkspaceStatusInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceStatusInfo.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceStatusInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Owner") && !value["Owner"].IsNull())
    {
        if (!value["Owner"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceStatusInfo.Owner` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_owner.Deserialize(value["Owner"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ownerHasBeenSet = true;
    }

    if (value.HasMember("SpaceKey") && !value["SpaceKey"].IsNull())
    {
        if (!value["SpaceKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceStatusInfo.SpaceKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_spaceKey = string(value["SpaceKey"].GetString());
        m_spaceKeyHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceStatusInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("LastOpsDate") && !value["LastOpsDate"].IsNull())
    {
        if (!value["LastOpsDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceStatusInfo.LastOpsDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastOpsDate = string(value["LastOpsDate"].GetString());
        m_lastOpsDateHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceStatusInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Share") && !value["Share"].IsNull())
    {
        if (!value["Share"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceStatusInfo.Share` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_share.Deserialize(value["Share"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_shareHasBeenSet = true;
    }

    if (value.HasMember("WorkspaceType") && !value["WorkspaceType"].IsNull())
    {
        if (!value["WorkspaceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceStatusInfo.WorkspaceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workspaceType = string(value["WorkspaceType"].GetString());
        m_workspaceTypeHasBeenSet = true;
    }

    if (value.HasMember("Label") && !value["Label"].IsNull())
    {
        if (!value["Label"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceStatusInfo.Label` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_label = string(value["Label"].GetString());
        m_labelHasBeenSet = true;
    }

    if (value.HasMember("WorkspaceVersion") && !value["WorkspaceVersion"].IsNull())
    {
        if (!value["WorkspaceVersion"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceStatusInfo.WorkspaceVersion` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_workspaceVersion = value["WorkspaceVersion"].GetInt64();
        m_workspaceVersionHasBeenSet = true;
    }

    if (value.HasMember("ImageIcon") && !value["ImageIcon"].IsNull())
    {
        if (!value["ImageIcon"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceStatusInfo.ImageIcon` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageIcon = string(value["ImageIcon"].GetString());
        m_imageIconHasBeenSet = true;
    }

    if (value.HasMember("CreateDate") && !value["CreateDate"].IsNull())
    {
        if (!value["CreateDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceStatusInfo.CreateDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createDate = string(value["CreateDate"].GetString());
        m_createDateHasBeenSet = true;
    }

    if (value.HasMember("VersionControlUrl") && !value["VersionControlUrl"].IsNull())
    {
        if (!value["VersionControlUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceStatusInfo.VersionControlUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionControlUrl = string(value["VersionControlUrl"].GetString());
        m_versionControlUrlHasBeenSet = true;
    }

    if (value.HasMember("VersionControlDesc") && !value["VersionControlDesc"].IsNull())
    {
        if (!value["VersionControlDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceStatusInfo.VersionControlDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionControlDesc = string(value["VersionControlDesc"].GetString());
        m_versionControlDescHasBeenSet = true;
    }

    if (value.HasMember("VersionControlRef") && !value["VersionControlRef"].IsNull())
    {
        if (!value["VersionControlRef"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceStatusInfo.VersionControlRef` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionControlRef = string(value["VersionControlRef"].GetString());
        m_versionControlRefHasBeenSet = true;
    }

    if (value.HasMember("VersionControlRefType") && !value["VersionControlRefType"].IsNull())
    {
        if (!value["VersionControlRefType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceStatusInfo.VersionControlRefType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionControlRefType = string(value["VersionControlRefType"].GetString());
        m_versionControlRefTypeHasBeenSet = true;
    }

    if (value.HasMember("VersionControlType") && !value["VersionControlType"].IsNull())
    {
        if (!value["VersionControlType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceStatusInfo.VersionControlType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionControlType = string(value["VersionControlType"].GetString());
        m_versionControlTypeHasBeenSet = true;
    }

    if (value.HasMember("TemplateId") && !value["TemplateId"].IsNull())
    {
        if (!value["TemplateId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceStatusInfo.TemplateId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_templateId = value["TemplateId"].GetInt64();
        m_templateIdHasBeenSet = true;
    }

    if (value.HasMember("SnapshotUid") && !value["SnapshotUid"].IsNull())
    {
        if (!value["SnapshotUid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceStatusInfo.SnapshotUid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_snapshotUid = string(value["SnapshotUid"].GetString());
        m_snapshotUidHasBeenSet = true;
    }

    if (value.HasMember("SpecDesc") && !value["SpecDesc"].IsNull())
    {
        if (!value["SpecDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceStatusInfo.SpecDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_specDesc = string(value["SpecDesc"].GetString());
        m_specDescHasBeenSet = true;
    }

    if (value.HasMember("Cpu") && !value["Cpu"].IsNull())
    {
        if (!value["Cpu"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceStatusInfo.Cpu` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cpu = value["Cpu"].GetInt64();
        m_cpuHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceStatusInfo.Memory` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetInt64();
        m_memoryHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WorkspaceStatusInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Owner";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_owner.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_spaceKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpaceKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_spaceKey.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_lastOpsDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastOpsDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastOpsDate.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_shareHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Share";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_share.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_workspaceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkspaceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workspaceType.c_str(), allocator).Move(), allocator);
    }

    if (m_labelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Label";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_label.c_str(), allocator).Move(), allocator);
    }

    if (m_workspaceVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkspaceVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_workspaceVersion, allocator);
    }

    if (m_imageIconHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageIcon";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageIcon.c_str(), allocator).Move(), allocator);
    }

    if (m_createDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createDate.c_str(), allocator).Move(), allocator);
    }

    if (m_versionControlUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionControlUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_versionControlUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_versionControlDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionControlDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_versionControlDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_versionControlRefHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionControlRef";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_versionControlRef.c_str(), allocator).Move(), allocator);
    }

    if (m_versionControlRefTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionControlRefType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_versionControlRefType.c_str(), allocator).Move(), allocator);
    }

    if (m_versionControlTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionControlType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_versionControlType.c_str(), allocator).Move(), allocator);
    }

    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_templateId, allocator);
    }

    if (m_snapshotUidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotUid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_snapshotUid.c_str(), allocator).Move(), allocator);
    }

    if (m_specDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_specDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_cpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpu, allocator);
    }

    if (m_memoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Memory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memory, allocator);
    }

}


int64_t WorkspaceStatusInfo::GetId() const
{
    return m_id;
}

void WorkspaceStatusInfo::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool WorkspaceStatusInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string WorkspaceStatusInfo::GetName() const
{
    return m_name;
}

void WorkspaceStatusInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool WorkspaceStatusInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

UserInfoRsp WorkspaceStatusInfo::GetOwner() const
{
    return m_owner;
}

void WorkspaceStatusInfo::SetOwner(const UserInfoRsp& _owner)
{
    m_owner = _owner;
    m_ownerHasBeenSet = true;
}

bool WorkspaceStatusInfo::OwnerHasBeenSet() const
{
    return m_ownerHasBeenSet;
}

string WorkspaceStatusInfo::GetSpaceKey() const
{
    return m_spaceKey;
}

void WorkspaceStatusInfo::SetSpaceKey(const string& _spaceKey)
{
    m_spaceKey = _spaceKey;
    m_spaceKeyHasBeenSet = true;
}

bool WorkspaceStatusInfo::SpaceKeyHasBeenSet() const
{
    return m_spaceKeyHasBeenSet;
}

string WorkspaceStatusInfo::GetStatus() const
{
    return m_status;
}

void WorkspaceStatusInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool WorkspaceStatusInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string WorkspaceStatusInfo::GetLastOpsDate() const
{
    return m_lastOpsDate;
}

void WorkspaceStatusInfo::SetLastOpsDate(const string& _lastOpsDate)
{
    m_lastOpsDate = _lastOpsDate;
    m_lastOpsDateHasBeenSet = true;
}

bool WorkspaceStatusInfo::LastOpsDateHasBeenSet() const
{
    return m_lastOpsDateHasBeenSet;
}

string WorkspaceStatusInfo::GetDescription() const
{
    return m_description;
}

void WorkspaceStatusInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool WorkspaceStatusInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

WorkspaceShareInfo WorkspaceStatusInfo::GetShare() const
{
    return m_share;
}

void WorkspaceStatusInfo::SetShare(const WorkspaceShareInfo& _share)
{
    m_share = _share;
    m_shareHasBeenSet = true;
}

bool WorkspaceStatusInfo::ShareHasBeenSet() const
{
    return m_shareHasBeenSet;
}

string WorkspaceStatusInfo::GetWorkspaceType() const
{
    return m_workspaceType;
}

void WorkspaceStatusInfo::SetWorkspaceType(const string& _workspaceType)
{
    m_workspaceType = _workspaceType;
    m_workspaceTypeHasBeenSet = true;
}

bool WorkspaceStatusInfo::WorkspaceTypeHasBeenSet() const
{
    return m_workspaceTypeHasBeenSet;
}

string WorkspaceStatusInfo::GetLabel() const
{
    return m_label;
}

void WorkspaceStatusInfo::SetLabel(const string& _label)
{
    m_label = _label;
    m_labelHasBeenSet = true;
}

bool WorkspaceStatusInfo::LabelHasBeenSet() const
{
    return m_labelHasBeenSet;
}

int64_t WorkspaceStatusInfo::GetWorkspaceVersion() const
{
    return m_workspaceVersion;
}

void WorkspaceStatusInfo::SetWorkspaceVersion(const int64_t& _workspaceVersion)
{
    m_workspaceVersion = _workspaceVersion;
    m_workspaceVersionHasBeenSet = true;
}

bool WorkspaceStatusInfo::WorkspaceVersionHasBeenSet() const
{
    return m_workspaceVersionHasBeenSet;
}

string WorkspaceStatusInfo::GetImageIcon() const
{
    return m_imageIcon;
}

void WorkspaceStatusInfo::SetImageIcon(const string& _imageIcon)
{
    m_imageIcon = _imageIcon;
    m_imageIconHasBeenSet = true;
}

bool WorkspaceStatusInfo::ImageIconHasBeenSet() const
{
    return m_imageIconHasBeenSet;
}

string WorkspaceStatusInfo::GetCreateDate() const
{
    return m_createDate;
}

void WorkspaceStatusInfo::SetCreateDate(const string& _createDate)
{
    m_createDate = _createDate;
    m_createDateHasBeenSet = true;
}

bool WorkspaceStatusInfo::CreateDateHasBeenSet() const
{
    return m_createDateHasBeenSet;
}

string WorkspaceStatusInfo::GetVersionControlUrl() const
{
    return m_versionControlUrl;
}

void WorkspaceStatusInfo::SetVersionControlUrl(const string& _versionControlUrl)
{
    m_versionControlUrl = _versionControlUrl;
    m_versionControlUrlHasBeenSet = true;
}

bool WorkspaceStatusInfo::VersionControlUrlHasBeenSet() const
{
    return m_versionControlUrlHasBeenSet;
}

string WorkspaceStatusInfo::GetVersionControlDesc() const
{
    return m_versionControlDesc;
}

void WorkspaceStatusInfo::SetVersionControlDesc(const string& _versionControlDesc)
{
    m_versionControlDesc = _versionControlDesc;
    m_versionControlDescHasBeenSet = true;
}

bool WorkspaceStatusInfo::VersionControlDescHasBeenSet() const
{
    return m_versionControlDescHasBeenSet;
}

string WorkspaceStatusInfo::GetVersionControlRef() const
{
    return m_versionControlRef;
}

void WorkspaceStatusInfo::SetVersionControlRef(const string& _versionControlRef)
{
    m_versionControlRef = _versionControlRef;
    m_versionControlRefHasBeenSet = true;
}

bool WorkspaceStatusInfo::VersionControlRefHasBeenSet() const
{
    return m_versionControlRefHasBeenSet;
}

string WorkspaceStatusInfo::GetVersionControlRefType() const
{
    return m_versionControlRefType;
}

void WorkspaceStatusInfo::SetVersionControlRefType(const string& _versionControlRefType)
{
    m_versionControlRefType = _versionControlRefType;
    m_versionControlRefTypeHasBeenSet = true;
}

bool WorkspaceStatusInfo::VersionControlRefTypeHasBeenSet() const
{
    return m_versionControlRefTypeHasBeenSet;
}

string WorkspaceStatusInfo::GetVersionControlType() const
{
    return m_versionControlType;
}

void WorkspaceStatusInfo::SetVersionControlType(const string& _versionControlType)
{
    m_versionControlType = _versionControlType;
    m_versionControlTypeHasBeenSet = true;
}

bool WorkspaceStatusInfo::VersionControlTypeHasBeenSet() const
{
    return m_versionControlTypeHasBeenSet;
}

int64_t WorkspaceStatusInfo::GetTemplateId() const
{
    return m_templateId;
}

void WorkspaceStatusInfo::SetTemplateId(const int64_t& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool WorkspaceStatusInfo::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

string WorkspaceStatusInfo::GetSnapshotUid() const
{
    return m_snapshotUid;
}

void WorkspaceStatusInfo::SetSnapshotUid(const string& _snapshotUid)
{
    m_snapshotUid = _snapshotUid;
    m_snapshotUidHasBeenSet = true;
}

bool WorkspaceStatusInfo::SnapshotUidHasBeenSet() const
{
    return m_snapshotUidHasBeenSet;
}

string WorkspaceStatusInfo::GetSpecDesc() const
{
    return m_specDesc;
}

void WorkspaceStatusInfo::SetSpecDesc(const string& _specDesc)
{
    m_specDesc = _specDesc;
    m_specDescHasBeenSet = true;
}

bool WorkspaceStatusInfo::SpecDescHasBeenSet() const
{
    return m_specDescHasBeenSet;
}

int64_t WorkspaceStatusInfo::GetCpu() const
{
    return m_cpu;
}

void WorkspaceStatusInfo::SetCpu(const int64_t& _cpu)
{
    m_cpu = _cpu;
    m_cpuHasBeenSet = true;
}

bool WorkspaceStatusInfo::CpuHasBeenSet() const
{
    return m_cpuHasBeenSet;
}

int64_t WorkspaceStatusInfo::GetMemory() const
{
    return m_memory;
}

void WorkspaceStatusInfo::SetMemory(const int64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool WorkspaceStatusInfo::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

