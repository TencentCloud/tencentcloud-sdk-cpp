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

#include <tencentcloud/tcr/v20190924/model/ModifyInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcr::V20190924::Model;
using namespace std;

ModifyInstanceRequest::ModifyInstanceRequest() :
    m_registryIdHasBeenSet(false),
    m_registryTypeHasBeenSet(false),
    m_deletionProtectionHasBeenSet(false)
{
}

string ModifyInstanceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_registryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_registryId.c_str(), allocator).Move(), allocator);
    }

    if (m_registryTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_registryType.c_str(), allocator).Move(), allocator);
    }

    if (m_deletionProtectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeletionProtection";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_deletionProtection, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyInstanceRequest::GetRegistryId() const
{
    return m_registryId;
}

void ModifyInstanceRequest::SetRegistryId(const string& _registryId)
{
    m_registryId = _registryId;
    m_registryIdHasBeenSet = true;
}

bool ModifyInstanceRequest::RegistryIdHasBeenSet() const
{
    return m_registryIdHasBeenSet;
}

string ModifyInstanceRequest::GetRegistryType() const
{
    return m_registryType;
}

void ModifyInstanceRequest::SetRegistryType(const string& _registryType)
{
    m_registryType = _registryType;
    m_registryTypeHasBeenSet = true;
}

bool ModifyInstanceRequest::RegistryTypeHasBeenSet() const
{
    return m_registryTypeHasBeenSet;
}

bool ModifyInstanceRequest::GetDeletionProtection() const
{
    return m_deletionProtection;
}

void ModifyInstanceRequest::SetDeletionProtection(const bool& _deletionProtection)
{
    m_deletionProtection = _deletionProtection;
    m_deletionProtectionHasBeenSet = true;
}

bool ModifyInstanceRequest::DeletionProtectionHasBeenSet() const
{
    return m_deletionProtectionHasBeenSet;
}


