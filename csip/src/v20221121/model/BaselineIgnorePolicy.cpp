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

#include <tencentcloud/csip/v20221121/model/BaselineIgnorePolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

BaselineIgnorePolicy::BaselineIgnorePolicy() :
    m_iDHasBeenSet(false),
    m_itemNameHasBeenSet(false),
    m_categoryNameHasBeenSet(false),
    m_appIDHasBeenSet(false),
    m_scopeTypeHasBeenSet(false),
    m_scopeIncludeListHasBeenSet(false),
    m_scopeExcludeListHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_assetTypeHasBeenSet(false),
    m_itemIDHasBeenSet(false)
{
}

CoreInternalOutcome BaselineIgnorePolicy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineIgnorePolicy.ID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_iD = value["ID"].GetUint64();
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("ItemName") && !value["ItemName"].IsNull())
    {
        if (!value["ItemName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineIgnorePolicy.ItemName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_itemName = string(value["ItemName"].GetString());
        m_itemNameHasBeenSet = true;
    }

    if (value.HasMember("CategoryName") && !value["CategoryName"].IsNull())
    {
        if (!value["CategoryName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineIgnorePolicy.CategoryName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_categoryName = string(value["CategoryName"].GetString());
        m_categoryNameHasBeenSet = true;
    }

    if (value.HasMember("AppID") && !value["AppID"].IsNull())
    {
        if (!value["AppID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineIgnorePolicy.AppID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appID = value["AppID"].GetUint64();
        m_appIDHasBeenSet = true;
    }

    if (value.HasMember("ScopeType") && !value["ScopeType"].IsNull())
    {
        if (!value["ScopeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineIgnorePolicy.ScopeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scopeType = string(value["ScopeType"].GetString());
        m_scopeTypeHasBeenSet = true;
    }

    if (value.HasMember("ScopeIncludeList") && !value["ScopeIncludeList"].IsNull())
    {
        if (!value["ScopeIncludeList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BaselineIgnorePolicy.ScopeIncludeList` is not array type"));

        const rapidjson::Value &tmpValue = value["ScopeIncludeList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_scopeIncludeList.push_back((*itr).GetString());
        }
        m_scopeIncludeListHasBeenSet = true;
    }

    if (value.HasMember("ScopeExcludeList") && !value["ScopeExcludeList"].IsNull())
    {
        if (!value["ScopeExcludeList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BaselineIgnorePolicy.ScopeExcludeList` is not array type"));

        const rapidjson::Value &tmpValue = value["ScopeExcludeList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_scopeExcludeList.push_back((*itr).GetString());
        }
        m_scopeExcludeListHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineIgnorePolicy.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineIgnorePolicy.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineIgnorePolicy.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("AssetType") && !value["AssetType"].IsNull())
    {
        if (!value["AssetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineIgnorePolicy.AssetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetType = string(value["AssetType"].GetString());
        m_assetTypeHasBeenSet = true;
    }

    if (value.HasMember("ItemID") && !value["ItemID"].IsNull())
    {
        if (!value["ItemID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineIgnorePolicy.ItemID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_itemID = value["ItemID"].GetUint64();
        m_itemIDHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BaselineIgnorePolicy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iD, allocator);
    }

    if (m_itemNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_itemName.c_str(), allocator).Move(), allocator);
    }

    if (m_categoryNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_categoryName.c_str(), allocator).Move(), allocator);
    }

    if (m_appIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appID, allocator);
    }

    if (m_scopeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScopeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scopeType.c_str(), allocator).Move(), allocator);
    }

    if (m_scopeIncludeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScopeIncludeList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_scopeIncludeList.begin(); itr != m_scopeIncludeList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_scopeExcludeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScopeExcludeList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_scopeExcludeList.begin(); itr != m_scopeExcludeList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_assetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetType.c_str(), allocator).Move(), allocator);
    }

    if (m_itemIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_itemID, allocator);
    }

}


uint64_t BaselineIgnorePolicy::GetID() const
{
    return m_iD;
}

