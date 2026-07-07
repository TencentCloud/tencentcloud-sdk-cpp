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

#include <tencentcloud/alb/v20251030/model/AssociateListenerAdditionalCertificatesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Alb::V20251030::Model;
using namespace std;

AssociateListenerAdditionalCertificatesRequest::AssociateListenerAdditionalCertificatesRequest() :
    m_certificateIdsHasBeenSet(false),
    m_listenerIdHasBeenSet(false),
    m_loadBalancerIdHasBeenSet(false),
    m_clientTokenHasBeenSet(false),
    m_dryRunHasBeenSet(false)
{
}

string AssociateListenerAdditionalCertificatesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_certificateIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertificateIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_certificateIds.begin(); itr != m_certificateIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_listenerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListenerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_listenerId.c_str(), allocator).Move(), allocator);
    }

    if (m_loadBalancerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_loadBalancerId.c_str(), allocator).Move(), allocator);
    }

    if (m_clientTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clientToken.c_str(), allocator).Move(), allocator);
    }

    if (m_dryRunHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DryRun";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dryRun.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> AssociateListenerAdditionalCertificatesRequest::GetCertificateIds() const
{
    return m_certificateIds;
}

void AssociateListenerAdditionalCertificatesRequest::SetCertificateIds(const vector<string>& _certificateIds)
{
    m_certificateIds = _certificateIds;
    m_certificateIdsHasBeenSet = true;
}

bool AssociateListenerAdditionalCertificatesRequest::CertificateIdsHasBeenSet() const
{
    return m_certificateIdsHasBeenSet;
}

string AssociateListenerAdditionalCertificatesRequest::GetListenerId() const
{
    return m_listenerId;
}

void AssociateListenerAdditionalCertificatesRequest::SetListenerId(const string& _listenerId)
{
    m_listenerId = _listenerId;
    m_listenerIdHasBeenSet = true;
}

bool AssociateListenerAdditionalCertificatesRequest::ListenerIdHasBeenSet() const
{
    return m_listenerIdHasBeenSet;
}

string AssociateListenerAdditionalCertificatesRequest::GetLoadBalancerId() const
{
    return m_loadBalancerId;
}

void AssociateListenerAdditionalCertificatesRequest::SetLoadBalancerId(const string& _loadBalancerId)
{
    m_loadBalancerId = _loadBalancerId;
    m_loadBalancerIdHasBeenSet = true;
}

bool AssociateListenerAdditionalCertificatesRequest::LoadBalancerIdHasBeenSet() const
{
    return m_loadBalancerIdHasBeenSet;
}

string AssociateListenerAdditionalCertificatesRequest::GetClientToken() const
{
    return m_clientToken;
}

void AssociateListenerAdditionalCertificatesRequest::SetClientToken(const string& _clientToken)
{
    m_clientToken = _clientToken;
    m_clientTokenHasBeenSet = true;
}

bool AssociateListenerAdditionalCertificatesRequest::ClientTokenHasBeenSet() const
{
    return m_clientTokenHasBeenSet;
}

string AssociateListenerAdditionalCertificatesRequest::GetDryRun() const
{
    return m_dryRun;
}

void AssociateListenerAdditionalCertificatesRequest::SetDryRun(const string& _dryRun)
{
    m_dryRun = _dryRun;
    m_dryRunHasBeenSet = true;
}

bool AssociateListenerAdditionalCertificatesRequest::DryRunHasBeenSet() const
{
    return m_dryRunHasBeenSet;
}


