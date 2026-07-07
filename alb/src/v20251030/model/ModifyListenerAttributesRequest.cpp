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

#include <tencentcloud/alb/v20251030/model/ModifyListenerAttributesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Alb::V20251030::Model;
using namespace std;

ModifyListenerAttributesRequest::ModifyListenerAttributesRequest() :
    m_listenerIdHasBeenSet(false),
    m_loadBalancerIdHasBeenSet(false),
    m_caCertificateIdsHasBeenSet(false),
    m_caEnabledHasBeenSet(false),
    m_certificateIdsHasBeenSet(false),
    m_clientTokenHasBeenSet(false),
    m_defaultActionsHasBeenSet(false),
    m_gzipEnabledHasBeenSet(false),
    m_http2EnabledHasBeenSet(false),
    m_idleTimeoutHasBeenSet(false),
    m_listenerNameHasBeenSet(false),
    m_requestTimeoutHasBeenSet(false),
    m_securityPolicyIdHasBeenSet(false),
    m_xForwardedForConfigHasBeenSet(false)
{
}

string ModifyListenerAttributesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_caCertificateIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CaCertificateIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_caCertificateIds.begin(); itr != m_caCertificateIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_caEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CaEnabled";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_caEnabled, allocator);
    }

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

    if (m_clientTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clientToken.c_str(), allocator).Move(), allocator);
    }

    if (m_defaultActionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultActions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_defaultActions.begin(); itr != m_defaultActions.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_gzipEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GzipEnabled";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_gzipEnabled, allocator);
    }

    if (m_http2EnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Http2Enabled";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_http2Enabled, allocator);
    }

    if (m_idleTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdleTimeout";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_idleTimeout, allocator);
    }

    if (m_listenerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListenerName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_listenerName.c_str(), allocator).Move(), allocator);
    }

    if (m_requestTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestTimeout";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_requestTimeout, allocator);
    }

    if (m_securityPolicyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityPolicyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_securityPolicyId.c_str(), allocator).Move(), allocator);
    }

    if (m_xForwardedForConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "XForwardedForConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_xForwardedForConfig.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyListenerAttributesRequest::GetListenerId() const
{
    return m_listenerId;
}

void ModifyListenerAttributesRequest::SetListenerId(const string& _listenerId)
{
    m_listenerId = _listenerId;
    m_listenerIdHasBeenSet = true;
}

bool ModifyListenerAttributesRequest::ListenerIdHasBeenSet() const
{
    return m_listenerIdHasBeenSet;
}

string ModifyListenerAttributesRequest::GetLoadBalancerId() const
{
    return m_loadBalancerId;
}

void ModifyListenerAttributesRequest::SetLoadBalancerId(const string& _loadBalancerId)
{
    m_loadBalancerId = _loadBalancerId;
    m_loadBalancerIdHasBeenSet = true;
}

bool ModifyListenerAttributesRequest::LoadBalancerIdHasBeenSet() const
{
    return m_loadBalancerIdHasBeenSet;
}

vector<string> ModifyListenerAttributesRequest::GetCaCertificateIds() const
{
    return m_caCertificateIds;
}

void ModifyListenerAttributesRequest::SetCaCertificateIds(const vector<string>& _caCertificateIds)
{
    m_caCertificateIds = _caCertificateIds;
    m_caCertificateIdsHasBeenSet = true;
}

bool ModifyListenerAttributesRequest::CaCertificateIdsHasBeenSet() const
{
    return m_caCertificateIdsHasBeenSet;
}

bool ModifyListenerAttributesRequest::GetCaEnabled() const
{
    return m_caEnabled;
}

void ModifyListenerAttributesRequest::SetCaEnabled(const bool& _caEnabled)
{
    m_caEnabled = _caEnabled;
    m_caEnabledHasBeenSet = true;
}

bool ModifyListenerAttributesRequest::CaEnabledHasBeenSet() const
{
    return m_caEnabledHasBeenSet;
}

vector<string> ModifyListenerAttributesRequest::GetCertificateIds() const
{
    return m_certificateIds;
}

void ModifyListenerAttributesRequest::SetCertificateIds(const vector<string>& _certificateIds)
{
    m_certificateIds = _certificateIds;
    m_certificateIdsHasBeenSet = true;
}

bool ModifyListenerAttributesRequest::CertificateIdsHasBeenSet() const
{
    return m_certificateIdsHasBeenSet;
}

string ModifyListenerAttributesRequest::GetClientToken() const
{
    return m_clientToken;
}

void ModifyListenerAttributesRequest::SetClientToken(const string& _clientToken)
{
    m_clientToken = _clientToken;
    m_clientTokenHasBeenSet = true;
}

bool ModifyListenerAttributesRequest::ClientTokenHasBeenSet() const
{
    return m_clientTokenHasBeenSet;
}

vector<DefaultAction> ModifyListenerAttributesRequest::GetDefaultActions() const
{
    return m_defaultActions;
}

void ModifyListenerAttributesRequest::SetDefaultActions(const vector<DefaultAction>& _defaultActions)
{
    m_defaultActions = _defaultActions;
    m_defaultActionsHasBeenSet = true;
}

bool ModifyListenerAttributesRequest::DefaultActionsHasBeenSet() const
{
    return m_defaultActionsHasBeenSet;
}

bool ModifyListenerAttributesRequest::GetGzipEnabled() const
{
    return m_gzipEnabled;
}

void ModifyListenerAttributesRequest::SetGzipEnabled(const bool& _gzipEnabled)
{
    m_gzipEnabled = _gzipEnabled;
    m_gzipEnabledHasBeenSet = true;
}

bool ModifyListenerAttributesRequest::GzipEnabledHasBeenSet() const
{
    return m_gzipEnabledHasBeenSet;
}

bool ModifyListenerAttributesRequest::GetHttp2Enabled() const
{
    return m_http2Enabled;
}

void ModifyListenerAttributesRequest::SetHttp2Enabled(const bool& _http2Enabled)
{
    m_http2Enabled = _http2Enabled;
    m_http2EnabledHasBeenSet = true;
}

bool ModifyListenerAttributesRequest::Http2EnabledHasBeenSet() const
{
    return m_http2EnabledHasBeenSet;
}

uint64_t ModifyListenerAttributesRequest::GetIdleTimeout() const
{
    return m_idleTimeout;
}

void ModifyListenerAttributesRequest::SetIdleTimeout(const uint64_t& _idleTimeout)
{
    m_idleTimeout = _idleTimeout;
    m_idleTimeoutHasBeenSet = true;
}

bool ModifyListenerAttributesRequest::IdleTimeoutHasBeenSet() const
{
    return m_idleTimeoutHasBeenSet;
}

string ModifyListenerAttributesRequest::GetListenerName() const
{
    return m_listenerName;
}

void ModifyListenerAttributesRequest::SetListenerName(const string& _listenerName)
{
    m_listenerName = _listenerName;
    m_listenerNameHasBeenSet = true;
}

bool ModifyListenerAttributesRequest::ListenerNameHasBeenSet() const
{
    return m_listenerNameHasBeenSet;
}

uint64_t ModifyListenerAttributesRequest::GetRequestTimeout() const
{
    return m_requestTimeout;
}

void ModifyListenerAttributesRequest::SetRequestTimeout(const uint64_t& _requestTimeout)
{
    m_requestTimeout = _requestTimeout;
    m_requestTimeoutHasBeenSet = true;
}

bool ModifyListenerAttributesRequest::RequestTimeoutHasBeenSet() const
{
    return m_requestTimeoutHasBeenSet;
}

string ModifyListenerAttributesRequest::GetSecurityPolicyId() const
{
    return m_securityPolicyId;
}

void ModifyListenerAttributesRequest::SetSecurityPolicyId(const string& _securityPolicyId)
{
    m_securityPolicyId = _securityPolicyId;
    m_securityPolicyIdHasBeenSet = true;
}

bool ModifyListenerAttributesRequest::SecurityPolicyIdHasBeenSet() const
{
    return m_securityPolicyIdHasBeenSet;
}

XForwardedForConfig ModifyListenerAttributesRequest::GetXForwardedForConfig() const
{
    return m_xForwardedForConfig;
}

void ModifyListenerAttributesRequest::SetXForwardedForConfig(const XForwardedForConfig& _xForwardedForConfig)
{
    m_xForwardedForConfig = _xForwardedForConfig;
    m_xForwardedForConfigHasBeenSet = true;
}

bool ModifyListenerAttributesRequest::XForwardedForConfigHasBeenSet() const
{
    return m_xForwardedForConfigHasBeenSet;
}


