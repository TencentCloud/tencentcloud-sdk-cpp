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

#include <tencentcloud/tcb/v20180608/model/DeleteHTTPServiceRouteRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

DeleteHTTPServiceRouteRequest::DeleteHTTPServiceRouteRequest() :
    m_envIdHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_pathsHasBeenSet(false)
{
}

string DeleteHTTPServiceRouteRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_envIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_envId.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_pathsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Paths";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_paths.begin(); itr != m_paths.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteHTTPServiceRouteRequest::GetEnvId() const
{
    return m_envId;
}

void DeleteHTTPServiceRouteRequest::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool DeleteHTTPServiceRouteRequest::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

string DeleteHTTPServiceRouteRequest::GetDomain() const
{
    return m_domain;
}

void DeleteHTTPServiceRouteRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool DeleteHTTPServiceRouteRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

vector<string> DeleteHTTPServiceRouteRequest::GetPaths() const
{
    return m_paths;
}

void DeleteHTTPServiceRouteRequest::SetPaths(const vector<string>& _paths)
{
    m_paths = _paths;
    m_pathsHasBeenSet = true;
}

bool DeleteHTTPServiceRouteRequest::PathsHasBeenSet() const
{
    return m_pathsHasBeenSet;
}


