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

#include <tencentcloud/es/v20180416/model/SearchServerlessSpaceDataRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

SearchServerlessSpaceDataRequest::SearchServerlessSpaceDataRequest() :
    m_spaceIdHasBeenSet(false),
    m_uriHasBeenSet(false),
    m_methodHasBeenSet(false),
    m_bodyHasBeenSet(false)
{
}

string SearchServerlessSpaceDataRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_spaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_spaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_uriHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uri";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_uri.c_str(), allocator).Move(), allocator);
    }

    if (m_methodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Method";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_method.c_str(), allocator).Move(), allocator);
    }

    if (m_bodyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Body";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_body.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SearchServerlessSpaceDataRequest::GetSpaceId() const
{
    return m_spaceId;
}

void SearchServerlessSpaceDataRequest::SetSpaceId(const string& _spaceId)
{
    m_spaceId = _spaceId;
    m_spaceIdHasBeenSet = true;
}

bool SearchServerlessSpaceDataRequest::SpaceIdHasBeenSet() const
{
    return m_spaceIdHasBeenSet;
}

string SearchServerlessSpaceDataRequest::GetUri() const
{
    return m_uri;
}

void SearchServerlessSpaceDataRequest::SetUri(const string& _uri)
{
    m_uri = _uri;
    m_uriHasBeenSet = true;
}

bool SearchServerlessSpaceDataRequest::UriHasBeenSet() const
{
    return m_uriHasBeenSet;
}

string SearchServerlessSpaceDataRequest::GetMethod() const
{
    return m_method;
}

void SearchServerlessSpaceDataRequest::SetMethod(const string& _method)
{
    m_method = _method;
    m_methodHasBeenSet = true;
}

bool SearchServerlessSpaceDataRequest::MethodHasBeenSet() const
{
    return m_methodHasBeenSet;
}

string SearchServerlessSpaceDataRequest::GetBody() const
{
    return m_body;
}

void SearchServerlessSpaceDataRequest::SetBody(const string& _body)
{
    m_body = _body;
    m_bodyHasBeenSet = true;
}

bool SearchServerlessSpaceDataRequest::BodyHasBeenSet() const
{
    return m_bodyHasBeenSet;
}


