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

#include <tencentcloud/ssl/v20191205/model/VerifyManagerRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ssl::V20191205::Model;
using namespace rapidjson;
using namespace std;

VerifyManagerRequest::VerifyManagerRequest() :
    m_managerIdHasBeenSet(false)
{
}

string VerifyManagerRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_managerIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ManagerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_managerId, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t VerifyManagerRequest::GetManagerId() const
{
    return m_managerId;
}

void VerifyManagerRequest::SetManagerId(const int64_t& _managerId)
{
    m_managerId = _managerId;
    m_managerIdHasBeenSet = true;
}

bool VerifyManagerRequest::ManagerIdHasBeenSet() const
{
    return m_managerIdHasBeenSet;
}


