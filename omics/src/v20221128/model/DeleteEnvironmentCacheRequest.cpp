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

#include <tencentcloud/omics/v20221128/model/DeleteEnvironmentCacheRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Omics::V20221128::Model;
using namespace std;

DeleteEnvironmentCacheRequest::DeleteEnvironmentCacheRequest() :
    m_environmentIdHasBeenSet(false),
    m_cacheTypeHasBeenSet(false),
    m_pathHasBeenSet(false)
{
}

string DeleteEnvironmentCacheRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_environmentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvironmentId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_environmentId.c_str(), allocator).Move(), allocator);
    }

    if (m_cacheTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CacheType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cacheType.c_str(), allocator).Move(), allocator);
    }

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteEnvironmentCacheRequest::GetEnvironmentId() const
{
    return m_environmentId;
}

void DeleteEnvironmentCacheRequest::SetEnvironmentId(const string& _environmentId)
{
    m_environmentId = _environmentId;
    m_environmentIdHasBeenSet = true;
}

bool DeleteEnvironmentCacheRequest::EnvironmentIdHasBeenSet() const
{
    return m_environmentIdHasBeenSet;
}

string DeleteEnvironmentCacheRequest::GetCacheType() const
{
    return m_cacheType;
}

void DeleteEnvironmentCacheRequest::SetCacheType(const string& _cacheType)
{
    m_cacheType = _cacheType;
    m_cacheTypeHasBeenSet = true;
}

bool DeleteEnvironmentCacheRequest::CacheTypeHasBeenSet() const
{
    return m_cacheTypeHasBeenSet;
}

string DeleteEnvironmentCacheRequest::GetPath() const
{
    return m_path;
}

void DeleteEnvironmentCacheRequest::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool DeleteEnvironmentCacheRequest::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}


