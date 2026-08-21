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

#include <tencentcloud/adp/v20260520/model/CategoryPermission.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

CategoryPermission::CategoryPermission() :
    m_canAddHasBeenSet(false),
    m_canDeleteHasBeenSet(false),
    m_canEditHasBeenSet(false)
{
}

CoreInternalOutcome CategoryPermission::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CanAdd") && !value["CanAdd"].IsNull())
    {
        if (!value["CanAdd"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CategoryPermission.CanAdd` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_canAdd = value["CanAdd"].GetBool();
        m_canAddHasBeenSet = true;
    }

    if (value.HasMember("CanDelete") && !value["CanDelete"].IsNull())
    {
        if (!value["CanDelete"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CategoryPermission.CanDelete` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_canDelete = value["CanDelete"].GetBool();
        m_canDeleteHasBeenSet = true;
    }

    if (value.HasMember("CanEdit") && !value["CanEdit"].IsNull())
    {
        if (!value["CanEdit"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CategoryPermission.CanEdit` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_canEdit = value["CanEdit"].GetBool();
        m_canEditHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CategoryPermission::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

}


bool CategoryPermission::GetCanAdd() const
{
    return m_canAdd;
}

void CategoryPermission::SetCanAdd(const bool& _canAdd)
{
    m_canAdd = _canAdd;
    m_canAddHasBeenSet = true;
}

bool CategoryPermission::CanAddHasBeenSet() const
{
    return m_canAddHasBeenSet;
}

bool CategoryPermission::GetCanDelete() const
{
    return m_canDelete;
}

void CategoryPermission::SetCanDelete(const bool& _canDelete)
{
    m_canDelete = _canDelete;
    m_canDeleteHasBeenSet = true;
}

bool CategoryPermission::CanDeleteHasBeenSet() const
{
    return m_canDeleteHasBeenSet;
}

bool CategoryPermission::GetCanEdit() const
{
    return m_canEdit;
}

void CategoryPermission::SetCanEdit(const bool& _canEdit)
{
    m_canEdit = _canEdit;
    m_canEditHasBeenSet = true;
}

bool CategoryPermission::CanEditHasBeenSet() const
{
    return m_canEditHasBeenSet;
}

