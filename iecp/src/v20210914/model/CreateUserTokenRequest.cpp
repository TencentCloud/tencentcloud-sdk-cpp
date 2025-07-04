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

#include <tencentcloud/iecp/v20210914/model/CreateUserTokenRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

CreateUserTokenRequest::CreateUserTokenRequest() :
    m_secondHasBeenSet(false)
{
}

string CreateUserTokenRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_secondHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Second";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_second, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t CreateUserTokenRequest::GetSecond() const
{
    return m_second;
}

void CreateUserTokenRequest::SetSecond(const int64_t& _second)
{
    m_second = _second;
    m_secondHasBeenSet = true;
}

bool CreateUserTokenRequest::SecondHasBeenSet() const
{
    return m_secondHasBeenSet;
}


