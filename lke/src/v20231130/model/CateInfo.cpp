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

#include <tencentcloud/lke/v20231130/model/CateInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

CateInfo::CateInfo() :
    m_cateBizIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_totalHasBeenSet(false),
    m_canAddHasBeenSet(false),
    m_canEditHasBeenSet(false),
    m_canDeleteHasBeenSet(false),
    m_childrenHasBeenSet(false)
{
}

CoreInternalOutcome CateInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CateBizId") && !value["CateBizId"].IsNull())
    {
        if (!value["CateBizId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CateInfo.CateBizId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cateBizId = string(value["CateBizId"].GetString());
        m_cateBizIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CateInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Total") && !value["Total"].IsNull())
    {
        if (!value["Total"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CateInfo.Total` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_total = value["Total"].GetInt64();
        m_totalHasBeenSet = true;
    }

    if (value.HasMember("CanAdd") && !value["CanAdd"].IsNull())
    {
        if (!value["CanAdd"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CateInfo.CanAdd` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_canAdd = value["CanAdd"].GetBool();
        m_canAddHasBeenSet = true;
    }

    if (value.HasMember("CanEdit") && !value["CanEdit"].IsNull())
    {
        if (!value["CanEdit"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CateInfo.CanEdit` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_canEdit = value["CanEdit"].GetBool();
        m_canEditHasBeenSet = true;
    }

    if (value.HasMember("CanDelete") && !value["CanDelete"].IsNull())
    {
        if (!value["CanDelete"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CateInfo.CanDelete` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_canDelete = value["CanDelete"].GetBool();
        m_canDeleteHasBeenSet = true;
    }

    if (value.HasMember("Children") && !value["Children"].IsNull())
    {
        if (!value["Children"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CateInfo.Children` is not array type"));

        const rapidjson::Value &tmpValue = value["Children"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CateInfo item;
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


    return CoreInternalOutcome(true);
}

void CateInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cateBizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CateBizId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cateBizId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_total, allocator);
    }

    if (m_canAddHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CanAdd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_canAdd, allocator);
    }

    if (m_canEditHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CanEdit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_canEdit, allocator);
    }

    if (m_canDeleteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CanDelete";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_canDelete, allocator);
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

}


string CateInfo::GetCateBizId() const
{
    return m_cateBizId;
}

void CateInfo::SetCateBizId(const string& _cateBizId)
{
    m_cateBizId = _cateBizId;
    m_cateBizIdHasBeenSet = true;
}

bool CateInfo::CateBizIdHasBeenSet() const
{
    return m_cateBizIdHasBeenSet;
}

string CateInfo::GetName() const
{
    return m_name;
}

void CateInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CateInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t CateInfo::GetTotal() const
{
    return m_total;
}

void CateInfo::SetTotal(const int64_t& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool CateInfo::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

bool CateInfo::GetCanAdd() const
{
    return m_canAdd;
}

void CateInfo::SetCanAdd(const bool& _canAdd)
{
    m_canAdd = _canAdd;
    m_canAddHasBeenSet = true;
}

bool CateInfo::CanAddHasBeenSet() const
{
    return m_canAddHasBeenSet;
}

bool CateInfo::GetCanEdit() const
{
    return m_canEdit;
}

void CateInfo::SetCanEdit(const bool& _canEdit)
{
    m_canEdit = _canEdit;
    m_canEditHasBeenSet = true;
}

bool CateInfo::CanEditHasBeenSet() const
{
    return m_canEditHasBeenSet;
}

bool CateInfo::GetCanDelete() const
{
    return m_canDelete;
}

void CateInfo::SetCanDelete(const bool& _canDelete)
{
    m_canDelete = _canDelete;
    m_canDeleteHasBeenSet = true;
}

bool CateInfo::CanDeleteHasBeenSet() const
{
    return m_canDeleteHasBeenSet;
}

vector<CateInfo> CateInfo::GetChildren() const
{
    return m_children;
}

void CateInfo::SetChildren(const vector<CateInfo>& _children)
{
    m_children = _children;
    m_childrenHasBeenSet = true;
}

bool CateInfo::ChildrenHasBeenSet() const
{
    return m_childrenHasBeenSet;
}

