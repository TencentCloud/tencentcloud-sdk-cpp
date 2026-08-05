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

#include <tencentcloud/cls/v20201016/model/ModifyLogRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

ModifyLogRequest::ModifyLogRequest() :
    m_topicIdHasBeenSet(false),
    m_fromHasBeenSet(false),
    m_toHasBeenSet(false),
    m_queryStringHasBeenSet(false),
    m_modifyModeHasBeenSet(false),
    m_modifyContentHasBeenSet(false)
{
}

string ModifyLogRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_topicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_topicId.c_str(), allocator).Move(), allocator);
    }

    if (m_fromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "From";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_from, allocator);
    }

    if (m_toHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "To";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_to, allocator);
    }

    if (m_queryStringHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryString";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_queryString.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modifyMode.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyContent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modifyContent.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyLogRequest::GetTopicId() const
{
    return m_topicId;
}

void ModifyLogRequest::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool ModifyLogRequest::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

int64_t ModifyLogRequest::GetFrom() const
{
    return m_from;
}

void ModifyLogRequest::SetFrom(const int64_t& _from)
{
    m_from = _from;
    m_fromHasBeenSet = true;
}

bool ModifyLogRequest::FromHasBeenSet() const
{
    return m_fromHasBeenSet;
}

int64_t ModifyLogRequest::GetTo() const
{
    return m_to;
}

void ModifyLogRequest::SetTo(const int64_t& _to)
{
    m_to = _to;
    m_toHasBeenSet = true;
}

bool ModifyLogRequest::ToHasBeenSet() const
{
    return m_toHasBeenSet;
}

string ModifyLogRequest::GetQueryString() const
{
    return m_queryString;
}

void ModifyLogRequest::SetQueryString(const string& _queryString)
{
    m_queryString = _queryString;
    m_queryStringHasBeenSet = true;
}

bool ModifyLogRequest::QueryStringHasBeenSet() const
{
    return m_queryStringHasBeenSet;
}

string ModifyLogRequest::GetModifyMode() const
{
    return m_modifyMode;
}

void ModifyLogRequest::SetModifyMode(const string& _modifyMode)
{
    m_modifyMode = _modifyMode;
    m_modifyModeHasBeenSet = true;
}

bool ModifyLogRequest::ModifyModeHasBeenSet() const
{
    return m_modifyModeHasBeenSet;
}

string ModifyLogRequest::GetModifyContent() const
{
    return m_modifyContent;
}

void ModifyLogRequest::SetModifyContent(const string& _modifyContent)
{
    m_modifyContent = _modifyContent;
    m_modifyContentHasBeenSet = true;
}

bool ModifyLogRequest::ModifyContentHasBeenSet() const
{
    return m_modifyContentHasBeenSet;
}


