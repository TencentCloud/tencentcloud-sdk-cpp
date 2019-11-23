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

#include <tencentcloud/nlp/v20190408/model/ChatBotRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Nlp::V20190408::Model;
using namespace rapidjson;
using namespace std;

ChatBotRequest::ChatBotRequest() :
    m_queryHasBeenSet(false),
    m_flagHasBeenSet(false),
    m_openIdHasBeenSet(false)
{
}

string ChatBotRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_queryHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Query";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_query.c_str(), allocator).Move(), allocator);
    }

    if (m_flagHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Flag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_flag, allocator);
    }

    if (m_openIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OpenId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_openId.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ChatBotRequest::GetQuery() const
{
    return m_query;
}

void ChatBotRequest::SetQuery(const string& _query)
{
    m_query = _query;
    m_queryHasBeenSet = true;
}

bool ChatBotRequest::QueryHasBeenSet() const
{
    return m_queryHasBeenSet;
}

uint64_t ChatBotRequest::GetFlag() const
{
    return m_flag;
}

void ChatBotRequest::SetFlag(const uint64_t& _flag)
{
    m_flag = _flag;
    m_flagHasBeenSet = true;
}

bool ChatBotRequest::FlagHasBeenSet() const
{
    return m_flagHasBeenSet;
}

string ChatBotRequest::GetOpenId() const
{
    return m_openId;
}

void ChatBotRequest::SetOpenId(const string& _openId)
{
    m_openId = _openId;
    m_openIdHasBeenSet = true;
}

bool ChatBotRequest::OpenIdHasBeenSet() const
{
    return m_openIdHasBeenSet;
}


