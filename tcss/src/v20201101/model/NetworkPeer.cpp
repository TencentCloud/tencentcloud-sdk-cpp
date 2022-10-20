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

#include <tencentcloud/tcss/v20201101/model/NetworkPeer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

NetworkPeer::NetworkPeer() :
    m_peerTypeHasBeenSet(false),
    m_namespaceSelectorHasBeenSet(false),
    m_podSelectorHasBeenSet(false),
    m_iPBlockHasBeenSet(false)
{
}

CoreInternalOutcome NetworkPeer::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PeerType") && !value["PeerType"].IsNull())
    {
        if (!value["PeerType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkPeer.PeerType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_peerType = string(value["PeerType"].GetString());
        m_peerTypeHasBeenSet = true;
    }

    if (value.HasMember("NamespaceSelector") && !value["NamespaceSelector"].IsNull())
    {
        if (!value["NamespaceSelector"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkPeer.NamespaceSelector` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespaceSelector = string(value["NamespaceSelector"].GetString());
        m_namespaceSelectorHasBeenSet = true;
    }

    if (value.HasMember("PodSelector") && !value["PodSelector"].IsNull())
    {
        if (!value["PodSelector"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkPeer.PodSelector` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_podSelector = string(value["PodSelector"].GetString());
        m_podSelectorHasBeenSet = true;
    }

    if (value.HasMember("IPBlock") && !value["IPBlock"].IsNull())
    {
        if (!value["IPBlock"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkPeer.IPBlock` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iPBlock = string(value["IPBlock"].GetString());
        m_iPBlockHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NetworkPeer::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_peerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeerType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_peerType.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceSelectorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamespaceSelector";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespaceSelector.c_str(), allocator).Move(), allocator);
    }

    if (m_podSelectorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodSelector";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_podSelector.c_str(), allocator).Move(), allocator);
    }

    if (m_iPBlockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IPBlock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iPBlock.c_str(), allocator).Move(), allocator);
    }

}


string NetworkPeer::GetPeerType() const
{
    return m_peerType;
}

void NetworkPeer::SetPeerType(const string& _peerType)
{
    m_peerType = _peerType;
    m_peerTypeHasBeenSet = true;
}

bool NetworkPeer::PeerTypeHasBeenSet() const
{
    return m_peerTypeHasBeenSet;
}

string NetworkPeer::GetNamespaceSelector() const
{
    return m_namespaceSelector;
}

void NetworkPeer::SetNamespaceSelector(const string& _namespaceSelector)
{
    m_namespaceSelector = _namespaceSelector;
    m_namespaceSelectorHasBeenSet = true;
}

bool NetworkPeer::NamespaceSelectorHasBeenSet() const
{
    return m_namespaceSelectorHasBeenSet;
}

string NetworkPeer::GetPodSelector() const
{
    return m_podSelector;
}

void NetworkPeer::SetPodSelector(const string& _podSelector)
{
    m_podSelector = _podSelector;
    m_podSelectorHasBeenSet = true;
}

bool NetworkPeer::PodSelectorHasBeenSet() const
{
    return m_podSelectorHasBeenSet;
}

string NetworkPeer::GetIPBlock() const
{
    return m_iPBlock;
}

void NetworkPeer::SetIPBlock(const string& _iPBlock)
{
    m_iPBlock = _iPBlock;
    m_iPBlockHasBeenSet = true;
}

bool NetworkPeer::IPBlockHasBeenSet() const
{
    return m_iPBlockHasBeenSet;
}

