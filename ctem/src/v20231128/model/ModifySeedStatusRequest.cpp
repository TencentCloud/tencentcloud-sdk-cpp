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

#include <tencentcloud/ctem/v20231128/model/ModifySeedStatusRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ctem::V20231128::Model;
using namespace std;

ModifySeedStatusRequest::ModifySeedStatusRequest() :
    m_idHasBeenSet(false),
    m_isValidHasBeenSet(false)
{
}

string ModifySeedStatusRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_id, allocator);
    }

    if (m_isValidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsValid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isValid, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t ModifySeedStatusRequest::GetId() const
{
    return m_id;
}

void ModifySeedStatusRequest::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ModifySeedStatusRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

bool ModifySeedStatusRequest::GetIsValid() const
{
    return m_isValid;
}

void ModifySeedStatusRequest::SetIsValid(const bool& _isValid)
{
    m_isValid = _isValid;
    m_isValidHasBeenSet = true;
}

bool ModifySeedStatusRequest::IsValidHasBeenSet() const
{
    return m_isValidHasBeenSet;
}


