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

#include <tencentcloud/wedata/v20210820/model/PermissionStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

PermissionStatus::PermissionStatus() :
    m_canWriteHasBeenSet(false),
    m_canDeleteHasBeenSet(false),
    m_canReadHasBeenSet(false)
{
}

CoreInternalOutcome PermissionStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CanWrite") && !value["CanWrite"].IsNull())
    {
        if (!value["CanWrite"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `PermissionStatus.CanWrite` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_canWrite = value["CanWrite"].GetBool();
        m_canWriteHasBeenSet = true;
    }

    if (value.HasMember("CanDelete") && !value["CanDelete"].IsNull())
    {
        if (!value["CanDelete"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `PermissionStatus.CanDelete` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_canDelete = value["CanDelete"].GetBool();
        m_canDeleteHasBeenSet = true;
    }

    if (value.HasMember("CanRead") && !value["CanRead"].IsNull())
    {
        if (!value["CanRead"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `PermissionStatus.CanRead` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_canRead = value["CanRead"].GetBool();
        m_canReadHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PermissionStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_canWriteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CanWrite";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_canWrite, allocator);
    }

    if (m_canDeleteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CanDelete";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_canDelete, allocator);
    }

    if (m_canReadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CanRead";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_canRead, allocator);
    }

}


bool PermissionStatus::GetCanWrite() const
{
    return m_canWrite;
}

void PermissionStatus::SetCanWrite(const bool& _canWrite)
{
    m_canWrite = _canWrite;
    m_canWriteHasBeenSet = true;
}

bool PermissionStatus::CanWriteHasBeenSet() const
{
    return m_canWriteHasBeenSet;
}

bool PermissionStatus::GetCanDelete() const
{
    return m_canDelete;
}

void PermissionStatus::SetCanDelete(const bool& _canDelete)
{
    m_canDelete = _canDelete;
    m_canDeleteHasBeenSet = true;
}

bool PermissionStatus::CanDeleteHasBeenSet() const
{
    return m_canDeleteHasBeenSet;
}

bool PermissionStatus::GetCanRead() const
{
    return m_canRead;
}

void PermissionStatus::SetCanRead(const bool& _canRead)
{
    m_canRead = _canRead;
    m_canReadHasBeenSet = true;
}

bool PermissionStatus::CanReadHasBeenSet() const
{
    return m_canReadHasBeenSet;
}

