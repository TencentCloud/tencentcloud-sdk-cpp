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

#include <tencentcloud/gpm/v20200820/model/ModifyTokenRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gpm::V20200820::Model;
using namespace rapidjson;
using namespace std;

ModifyTokenRequest::ModifyTokenRequest() :
    m_matchCodeHasBeenSet(false),
    m_compatibleSpanHasBeenSet(false),
    m_matchTokenHasBeenSet(false)
{
}

string ModifyTokenRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_matchCodeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MatchCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_matchCode.c_str(), allocator).Move(), allocator);
    }

    if (m_compatibleSpanHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CompatibleSpan";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_compatibleSpan, allocator);
    }

    if (m_matchTokenHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MatchToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_matchToken.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyTokenRequest::GetMatchCode() const
{
    return m_matchCode;
}

void ModifyTokenRequest::SetMatchCode(const string& _matchCode)
{
    m_matchCode = _matchCode;
    m_matchCodeHasBeenSet = true;
}

bool ModifyTokenRequest::MatchCodeHasBeenSet() const
{
    return m_matchCodeHasBeenSet;
}

uint64_t ModifyTokenRequest::GetCompatibleSpan() const
{
    return m_compatibleSpan;
}

void ModifyTokenRequest::SetCompatibleSpan(const uint64_t& _compatibleSpan)
{
    m_compatibleSpan = _compatibleSpan;
    m_compatibleSpanHasBeenSet = true;
}

bool ModifyTokenRequest::CompatibleSpanHasBeenSet() const
{
    return m_compatibleSpanHasBeenSet;
}

string ModifyTokenRequest::GetMatchToken() const
{
    return m_matchToken;
}

void ModifyTokenRequest::SetMatchToken(const string& _matchToken)
{
    m_matchToken = _matchToken;
    m_matchTokenHasBeenSet = true;
}

bool ModifyTokenRequest::MatchTokenHasBeenSet() const
{
    return m_matchTokenHasBeenSet;
}


