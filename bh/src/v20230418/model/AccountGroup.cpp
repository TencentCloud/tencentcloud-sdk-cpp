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

#include <tencentcloud/bh/v20230418/model/AccountGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bh::V20230418::Model;
using namespace std;

AccountGroup::AccountGroup() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_idPathHasBeenSet(false),
    m_namePathHasBeenSet(false),
    m_parentIdHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_userTotalHasBeenSet(false),
    m_isLeafHasBeenSet(false),
    m_importTypeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_parentOrgIdHasBeenSet(false),
    m_orgIdHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome AccountGroup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AccountGroup.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccountGroup.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("IdPath") && !value["IdPath"].IsNull())
    {
        if (!value["IdPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccountGroup.IdPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idPath = string(value["IdPath"].GetString());
        m_idPathHasBeenSet = true;
    }

    if (value.HasMember("NamePath") && !value["NamePath"].IsNull())
    {
        if (!value["NamePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccountGroup.NamePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namePath = string(value["NamePath"].GetString());
        m_namePathHasBeenSet = true;
    }

    if (value.HasMember("ParentId") && !value["ParentId"].IsNull())
    {
        if (!value["ParentId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AccountGroup.ParentId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_parentId = value["ParentId"].GetInt64();
        m_parentIdHasBeenSet = true;
    }

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AccountGroup.Source` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_source = value["Source"].GetInt64();
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("UserTotal") && !value["UserTotal"].IsNull())
    {
        if (!value["UserTotal"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AccountGroup.UserTotal` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_userTotal = value["UserTotal"].GetInt64();
        m_userTotalHasBeenSet = true;
    }

    if (value.HasMember("IsLeaf") && !value["IsLeaf"].IsNull())
    {
        if (!value["IsLeaf"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AccountGroup.IsLeaf` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isLeaf = value["IsLeaf"].GetBool();
        m_isLeafHasBeenSet = true;
    }

    if (value.HasMember("ImportType") && !value["ImportType"].IsNull())
    {
        if (!value["ImportType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccountGroup.ImportType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_importType = string(value["ImportType"].GetString());
        m_importTypeHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccountGroup.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("ParentOrgId") && !value["ParentOrgId"].IsNull())
    {
        if (!value["ParentOrgId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccountGroup.ParentOrgId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parentOrgId = string(value["ParentOrgId"].GetString());
        m_parentOrgIdHasBeenSet = true;
    }

    if (value.HasMember("OrgId") && !value["OrgId"].IsNull())
    {
        if (!value["OrgId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccountGroup.OrgId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orgId = string(value["OrgId"].GetString());
        m_orgIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AccountGroup.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AccountGroup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_idPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idPath.c_str(), allocator).Move(), allocator);
    }

    if (m_namePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namePath.c_str(), allocator).Move(), allocator);
    }

    if (m_parentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_parentId, allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_source, allocator);
    }

    if (m_userTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_userTotal, allocator);
    }

    if (m_isLeafHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsLeaf";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isLeaf, allocator);
    }

    if (m_importTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImportType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_importType.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_parentOrgIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentOrgId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parentOrgId.c_str(), allocator).Move(), allocator);
    }

    if (m_orgIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrgId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orgId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

}


int64_t AccountGroup::GetId() const
{
    return m_id;
}

void AccountGroup::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool AccountGroup::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string AccountGroup::GetName() const
{
    return m_name;
}

void AccountGroup::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AccountGroup::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string AccountGroup::GetIdPath() const
{
    return m_idPath;
}

void AccountGroup::SetIdPath(const string& _idPath)
{
    m_idPath = _idPath;
    m_idPathHasBeenSet = true;
}

bool AccountGroup::IdPathHasBeenSet() const
{
    return m_idPathHasBeenSet;
}

string AccountGroup::GetNamePath() const
{
    return m_namePath;
}

void AccountGroup::SetNamePath(const string& _namePath)
{
    m_namePath = _namePath;
    m_namePathHasBeenSet = true;
}

bool AccountGroup::NamePathHasBeenSet() const
{
    return m_namePathHasBeenSet;
}

int64_t AccountGroup::GetParentId() const
{
    return m_parentId;
}

void AccountGroup::SetParentId(const int64_t& _parentId)
{
    m_parentId = _parentId;
    m_parentIdHasBeenSet = true;
}

bool AccountGroup::ParentIdHasBeenSet() const
{
    return m_parentIdHasBeenSet;
}

int64_t AccountGroup::GetSource() const
{
    return m_source;
}

void AccountGroup::SetSource(const int64_t& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool AccountGroup::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

int64_t AccountGroup::GetUserTotal() const
{
    return m_userTotal;
}

void AccountGroup::SetUserTotal(const int64_t& _userTotal)
{
    m_userTotal = _userTotal;
    m_userTotalHasBeenSet = true;
}

bool AccountGroup::UserTotalHasBeenSet() const
{
    return m_userTotalHasBeenSet;
}

bool AccountGroup::GetIsLeaf() const
{
    return m_isLeaf;
}

void AccountGroup::SetIsLeaf(const bool& _isLeaf)
{
    m_isLeaf = _isLeaf;
    m_isLeafHasBeenSet = true;
}

bool AccountGroup::IsLeafHasBeenSet() const
{
    return m_isLeafHasBeenSet;
}

string AccountGroup::GetImportType() const
{
    return m_importType;
}

void AccountGroup::SetImportType(const string& _importType)
{
    m_importType = _importType;
    m_importTypeHasBeenSet = true;
}

bool AccountGroup::ImportTypeHasBeenSet() const
{
    return m_importTypeHasBeenSet;
}

string AccountGroup::GetDescription() const
{
    return m_description;
}

void AccountGroup::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool AccountGroup::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string AccountGroup::GetParentOrgId() const
{
    return m_parentOrgId;
}

void AccountGroup::SetParentOrgId(const string& _parentOrgId)
{
    m_parentOrgId = _parentOrgId;
    m_parentOrgIdHasBeenSet = true;
}

bool AccountGroup::ParentOrgIdHasBeenSet() const
{
    return m_parentOrgIdHasBeenSet;
}

string AccountGroup::GetOrgId() const
{
    return m_orgId;
}

void AccountGroup::SetOrgId(const string& _orgId)
{
    m_orgId = _orgId;
    m_orgIdHasBeenSet = true;
}

bool AccountGroup::OrgIdHasBeenSet() const
{
    return m_orgIdHasBeenSet;
}

int64_t AccountGroup::GetStatus() const
{
    return m_status;
}

void AccountGroup::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AccountGroup::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

