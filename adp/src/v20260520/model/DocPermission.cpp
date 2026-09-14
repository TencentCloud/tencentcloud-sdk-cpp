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

#include <tencentcloud/adp/v20260520/model/DocPermission.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

DocPermission::DocPermission() :
    m_canDeleteHasBeenSet(false),
    m_canEditHasBeenSet(false),
    m_canRestartHasBeenSet(false),
    m_canRetryHasBeenSet(false)
{
}

CoreInternalOutcome DocPermission::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CanDelete") && !value["CanDelete"].IsNull())
    {
        if (!value["CanDelete"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DocPermission.CanDelete` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_canDelete = value["CanDelete"].GetBool();
        m_canDeleteHasBeenSet = true;
    }

    if (value.HasMember("CanEdit") && !value["CanEdit"].IsNull())
    {
        if (!value["CanEdit"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DocPermission.CanEdit` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_canEdit = value["CanEdit"].GetBool();
        m_canEditHasBeenSet = true;
    }

    if (value.HasMember("CanRestart") && !value["CanRestart"].IsNull())
    {
        if (!value["CanRestart"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DocPermission.CanRestart` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_canRestart = value["CanRestart"].GetBool();
        m_canRestartHasBeenSet = true;
    }

    if (value.HasMember("CanRetry") && !value["CanRetry"].IsNull())
    {
        if (!value["CanRetry"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DocPermission.CanRetry` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_canRetry = value["CanRetry"].GetBool();
        m_canRetryHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DocPermission::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_canRestartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CanRestart";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_canRestart, allocator);
    }

    if (m_canRetryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CanRetry";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_canRetry, allocator);
    }

}


bool DocPermission::GetCanDelete() const
{
    return m_canDelete;
}

void DocPermission::SetCanDelete(const bool& _canDelete)
{
    m_canDelete = _canDelete;
    m_canDeleteHasBeenSet = true;
}

bool DocPermission::CanDeleteHasBeenSet() const
{
    return m_canDeleteHasBeenSet;
}

bool DocPermission::GetCanEdit() const
{
    return m_canEdit;
}

void DocPermission::SetCanEdit(const bool& _canEdit)
{
    m_canEdit = _canEdit;
    m_canEditHasBeenSet = true;
}

bool DocPermission::CanEditHasBeenSet() const
{
    return m_canEditHasBeenSet;
}

bool DocPermission::GetCanRestart() const
{
    return m_canRestart;
}

void DocPermission::SetCanRestart(const bool& _canRestart)
{
    m_canRestart = _canRestart;
    m_canRestartHasBeenSet = true;
}

bool DocPermission::CanRestartHasBeenSet() const
{
    return m_canRestartHasBeenSet;
}

bool DocPermission::GetCanRetry() const
{
    return m_canRetry;
}

void DocPermission::SetCanRetry(const bool& _canRetry)
{
    m_canRetry = _canRetry;
    m_canRetryHasBeenSet = true;
}

bool DocPermission::CanRetryHasBeenSet() const
{
    return m_canRetryHasBeenSet;
}

