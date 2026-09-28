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

#include <tencentcloud/tcb/v20180608/model/DeletePlatformHTTPServiceRouteRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

DeletePlatformHTTPServiceRouteRequest::DeletePlatformHTTPServiceRouteRequest() :
    m_platformIdHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_pathsHasBeenSet(false)
{
}

string DeletePlatformHTTPServiceRouteRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_platformIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlatformId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_platformId.c_str(), allocator).Move(), allocator);
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


string DeletePlatformHTTPServiceRouteRequest::GetPlatformId() const
{
    return m_platformId;
}

void DeletePlatformHTTPServiceRouteRequest::SetPlatformId(const string& _platformId)
{
    m_platformId = _platformId;
    m_platformIdHasBeenSet = true;
}

bool DeletePlatformHTTPServiceRouteRequest::PlatformIdHasBeenSet() const
{
    return m_platformIdHasBeenSet;
}

string DeletePlatformHTTPServiceRouteRequest::GetDomain() const
{
    return m_domain;
}

void DeletePlatformHTTPServiceRouteRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool DeletePlatformHTTPServiceRouteRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

vector<string> DeletePlatformHTTPServiceRouteRequest::GetPaths() const
{
    return m_paths;
}

void DeletePlatformHTTPServiceRouteRequest::SetPaths(const vector<string>& _paths)
{
    m_paths = _paths;
    m_pathsHasBeenSet = true;
}

bool DeletePlatformHTTPServiceRouteRequest::PathsHasBeenSet() const
{
    return m_pathsHasBeenSet;
}


