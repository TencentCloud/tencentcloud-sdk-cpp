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

#include <tencentcloud/clb/v20180317/model/AutoRewriteRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

AutoRewriteRequest::AutoRewriteRequest() :
    m_loadBalancerIdHasBeenSet(false),
    m_listenerIdHasBeenSet(false),
    m_domainsHasBeenSet(false),
    m_rewriteCodesHasBeenSet(false),
    m_takeUrlsHasBeenSet(false)
{
}

string AutoRewriteRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_loadBalancerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_loadBalancerId.c_str(), allocator).Move(), allocator);
    }

    if (m_listenerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListenerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_listenerId.c_str(), allocator).Move(), allocator);
    }

    if (m_domainsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domains";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_domains.begin(); itr != m_domains.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_rewriteCodesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RewriteCodes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_rewriteCodes.begin(); itr != m_rewriteCodes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_takeUrlsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TakeUrls";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_takeUrls.begin(); itr != m_takeUrls.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetBool(*itr), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AutoRewriteRequest::GetLoadBalancerId() const
{
    return m_loadBalancerId;
}

void AutoRewriteRequest::SetLoadBalancerId(const string& _loadBalancerId)
{
    m_loadBalancerId = _loadBalancerId;
    m_loadBalancerIdHasBeenSet = true;
}

bool AutoRewriteRequest::LoadBalancerIdHasBeenSet() const
{
    return m_loadBalancerIdHasBeenSet;
}

string AutoRewriteRequest::GetListenerId() const
{
    return m_listenerId;
}

void AutoRewriteRequest::SetListenerId(const string& _listenerId)
{
    m_listenerId = _listenerId;
    m_listenerIdHasBeenSet = true;
}

bool AutoRewriteRequest::ListenerIdHasBeenSet() const
{
    return m_listenerIdHasBeenSet;
}

vector<string> AutoRewriteRequest::GetDomains() const
{
    return m_domains;
}

void AutoRewriteRequest::SetDomains(const vector<string>& _domains)
{
    m_domains = _domains;
    m_domainsHasBeenSet = true;
}

bool AutoRewriteRequest::DomainsHasBeenSet() const
{
    return m_domainsHasBeenSet;
}

vector<int64_t> AutoRewriteRequest::GetRewriteCodes() const
{
    return m_rewriteCodes;
}

void AutoRewriteRequest::SetRewriteCodes(const vector<int64_t>& _rewriteCodes)
{
    m_rewriteCodes = _rewriteCodes;
    m_rewriteCodesHasBeenSet = true;
}

bool AutoRewriteRequest::RewriteCodesHasBeenSet() const
{
    return m_rewriteCodesHasBeenSet;
}

vector<bool> AutoRewriteRequest::GetTakeUrls() const
{
    return m_takeUrls;
}

void AutoRewriteRequest::SetTakeUrls(const vector<bool>& _takeUrls)
{
    m_takeUrls = _takeUrls;
    m_takeUrlsHasBeenSet = true;
}

bool AutoRewriteRequest::TakeUrlsHasBeenSet() const
{
    return m_takeUrlsHasBeenSet;
}


