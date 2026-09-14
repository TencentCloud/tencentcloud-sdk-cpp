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

#include <tencentcloud/adp/v20260520/model/QAPermission.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

QAPermission::QAPermission() :
    m_canAcceptHasBeenSet(false),
    m_canDeleteHasBeenSet(false),
    m_canEditHasBeenSet(false)
{
}

CoreInternalOutcome QAPermission::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CanAccept") && !value["CanAccept"].IsNull())
    {
        if (!value["CanAccept"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `QAPermission.CanAccept` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_canAccept = value["CanAccept"].GetBool();
        m_canAcceptHasBeenSet = true;
    }

    if (value.HasMember("CanDelete") && !value["CanDelete"].IsNull())
    {
        if (!value["CanDelete"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `QAPermission.CanDelete` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_canDelete = value["CanDelete"].GetBool();
        m_canDeleteHasBeenSet = true;
    }

    if (value.HasMember("CanEdit") && !value["CanEdit"].IsNull())
    {
        if (!value["CanEdit"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `QAPermission.CanEdit` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_canEdit = value["CanEdit"].GetBool();
        m_canEditHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QAPermission::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_canAcceptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CanAccept";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_canAccept, allocator);
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


bool QAPermission::GetCanAccept() const
{
    return m_canAccept;
}

void QAPermission::SetCanAccept(const bool& _canAccept)
{
    m_canAccept = _canAccept;
    m_canAcceptHasBeenSet = true;
}

bool QAPermission::CanAcceptHasBeenSet() const
{
    return m_canAcceptHasBeenSet;
}

bool QAPermission::GetCanDelete() const
{
    return m_canDelete;
}

void QAPermission::SetCanDelete(const bool& _canDelete)
{
    m_canDelete = _canDelete;
    m_canDeleteHasBeenSet = true;
}

bool QAPermission::CanDeleteHasBeenSet() const
{
    return m_canDeleteHasBeenSet;
}

bool QAPermission::GetCanEdit() const
{
    return m_canEdit;
}

void QAPermission::SetCanEdit(const bool& _canEdit)
{
    m_canEdit = _canEdit;
    m_canEditHasBeenSet = true;
}

bool QAPermission::CanEditHasBeenSet() const
{
    return m_canEditHasBeenSet;
}

