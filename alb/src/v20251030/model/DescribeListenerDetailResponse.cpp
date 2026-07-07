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

#include <tencentcloud/alb/v20251030/model/DescribeListenerDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Alb::V20251030::Model;
using namespace std;

DescribeListenerDetailResponse::DescribeListenerDetailResponse() :
    m_caCertificateIdsHasBeenSet(false),
    m_caEnabledHasBeenSet(false),
    m_certificateIdsHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_defaultActionsHasBeenSet(false),
    m_gzipEnabledHasBeenSet(false),
    m_http2EnabledHasBeenSet(false),
    m_idleTimeoutHasBeenSet(false),
    m_listenerIdHasBeenSet(false),
    m_listenerNameHasBeenSet(false),
    m_listenerPortHasBeenSet(false),
    m_listenerProtocolHasBeenSet(false),
    m_listenerStatusHasBeenSet(false),
    m_loadBalancerIdHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_requestTimeoutHasBeenSet(false),
    m_securityPolicyIdHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_xForwardedForConfigHasBeenSet(false)
{
}

CoreInternalOutcome DescribeListenerDetailResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("CaCertificateIds") && !rsp["CaCertificateIds"].IsNull())
    {
        if (!rsp["CaCertificateIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CaCertificateIds` is not array type"));

        const rapidjson::Value &tmpValue = rsp["CaCertificateIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_caCertificateIds.push_back((*itr).GetString());
        }
        m_caCertificateIdsHasBeenSet = true;
    }

    if (rsp.HasMember("CaEnabled") && !rsp["CaEnabled"].IsNull())
    {
        if (!rsp["CaEnabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CaEnabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_caEnabled = rsp["CaEnabled"].GetBool();
        m_caEnabledHasBeenSet = true;
    }

    if (rsp.HasMember("CertificateIds") && !rsp["CertificateIds"].IsNull())
    {
        if (!rsp["CertificateIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CertificateIds` is not array type"));

        const rapidjson::Value &tmpValue = rsp["CertificateIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_certificateIds.push_back((*itr).GetString());
        }
        m_certificateIdsHasBeenSet = true;
    }

    if (rsp.HasMember("CreateTime") && !rsp["CreateTime"].IsNull())
    {
        if (!rsp["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(rsp["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (rsp.HasMember("DefaultActions") && !rsp["DefaultActions"].IsNull())
    {
        if (!rsp["DefaultActions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DefaultActions` is not array type"));

        const rapidjson::Value &tmpValue = rsp["DefaultActions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DefaultAction item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_defaultActions.push_back(item);
        }
        m_defaultActionsHasBeenSet = true;
    }

    if (rsp.HasMember("GzipEnabled") && !rsp["GzipEnabled"].IsNull())
    {
        if (!rsp["GzipEnabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `GzipEnabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_gzipEnabled = rsp["GzipEnabled"].GetBool();
        m_gzipEnabledHasBeenSet = true;
    }

    if (rsp.HasMember("Http2Enabled") && !rsp["Http2Enabled"].IsNull())
    {
        if (!rsp["Http2Enabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Http2Enabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_http2Enabled = rsp["Http2Enabled"].GetBool();
        m_http2EnabledHasBeenSet = true;
    }

    if (rsp.HasMember("IdleTimeout") && !rsp["IdleTimeout"].IsNull())
    {
        if (!rsp["IdleTimeout"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `IdleTimeout` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_idleTimeout = rsp["IdleTimeout"].GetUint64();
        m_idleTimeoutHasBeenSet = true;
    }

    if (rsp.HasMember("ListenerId") && !rsp["ListenerId"].IsNull())
    {
        if (!rsp["ListenerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListenerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_listenerId = string(rsp["ListenerId"].GetString());
        m_listenerIdHasBeenSet = true;
    }

    if (rsp.HasMember("ListenerName") && !rsp["ListenerName"].IsNull())
    {
        if (!rsp["ListenerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListenerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_listenerName = string(rsp["ListenerName"].GetString());
        m_listenerNameHasBeenSet = true;
    }

    if (rsp.HasMember("ListenerPort") && !rsp["ListenerPort"].IsNull())
    {
        if (!rsp["ListenerPort"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ListenerPort` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_listenerPort = rsp["ListenerPort"].GetUint64();
        m_listenerPortHasBeenSet = true;
    }

    if (rsp.HasMember("ListenerProtocol") && !rsp["ListenerProtocol"].IsNull())
    {
        if (!rsp["ListenerProtocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListenerProtocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_listenerProtocol = string(rsp["ListenerProtocol"].GetString());
        m_listenerProtocolHasBeenSet = true;
    }

    if (rsp.HasMember("ListenerStatus") && !rsp["ListenerStatus"].IsNull())
    {
        if (!rsp["ListenerStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListenerStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_listenerStatus = string(rsp["ListenerStatus"].GetString());
        m_listenerStatusHasBeenSet = true;
    }

    if (rsp.HasMember("LoadBalancerId") && !rsp["LoadBalancerId"].IsNull())
    {
        if (!rsp["LoadBalancerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loadBalancerId = string(rsp["LoadBalancerId"].GetString());
        m_loadBalancerIdHasBeenSet = true;
    }

    if (rsp.HasMember("ModifyTime") && !rsp["ModifyTime"].IsNull())
    {
        if (!rsp["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(rsp["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (rsp.HasMember("RequestTimeout") && !rsp["RequestTimeout"].IsNull())
    {
        if (!rsp["RequestTimeout"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RequestTimeout` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_requestTimeout = rsp["RequestTimeout"].GetUint64();
        m_requestTimeoutHasBeenSet = true;
    }

    if (rsp.HasMember("SecurityPolicyId") && !rsp["SecurityPolicyId"].IsNull())
    {
        if (!rsp["SecurityPolicyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityPolicyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_securityPolicyId = string(rsp["SecurityPolicyId"].GetString());
        m_securityPolicyIdHasBeenSet = true;
    }

    if (rsp.HasMember("Tags") && !rsp["Tags"].IsNull())
    {
        if (!rsp["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Tags` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TagInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (rsp.HasMember("XForwardedForConfig") && !rsp["XForwardedForConfig"].IsNull())
    {
        if (!rsp["XForwardedForConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `XForwardedForConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_xForwardedForConfig.Deserialize(rsp["XForwardedForConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_xForwardedForConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeListenerDetailResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_caCertificateIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CaCertificateIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_caCertificateIds.begin(); itr != m_caCertificateIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_caEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CaEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_caEnabled, allocator);
    }

    if (m_certificateIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertificateIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_certificateIds.begin(); itr != m_certificateIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_defaultActionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultActions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_defaultActions.begin(); itr != m_defaultActions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_gzipEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GzipEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gzipEnabled, allocator);
    }

    if (m_http2EnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Http2Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_http2Enabled, allocator);
    }

    if (m_idleTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdleTimeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_idleTimeout, allocator);
    }

    if (m_listenerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListenerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_listenerId.c_str(), allocator).Move(), allocator);
    }

    if (m_listenerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListenerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_listenerName.c_str(), allocator).Move(), allocator);
    }

    if (m_listenerPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListenerPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_listenerPort, allocator);
    }

    if (m_listenerProtocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListenerProtocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_listenerProtocol.c_str(), allocator).Move(), allocator);
    }

    if (m_listenerStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListenerStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_listenerStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_loadBalancerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_loadBalancerId.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_requestTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestTimeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_requestTimeout, allocator);
    }

    if (m_securityPolicyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityPolicyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_securityPolicyId.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_xForwardedForConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "XForwardedForConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_xForwardedForConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);

    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


vector<string> DescribeListenerDetailResponse::GetCaCertificateIds() const
{
    return m_caCertificateIds;
}

bool DescribeListenerDetailResponse::CaCertificateIdsHasBeenSet() const
{
    return m_caCertificateIdsHasBeenSet;
}

bool DescribeListenerDetailResponse::GetCaEnabled() const
{
    return m_caEnabled;
}

bool DescribeListenerDetailResponse::CaEnabledHasBeenSet() const
{
    return m_caEnabledHasBeenSet;
}

vector<string> DescribeListenerDetailResponse::GetCertificateIds() const
{
    return m_certificateIds;
}

bool DescribeListenerDetailResponse::CertificateIdsHasBeenSet() const
{
    return m_certificateIdsHasBeenSet;
}

string DescribeListenerDetailResponse::GetCreateTime() const
{
    return m_createTime;
}

bool DescribeListenerDetailResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

vector<DefaultAction> DescribeListenerDetailResponse::GetDefaultActions() const
{
    return m_defaultActions;
}

bool DescribeListenerDetailResponse::DefaultActionsHasBeenSet() const
{
    return m_defaultActionsHasBeenSet;
}

bool DescribeListenerDetailResponse::GetGzipEnabled() const
{
    return m_gzipEnabled;
}

bool DescribeListenerDetailResponse::GzipEnabledHasBeenSet() const
{
    return m_gzipEnabledHasBeenSet;
}

bool DescribeListenerDetailResponse::GetHttp2Enabled() const
{
    return m_http2Enabled;
}

bool DescribeListenerDetailResponse::Http2EnabledHasBeenSet() const
{
    return m_http2EnabledHasBeenSet;
}

uint64_t DescribeListenerDetailResponse::GetIdleTimeout() const
{
    return m_idleTimeout;
}

bool DescribeListenerDetailResponse::IdleTimeoutHasBeenSet() const
{
    return m_idleTimeoutHasBeenSet;
}

string DescribeListenerDetailResponse::GetListenerId() const
{
    return m_listenerId;
}

bool DescribeListenerDetailResponse::ListenerIdHasBeenSet() const
{
    return m_listenerIdHasBeenSet;
}

string DescribeListenerDetailResponse::GetListenerName() const
{
    return m_listenerName;
}

bool DescribeListenerDetailResponse::ListenerNameHasBeenSet() const
{
    return m_listenerNameHasBeenSet;
}

uint64_t DescribeListenerDetailResponse::GetListenerPort() const
{
    return m_listenerPort;
}

bool DescribeListenerDetailResponse::ListenerPortHasBeenSet() const
{
    return m_listenerPortHasBeenSet;
}

string DescribeListenerDetailResponse::GetListenerProtocol() const
{
    return m_listenerProtocol;
}

bool DescribeListenerDetailResponse::ListenerProtocolHasBeenSet() const
{
    return m_listenerProtocolHasBeenSet;
}

string DescribeListenerDetailResponse::GetListenerStatus() const
{
    return m_listenerStatus;
}

bool DescribeListenerDetailResponse::ListenerStatusHasBeenSet() const
{
    return m_listenerStatusHasBeenSet;
}

string DescribeListenerDetailResponse::GetLoadBalancerId() const
{
    return m_loadBalancerId;
}

bool DescribeListenerDetailResponse::LoadBalancerIdHasBeenSet() const
{
    return m_loadBalancerIdHasBeenSet;
}

string DescribeListenerDetailResponse::GetModifyTime() const
{
    return m_modifyTime;
}

bool DescribeListenerDetailResponse::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

uint64_t DescribeListenerDetailResponse::GetRequestTimeout() const
{
    return m_requestTimeout;
}

bool DescribeListenerDetailResponse::RequestTimeoutHasBeenSet() const
{
    return m_requestTimeoutHasBeenSet;
}

string DescribeListenerDetailResponse::GetSecurityPolicyId() const
{
    return m_securityPolicyId;
}

bool DescribeListenerDetailResponse::SecurityPolicyIdHasBeenSet() const
{
    return m_securityPolicyIdHasBeenSet;
}

vector<TagInfo> DescribeListenerDetailResponse::GetTags() const
{
    return m_tags;
}

bool DescribeListenerDetailResponse::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

XForwardedForConfig DescribeListenerDetailResponse::GetXForwardedForConfig() const
{
    return m_xForwardedForConfig;
}

bool DescribeListenerDetailResponse::XForwardedForConfigHasBeenSet() const
{
    return m_xForwardedForConfigHasBeenSet;
}


