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

#include <tencentcloud/teo/v20220106/model/CreatePrefetchTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Teo::V20220106::Model;
using namespace std;

CreatePrefetchTaskRequest::CreatePrefetchTaskRequest() :
    m_zoneIdHasBeenSet(false),
    m_targetsHasBeenSet(false),
    m_encodeUrlHasBeenSet(false),
    m_headersHasBeenSet(false)
{
}

string CreatePrefetchTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_targetsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Targets";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_targets.begin(); itr != m_targets.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_encodeUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncodeUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_encodeUrl, allocator);
    }

    if (m_headersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Headers";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_headers.begin(); itr != m_headers.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreatePrefetchTaskRequest::GetZoneId() const
{
    return m_zoneId;
}

void CreatePrefetchTaskRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool CreatePrefetchTaskRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

vector<string> CreatePrefetchTaskRequest::GetTargets() const
{
    return m_targets;
}

void CreatePrefetchTaskRequest::SetTargets(const vector<string>& _targets)
{
    m_targets = _targets;
    m_targetsHasBeenSet = true;
}

bool CreatePrefetchTaskRequest::TargetsHasBeenSet() const
{
    return m_targetsHasBeenSet;
}

bool CreatePrefetchTaskRequest::GetEncodeUrl() const
{
    return m_encodeUrl;
}

void CreatePrefetchTaskRequest::SetEncodeUrl(const bool& _encodeUrl)
{
    m_encodeUrl = _encodeUrl;
    m_encodeUrlHasBeenSet = true;
}

bool CreatePrefetchTaskRequest::EncodeUrlHasBeenSet() const
{
    return m_encodeUrlHasBeenSet;
}

vector<Header> CreatePrefetchTaskRequest::GetHeaders() const
{
    return m_headers;
}

void CreatePrefetchTaskRequest::SetHeaders(const vector<Header>& _headers)
{
    m_headers = _headers;
    m_headersHasBeenSet = true;
}

bool CreatePrefetchTaskRequest::HeadersHasBeenSet() const
{
    return m_headersHasBeenSet;
}


