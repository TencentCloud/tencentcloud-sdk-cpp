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

#include <tencentcloud/bh/v20230418/model/ModifyAccessWhiteListStatusRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bh::V20230418::Model;
using namespace std;

ModifyAccessWhiteListStatusRequest::ModifyAccessWhiteListStatusRequest() :
    m_allowAnyHasBeenSet(false)
{
}

string ModifyAccessWhiteListStatusRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_allowAnyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowAny";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_allowAny, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


bool ModifyAccessWhiteListStatusRequest::GetAllowAny() const
{
    return m_allowAny;
}

void ModifyAccessWhiteListStatusRequest::SetAllowAny(const bool& _allowAny)
{
    m_allowAny = _allowAny;
    m_allowAnyHasBeenSet = true;
}

bool ModifyAccessWhiteListStatusRequest::AllowAnyHasBeenSet() const
{
    return m_allowAnyHasBeenSet;
}


