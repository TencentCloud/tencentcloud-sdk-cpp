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

#include <tencentcloud/wedata/v20250806/model/DataSource.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

DataSource::DataSource() :
    m_projectIdHasBeenSet(false),
    m_idHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_createUserHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_modifyUserHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_prodConPropertiesHasBeenSet(false),
    m_devConPropertiesHasBeenSet(false),
    m_categoryHasBeenSet(false)
{
}

CoreInternalOutcome DataSource::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSource.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DataSource.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSource.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSource.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("DisplayName") && !value["DisplayName"].IsNull())
    {
        if (!value["DisplayName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSource.DisplayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_displayName = string(value["DisplayName"].GetString());
        m_displayNameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSource.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("ProjectName") && !value["ProjectName"].IsNull())
    {
        if (!value["ProjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSource.ProjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectName = string(value["ProjectName"].GetString());
        m_projectNameHasBeenSet = true;
    }

    if (value.HasMember("CreateUser") && !value["CreateUser"].IsNull())
    {
        if (!value["CreateUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSource.CreateUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createUser = string(value["CreateUser"].GetString());
        m_createUserHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSource.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifyUser") && !value["ModifyUser"].IsNull())
    {
        if (!value["ModifyUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSource.ModifyUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyUser = string(value["ModifyUser"].GetString());
        m_modifyUserHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSource.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("ProdConProperties") && !value["ProdConProperties"].IsNull())
    {
        if (!value["ProdConProperties"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSource.ProdConProperties` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_prodConProperties = string(value["ProdConProperties"].GetString());
        m_prodConPropertiesHasBeenSet = true;
    }

    if (value.HasMember("DevConProperties") && !value["DevConProperties"].IsNull())
    {
        if (!value["DevConProperties"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSource.DevConProperties` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_devConProperties = string(value["DevConProperties"].GetString());
        m_devConPropertiesHasBeenSet = true;
    }

    if (value.HasMember("Category") && !value["Category"].IsNull())
    {
        if (!value["Category"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSource.Category` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_category = string(value["Category"].GetString());
        m_categoryHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DataSource::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_displayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_displayName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_projectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectName.c_str(), allocator).Move(), allocator);
    }

    if (m_createUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createUser.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyUser.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_prodConPropertiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProdConProperties";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_prodConProperties.c_str(), allocator).Move(), allocator);
    }

    if (m_devConPropertiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DevConProperties";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_devConProperties.c_str(), allocator).Move(), allocator);
    }

    if (m_categoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Category";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_category.c_str(), allocator).Move(), allocator);
    }

}


string DataSource::GetProjectId() const
{
    return m_projectId;
}

void DataSource::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DataSource::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

uint64_t DataSource::GetId() const
{
    return m_id;
}

void DataSource::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DataSource::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string DataSource::GetType() const
{
    return m_type;
}

void DataSource::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DataSource::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string DataSource::GetName() const
{
    return m_name;
}

void DataSource::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DataSource::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DataSource::GetDisplayName() const
{
    return m_displayName;
}

void DataSource::SetDisplayName(const string& _displayName)
{
    m_displayName = _displayName;
    m_displayNameHasBeenSet = true;
}

bool DataSource::DisplayNameHasBeenSet() const
{
    return m_displayNameHasBeenSet;
}

string DataSource::GetDescription() const
{
    return m_description;
}

void DataSource::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool DataSource::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string DataSource::GetProjectName() const
{
    return m_projectName;
}

void DataSource::SetProjectName(const string& _projectName)
{
    m_projectName = _projectName;
    m_projectNameHasBeenSet = true;
}

bool DataSource::ProjectNameHasBeenSet() const
{
    return m_projectNameHasBeenSet;
}

string DataSource::GetCreateUser() const
{
    return m_createUser;
}

void DataSource::SetCreateUser(const string& _createUser)
{
    m_createUser = _createUser;
    m_createUserHasBeenSet = true;
}

bool DataSource::CreateUserHasBeenSet() const
{
    return m_createUserHasBeenSet;
}

string DataSource::GetCreateTime() const
{
    return m_createTime;
}

void DataSource::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DataSource::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DataSource::GetModifyUser() const
{
    return m_modifyUser;
}

void DataSource::SetModifyUser(const string& _modifyUser)
{
    m_modifyUser = _modifyUser;
    m_modifyUserHasBeenSet = true;
}

bool DataSource::ModifyUserHasBeenSet() const
{
    return m_modifyUserHasBeenSet;
}

string DataSource::GetModifyTime() const
{
    return m_modifyTime;
}

void DataSource::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool DataSource::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

string DataSource::GetProdConProperties() const
{
    return m_prodConProperties;
}

void DataSource::SetProdConProperties(const string& _prodConProperties)
{
    m_prodConProperties = _prodConProperties;
    m_prodConPropertiesHasBeenSet = true;
}

bool DataSource::ProdConPropertiesHasBeenSet() const
{
    return m_prodConPropertiesHasBeenSet;
}

string DataSource::GetDevConProperties() const
{
    return m_devConProperties;
}

void DataSource::SetDevConProperties(const string& _devConProperties)
{
    m_devConProperties = _devConProperties;
    m_devConPropertiesHasBeenSet = true;
}

bool DataSource::DevConPropertiesHasBeenSet() const
{
    return m_devConPropertiesHasBeenSet;
}

string DataSource::GetCategory() const
{
    return m_category;
}

void DataSource::SetCategory(const string& _category)
{
    m_category = _category;
    m_categoryHasBeenSet = true;
}

bool DataSource::CategoryHasBeenSet() const
{
    return m_categoryHasBeenSet;
}

