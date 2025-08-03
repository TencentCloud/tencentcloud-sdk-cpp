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

#include <tencentcloud/lke/v20231130/model/DuplicateFileHandle.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

DuplicateFileHandle::DuplicateFileHandle() :
    m_checkTypeHasBeenSet(false),
    m_handleTypeHasBeenSet(false)
{
}

CoreInternalOutcome DuplicateFileHandle::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CheckType") && !value["CheckType"].IsNull())
    {
        if (!value["CheckType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DuplicateFileHandle.CheckType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_checkType = value["CheckType"].GetUint64();
        m_checkTypeHasBeenSet = true;
    }

    if (value.HasMember("HandleType") && !value["HandleType"].IsNull())
    {
        if (!value["HandleType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DuplicateFileHandle.HandleType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_handleType = value["HandleType"].GetUint64();
        m_handleTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DuplicateFileHandle::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_checkTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_checkType, allocator);
    }

    if (m_handleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HandleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_handleType, allocator);
    }

}


uint64_t DuplicateFileHandle::GetCheckType() const
{
    return m_checkType;
}

void DuplicateFileHandle::SetCheckType(const uint64_t& _checkType)
{
    m_checkType = _checkType;
    m_checkTypeHasBeenSet = true;
}

bool DuplicateFileHandle::CheckTypeHasBeenSet() const
{
    return m_checkTypeHasBeenSet;
}

uint64_t DuplicateFileHandle::GetHandleType() const
{
    return m_handleType;
}

void DuplicateFileHandle::SetHandleType(const uint64_t& _handleType)
{
    m_handleType = _handleType;
    m_handleTypeHasBeenSet = true;
}

bool DuplicateFileHandle::HandleTypeHasBeenSet() const
{
    return m_handleTypeHasBeenSet;
}

