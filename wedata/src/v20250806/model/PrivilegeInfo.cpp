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

#include <tencentcloud/wedata/v20250806/model/PrivilegeInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

PrivilegeInfo::PrivilegeInfo() :
    m_nameHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_isReadHasBeenSet(false),
    m_isManageHasBeenSet(false),
    m_grantedHasBeenSet(false),
    m_inheritedObjectHasBeenSet(false),
    m_inheritedHasBeenSet(false),
    m_isEditHasBeenSet(false),
    m_isMetaDataPermissionHasBeenSet(false),
    m_catalogIDHasBeenSet(false),
    m_catalogNameHasBeenSet(false),
    m_workSpaceIDHasBeenSet(false),
    m_workSpaceNameHasBeenSet(false)
{
}

CoreInternalOutcome PrivilegeInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivilegeInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("DisplayName") && !value["DisplayName"].IsNull())
    {
        if (!value["DisplayName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivilegeInfo.DisplayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_displayName = string(value["DisplayName"].GetString());
        m_displayNameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivilegeInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("IsRead") && !value["IsRead"].IsNull())
    {
        if (!value["IsRead"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `PrivilegeInfo.IsRead` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isRead = value["IsRead"].GetBool();
        m_isReadHasBeenSet = true;
    }

    if (value.HasMember("IsManage") && !value["IsManage"].IsNull())
    {
        if (!value["IsManage"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `PrivilegeInfo.IsManage` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isManage = value["IsManage"].GetBool();
        m_isManageHasBeenSet = true;
    }

    if (value.HasMember("Granted") && !value["Granted"].IsNull())
    {
        if (!value["Granted"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `PrivilegeInfo.Granted` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_granted = value["Granted"].GetBool();
        m_grantedHasBeenSet = true;
    }

    if (value.HasMember("InheritedObject") && !value["InheritedObject"].IsNull())
    {
        if (!value["InheritedObject"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PrivilegeInfo.InheritedObject` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_inheritedObject.Deserialize(value["InheritedObject"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_inheritedObjectHasBeenSet = true;
    }

    if (value.HasMember("Inherited") && !value["Inherited"].IsNull())
    {
        if (!value["Inherited"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `PrivilegeInfo.Inherited` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_inherited = value["Inherited"].GetBool();
        m_inheritedHasBeenSet = true;
    }

    if (value.HasMember("IsEdit") && !value["IsEdit"].IsNull())
    {
        if (!value["IsEdit"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `PrivilegeInfo.IsEdit` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isEdit = value["IsEdit"].GetBool();
        m_isEditHasBeenSet = true;
    }

    if (value.HasMember("IsMetaDataPermission") && !value["IsMetaDataPermission"].IsNull())
    {
        if (!value["IsMetaDataPermission"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `PrivilegeInfo.IsMetaDataPermission` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isMetaDataPermission = value["IsMetaDataPermission"].GetBool();
        m_isMetaDataPermissionHasBeenSet = true;
    }

    if (value.HasMember("CatalogID") && !value["CatalogID"].IsNull())
    {
        if (!value["CatalogID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivilegeInfo.CatalogID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_catalogID = string(value["CatalogID"].GetString());
        m_catalogIDHasBeenSet = true;
    }

    if (value.HasMember("CatalogName") && !value["CatalogName"].IsNull())
    {
        if (!value["CatalogName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivilegeInfo.CatalogName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_catalogName = string(value["CatalogName"].GetString());
        m_catalogNameHasBeenSet = true;
    }

    if (value.HasMember("WorkSpaceID") && !value["WorkSpaceID"].IsNull())
    {
        if (!value["WorkSpaceID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivilegeInfo.WorkSpaceID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workSpaceID = string(value["WorkSpaceID"].GetString());
        m_workSpaceIDHasBeenSet = true;
    }

    if (value.HasMember("WorkSpaceName") && !value["WorkSpaceName"].IsNull())
    {
        if (!value["WorkSpaceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivilegeInfo.WorkSpaceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workSpaceName = string(value["WorkSpaceName"].GetString());
        m_workSpaceNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PrivilegeInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_isReadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsRead";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isRead, allocator);
    }

    if (m_isManageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsManage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isManage, allocator);
    }

    if (m_grantedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Granted";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_granted, allocator);
    }

    if (m_inheritedObjectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InheritedObject";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_inheritedObject.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_inheritedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Inherited";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_inherited, allocator);
    }

    if (m_isEditHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsEdit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isEdit, allocator);
    }

    if (m_isMetaDataPermissionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsMetaDataPermission";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isMetaDataPermission, allocator);
    }

    if (m_catalogIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CatalogID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_catalogID.c_str(), allocator).Move(), allocator);
    }

    if (m_catalogNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CatalogName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_catalogName.c_str(), allocator).Move(), allocator);
    }

    if (m_workSpaceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkSpaceID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workSpaceID.c_str(), allocator).Move(), allocator);
    }

    if (m_workSpaceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkSpaceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workSpaceName.c_str(), allocator).Move(), allocator);
    }

}


string PrivilegeInfo::GetName() const
{
    return m_name;
}

void PrivilegeInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool PrivilegeInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string PrivilegeInfo::GetDisplayName() const
{
    return m_displayName;
}

void PrivilegeInfo::SetDisplayName(const string& _displayName)
{
    m_displayName = _displayName;
    m_displayNameHasBeenSet = true;
}

bool PrivilegeInfo::DisplayNameHasBeenSet() const
{
    return m_displayNameHasBeenSet;
}

string PrivilegeInfo::GetDescription() const
{
    return m_description;
}

void PrivilegeInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool PrivilegeInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

bool PrivilegeInfo::GetIsRead() const
{
    return m_isRead;
}

void PrivilegeInfo::SetIsRead(const bool& _isRead)
{
    m_isRead = _isRead;
    m_isReadHasBeenSet = true;
}

bool PrivilegeInfo::IsReadHasBeenSet() const
{
    return m_isReadHasBeenSet;
}

bool PrivilegeInfo::GetIsManage() const
{
    return m_isManage;
}

void PrivilegeInfo::SetIsManage(const bool& _isManage)
{
    m_isManage = _isManage;
    m_isManageHasBeenSet = true;
}

bool PrivilegeInfo::IsManageHasBeenSet() const
{
    return m_isManageHasBeenSet;
}

bool PrivilegeInfo::GetGranted() const
{
    return m_granted;
}

void PrivilegeInfo::SetGranted(const bool& _granted)
{
    m_granted = _granted;
    m_grantedHasBeenSet = true;
}

bool PrivilegeInfo::GrantedHasBeenSet() const
{
    return m_grantedHasBeenSet;
}

PrivilegeResource PrivilegeInfo::GetInheritedObject() const
{
    return m_inheritedObject;
}

void PrivilegeInfo::SetInheritedObject(const PrivilegeResource& _inheritedObject)
{
    m_inheritedObject = _inheritedObject;
    m_inheritedObjectHasBeenSet = true;
}

bool PrivilegeInfo::InheritedObjectHasBeenSet() const
{
    return m_inheritedObjectHasBeenSet;
}

bool PrivilegeInfo::GetInherited() const
{
    return m_inherited;
}

void PrivilegeInfo::SetInherited(const bool& _inherited)
{
    m_inherited = _inherited;
    m_inheritedHasBeenSet = true;
}

bool PrivilegeInfo::InheritedHasBeenSet() const
{
    return m_inheritedHasBeenSet;
}

bool PrivilegeInfo::GetIsEdit() const
{
    return m_isEdit;
}

void PrivilegeInfo::SetIsEdit(const bool& _isEdit)
{
    m_isEdit = _isEdit;
    m_isEditHasBeenSet = true;
}

bool PrivilegeInfo::IsEditHasBeenSet() const
{
    return m_isEditHasBeenSet;
}

bool PrivilegeInfo::GetIsMetaDataPermission() const
{
    return m_isMetaDataPermission;
}

void PrivilegeInfo::SetIsMetaDataPermission(const bool& _isMetaDataPermission)
{
    m_isMetaDataPermission = _isMetaDataPermission;
    m_isMetaDataPermissionHasBeenSet = true;
}

bool PrivilegeInfo::IsMetaDataPermissionHasBeenSet() const
{
    return m_isMetaDataPermissionHasBeenSet;
}

string PrivilegeInfo::GetCatalogID() const
{
    return m_catalogID;
}

void PrivilegeInfo::SetCatalogID(const string& _catalogID)
{
    m_catalogID = _catalogID;
    m_catalogIDHasBeenSet = true;
}

bool PrivilegeInfo::CatalogIDHasBeenSet() const
{
    return m_catalogIDHasBeenSet;
}

string PrivilegeInfo::GetCatalogName() const
{
    return m_catalogName;
}

void PrivilegeInfo::SetCatalogName(const string& _catalogName)
{
    m_catalogName = _catalogName;
    m_catalogNameHasBeenSet = true;
}

bool PrivilegeInfo::CatalogNameHasBeenSet() const
{
    return m_catalogNameHasBeenSet;
}

string PrivilegeInfo::GetWorkSpaceID() const
{
    return m_workSpaceID;
}

void PrivilegeInfo::SetWorkSpaceID(const string& _workSpaceID)
{
    m_workSpaceID = _workSpaceID;
    m_workSpaceIDHasBeenSet = true;
}

bool PrivilegeInfo::WorkSpaceIDHasBeenSet() const
{
    return m_workSpaceIDHasBeenSet;
}

string PrivilegeInfo::GetWorkSpaceName() const
{
    return m_workSpaceName;
}

void PrivilegeInfo::SetWorkSpaceName(const string& _workSpaceName)
{
    m_workSpaceName = _workSpaceName;
    m_workSpaceNameHasBeenSet = true;
}

bool PrivilegeInfo::WorkSpaceNameHasBeenSet() const
{
    return m_workSpaceNameHasBeenSet;
}

