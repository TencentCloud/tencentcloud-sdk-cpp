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

#include <tencentcloud/bi/v20220105/model/Project.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bi::V20220105::Model;
using namespace std;

Project::Project() :
    m_idHasBeenSet(false),
    m_logoHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_colorCodeHasBeenSet(false),
    m_createdUserHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_memberCountHasBeenSet(false),
    m_pageCountHasBeenSet(false),
    m_lastModifyNameHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_applyHasBeenSet(false),
    m_updatedUserHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_corpIdHasBeenSet(false),
    m_markHasBeenSet(false),
    m_seedHasBeenSet(false),
    m_authListHasBeenSet(false),
    m_panelScopeHasBeenSet(false),
    m_isExternalManageHasBeenSet(false),
    m_managePlatformHasBeenSet(false),
    m_configListHasBeenSet(false),
    m_createdUserNameHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_ownerNameHasBeenSet(false),
    m_normalCountHasBeenSet(false),
    m_freeCountHasBeenSet(false),
    m_adhocCountHasBeenSet(false),
    m_briefingCountHasBeenSet(false)
{
}

CoreInternalOutcome Project::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Project.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Logo") && !value["Logo"].IsNull())
    {
        if (!value["Logo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Project.Logo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logo = string(value["Logo"].GetString());
        m_logoHasBeenSet = true;
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

    if (value.HasMember("ColorCode") && !value["ColorCode"].IsNull())
    {
        if (!value["ColorCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Project.ColorCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_colorCode = string(value["ColorCode"].GetString());
        m_colorCodeHasBeenSet = true;
    }

    if (value.HasMember("CreatedUser") && !value["CreatedUser"].IsNull())
    {
        if (!value["CreatedUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Project.CreatedUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdUser = string(value["CreatedUser"].GetString());
        m_createdUserHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Project.CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(value["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("MemberCount") && !value["MemberCount"].IsNull())
    {
        if (!value["MemberCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Project.MemberCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memberCount = value["MemberCount"].GetInt64();
        m_memberCountHasBeenSet = true;
    }

    if (value.HasMember("PageCount") && !value["PageCount"].IsNull())
    {
        if (!value["PageCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Project.PageCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pageCount = value["PageCount"].GetInt64();
        m_pageCountHasBeenSet = true;
    }

    if (value.HasMember("LastModifyName") && !value["LastModifyName"].IsNull())
    {
        if (!value["LastModifyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Project.LastModifyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastModifyName = string(value["LastModifyName"].GetString());
        m_lastModifyNameHasBeenSet = true;
    }

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Project.Source` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_source = string(value["Source"].GetString());
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("Apply") && !value["Apply"].IsNull())
    {
        if (!value["Apply"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Project.Apply` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_apply = value["Apply"].GetBool();
        m_applyHasBeenSet = true;
    }

    if (value.HasMember("UpdatedUser") && !value["UpdatedUser"].IsNull())
    {
        if (!value["UpdatedUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Project.UpdatedUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedUser = string(value["UpdatedUser"].GetString());
        m_updatedUserHasBeenSet = true;
    }

    if (value.HasMember("UpdatedAt") && !value["UpdatedAt"].IsNull())
    {
        if (!value["UpdatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Project.UpdatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedAt = string(value["UpdatedAt"].GetString());
        m_updatedAtHasBeenSet = true;
    }

    if (value.HasMember("CorpId") && !value["CorpId"].IsNull())
    {
        if (!value["CorpId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Project.CorpId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_corpId = string(value["CorpId"].GetString());
        m_corpIdHasBeenSet = true;
    }

    if (value.HasMember("Mark") && !value["Mark"].IsNull())
    {
        if (!value["Mark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Project.Mark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mark = string(value["Mark"].GetString());
        m_markHasBeenSet = true;
    }

    if (value.HasMember("Seed") && !value["Seed"].IsNull())
    {
        if (!value["Seed"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Project.Seed` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_seed = string(value["Seed"].GetString());
        m_seedHasBeenSet = true;
    }

    if (value.HasMember("AuthList") && !value["AuthList"].IsNull())
    {
        if (!value["AuthList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Project.AuthList` is not array type"));

        const rapidjson::Value &tmpValue = value["AuthList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_authList.push_back((*itr).GetString());
        }
        m_authListHasBeenSet = true;
    }

    if (value.HasMember("PanelScope") && !value["PanelScope"].IsNull())
    {
        if (!value["PanelScope"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Project.PanelScope` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_panelScope = string(value["PanelScope"].GetString());
        m_panelScopeHasBeenSet = true;
    }

    if (value.HasMember("IsExternalManage") && !value["IsExternalManage"].IsNull())
    {
        if (!value["IsExternalManage"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Project.IsExternalManage` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isExternalManage = value["IsExternalManage"].GetBool();
        m_isExternalManageHasBeenSet = true;
    }

    if (value.HasMember("ManagePlatform") && !value["ManagePlatform"].IsNull())
    {
        if (!value["ManagePlatform"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Project.ManagePlatform` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_managePlatform = string(value["ManagePlatform"].GetString());
        m_managePlatformHasBeenSet = true;
    }

    if (value.HasMember("ConfigList") && !value["ConfigList"].IsNull())
    {
        if (!value["ConfigList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Project.ConfigList` is not array type"));

        const rapidjson::Value &tmpValue = value["ConfigList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ProjectConfigList item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_configList.push_back(item);
        }
        m_configListHasBeenSet = true;
    }

    if (value.HasMember("CreatedUserName") && !value["CreatedUserName"].IsNull())
    {
        if (!value["CreatedUserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Project.CreatedUserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdUserName = string(value["CreatedUserName"].GetString());
        m_createdUserNameHasBeenSet = true;
    }

    if (value.HasMember("Owner") && !value["Owner"].IsNull())
    {
        if (!value["Owner"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Project.Owner` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_owner = string(value["Owner"].GetString());
        m_ownerHasBeenSet = true;
    }

    if (value.HasMember("OwnerName") && !value["OwnerName"].IsNull())
    {
        if (!value["OwnerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Project.OwnerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerName = string(value["OwnerName"].GetString());
        m_ownerNameHasBeenSet = true;
    }

    if (value.HasMember("NormalCount") && !value["NormalCount"].IsNull())
    {
        if (!value["NormalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Project.NormalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_normalCount = value["NormalCount"].GetInt64();
        m_normalCountHasBeenSet = true;
    }

    if (value.HasMember("FreeCount") && !value["FreeCount"].IsNull())
    {
        if (!value["FreeCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Project.FreeCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_freeCount = value["FreeCount"].GetInt64();
        m_freeCountHasBeenSet = true;
    }

    if (value.HasMember("AdhocCount") && !value["AdhocCount"].IsNull())
    {
        if (!value["AdhocCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Project.AdhocCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_adhocCount = value["AdhocCount"].GetInt64();
        m_adhocCountHasBeenSet = true;
    }

    if (value.HasMember("BriefingCount") && !value["BriefingCount"].IsNull())
    {
        if (!value["BriefingCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Project.BriefingCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_briefingCount = value["BriefingCount"].GetInt64();
        m_briefingCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Project::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_logoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Logo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logo.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_colorCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColorCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_colorCode.c_str(), allocator).Move(), allocator);
    }

    if (m_createdUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdUser.c_str(), allocator).Move(), allocator);
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdAt.c_str(), allocator).Move(), allocator);
    }

    if (m_memberCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memberCount, allocator);
    }

    if (m_pageCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pageCount, allocator);
    }

    if (m_lastModifyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastModifyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastModifyName.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
    }

    if (m_applyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Apply";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_apply, allocator);
    }

    if (m_updatedUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedUser.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedAt.c_str(), allocator).Move(), allocator);
    }

    if (m_corpIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CorpId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_corpId.c_str(), allocator).Move(), allocator);
    }

    if (m_markHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mark.c_str(), allocator).Move(), allocator);
    }

    if (m_seedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Seed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_seed.c_str(), allocator).Move(), allocator);
    }

    if (m_authListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_authList.begin(); itr != m_authList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_panelScopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PanelScope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_panelScope.c_str(), allocator).Move(), allocator);
    }

    if (m_isExternalManageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsExternalManage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isExternalManage, allocator);
    }

    if (m_managePlatformHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManagePlatform";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_managePlatform.c_str(), allocator).Move(), allocator);
    }

    if (m_configListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_configList.begin(); itr != m_configList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_createdUserNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedUserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdUserName.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Owner";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_owner.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerName.c_str(), allocator).Move(), allocator);
    }

    if (m_normalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NormalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_normalCount, allocator);
    }

    if (m_freeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FreeCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_freeCount, allocator);
    }

    if (m_adhocCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdhocCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_adhocCount, allocator);
    }

    if (m_briefingCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BriefingCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_briefingCount, allocator);
    }

}


uint64_t Project::GetId() const
{
    return m_id;
}

void Project::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool Project::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string Project::GetLogo() const
{
    return m_logo;
}

void Project::SetLogo(const string& _logo)
{
    m_logo = _logo;
    m_logoHasBeenSet = true;
}

bool Project::LogoHasBeenSet() const
{
    return m_logoHasBeenSet;
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

string Project::GetColorCode() const
{
    return m_colorCode;
}

void Project::SetColorCode(const string& _colorCode)
{
    m_colorCode = _colorCode;
    m_colorCodeHasBeenSet = true;
}

bool Project::ColorCodeHasBeenSet() const
{
    return m_colorCodeHasBeenSet;
}

string Project::GetCreatedUser() const
{
    return m_createdUser;
}

void Project::SetCreatedUser(const string& _createdUser)
{
    m_createdUser = _createdUser;
    m_createdUserHasBeenSet = true;
}

bool Project::CreatedUserHasBeenSet() const
{
    return m_createdUserHasBeenSet;
}

string Project::GetCreatedAt() const
{
    return m_createdAt;
}

void Project::SetCreatedAt(const string& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool Project::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

int64_t Project::GetMemberCount() const
{
    return m_memberCount;
}

void Project::SetMemberCount(const int64_t& _memberCount)
{
    m_memberCount = _memberCount;
    m_memberCountHasBeenSet = true;
}

bool Project::MemberCountHasBeenSet() const
{
    return m_memberCountHasBeenSet;
}

int64_t Project::GetPageCount() const
{
    return m_pageCount;
}

void Project::SetPageCount(const int64_t& _pageCount)
{
    m_pageCount = _pageCount;
    m_pageCountHasBeenSet = true;
}

bool Project::PageCountHasBeenSet() const
{
    return m_pageCountHasBeenSet;
}

string Project::GetLastModifyName() const
{
    return m_lastModifyName;
}

void Project::SetLastModifyName(const string& _lastModifyName)
{
    m_lastModifyName = _lastModifyName;
    m_lastModifyNameHasBeenSet = true;
}

bool Project::LastModifyNameHasBeenSet() const
{
    return m_lastModifyNameHasBeenSet;
}

string Project::GetSource() const
{
    return m_source;
}

void Project::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool Project::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

bool Project::GetApply() const
{
    return m_apply;
}

void Project::SetApply(const bool& _apply)
{
    m_apply = _apply;
    m_applyHasBeenSet = true;
}

bool Project::ApplyHasBeenSet() const
{
    return m_applyHasBeenSet;
}

string Project::GetUpdatedUser() const
{
    return m_updatedUser;
}

void Project::SetUpdatedUser(const string& _updatedUser)
{
    m_updatedUser = _updatedUser;
    m_updatedUserHasBeenSet = true;
}

bool Project::UpdatedUserHasBeenSet() const
{
    return m_updatedUserHasBeenSet;
}

string Project::GetUpdatedAt() const
{
    return m_updatedAt;
}

void Project::SetUpdatedAt(const string& _updatedAt)
{
    m_updatedAt = _updatedAt;
    m_updatedAtHasBeenSet = true;
}

bool Project::UpdatedAtHasBeenSet() const
{
    return m_updatedAtHasBeenSet;
}

string Project::GetCorpId() const
{
    return m_corpId;
}

void Project::SetCorpId(const string& _corpId)
{
    m_corpId = _corpId;
    m_corpIdHasBeenSet = true;
}

bool Project::CorpIdHasBeenSet() const
{
    return m_corpIdHasBeenSet;
}

string Project::GetMark() const
{
    return m_mark;
}

void Project::SetMark(const string& _mark)
{
    m_mark = _mark;
    m_markHasBeenSet = true;
}

bool Project::MarkHasBeenSet() const
{
    return m_markHasBeenSet;
}

string Project::GetSeed() const
{
    return m_seed;
}

void Project::SetSeed(const string& _seed)
{
    m_seed = _seed;
    m_seedHasBeenSet = true;
}

bool Project::SeedHasBeenSet() const
{
    return m_seedHasBeenSet;
}

vector<string> Project::GetAuthList() const
{
    return m_authList;
}

void Project::SetAuthList(const vector<string>& _authList)
{
    m_authList = _authList;
    m_authListHasBeenSet = true;
}

bool Project::AuthListHasBeenSet() const
{
    return m_authListHasBeenSet;
}

string Project::GetPanelScope() const
{
    return m_panelScope;
}

void Project::SetPanelScope(const string& _panelScope)
{
    m_panelScope = _panelScope;
    m_panelScopeHasBeenSet = true;
}

bool Project::PanelScopeHasBeenSet() const
{
    return m_panelScopeHasBeenSet;
}

bool Project::GetIsExternalManage() const
{
    return m_isExternalManage;
}

void Project::SetIsExternalManage(const bool& _isExternalManage)
{
    m_isExternalManage = _isExternalManage;
    m_isExternalManageHasBeenSet = true;
}

bool Project::IsExternalManageHasBeenSet() const
{
    return m_isExternalManageHasBeenSet;
}

string Project::GetManagePlatform() const
{
    return m_managePlatform;
}

void Project::SetManagePlatform(const string& _managePlatform)
{
    m_managePlatform = _managePlatform;
    m_managePlatformHasBeenSet = true;
}

bool Project::ManagePlatformHasBeenSet() const
{
    return m_managePlatformHasBeenSet;
}

vector<ProjectConfigList> Project::GetConfigList() const
{
    return m_configList;
}

void Project::SetConfigList(const vector<ProjectConfigList>& _configList)
{
    m_configList = _configList;
    m_configListHasBeenSet = true;
}

bool Project::ConfigListHasBeenSet() const
{
    return m_configListHasBeenSet;
}

string Project::GetCreatedUserName() const
{
    return m_createdUserName;
}

void Project::SetCreatedUserName(const string& _createdUserName)
{
    m_createdUserName = _createdUserName;
    m_createdUserNameHasBeenSet = true;
}

bool Project::CreatedUserNameHasBeenSet() const
{
    return m_createdUserNameHasBeenSet;
}

string Project::GetOwner() const
{
    return m_owner;
}

void Project::SetOwner(const string& _owner)
{
    m_owner = _owner;
    m_ownerHasBeenSet = true;
}

bool Project::OwnerHasBeenSet() const
{
    return m_ownerHasBeenSet;
}

string Project::GetOwnerName() const
{
    return m_ownerName;
}

void Project::SetOwnerName(const string& _ownerName)
{
    m_ownerName = _ownerName;
    m_ownerNameHasBeenSet = true;
}

bool Project::OwnerNameHasBeenSet() const
{
    return m_ownerNameHasBeenSet;
}

int64_t Project::GetNormalCount() const
{
    return m_normalCount;
}

void Project::SetNormalCount(const int64_t& _normalCount)
{
    m_normalCount = _normalCount;
    m_normalCountHasBeenSet = true;
}

bool Project::NormalCountHasBeenSet() const
{
    return m_normalCountHasBeenSet;
}

int64_t Project::GetFreeCount() const
{
    return m_freeCount;
}

void Project::SetFreeCount(const int64_t& _freeCount)
{
    m_freeCount = _freeCount;
    m_freeCountHasBeenSet = true;
}

bool Project::FreeCountHasBeenSet() const
{
    return m_freeCountHasBeenSet;
}

int64_t Project::GetAdhocCount() const
{
    return m_adhocCount;
}

void Project::SetAdhocCount(const int64_t& _adhocCount)
{
    m_adhocCount = _adhocCount;
    m_adhocCountHasBeenSet = true;
}

bool Project::AdhocCountHasBeenSet() const
{
    return m_adhocCountHasBeenSet;
}

int64_t Project::GetBriefingCount() const
{
    return m_briefingCount;
}

void Project::SetBriefingCount(const int64_t& _briefingCount)
{
    m_briefingCount = _briefingCount;
    m_briefingCountHasBeenSet = true;
}

bool Project::BriefingCountHasBeenSet() const
{
    return m_briefingCountHasBeenSet;
}

