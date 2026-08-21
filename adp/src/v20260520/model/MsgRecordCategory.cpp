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

#include <tencentcloud/adp/v20260520/model/MsgRecordCategory.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

MsgRecordCategory::MsgRecordCategory() :
    m_categoryIdHasBeenSet(false),
    m_childrenHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_permissionHasBeenSet(false),
    m_totalCountHasBeenSet(false)
{
}

CoreInternalOutcome MsgRecordCategory::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CategoryId") && !value["CategoryId"].IsNull())
    {
        if (!value["CategoryId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MsgRecordCategory.CategoryId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_categoryId = string(value["CategoryId"].GetString());
        m_categoryIdHasBeenSet = true;
    }

    if (value.HasMember("Children") && !value["Children"].IsNull())
    {
        if (!value["Children"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MsgRecordCategory.Children` is not array type"));

        const rapidjson::Value &tmpValue = value["Children"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MsgRecordCategory item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_children.push_back(item);
        }
        m_childrenHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MsgRecordCategory.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Permission") && !value["Permission"].IsNull())
    {
        if (!value["Permission"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MsgRecordCategory.Permission` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_permission.Deserialize(value["Permission"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_permissionHasBeenSet = true;
    }

    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MsgRecordCategory.TotalCount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = string(value["TotalCount"].GetString());
        m_totalCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MsgRecordCategory::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_categoryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_categoryId.c_str(), allocator).Move(), allocator);
    }

    if (m_childrenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Children";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_children.begin(); itr != m_children.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_permissionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Permission";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_permission.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_totalCount.c_str(), allocator).Move(), allocator);
    }

}


string MsgRecordCategory::GetCategoryId() const
{
    return m_categoryId;
}

void MsgRecordCategory::SetCategoryId(const string& _categoryId)
{
    m_categoryId = _categoryId;
    m_categoryIdHasBeenSet = true;
}

bool MsgRecordCategory::CategoryIdHasBeenSet() const
{
    return m_categoryIdHasBeenSet;
}

vector<MsgRecordCategory> MsgRecordCategory::GetChildren() const
{
    return m_children;
}

void MsgRecordCategory::SetChildren(const vector<MsgRecordCategory>& _children)
{
    m_children = _children;
    m_childrenHasBeenSet = true;
}

bool MsgRecordCategory::ChildrenHasBeenSet() const
{
    return m_childrenHasBeenSet;
}

string MsgRecordCategory::GetName() const
{
    return m_name;
}

void MsgRecordCategory::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool MsgRecordCategory::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

CategoryPermission MsgRecordCategory::GetPermission() const
{
    return m_permission;
}

void MsgRecordCategory::SetPermission(const CategoryPermission& _permission)
{
    m_permission = _permission;
    m_permissionHasBeenSet = true;
}

bool MsgRecordCategory::PermissionHasBeenSet() const
{
    return m_permissionHasBeenSet;
}

string MsgRecordCategory::GetTotalCount() const
{
    return m_totalCount;
}

void MsgRecordCategory::SetTotalCount(const string& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool MsgRecordCategory::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

