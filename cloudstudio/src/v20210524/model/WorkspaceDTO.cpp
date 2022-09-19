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

#include <tencentcloud/cloudstudio/v20210524/model/WorkspaceDTO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cloudstudio::V20210524::Model;
using namespace std;

WorkspaceDTO::WorkspaceDTO() :
    m_nameHasBeenSet(false),
    m_versionControlTypeHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_imageNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_workspaceVersionHasBeenSet(false),
    m_workspaceResourceDTOHasBeenSet(false),
    m_versionControlUrlHasBeenSet(false),
    m_versionControlRefHasBeenSet(false),
    m_versionControlRefTypeHasBeenSet(false),
    m_snapshotUidHasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_priceIdHasBeenSet(false),
    m_initializeStatusHasBeenSet(false),
    m_versionControlDescHasBeenSet(false)
{
}

CoreInternalOutcome WorkspaceDTO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceDTO.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("VersionControlType") && !value["VersionControlType"].IsNull())
    {
        if (!value["VersionControlType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceDTO.VersionControlType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionControlType = string(value["VersionControlType"].GetString());
        m_versionControlTypeHasBeenSet = true;
    }

    if (value.HasMember("ImageId") && !value["ImageId"].IsNull())
    {
        if (!value["ImageId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceDTO.ImageId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_imageId = value["ImageId"].GetInt64();
        m_imageIdHasBeenSet = true;
    }

    if (value.HasMember("ImageName") && !value["ImageName"].IsNull())
    {
        if (!value["ImageName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceDTO.ImageName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageName = string(value["ImageName"].GetString());
        m_imageNameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceDTO.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("WorkspaceVersion") && !value["WorkspaceVersion"].IsNull())
    {
        if (!value["WorkspaceVersion"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceDTO.WorkspaceVersion` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_workspaceVersion = value["WorkspaceVersion"].GetInt64();
        m_workspaceVersionHasBeenSet = true;
    }

    if (value.HasMember("WorkspaceResourceDTO") && !value["WorkspaceResourceDTO"].IsNull())
    {
        if (!value["WorkspaceResourceDTO"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceDTO.WorkspaceResourceDTO` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_workspaceResourceDTO.Deserialize(value["WorkspaceResourceDTO"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_workspaceResourceDTOHasBeenSet = true;
    }

    if (value.HasMember("VersionControlUrl") && !value["VersionControlUrl"].IsNull())
    {
        if (!value["VersionControlUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceDTO.VersionControlUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionControlUrl = string(value["VersionControlUrl"].GetString());
        m_versionControlUrlHasBeenSet = true;
    }

    if (value.HasMember("VersionControlRef") && !value["VersionControlRef"].IsNull())
    {
        if (!value["VersionControlRef"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceDTO.VersionControlRef` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionControlRef = string(value["VersionControlRef"].GetString());
        m_versionControlRefHasBeenSet = true;
    }

    if (value.HasMember("VersionControlRefType") && !value["VersionControlRefType"].IsNull())
    {
        if (!value["VersionControlRefType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceDTO.VersionControlRefType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionControlRefType = string(value["VersionControlRefType"].GetString());
        m_versionControlRefTypeHasBeenSet = true;
    }

    if (value.HasMember("SnapshotUid") && !value["SnapshotUid"].IsNull())
    {
        if (!value["SnapshotUid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceDTO.SnapshotUid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_snapshotUid = string(value["SnapshotUid"].GetString());
        m_snapshotUidHasBeenSet = true;
    }

    if (value.HasMember("TemplateId") && !value["TemplateId"].IsNull())
    {
        if (!value["TemplateId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceDTO.TemplateId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_templateId = value["TemplateId"].GetInt64();
        m_templateIdHasBeenSet = true;
    }

    if (value.HasMember("PriceId") && !value["PriceId"].IsNull())
    {
        if (!value["PriceId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceDTO.PriceId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_priceId = value["PriceId"].GetInt64();
        m_priceIdHasBeenSet = true;
    }

    if (value.HasMember("InitializeStatus") && !value["InitializeStatus"].IsNull())
    {
        if (!value["InitializeStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceDTO.InitializeStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_initializeStatus = value["InitializeStatus"].GetInt64();
        m_initializeStatusHasBeenSet = true;
    }

    if (value.HasMember("VersionControlDesc") && !value["VersionControlDesc"].IsNull())
    {
        if (!value["VersionControlDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkspaceDTO.VersionControlDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionControlDesc = string(value["VersionControlDesc"].GetString());
        m_versionControlDescHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WorkspaceDTO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_versionControlTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionControlType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_versionControlType.c_str(), allocator).Move(), allocator);
    }

    if (m_imageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_imageId, allocator);
    }

    if (m_imageNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_workspaceVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkspaceVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_workspaceVersion, allocator);
    }

    if (m_workspaceResourceDTOHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkspaceResourceDTO";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_workspaceResourceDTO.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_versionControlUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionControlUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_versionControlUrl.c_str(), allocator).Move(), allocator);
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

    if (m_snapshotUidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotUid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_snapshotUid.c_str(), allocator).Move(), allocator);
    }

    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_templateId, allocator);
    }

    if (m_priceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PriceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_priceId, allocator);
    }

    if (m_initializeStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InitializeStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_initializeStatus, allocator);
    }

    if (m_versionControlDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionControlDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_versionControlDesc.c_str(), allocator).Move(), allocator);
    }

}


string WorkspaceDTO::GetName() const
{
    return m_name;
}

void WorkspaceDTO::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool WorkspaceDTO::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string WorkspaceDTO::GetVersionControlType() const
{
    return m_versionControlType;
}

void WorkspaceDTO::SetVersionControlType(const string& _versionControlType)
{
    m_versionControlType = _versionControlType;
    m_versionControlTypeHasBeenSet = true;
}

bool WorkspaceDTO::VersionControlTypeHasBeenSet() const
{
    return m_versionControlTypeHasBeenSet;
}

int64_t WorkspaceDTO::GetImageId() const
{
    return m_imageId;
}

void WorkspaceDTO::SetImageId(const int64_t& _imageId)
{
    m_imageId = _imageId;
    m_imageIdHasBeenSet = true;
}

bool WorkspaceDTO::ImageIdHasBeenSet() const
{
    return m_imageIdHasBeenSet;
}

string WorkspaceDTO::GetImageName() const
{
    return m_imageName;
}

void WorkspaceDTO::SetImageName(const string& _imageName)
{
    m_imageName = _imageName;
    m_imageNameHasBeenSet = true;
}

bool WorkspaceDTO::ImageNameHasBeenSet() const
{
    return m_imageNameHasBeenSet;
}

string WorkspaceDTO::GetDescription() const
{
    return m_description;
}

void WorkspaceDTO::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool WorkspaceDTO::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t WorkspaceDTO::GetWorkspaceVersion() const
{
    return m_workspaceVersion;
}

void WorkspaceDTO::SetWorkspaceVersion(const int64_t& _workspaceVersion)
{
    m_workspaceVersion = _workspaceVersion;
    m_workspaceVersionHasBeenSet = true;
}

bool WorkspaceDTO::WorkspaceVersionHasBeenSet() const
{
    return m_workspaceVersionHasBeenSet;
}

WorkspaceResourceDTO WorkspaceDTO::GetWorkspaceResourceDTO() const
{
    return m_workspaceResourceDTO;
}

void WorkspaceDTO::SetWorkspaceResourceDTO(const WorkspaceResourceDTO& _workspaceResourceDTO)
{
    m_workspaceResourceDTO = _workspaceResourceDTO;
    m_workspaceResourceDTOHasBeenSet = true;
}

bool WorkspaceDTO::WorkspaceResourceDTOHasBeenSet() const
{
    return m_workspaceResourceDTOHasBeenSet;
}

string WorkspaceDTO::GetVersionControlUrl() const
{
    return m_versionControlUrl;
}

void WorkspaceDTO::SetVersionControlUrl(const string& _versionControlUrl)
{
    m_versionControlUrl = _versionControlUrl;
    m_versionControlUrlHasBeenSet = true;
}

bool WorkspaceDTO::VersionControlUrlHasBeenSet() const
{
    return m_versionControlUrlHasBeenSet;
}

string WorkspaceDTO::GetVersionControlRef() const
{
    return m_versionControlRef;
}

void WorkspaceDTO::SetVersionControlRef(const string& _versionControlRef)
{
    m_versionControlRef = _versionControlRef;
    m_versionControlRefHasBeenSet = true;
}

bool WorkspaceDTO::VersionControlRefHasBeenSet() const
{
    return m_versionControlRefHasBeenSet;
}

string WorkspaceDTO::GetVersionControlRefType() const
{
    return m_versionControlRefType;
}

void WorkspaceDTO::SetVersionControlRefType(const string& _versionControlRefType)
{
    m_versionControlRefType = _versionControlRefType;
    m_versionControlRefTypeHasBeenSet = true;
}

bool WorkspaceDTO::VersionControlRefTypeHasBeenSet() const
{
    return m_versionControlRefTypeHasBeenSet;
}

string WorkspaceDTO::GetSnapshotUid() const
{
    return m_snapshotUid;
}

void WorkspaceDTO::SetSnapshotUid(const string& _snapshotUid)
{
    m_snapshotUid = _snapshotUid;
    m_snapshotUidHasBeenSet = true;
}

bool WorkspaceDTO::SnapshotUidHasBeenSet() const
{
    return m_snapshotUidHasBeenSet;
}

int64_t WorkspaceDTO::GetTemplateId() const
{
    return m_templateId;
}

void WorkspaceDTO::SetTemplateId(const int64_t& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool WorkspaceDTO::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

int64_t WorkspaceDTO::GetPriceId() const
{
    return m_priceId;
}

void WorkspaceDTO::SetPriceId(const int64_t& _priceId)
{
    m_priceId = _priceId;
    m_priceIdHasBeenSet = true;
}

bool WorkspaceDTO::PriceIdHasBeenSet() const
{
    return m_priceIdHasBeenSet;
}

int64_t WorkspaceDTO::GetInitializeStatus() const
{
    return m_initializeStatus;
}

void WorkspaceDTO::SetInitializeStatus(const int64_t& _initializeStatus)
{
    m_initializeStatus = _initializeStatus;
    m_initializeStatusHasBeenSet = true;
}

bool WorkspaceDTO::InitializeStatusHasBeenSet() const
{
    return m_initializeStatusHasBeenSet;
}

string WorkspaceDTO::GetVersionControlDesc() const
{
    return m_versionControlDesc;
}

void WorkspaceDTO::SetVersionControlDesc(const string& _versionControlDesc)
{
    m_versionControlDesc = _versionControlDesc;
    m_versionControlDescHasBeenSet = true;
}

bool WorkspaceDTO::VersionControlDescHasBeenSet() const
{
    return m_versionControlDescHasBeenSet;
}

