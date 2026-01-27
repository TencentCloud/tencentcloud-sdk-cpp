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

#include <tencentcloud/vpc/v20170312/model/ConnectionStateTimeouts.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

ConnectionStateTimeouts::ConnectionStateTimeouts() :
    m_uDPMappingTimeoutHasBeenSet(false),
    m_tCPEstablishedConnectionTimeoutHasBeenSet(false),
    m_tCPTimeWaitTimeoutHasBeenSet(false)
{
}

CoreInternalOutcome ConnectionStateTimeouts::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UDPMappingTimeout") && !value["UDPMappingTimeout"].IsNull())
    {
        if (!value["UDPMappingTimeout"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ConnectionStateTimeouts.UDPMappingTimeout` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_uDPMappingTimeout = value["UDPMappingTimeout"].GetUint64();
        m_uDPMappingTimeoutHasBeenSet = true;
    }

    if (value.HasMember("TCPEstablishedConnectionTimeout") && !value["TCPEstablishedConnectionTimeout"].IsNull())
    {
        if (!value["TCPEstablishedConnectionTimeout"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ConnectionStateTimeouts.TCPEstablishedConnectionTimeout` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_tCPEstablishedConnectionTimeout = value["TCPEstablishedConnectionTimeout"].GetUint64();
        m_tCPEstablishedConnectionTimeoutHasBeenSet = true;
    }

    if (value.HasMember("TCPTimeWaitTimeout") && !value["TCPTimeWaitTimeout"].IsNull())
    {
        if (!value["TCPTimeWaitTimeout"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ConnectionStateTimeouts.TCPTimeWaitTimeout` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_tCPTimeWaitTimeout = value["TCPTimeWaitTimeout"].GetUint64();
        m_tCPTimeWaitTimeoutHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConnectionStateTimeouts::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_uDPMappingTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UDPMappingTimeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_uDPMappingTimeout, allocator);
    }

    if (m_tCPEstablishedConnectionTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TCPEstablishedConnectionTimeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tCPEstablishedConnectionTimeout, allocator);
    }

    if (m_tCPTimeWaitTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TCPTimeWaitTimeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tCPTimeWaitTimeout, allocator);
    }

}


uint64_t ConnectionStateTimeouts::GetUDPMappingTimeout() const
{
    return m_uDPMappingTimeout;
}

void ConnectionStateTimeouts::SetUDPMappingTimeout(const uint64_t& _uDPMappingTimeout)
{
    m_uDPMappingTimeout = _uDPMappingTimeout;
    m_uDPMappingTimeoutHasBeenSet = true;
}

bool ConnectionStateTimeouts::UDPMappingTimeoutHasBeenSet() const
{
    return m_uDPMappingTimeoutHasBeenSet;
}

uint64_t ConnectionStateTimeouts::GetTCPEstablishedConnectionTimeout() const
{
    return m_tCPEstablishedConnectionTimeout;
}

void ConnectionStateTimeouts::SetTCPEstablishedConnectionTimeout(const uint64_t& _tCPEstablishedConnectionTimeout)
{
    m_tCPEstablishedConnectionTimeout = _tCPEstablishedConnectionTimeout;
    m_tCPEstablishedConnectionTimeoutHasBeenSet = true;
}

bool ConnectionStateTimeouts::TCPEstablishedConnectionTimeoutHasBeenSet() const
{
    return m_tCPEstablishedConnectionTimeoutHasBeenSet;
}

uint64_t ConnectionStateTimeouts::GetTCPTimeWaitTimeout() const
{
    return m_tCPTimeWaitTimeout;
}

void ConnectionStateTimeouts::SetTCPTimeWaitTimeout(const uint64_t& _tCPTimeWaitTimeout)
{
    m_tCPTimeWaitTimeout = _tCPTimeWaitTimeout;
    m_tCPTimeWaitTimeoutHasBeenSet = true;
}

bool ConnectionStateTimeouts::TCPTimeWaitTimeoutHasBeenSet() const
{
    return m_tCPTimeWaitTimeoutHasBeenSet;
}

