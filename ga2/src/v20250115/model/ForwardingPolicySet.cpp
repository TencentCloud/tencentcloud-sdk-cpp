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

#include <tencentcloud/ga2/v20250115/model/ForwardingPolicySet.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ga2::V20250115::Model;
using namespace std;

ForwardingPolicySet::ForwardingPolicySet() :
    m_globalAcceleratorIdHasBeenSet(false),
    m_listenerIdHasBeenSet(false),
    m_forwardingPolicyIdHasBeenSet(false),
    m_hostHasBeenSet(false),
    m_defaultHostFlagHasBeenSet(false)
{
}

CoreInternalOutcome ForwardingPolicySet::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GlobalAcceleratorId") && !value["GlobalAcceleratorId"].IsNull())
    {
        if (!value["GlobalAcceleratorId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ForwardingPolicySet.GlobalAcceleratorId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_globalAcceleratorId = string(value["GlobalAcceleratorId"].GetString());
        m_globalAcceleratorIdHasBeenSet = true;
    }

    if (value.HasMember("ListenerId") && !value["ListenerId"].IsNull())
    {
        if (!value["ListenerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ForwardingPolicySet.ListenerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_listenerId = string(value["ListenerId"].GetString());
        m_listenerIdHasBeenSet = true;
    }

    if (value.HasMember("ForwardingPolicyId") && !value["ForwardingPolicyId"].IsNull())
    {
        if (!value["ForwardingPolicyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ForwardingPolicySet.ForwardingPolicyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_forwardingPolicyId = string(value["ForwardingPolicyId"].GetString());
        m_forwardingPolicyIdHasBeenSet = true;
    }

    if (value.HasMember("Host") && !value["Host"].IsNull())
    {
        if (!value["Host"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ForwardingPolicySet.Host` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_host = string(value["Host"].GetString());
        m_hostHasBeenSet = true;
    }

    if (value.HasMember("DefaultHostFlag") && !value["DefaultHostFlag"].IsNull())
    {
        if (!value["DefaultHostFlag"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ForwardingPolicySet.DefaultHostFlag` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_defaultHostFlag = value["DefaultHostFlag"].GetBool();
        m_defaultHostFlagHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ForwardingPolicySet::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_globalAcceleratorIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GlobalAcceleratorId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_globalAcceleratorId.c_str(), allocator).Move(), allocator);
    }

    if (m_listenerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListenerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_listenerId.c_str(), allocator).Move(), allocator);
    }

    if (m_forwardingPolicyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForwardingPolicyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_forwardingPolicyId.c_str(), allocator).Move(), allocator);
    }

    if (m_hostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Host";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_host.c_str(), allocator).Move(), allocator);
    }

    if (m_defaultHostFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultHostFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_defaultHostFlag, allocator);
    }

}


string ForwardingPolicySet::GetGlobalAcceleratorId() const
{
    return m_globalAcceleratorId;
}

void ForwardingPolicySet::SetGlobalAcceleratorId(const string& _globalAcceleratorId)
{
    m_globalAcceleratorId = _globalAcceleratorId;
    m_globalAcceleratorIdHasBeenSet = true;
}

bool ForwardingPolicySet::GlobalAcceleratorIdHasBeenSet() const
{
    return m_globalAcceleratorIdHasBeenSet;
}

string ForwardingPolicySet::GetListenerId() const
{
    return m_listenerId;
}

void ForwardingPolicySet::SetListenerId(const string& _listenerId)
{
    m_listenerId = _listenerId;
    m_listenerIdHasBeenSet = true;
}

bool ForwardingPolicySet::ListenerIdHasBeenSet() const
{
    return m_listenerIdHasBeenSet;
}

string ForwardingPolicySet::GetForwardingPolicyId() const
{
    return m_forwardingPolicyId;
}

void ForwardingPolicySet::SetForwardingPolicyId(const string& _forwardingPolicyId)
{
    m_forwardingPolicyId = _forwardingPolicyId;
    m_forwardingPolicyIdHasBeenSet = true;
}

bool ForwardingPolicySet::ForwardingPolicyIdHasBeenSet() const
{
    return m_forwardingPolicyIdHasBeenSet;
}

string ForwardingPolicySet::GetHost() const
{
    return m_host;
}

void ForwardingPolicySet::SetHost(const string& _host)
{
    m_host = _host;
    m_hostHasBeenSet = true;
}

bool ForwardingPolicySet::HostHasBeenSet() const
{
    return m_hostHasBeenSet;
}

bool ForwardingPolicySet::GetDefaultHostFlag() const
{
    return m_defaultHostFlag;
}

void ForwardingPolicySet::SetDefaultHostFlag(const bool& _defaultHostFlag)
{
    m_defaultHostFlag = _defaultHostFlag;
    m_defaultHostFlagHasBeenSet = true;
}

bool ForwardingPolicySet::DefaultHostFlagHasBeenSet() const
{
    return m_defaultHostFlagHasBeenSet;
}

