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

#include <tencentcloud/cme/v20191029/model/ProjectInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cme::V20191029::Model;
using namespace rapidjson;
using namespace std;

ProjectInfo::ProjectInfo() :
    m_projectIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_aspectRatioHasBeenSet(false),
    m_categoryHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_coverUrlHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome ProjectInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ProjectInfo.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Error("response `ProjectInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("AspectRatio") && !value["AspectRatio"].IsNull())
    {
        if (!value["AspectRatio"].IsString())
        {
            return CoreInternalOutcome(Error("response `ProjectInfo.AspectRatio` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aspectRatio = string(value["AspectRatio"].GetString());
        m_aspectRatioHasBeenSet = true;
    }

    if (value.HasMember("Category") && !value["Category"].IsNull())
    {
        if (!value["Category"].IsString())
        {
            return CoreInternalOutcome(Error("response `ProjectInfo.Category` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_category = string(value["Category"].GetString());
        m_categoryHasBeenSet = true;
    }

    if (value.HasMember("Owner") && !value["Owner"].IsNull())
    {
        if (!value["Owner"].IsObject())
        {
            return CoreInternalOutcome(Error("response `ProjectInfo.Owner` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_owner.Deserialize(value["Owner"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ownerHasBeenSet = true;
    }

    if (value.HasMember("CoverUrl") && !value["CoverUrl"].IsNull())
    {
        if (!value["CoverUrl"].IsString())
        {
            return CoreInternalOutcome(Error("response `ProjectInfo.CoverUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_coverUrl = string(value["CoverUrl"].GetString());
        m_coverUrlHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `ProjectInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `ProjectInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProjectInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_projectIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_aspectRatioHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AspectRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_aspectRatio.c_str(), allocator).Move(), allocator);
    }

    if (m_categoryHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Category";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_category.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Owner";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_owner.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_coverUrlHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CoverUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_coverUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

}


string ProjectInfo::GetProjectId() const
{
    return m_projectId;
}

void ProjectInfo::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ProjectInfo::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string ProjectInfo::GetName() const
{
    return m_name;
}

void ProjectInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ProjectInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ProjectInfo::GetAspectRatio() const
{
    return m_aspectRatio;
}

void ProjectInfo::SetAspectRatio(const string& _aspectRatio)
{
    m_aspectRatio = _aspectRatio;
    m_aspectRatioHasBeenSet = true;
}

bool ProjectInfo::AspectRatioHasBeenSet() const
{
    return m_aspectRatioHasBeenSet;
}

string ProjectInfo::GetCategory() const
{
    return m_category;
}

void ProjectInfo::SetCategory(const string& _category)
{
    m_category = _category;
    m_categoryHasBeenSet = true;
}

bool ProjectInfo::CategoryHasBeenSet() const
{
    return m_categoryHasBeenSet;
}

Entity ProjectInfo::GetOwner() const
{
    return m_owner;
}

void ProjectInfo::SetOwner(const Entity& _owner)
{
    m_owner = _owner;
    m_ownerHasBeenSet = true;
}

bool ProjectInfo::OwnerHasBeenSet() const
{
    return m_ownerHasBeenSet;
}

string ProjectInfo::GetCoverUrl() const
{
    return m_coverUrl;
}

void ProjectInfo::SetCoverUrl(const string& _coverUrl)
{
    m_coverUrl = _coverUrl;
    m_coverUrlHasBeenSet = true;
}

bool ProjectInfo::CoverUrlHasBeenSet() const
{
    return m_coverUrlHasBeenSet;
}

string ProjectInfo::GetCreateTime() const
{
    return m_createTime;
}

void ProjectInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ProjectInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string ProjectInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void ProjectInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool ProjectInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

