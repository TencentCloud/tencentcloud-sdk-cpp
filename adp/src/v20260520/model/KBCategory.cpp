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

#include <tencentcloud/adp/v20260520/model/KBCategory.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

KBCategory::KBCategory() :
    m_canAddHasBeenSet(false),
    m_canDeleteHasBeenSet(false),
    m_canEditHasBeenSet(false),
    m_categoryIdHasBeenSet(false),
    m_childListHasBeenSet(false),
    m_isLeafHasBeenSet(false),
    m_itemCountHasBeenSet(false),
    m_metaValueHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

CoreInternalOutcome KBCategory::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CanAdd") && !value["CanAdd"].IsNull())
    {
        if (!value["CanAdd"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `KBCategory.CanAdd` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_canAdd = value["CanAdd"].GetBool();
        m_canAddHasBeenSet = true;
    }

    if (value.HasMember("CanDelete") && !value["CanDelete"].IsNull())
    {
        if (!value["CanDelete"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `KBCategory.CanDelete` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_canDelete = value["CanDelete"].GetBool();
        m_canDeleteHasBeenSet = true;
    }

    if (value.HasMember("CanEdit") && !value["CanEdit"].IsNull())
    {
        if (!value["CanEdit"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `KBCategory.CanEdit` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_canEdit = value["CanEdit"].GetBool();
        m_canEditHasBeenSet = true;
    }

    if (value.HasMember("CategoryId") && !value["CategoryId"].IsNull())
    {
        if (!value["CategoryId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KBCategory.CategoryId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_categoryId = string(value["CategoryId"].GetString());
        m_categoryIdHasBeenSet = true;
    }

    if (value.HasMember("ChildList") && !value["ChildList"].IsNull())
    {
        if (!value["ChildList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `KBCategory.ChildList` is not array type"));

        const rapidjson::Value &tmpValue = value["ChildList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KBCategory item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_childList.push_back(item);
        }
        m_childListHasBeenSet = true;
    }

    if (value.HasMember("IsLeaf") && !value["IsLeaf"].IsNull())
    {
        if (!value["IsLeaf"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `KBCategory.IsLeaf` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isLeaf = value["IsLeaf"].GetBool();
        m_isLeafHasBeenSet = true;
    }

    if (value.HasMember("ItemCount") && !value["ItemCount"].IsNull())
    {
        if (!value["ItemCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `KBCategory.ItemCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_itemCount = value["ItemCount"].GetUint64();
        m_itemCountHasBeenSet = true;
    }

    if (value.HasMember("MetaValue") && !value["MetaValue"].IsNull())
    {
        if (!value["MetaValue"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `KBCategory.MetaValue` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_metaValue.Deserialize(value["MetaValue"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_metaValueHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KBCategory.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KBCategory::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_canAddHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CanAdd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_canAdd, allocator);
    }

    if (m_canDeleteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CanDelete";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_canDelete, allocator);
    }

    if (m_canEditHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CanEdit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_canEdit, allocator);
    }

    if (m_categoryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_categoryId.c_str(), allocator).Move(), allocator);
    }

    if (m_childListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChildList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_childList.begin(); itr != m_childList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_isLeafHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsLeaf";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isLeaf, allocator);
    }

    if (m_itemCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_itemCount, allocator);
    }

    if (m_metaValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetaValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_metaValue.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

}


bool KBCategory::GetCanAdd() const
{
    return m_canAdd;
}

void KBCategory::SetCanAdd(const bool& _canAdd)
{
    m_canAdd = _canAdd;
    m_canAddHasBeenSet = true;
}

bool KBCategory::CanAddHasBeenSet() const
{
    return m_canAddHasBeenSet;
}

bool KBCategory::GetCanDelete() const
{
    return m_canDelete;
}

void KBCategory::SetCanDelete(const bool& _canDelete)
{
    m_canDelete = _canDelete;
    m_canDeleteHasBeenSet = true;
}

bool KBCategory::CanDeleteHasBeenSet() const
{
    return m_canDeleteHasBeenSet;
}

bool KBCategory::GetCanEdit() const
{
    return m_canEdit;
}

void KBCategory::SetCanEdit(const bool& _canEdit)
{
    m_canEdit = _canEdit;
    m_canEditHasBeenSet = true;
}

bool KBCategory::CanEditHasBeenSet() const
{
    return m_canEditHasBeenSet;
}

string KBCategory::GetCategoryId() const
{
    return m_categoryId;
}

void KBCategory::SetCategoryId(const string& _categoryId)
{
    m_categoryId = _categoryId;
    m_categoryIdHasBeenSet = true;
}

bool KBCategory::CategoryIdHasBeenSet() const
{
    return m_categoryIdHasBeenSet;
}

vector<KBCategory> KBCategory::GetChildList() const
{
    return m_childList;
}

void KBCategory::SetChildList(const vector<KBCategory>& _childList)
{
    m_childList = _childList;
    m_childListHasBeenSet = true;
}

bool KBCategory::ChildListHasBeenSet() const
{
    return m_childListHasBeenSet;
}

bool KBCategory::GetIsLeaf() const
{
    return m_isLeaf;
}

void KBCategory::SetIsLeaf(const bool& _isLeaf)
{
    m_isLeaf = _isLeaf;
    m_isLeafHasBeenSet = true;
}

bool KBCategory::IsLeafHasBeenSet() const
{
    return m_isLeafHasBeenSet;
}

uint64_t KBCategory::GetItemCount() const
{
    return m_itemCount;
}

void KBCategory::SetItemCount(const uint64_t& _itemCount)
{
    m_itemCount = _itemCount;
    m_itemCountHasBeenSet = true;
}

bool KBCategory::ItemCountHasBeenSet() const
{
    return m_itemCountHasBeenSet;
}

MetaValue KBCategory::GetMetaValue() const
{
    return m_metaValue;
}

void KBCategory::SetMetaValue(const MetaValue& _metaValue)
{
    m_metaValue = _metaValue;
    m_metaValueHasBeenSet = true;
}

bool KBCategory::MetaValueHasBeenSet() const
{
    return m_metaValueHasBeenSet;
}

string KBCategory::GetName() const
{
    return m_name;
}

void KBCategory::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool KBCategory::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

