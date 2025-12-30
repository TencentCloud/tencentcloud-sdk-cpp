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

#include <tencentcloud/ssl/v20191205/model/GAAPListenerDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssl::V20191205::Model;
using namespace std;

GAAPListenerDetail::GAAPListenerDetail() :
    m_listenerStatusHasBeenSet(false),
    m_listenerIdHasBeenSet(false),
    m_listenerNameHasBeenSet(false),
    m_noMatchDomainsHasBeenSet(false),
    m_certIdListHasBeenSet(false),
    m_protocolHasBeenSet(false)
{
}

CoreInternalOutcome GAAPListenerDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ListenerStatus") && !value["ListenerStatus"].IsNull())
    {
        if (!value["ListenerStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GAAPListenerDetail.ListenerStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_listenerStatus = string(value["ListenerStatus"].GetString());
        m_listenerStatusHasBeenSet = true;
    }

    if (value.HasMember("ListenerId") && !value["ListenerId"].IsNull())
    {
        if (!value["ListenerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GAAPListenerDetail.ListenerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_listenerId = string(value["ListenerId"].GetString());
        m_listenerIdHasBeenSet = true;
    }

    if (value.HasMember("ListenerName") && !value["ListenerName"].IsNull())
    {
        if (!value["ListenerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GAAPListenerDetail.ListenerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_listenerName = string(value["ListenerName"].GetString());
        m_listenerNameHasBeenSet = true;
    }

    if (value.HasMember("NoMatchDomains") && !value["NoMatchDomains"].IsNull())
    {
        if (!value["NoMatchDomains"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GAAPListenerDetail.NoMatchDomains` is not array type"));

        const rapidjson::Value &tmpValue = value["NoMatchDomains"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_noMatchDomains.push_back((*itr).GetString());
        }
        m_noMatchDomainsHasBeenSet = true;
    }

    if (value.HasMember("CertIdList") && !value["CertIdList"].IsNull())
    {
        if (!value["CertIdList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GAAPListenerDetail.CertIdList` is not array type"));

        const rapidjson::Value &tmpValue = value["CertIdList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_certIdList.push_back((*itr).GetString());
        }
        m_certIdListHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GAAPListenerDetail.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GAAPListenerDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_listenerStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListenerStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_listenerStatus.c_str(), allocator).Move(), allocator);
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

    if (m_certIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertIdList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_certIdList.begin(); itr != m_certIdList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

}


string GAAPListenerDetail::GetListenerStatus() const
{
    return m_listenerStatus;
}

void GAAPListenerDetail::SetListenerStatus(const string& _listenerStatus)
{
    m_listenerStatus = _listenerStatus;
    m_listenerStatusHasBeenSet = true;
}

bool GAAPListenerDetail::ListenerStatusHasBeenSet() const
{
    return m_listenerStatusHasBeenSet;
}

string GAAPListenerDetail::GetListenerId() const
{
    return m_listenerId;
}

void GAAPListenerDetail::SetListenerId(const string& _listenerId)
{
    m_listenerId = _listenerId;
    m_listenerIdHasBeenSet = true;
}

bool GAAPListenerDetail::ListenerIdHasBeenSet() const
{
    return m_listenerIdHasBeenSet;
}

string GAAPListenerDetail::GetListenerName() const
{
    return m_listenerName;
}

void GAAPListenerDetail::SetListenerName(const string& _listenerName)
{
    m_listenerName = _listenerName;
    m_listenerNameHasBeenSet = true;
}

bool GAAPListenerDetail::ListenerNameHasBeenSet() const
{
    return m_listenerNameHasBeenSet;
}

vector<string> GAAPListenerDetail::GetNoMatchDomains() const
{
    return m_noMatchDomains;
}

void GAAPListenerDetail::SetNoMatchDomains(const vector<string>& _noMatchDomains)
{
    m_noMatchDomains = _noMatchDomains;
    m_noMatchDomainsHasBeenSet = true;
}

bool GAAPListenerDetail::NoMatchDomainsHasBeenSet() const
{
    return m_noMatchDomainsHasBeenSet;
}

vector<string> GAAPListenerDetail::GetCertIdList() const
{
    return m_certIdList;
}

void GAAPListenerDetail::SetCertIdList(const vector<string>& _certIdList)
{
    m_certIdList = _certIdList;
    m_certIdListHasBeenSet = true;
}

bool GAAPListenerDetail::CertIdListHasBeenSet() const
{
    return m_certIdListHasBeenSet;
}

string GAAPListenerDetail::GetProtocol() const
{
    return m_protocol;
}

void GAAPListenerDetail::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool GAAPListenerDetail::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

