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

#include <tencentcloud/tcb/v20180608/model/PurgeHTTPServiceCacheRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

PurgeHTTPServiceCacheRequest::PurgeHTTPServiceCacheRequest() :
    m_envIdHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_targetsHasBeenSet(false),
    m_cacheTypeHasBeenSet(false),
    m_purgeTypeHasBeenSet(false)
{
}

string PurgeHTTPServiceCacheRequest::ToJsonString() const
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

    if (m_cacheTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CacheType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cacheType.c_str(), allocator).Move(), allocator);
    }

    if (m_purgeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PurgeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_purgeType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string PurgeHTTPServiceCacheRequest::GetEnvId() const
{
    return m_envId;
}

void PurgeHTTPServiceCacheRequest::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool PurgeHTTPServiceCacheRequest::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

string PurgeHTTPServiceCacheRequest::GetDomain() const
{
    return m_domain;
}

void PurgeHTTPServiceCacheRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool PurgeHTTPServiceCacheRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

vector<string> PurgeHTTPServiceCacheRequest::GetTargets() const
{
    return m_targets;
}

void PurgeHTTPServiceCacheRequest::SetTargets(const vector<string>& _targets)
{
    m_targets = _targets;
    m_targetsHasBeenSet = true;
}

bool PurgeHTTPServiceCacheRequest::TargetsHasBeenSet() const
{
    return m_targetsHasBeenSet;
}

string PurgeHTTPServiceCacheRequest::GetCacheType() const
{
    return m_cacheType;
}

void PurgeHTTPServiceCacheRequest::SetCacheType(const string& _cacheType)
{
    m_cacheType = _cacheType;
    m_cacheTypeHasBeenSet = true;
}

bool PurgeHTTPServiceCacheRequest::CacheTypeHasBeenSet() const
{
    return m_cacheTypeHasBeenSet;
}

string PurgeHTTPServiceCacheRequest::GetPurgeType() const
{
    return m_purgeType;
}

void PurgeHTTPServiceCacheRequest::SetPurgeType(const string& _purgeType)
{
    m_purgeType = _purgeType;
    m_purgeTypeHasBeenSet = true;
}

bool PurgeHTTPServiceCacheRequest::PurgeTypeHasBeenSet() const
{
    return m_purgeTypeHasBeenSet;
}


