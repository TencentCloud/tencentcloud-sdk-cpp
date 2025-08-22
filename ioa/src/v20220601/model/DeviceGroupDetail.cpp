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

#include <tencentcloud/ioa/v20220601/model/DeviceGroupDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ioa::V20220601::Model;
using namespace std;

DeviceGroupDetail::DeviceGroupDetail() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_parentIdHasBeenSet(false),
    m_idPathHasBeenSet(false),
    m_namePathHasBeenSet(false),
    m_lockedHasBeenSet(false),
    m_osTypeHasBeenSet(false),
    m_sortHasBeenSet(false),
    m_fromAutoHasBeenSet(false),
    m_countHasBeenSet(false),
    m_iconHasBeenSet(false),
    m_withIpHasBeenSet(false),
    m_hasIpHasBeenSet(false),
    m_isLeafHasBeenSet(false),
    m_readOnlyHasBeenSet(false),
    m_bindAccountHasBeenSet(false),
    m_bindAccountNameHasBeenSet(false)
{
}

CoreInternalOutcome DeviceGroupDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceGroupDetail.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceGroupDetail.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceGroupDetail.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("ParentId") && !value["ParentId"].IsNull())
    {
        if (!value["ParentId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceGroupDetail.ParentId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_parentId = value["ParentId"].GetInt64();
        m_parentIdHasBeenSet = true;
    }

    if (value.HasMember("IdPath") && !value["IdPath"].IsNull())
    {
        if (!value["IdPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceGroupDetail.IdPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idPath = string(value["IdPath"].GetString());
        m_idPathHasBeenSet = true;
    }

    if (value.HasMember("NamePath") && !value["NamePath"].IsNull())
    {
        if (!value["NamePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceGroupDetail.NamePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namePath = string(value["NamePath"].GetString());
        m_namePathHasBeenSet = true;
    }

    if (value.HasMember("Locked") && !value["Locked"].IsNull())
    {
        if (!value["Locked"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceGroupDetail.Locked` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_locked = value["Locked"].GetInt64();
        m_lockedHasBeenSet = true;
    }

    if (value.HasMember("OsType") && !value["OsType"].IsNull())
    {
        if (!value["OsType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceGroupDetail.OsType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_osType = value["OsType"].GetInt64();
        m_osTypeHasBeenSet = true;
    }

    if (value.HasMember("Sort") && !value["Sort"].IsNull())
    {
        if (!value["Sort"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceGroupDetail.Sort` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sort = value["Sort"].GetInt64();
        m_sortHasBeenSet = true;
    }

    if (value.HasMember("FromAuto") && !value["FromAuto"].IsNull())
    {
        if (!value["FromAuto"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceGroupDetail.FromAuto` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fromAuto = value["FromAuto"].GetInt64();
        m_fromAutoHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceGroupDetail.Count` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetInt64();
        m_countHasBeenSet = true;
    }

    if (value.HasMember("Icon") && !value["Icon"].IsNull())
    {
        if (!value["Icon"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceGroupDetail.Icon` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_icon = string(value["Icon"].GetString());
        m_iconHasBeenSet = true;
    }

    if (value.HasMember("WithIp") && !value["WithIp"].IsNull())
    {
        if (!value["WithIp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceGroupDetail.WithIp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_withIp = value["WithIp"].GetInt64();
        m_withIpHasBeenSet = true;
    }

    if (value.HasMember("HasIp") && !value["HasIp"].IsNull())
    {
        if (!value["HasIp"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceGroupDetail.HasIp` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hasIp = value["HasIp"].GetBool();
        m_hasIpHasBeenSet = true;
    }

    if (value.HasMember("IsLeaf") && !value["IsLeaf"].IsNull())
    {
        if (!value["IsLeaf"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceGroupDetail.IsLeaf` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isLeaf = value["IsLeaf"].GetBool();
        m_isLeafHasBeenSet = true;
    }

    if (value.HasMember("ReadOnly") && !value["ReadOnly"].IsNull())
    {
        if (!value["ReadOnly"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceGroupDetail.ReadOnly` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_readOnly = value["ReadOnly"].GetBool();
        m_readOnlyHasBeenSet = true;
    }

    if (value.HasMember("BindAccount") && !value["BindAccount"].IsNull())
    {
        if (!value["BindAccount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceGroupDetail.BindAccount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bindAccount = value["BindAccount"].GetInt64();
        m_bindAccountHasBeenSet = true;
    }

    if (value.HasMember("BindAccountName") && !value["BindAccountName"].IsNull())
    {
        if (!value["BindAccountName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceGroupDetail.BindAccountName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bindAccountName = string(value["BindAccountName"].GetString());
        m_bindAccountNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeviceGroupDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_parentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_parentId, allocator);
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

    if (m_lockedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Locked";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_locked, allocator);
    }

    if (m_osTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_osType, allocator);
    }

    if (m_sortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sort, allocator);
    }

    if (m_fromAutoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FromAuto";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fromAuto, allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

    if (m_iconHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Icon";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_icon.c_str(), allocator).Move(), allocator);
    }

    if (m_withIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WithIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_withIp, allocator);
    }

    if (m_hasIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hasIp, allocator);
    }

    if (m_isLeafHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsLeaf";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isLeaf, allocator);
    }

    if (m_readOnlyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadOnly";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_readOnly, allocator);
    }

    if (m_bindAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindAccount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bindAccount, allocator);
    }

    if (m_bindAccountNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindAccountName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bindAccountName.c_str(), allocator).Move(), allocator);
    }

}


int64_t DeviceGroupDetail::GetId() const
{
    return m_id;
}

void DeviceGroupDetail::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DeviceGroupDetail::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string DeviceGroupDetail::GetName() const
{
    return m_name;
}

void DeviceGroupDetail::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DeviceGroupDetail::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DeviceGroupDetail::GetDescription() const
{
    return m_description;
}

void DeviceGroupDetail::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool DeviceGroupDetail::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t DeviceGroupDetail::GetParentId() const
{
    return m_parentId;
}

void DeviceGroupDetail::SetParentId(const int64_t& _parentId)
{
    m_parentId = _parentId;
    m_parentIdHasBeenSet = true;
}

bool DeviceGroupDetail::ParentIdHasBeenSet() const
{
    return m_parentIdHasBeenSet;
}

string DeviceGroupDetail::GetIdPath() const
{
    return m_idPath;
}

void DeviceGroupDetail::SetIdPath(const string& _idPath)
{
    m_idPath = _idPath;
    m_idPathHasBeenSet = true;
}

bool DeviceGroupDetail::IdPathHasBeenSet() const
{
    return m_idPathHasBeenSet;
}

string DeviceGroupDetail::GetNamePath() const
{
    return m_namePath;
}

void DeviceGroupDetail::SetNamePath(const string& _namePath)
{
    m_namePath = _namePath;
    m_namePathHasBeenSet = true;
}

bool DeviceGroupDetail::NamePathHasBeenSet() const
{
    return m_namePathHasBeenSet;
}

int64_t DeviceGroupDetail::GetLocked() const
{
    return m_locked;
}

void DeviceGroupDetail::SetLocked(const int64_t& _locked)
{
    m_locked = _locked;
    m_lockedHasBeenSet = true;
}

bool DeviceGroupDetail::LockedHasBeenSet() const
{
    return m_lockedHasBeenSet;
}

int64_t DeviceGroupDetail::GetOsType() const
{
    return m_osType;
}

void DeviceGroupDetail::SetOsType(const int64_t& _osType)
{
    m_osType = _osType;
    m_osTypeHasBeenSet = true;
}

bool DeviceGroupDetail::OsTypeHasBeenSet() const
{
    return m_osTypeHasBeenSet;
}

int64_t DeviceGroupDetail::GetSort() const
{
    return m_sort;
}

void DeviceGroupDetail::SetSort(const int64_t& _sort)
{
    m_sort = _sort;
    m_sortHasBeenSet = true;
}

bool DeviceGroupDetail::SortHasBeenSet() const
{
    return m_sortHasBeenSet;
}

int64_t DeviceGroupDetail::GetFromAuto() const
{
    return m_fromAuto;
}

void DeviceGroupDetail::SetFromAuto(const int64_t& _fromAuto)
{
    m_fromAuto = _fromAuto;
    m_fromAutoHasBeenSet = true;
}

bool DeviceGroupDetail::FromAutoHasBeenSet() const
{
    return m_fromAutoHasBeenSet;
}

int64_t DeviceGroupDetail::GetCount() const
{
    return m_count;
}

void DeviceGroupDetail::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool DeviceGroupDetail::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

string DeviceGroupDetail::GetIcon() const
{
    return m_icon;
}

void DeviceGroupDetail::SetIcon(const string& _icon)
{
    m_icon = _icon;
    m_iconHasBeenSet = true;
}

bool DeviceGroupDetail::IconHasBeenSet() const
{
    return m_iconHasBeenSet;
}

int64_t DeviceGroupDetail::GetWithIp() const
{
    return m_withIp;
}

void DeviceGroupDetail::SetWithIp(const int64_t& _withIp)
{
    m_withIp = _withIp;
    m_withIpHasBeenSet = true;
}

bool DeviceGroupDetail::WithIpHasBeenSet() const
{
    return m_withIpHasBeenSet;
}

bool DeviceGroupDetail::GetHasIp() const
{
    return m_hasIp;
}

void DeviceGroupDetail::SetHasIp(const bool& _hasIp)
{
    m_hasIp = _hasIp;
    m_hasIpHasBeenSet = true;
}

bool DeviceGroupDetail::HasIpHasBeenSet() const
{
    return m_hasIpHasBeenSet;
}

bool DeviceGroupDetail::GetIsLeaf() const
{
    return m_isLeaf;
}

void DeviceGroupDetail::SetIsLeaf(const bool& _isLeaf)
{
    m_isLeaf = _isLeaf;
    m_isLeafHasBeenSet = true;
}

bool DeviceGroupDetail::IsLeafHasBeenSet() const
{
    return m_isLeafHasBeenSet;
}

bool DeviceGroupDetail::GetReadOnly() const
{
    return m_readOnly;
}

void DeviceGroupDetail::SetReadOnly(const bool& _readOnly)
{
    m_readOnly = _readOnly;
    m_readOnlyHasBeenSet = true;
}

bool DeviceGroupDetail::ReadOnlyHasBeenSet() const
{
    return m_readOnlyHasBeenSet;
}

int64_t DeviceGroupDetail::GetBindAccount() const
{
    return m_bindAccount;
}

void DeviceGroupDetail::SetBindAccount(const int64_t& _bindAccount)
{
    m_bindAccount = _bindAccount;
    m_bindAccountHasBeenSet = true;
}

bool DeviceGroupDetail::BindAccountHasBeenSet() const
{
    return m_bindAccountHasBeenSet;
}

string DeviceGroupDetail::GetBindAccountName() const
{
    return m_bindAccountName;
}

void DeviceGroupDetail::SetBindAccountName(const string& _bindAccountName)
{
    m_bindAccountName = _bindAccountName;
    m_bindAccountNameHasBeenSet = true;
}

bool DeviceGroupDetail::BindAccountNameHasBeenSet() const
{
    return m_bindAccountNameHasBeenSet;
}

