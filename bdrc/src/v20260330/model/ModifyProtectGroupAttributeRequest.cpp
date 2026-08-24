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

#include <tencentcloud/bdrc/v20260330/model/ModifyProtectGroupAttributeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bdrc::V20260330::Model;
using namespace std;

ModifyProtectGroupAttributeRequest::ModifyProtectGroupAttributeRequest() :
    m_protectGroupIdHasBeenSet(false),
    m_protectGroupNameHasBeenSet(false)
{
}

string ModifyProtectGroupAttributeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_protectGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_protectGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_protectGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectGroupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_protectGroupName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyProtectGroupAttributeRequest::GetProtectGroupId() const
{
    return m_protectGroupId;
}

void ModifyProtectGroupAttributeRequest::SetProtectGroupId(const string& _protectGroupId)
{
    m_protectGroupId = _protectGroupId;
    m_protectGroupIdHasBeenSet = true;
}

bool ModifyProtectGroupAttributeRequest::ProtectGroupIdHasBeenSet() const
{
    return m_protectGroupIdHasBeenSet;
}

string ModifyProtectGroupAttributeRequest::GetProtectGroupName() const
{
    return m_protectGroupName;
}

void ModifyProtectGroupAttributeRequest::SetProtectGroupName(const string& _protectGroupName)
{
    m_protectGroupName = _protectGroupName;
    m_protectGroupNameHasBeenSet = true;
}

bool ModifyProtectGroupAttributeRequest::ProtectGroupNameHasBeenSet() const
{
    return m_protectGroupNameHasBeenSet;
}


