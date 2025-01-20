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

#include <tencentcloud/vpc/v20170312/model/AssignPrivateIpAddressesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

AssignPrivateIpAddressesRequest::AssignPrivateIpAddressesRequest() :
    m_networkInterfaceIdHasBeenSet(false),
    m_privateIpAddressesHasBeenSet(false),
    m_secondaryPrivateIpAddressCountHasBeenSet(false),
    m_qosLevelHasBeenSet(false),
    m_clientTokenHasBeenSet(false)
{
}

string AssignPrivateIpAddressesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_networkInterfaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkInterfaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_networkInterfaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_privateIpAddressesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateIpAddresses";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_privateIpAddresses.begin(); itr != m_privateIpAddresses.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_secondaryPrivateIpAddressCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecondaryPrivateIpAddressCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_secondaryPrivateIpAddressCount, allocator);
    }

    if (m_qosLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QosLevel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_qosLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_clientTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clientToken.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AssignPrivateIpAddressesRequest::GetNetworkInterfaceId() const
{
    return m_networkInterfaceId;
}

void AssignPrivateIpAddressesRequest::SetNetworkInterfaceId(const string& _networkInterfaceId)
{
    m_networkInterfaceId = _networkInterfaceId;
    m_networkInterfaceIdHasBeenSet = true;
}

bool AssignPrivateIpAddressesRequest::NetworkInterfaceIdHasBeenSet() const
{
    return m_networkInterfaceIdHasBeenSet;
}

vector<PrivateIpAddressSpecification> AssignPrivateIpAddressesRequest::GetPrivateIpAddresses() const
{
    return m_privateIpAddresses;
}

void AssignPrivateIpAddressesRequest::SetPrivateIpAddresses(const vector<PrivateIpAddressSpecification>& _privateIpAddresses)
{
    m_privateIpAddresses = _privateIpAddresses;
    m_privateIpAddressesHasBeenSet = true;
}

bool AssignPrivateIpAddressesRequest::PrivateIpAddressesHasBeenSet() const
{
    return m_privateIpAddressesHasBeenSet;
}

uint64_t AssignPrivateIpAddressesRequest::GetSecondaryPrivateIpAddressCount() const
{
    return m_secondaryPrivateIpAddressCount;
}

void AssignPrivateIpAddressesRequest::SetSecondaryPrivateIpAddressCount(const uint64_t& _secondaryPrivateIpAddressCount)
{
    m_secondaryPrivateIpAddressCount = _secondaryPrivateIpAddressCount;
    m_secondaryPrivateIpAddressCountHasBeenSet = true;
}

bool AssignPrivateIpAddressesRequest::SecondaryPrivateIpAddressCountHasBeenSet() const
{
    return m_secondaryPrivateIpAddressCountHasBeenSet;
}

string AssignPrivateIpAddressesRequest::GetQosLevel() const
{
    return m_qosLevel;
}

void AssignPrivateIpAddressesRequest::SetQosLevel(const string& _qosLevel)
{
    m_qosLevel = _qosLevel;
    m_qosLevelHasBeenSet = true;
}

bool AssignPrivateIpAddressesRequest::QosLevelHasBeenSet() const
{
    return m_qosLevelHasBeenSet;
}

string AssignPrivateIpAddressesRequest::GetClientToken() const
{
    return m_clientToken;
}

void AssignPrivateIpAddressesRequest::SetClientToken(const string& _clientToken)
{
    m_clientToken = _clientToken;
    m_clientTokenHasBeenSet = true;
}

bool AssignPrivateIpAddressesRequest::ClientTokenHasBeenSet() const
{
    return m_clientTokenHasBeenSet;
}