void BaselineIgnorePolicy::SetID(const uint64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool BaselineIgnorePolicy::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string BaselineIgnorePolicy::GetItemName() const
{
    return m_itemName;
}

void BaselineIgnorePolicy::SetItemName(const string& _itemName)
{
    m_itemName = _itemName;
    m_itemNameHasBeenSet = true;
}

bool BaselineIgnorePolicy::ItemNameHasBeenSet() const
{
    return m_itemNameHasBeenSet;
}

string BaselineIgnorePolicy::GetCategoryName() const
{
    return m_categoryName;
}

void BaselineIgnorePolicy::SetCategoryName(const string& _categoryName)
{
    m_categoryName = _categoryName;
    m_categoryNameHasBeenSet = true;
}

bool BaselineIgnorePolicy::CategoryNameHasBeenSet() const
{
    return m_categoryNameHasBeenSet;
}

uint64_t BaselineIgnorePolicy::GetAppID() const
{
    return m_appID;
}

void BaselineIgnorePolicy::SetAppID(const uint64_t& _appID)
{
    m_appID = _appID;
    m_appIDHasBeenSet = true;
}

bool BaselineIgnorePolicy::AppIDHasBeenSet() const
{
    return m_appIDHasBeenSet;
}

string BaselineIgnorePolicy::GetScopeType() const
{
    return m_scopeType;
}

void BaselineIgnorePolicy::SetScopeType(const string& _scopeType)
{
    m_scopeType = _scopeType;
    m_scopeTypeHasBeenSet = true;
}

bool BaselineIgnorePolicy::ScopeTypeHasBeenSet() const
{
    return m_scopeTypeHasBeenSet;
}

vector<string> BaselineIgnorePolicy::GetScopeIncludeList() const
{
    return m_scopeIncludeList;
}

void BaselineIgnorePolicy::SetScopeIncludeList(const vector<string>& _scopeIncludeList)
{
    m_scopeIncludeList = _scopeIncludeList;
    m_scopeIncludeListHasBeenSet = true;
}

bool BaselineIgnorePolicy::ScopeIncludeListHasBeenSet() const
{
    return m_scopeIncludeListHasBeenSet;
}

vector<string> BaselineIgnorePolicy::GetScopeExcludeList() const
{
    return m_scopeExcludeList;
}

void BaselineIgnorePolicy::SetScopeExcludeList(const vector<string>& _scopeExcludeList)
{
    m_scopeExcludeList = _scopeExcludeList;
    m_scopeExcludeListHasBeenSet = true;
}

bool BaselineIgnorePolicy::ScopeExcludeListHasBeenSet() const
{
    return m_scopeExcludeListHasBeenSet;
}

string BaselineIgnorePolicy::GetRemark() const
{
    return m_remark;
}

void BaselineIgnorePolicy::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool BaselineIgnorePolicy::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string BaselineIgnorePolicy::GetCreateTime() const
{
    return m_createTime;
}

void BaselineIgnorePolicy::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool BaselineIgnorePolicy::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string BaselineIgnorePolicy::GetModifyTime() const
{
    return m_modifyTime;
}

void BaselineIgnorePolicy::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool BaselineIgnorePolicy::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

string BaselineIgnorePolicy::GetAssetType() const
{
    return m_assetType;
}

void BaselineIgnorePolicy::SetAssetType(const string& _assetType)
{
    m_assetType = _assetType;
    m_assetTypeHasBeenSet = true;
}

bool BaselineIgnorePolicy::AssetTypeHasBeenSet() const
{
    return m_assetTypeHasBeenSet;
}

uint64_t BaselineIgnorePolicy::GetItemID() const
{
    return m_itemID;
}

void BaselineIgnorePolicy::SetItemID(const uint64_t& _itemID)
{
    m_itemID = _itemID;
    m_itemIDHasBeenSet = true;
}

bool BaselineIgnorePolicy::ItemIDHasBeenSet() const
{
    return m_itemIDHasBeenSet;
}

