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

#include <tencentcloud/alb/v20251030/model/ListenerOutput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Alb::V20251030::Model;
using namespace std;

ListenerOutput::ListenerOutput() :
    m_caEnableHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_gzipEnabledHasBeenSet(false),
    m_http2EnableHasBeenSet(false),
    m_idleTimeoutHasBeenSet(false),
    m_listenerIdHasBeenSet(false),
    m_listenerNameHasBeenSet(false),
    m_listenerPortHasBeenSet(false),
    m_listenerProtocolHasBeenSet(false),
    m_listenerStatusHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_requestTimeoutHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_tlsSecurityPolicyIdHasBeenSet(false),
    m_xForwardedForConfigHasBeenSet(false)
{
}

CoreInternalOutcome ListenerOutput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CaEnable") && !value["CaEnable"].IsNull())
    {
        if (!value["CaEnable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ListenerOutput.CaEnable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_caEnable = value["CaEnable"].GetBool();
        m_caEnableHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListenerOutput.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("GzipEnabled") && !value["GzipEnabled"].IsNull())
    {
        if (!value["GzipEnabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ListenerOutput.GzipEnabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_gzipEnabled = value["GzipEnabled"].GetBool();
        m_gzipEnabledHasBeenSet = true;
    }

    if (value.HasMember("Http2Enable") && !value["Http2Enable"].IsNull())
    {
        if (!value["Http2Enable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ListenerOutput.Http2Enable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_http2Enable = value["Http2Enable"].GetBool();
        m_http2EnableHasBeenSet = true;
    }

    if (value.HasMember("IdleTimeout") && !value["IdleTimeout"].IsNull())
    {
        if (!value["IdleTimeout"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ListenerOutput.IdleTimeout` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_idleTimeout = value["IdleTimeout"].GetUint64();
        m_idleTimeoutHasBeenSet = true;
    }

    if (value.HasMember("ListenerId") && !value["ListenerId"].IsNull())
    {
        if (!value["ListenerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListenerOutput.ListenerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_listenerId = string(value["ListenerId"].GetString());
        m_listenerIdHasBeenSet = true;
    }

    if (value.HasMember("ListenerName") && !value["ListenerName"].IsNull())
    {
        if (!value["ListenerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListenerOutput.ListenerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_listenerName = string(value["ListenerName"].GetString());
        m_listenerNameHasBeenSet = true;
    }

    if (value.HasMember("ListenerPort") && !value["ListenerPort"].IsNull())
    {
        if (!value["ListenerPort"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ListenerOutput.ListenerPort` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_listenerPort = value["ListenerPort"].GetUint64();
        m_listenerPortHasBeenSet = true;
    }

    if (value.HasMember("ListenerProtocol") && !value["ListenerProtocol"].IsNull())
    {
        if (!value["ListenerProtocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListenerOutput.ListenerProtocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_listenerProtocol = string(value["ListenerProtocol"].GetString());
        m_listenerProtocolHasBeenSet = true;
    }

    if (value.HasMember("ListenerStatus") && !value["ListenerStatus"].IsNull())
    {
        if (!value["ListenerStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListenerOutput.ListenerStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_listenerStatus = string(value["ListenerStatus"].GetString());
        m_listenerStatusHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListenerOutput.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("RequestTimeout") && !value["RequestTimeout"].IsNull())
    {
        if (!value["RequestTimeout"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ListenerOutput.RequestTimeout` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_requestTimeout = value["RequestTimeout"].GetUint64();
        m_requestTimeoutHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ListenerOutput.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
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

    if (value.HasMember("TlsSecurityPolicyId") && !value["TlsSecurityPolicyId"].IsNull())
    {
        if (!value["TlsSecurityPolicyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ListenerOutput.TlsSecurityPolicyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tlsSecurityPolicyId = string(value["TlsSecurityPolicyId"].GetString());
        m_tlsSecurityPolicyIdHasBeenSet = true;
    }

    if (value.HasMember("XForwardedForConfig") && !value["XForwardedForConfig"].IsNull())
    {
        if (!value["XForwardedForConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ListenerOutput.XForwardedForConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_xForwardedForConfig.Deserialize(value["XForwardedForConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_xForwardedForConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ListenerOutput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_caEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CaEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_caEnable, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_gzipEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GzipEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_gzipEnabled, allocator);
    }

    if (m_http2EnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Http2Enable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_http2Enable, allocator);
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

    if (m_tlsSecurityPolicyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TlsSecurityPolicyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tlsSecurityPolicyId.c_str(), allocator).Move(), allocator);
    }

    if (m_xForwardedForConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "XForwardedForConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_xForwardedForConfig.ToJsonObject(value[key.c_str()], allocator);
    }

}


bool ListenerOutput::GetCaEnable() const
{
    return m_caEnable;
}

void ListenerOutput::SetCaEnable(const bool& _caEnable)
{
    m_caEnable = _caEnable;
    m_caEnableHasBeenSet = true;
}

bool ListenerOutput::CaEnableHasBeenSet() const
{
    return m_caEnableHasBeenSet;
}

string ListenerOutput::GetCreateTime() const
{
    return m_createTime;
}

void ListenerOutput::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ListenerOutput::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

bool ListenerOutput::GetGzipEnabled() const
{
    return m_gzipEnabled;
}

void ListenerOutput::SetGzipEnabled(const bool& _gzipEnabled)
{
    m_gzipEnabled = _gzipEnabled;
    m_gzipEnabledHasBeenSet = true;
}

bool ListenerOutput::GzipEnabledHasBeenSet() const
{
    return m_gzipEnabledHasBeenSet;
}

bool ListenerOutput::GetHttp2Enable() const
{
    return m_http2Enable;
}

void ListenerOutput::SetHttp2Enable(const bool& _http2Enable)
{
    m_http2Enable = _http2Enable;
    m_http2EnableHasBeenSet = true;
}

bool ListenerOutput::Http2EnableHasBeenSet() const
{
    return m_http2EnableHasBeenSet;
}

uint64_t ListenerOutput::GetIdleTimeout() const
{
    return m_idleTimeout;
}

void ListenerOutput::SetIdleTimeout(const uint64_t& _idleTimeout)
{
    m_idleTimeout = _idleTimeout;
    m_idleTimeoutHasBeenSet = true;
}

bool ListenerOutput::IdleTimeoutHasBeenSet() const
{
    return m_idleTimeoutHasBeenSet;
}

string ListenerOutput::GetListenerId() const
{
    return m_listenerId;
}

void ListenerOutput::SetListenerId(const string& _listenerId)
{
    m_listenerId = _listenerId;
    m_listenerIdHasBeenSet = true;
}

bool ListenerOutput::ListenerIdHasBeenSet() const
{
    return m_listenerIdHasBeenSet;
}

string ListenerOutput::GetListenerName() const
{
    return m_listenerName;
}

void ListenerOutput::SetListenerName(const string& _listenerName)
{
    m_listenerName = _listenerName;
    m_listenerNameHasBeenSet = true;
}

bool ListenerOutput::ListenerNameHasBeenSet() const
{
    return m_listenerNameHasBeenSet;
}

uint64_t ListenerOutput::GetListenerPort() const
{
    return m_listenerPort;
}

void ListenerOutput::SetListenerPort(const uint64_t& _listenerPort)
{
    m_listenerPort = _listenerPort;
    m_listenerPortHasBeenSet = true;
}

bool ListenerOutput::ListenerPortHasBeenSet() const
{
    return m_listenerPortHasBeenSet;
}

string ListenerOutput::GetListenerProtocol() const
{
    return m_listenerProtocol;
}

void ListenerOutput::SetListenerProtocol(const string& _listenerProtocol)
{
    m_listenerProtocol = _listenerProtocol;
    m_listenerProtocolHasBeenSet = true;
}

bool ListenerOutput::ListenerProtocolHasBeenSet() const
{
    return m_listenerProtocolHasBeenSet;
}

string ListenerOutput::GetListenerStatus() const
{
    return m_listenerStatus;
}

void ListenerOutput::SetListenerStatus(const string& _listenerStatus)
{
    m_listenerStatus = _listenerStatus;
    m_listenerStatusHasBeenSet = true;
}

bool ListenerOutput::ListenerStatusHasBeenSet() const
{
    return m_listenerStatusHasBeenSet;
}

string ListenerOutput::GetModifyTime() const
{
    return m_modifyTime;
}

void ListenerOutput::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool ListenerOutput::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

uint64_t ListenerOutput::GetRequestTimeout() const
{
    return m_requestTimeout;
}

void ListenerOutput::SetRequestTimeout(const uint64_t& _requestTimeout)
{
    m_requestTimeout = _requestTimeout;
    m_requestTimeoutHasBeenSet = true;
}

bool ListenerOutput::RequestTimeoutHasBeenSet() const
{
    return m_requestTimeoutHasBeenSet;
}

vector<TagInfo> ListenerOutput::GetTags() const
{
    return m_tags;
}

void ListenerOutput::SetTags(const vector<TagInfo>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool ListenerOutput::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string ListenerOutput::GetTlsSecurityPolicyId() const
{
    return m_tlsSecurityPolicyId;
}

void ListenerOutput::SetTlsSecurityPolicyId(const string& _tlsSecurityPolicyId)
{
    m_tlsSecurityPolicyId = _tlsSecurityPolicyId;
    m_tlsSecurityPolicyIdHasBeenSet = true;
}

bool ListenerOutput::TlsSecurityPolicyIdHasBeenSet() const
{
    return m_tlsSecurityPolicyIdHasBeenSet;
}

XForwardedForConfig ListenerOutput::GetXForwardedForConfig() const
{
    return m_xForwardedForConfig;
}

void ListenerOutput::SetXForwardedForConfig(const XForwardedForConfig& _xForwardedForConfig)
{
    m_xForwardedForConfig = _xForwardedForConfig;
    m_xForwardedForConfigHasBeenSet = true;
}

bool ListenerOutput::XForwardedForConfigHasBeenSet() const
{
    return m_xForwardedForConfigHasBeenSet;
}

