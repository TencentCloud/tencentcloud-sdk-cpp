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

#include <tencentcloud/ssl/v20191205/model/ClbListener.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssl::V20191205::Model;
using namespace std;

ClbListener::ClbListener() :
    m_listenerIdHasBeenSet(false),
    m_listenerNameHasBeenSet(false),
    m_sniSwitchHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_certificateHasBeenSet(false),
    m_rulesHasBeenSet(false),
    m_noMatchDomainsHasBeenSet(false)
{
}

CoreInternalOutcome ClbListener::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ListenerId") && !value["ListenerId"].IsNull())
    {
        if (!value["ListenerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClbListener.ListenerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_listenerId = string(value["ListenerId"].GetString());
        m_listenerIdHasBeenSet = true;
    }

    if (value.HasMember("ListenerName") && !value["ListenerName"].IsNull())
    {
        if (!value["ListenerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClbListener.ListenerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_listenerName = string(value["ListenerName"].GetString());
        m_listenerNameHasBeenSet = true;
    }

    if (value.HasMember("SniSwitch") && !value["SniSwitch"].IsNull())
    {
        if (!value["SniSwitch"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClbListener.SniSwitch` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sniSwitch = value["SniSwitch"].GetUint64();
        m_sniSwitchHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClbListener.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("Certificate") && !value["Certificate"].IsNull())
    {
        if (!value["Certificate"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ClbListener.Certificate` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_certificate.Deserialize(value["Certificate"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_certificateHasBeenSet = true;
    }

    if (value.HasMember("Rules") && !value["Rules"].IsNull())
    {
        if (!value["Rules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ClbListener.Rules` is not array type"));

        const rapidjson::Value &tmpValue = value["Rules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ClbListenerRule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_rules.push_back(item);
        }
        m_rulesHasBeenSet = true;
    }

    if (value.HasMember("NoMatchDomains") && !value["NoMatchDomains"].IsNull())
    {
        if (!value["NoMatchDomains"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ClbListener.NoMatchDomains` is not array type"));

        const rapidjson::Value &tmpValue = value["NoMatchDomains"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_noMatchDomains.push_back((*itr).GetString());
        }
        m_noMatchDomainsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClbListener::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_sniSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SniSwitch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sniSwitch, allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_certificateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Certificate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_certificate.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_rulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_rules.begin(); itr != m_rules.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_noMatchDomainsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoMatchDomains";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_noMatchDomains.begin(); itr != m_noMatchDomains.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string ClbListener::GetListenerId() const
{
    return m_listenerId;
}

void ClbListener::SetListenerId(const string& _listenerId)
{
    m_listenerId = _listenerId;
    m_listenerIdHasBeenSet = true;
}

bool ClbListener::ListenerIdHasBeenSet() const
{
    return m_listenerIdHasBeenSet;
}

string ClbListener::GetListenerName() const
{
    return m_listenerName;
}

void ClbListener::SetListenerName(const string& _listenerName)
{
    m_listenerName = _listenerName;
    m_listenerNameHasBeenSet = true;
}

bool ClbListener::ListenerNameHasBeenSet() const
{
    return m_listenerNameHasBeenSet;
}

uint64_t ClbListener::GetSniSwitch() const
{
    return m_sniSwitch;
}

void ClbListener::SetSniSwitch(const uint64_t& _sniSwitch)
{
    m_sniSwitch = _sniSwitch;
    m_sniSwitchHasBeenSet = true;
}

bool ClbListener::SniSwitchHasBeenSet() const
{
    return m_sniSwitchHasBeenSet;
}

string ClbListener::GetProtocol() const
{
    return m_protocol;
}

void ClbListener::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool ClbListener::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

Certificate ClbListener::GetCertificate() const
{
    return m_certificate;
}

void ClbListener::SetCertificate(const Certificate& _certificate)
{
    m_certificate = _certificate;
    m_certificateHasBeenSet = true;
}

bool ClbListener::CertificateHasBeenSet() const
{
    return m_certificateHasBeenSet;
}

vector<ClbListenerRule> ClbListener::GetRules() const
{
    return m_rules;
}

void ClbListener::SetRules(const vector<ClbListenerRule>& _rules)
{
    m_rules = _rules;
    m_rulesHasBeenSet = true;
}

bool ClbListener::RulesHasBeenSet() const
{
    return m_rulesHasBeenSet;
}

vector<string> ClbListener::GetNoMatchDomains() const
{
    return m_noMatchDomains;
}

void ClbListener::SetNoMatchDomains(const vector<string>& _noMatchDomains)
{
    m_noMatchDomains = _noMatchDomains;
    m_noMatchDomainsHasBeenSet = true;
}

bool ClbListener::NoMatchDomainsHasBeenSet() const
{
    return m_noMatchDomainsHasBeenSet;
}

