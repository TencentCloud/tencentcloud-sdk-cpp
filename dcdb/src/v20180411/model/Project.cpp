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

#include <tencentcloud/dcdb/v20180411/model/Project.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dcdb::V20180411::Model;
using namespace std;

Project::Project() :
    m_projectIdHasBeenSet(false),
    m_ownerUinHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_creatorUinHasBeenSet(false),
    m_srcPlatHasBeenSet(false),
    m_srcAppIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_isDefaultHasBeenSet(false),
    m_infoHasBeenSet(false)
{
}

CoreInternalOutcome Project::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Project.ProjectId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetInt64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("OwnerUin") && !value["OwnerUin"].IsNull())
    {
        if (!value["OwnerUin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Project.OwnerUin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUin = value["OwnerUin"].GetInt64();
        m_ownerUinHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Project.AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Project.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("CreatorUin") && !value["CreatorUin"].IsNull())
    {
        if (!value["CreatorUin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Project.CreatorUin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_creatorUin = value["CreatorUin"].GetInt64();
        m_creatorUinHasBeenSet = true;
    }

    if (value.HasMember("SrcPlat") && !value["SrcPlat"].IsNull())
    {
        if (!value["SrcPlat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Project.SrcPlat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcPlat = string(value["SrcPlat"].GetString());
        m_srcPlatHasBeenSet = true;
    }

    if (value.HasMember("SrcAppId") && !value["SrcAppId"].IsNull())
    {
        if (!value["SrcAppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Project.SrcAppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_srcAppId = value["SrcAppId"].GetInt64();
        m_srcAppIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Project.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Project.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("IsDefault") && !value["IsDefault"].IsNull())
    {
        if (!value["IsDefault"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Project.IsDefault` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isDefault = value["IsDefault"].GetInt64();
        m_isDefaultHasBeenSet = true;
    }

    if (value.HasMember("Info") && !value["Info"].IsNull())
    {
        if (!value["Info"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Project.Info` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_info = string(value["Info"].GetString());
        m_infoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Project::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectId, allocator);
    }

    if (m_ownerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ownerUin, allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_creatorUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatorUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_creatorUin, allocator);
    }

    if (m_srcPlatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcPlat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcPlat.c_str(), allocator).Move(), allocator);
    }

    if (m_srcAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_srcAppId, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_isDefaultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDefault";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDefault, allocator);
    }

    if (m_infoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Info";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_info.c_str(), allocator).Move(), allocator);
    }

}


int64_t Project::GetProjectId() const
{
    return m_projectId;
}

void Project::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool Project::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

int64_t Project::GetOwnerUin() const
{
    return m_ownerUin;
}

void Project::SetOwnerUin(const int64_t& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool Project::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

int64_t Project::GetAppId() const
{
    return m_appId;
}

void Project::SetAppId(const int64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool Project::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string Project::GetName() const
{
    return m_name;
}

void Project::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Project::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t Project::GetCreatorUin() const
{
    return m_creatorUin;
}

void Project::SetCreatorUin(const int64_t& _creatorUin)
{
    m_creatorUin = _creatorUin;
    m_creatorUinHasBeenSet = true;
}

bool Project::CreatorUinHasBeenSet() const
{
    return m_creatorUinHasBeenSet;
}

string Project::GetSrcPlat() const
{
    return m_srcPlat;
}

void Project::SetSrcPlat(const string& _srcPlat)
{
    m_srcPlat = _srcPlat;
    m_srcPlatHasBeenSet = true;
}

bool Project::SrcPlatHasBeenSet() const
{
    return m_srcPlatHasBeenSet;
}

int64_t Project::GetSrcAppId() const
{
    return m_srcAppId;
}

void Project::SetSrcAppId(const int64_t& _srcAppId)
{
    m_srcAppId = _srcAppId;
    m_srcAppIdHasBeenSet = true;
}

bool Project::SrcAppIdHasBeenSet() const
{
    return m_srcAppIdHasBeenSet;
}

int64_t Project::GetStatus() const
{
    return m_status;
}

void Project::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool Project::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string Project::GetCreateTime() const
{
    return m_createTime;
}

void Project::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool Project::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t Project::GetIsDefault() const
{
    return m_isDefault;
}

void Project::SetIsDefault(const int64_t& _isDefault)
{
    m_isDefault = _isDefault;
    m_isDefaultHasBeenSet = true;
}

bool Project::IsDefaultHasBeenSet() const
{
    return m_isDefaultHasBeenSet;
}

string Project::GetInfo() const
{
    return m_info;
}

void Project::SetInfo(const string& _info)
{
    m_info = _info;
    m_infoHasBeenSet = true;
}

bool Project::InfoHasBeenSet() const
{
    return m_infoHasBeenSet;
}

