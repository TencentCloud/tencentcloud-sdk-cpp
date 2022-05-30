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

#include <tencentcloud/vpc/v20170312/model/ModifyNetworkInterfaceAttributeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

ModifyNetworkInterfaceAttributeRequest::ModifyNetworkInterfaceAttributeRequest() :
    m_networkInterfaceIdHasBeenSet(false),
    m_networkInterfaceNameHasBeenSet(false),
    m_networkInterfaceDescriptionHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_trunkingFlagHasBeenSet(false)
{
}

string ModifyNetworkInterfaceAttributeRequest::ToJsonString() const
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

    if (m_networkInterfaceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkInterfaceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_networkInterfaceName.c_str(), allocator).Move(), allocator);
    }

    if (m_networkInterfaceDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkInterfaceDescription";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_networkInterfaceDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_securityGroupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityGroupIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_securityGroupIds.begin(); itr != m_securityGroupIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_trunkingFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrunkingFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_trunkingFlag.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyNetworkInterfaceAttributeRequest::GetNetworkInterfaceId() const
{
    return m_networkInterfaceId;
}

void ModifyNetworkInterfaceAttributeRequest::SetNetworkInterfaceId(const string& _networkInterfaceId)
{
    m_networkInterfaceId = _networkInterfaceId;
    m_networkInterfaceIdHasBeenSet = true;
}

bool ModifyNetworkInterfaceAttributeRequest::NetworkInterfaceIdHasBeenSet() const
{
    return m_networkInterfaceIdHasBeenSet;
}

string ModifyNetworkInterfaceAttributeRequest::GetNetworkInterfaceName() const
{
    return m_networkInterfaceName;
}

void ModifyNetworkInterfaceAttributeRequest::SetNetworkInterfaceName(const string& _networkInterfaceName)
{
    m_networkInterfaceName = _networkInterfaceName;
    m_networkInterfaceNameHasBeenSet = true;
}

bool ModifyNetworkInterfaceAttributeRequest::NetworkInterfaceNameHasBeenSet() const
{
    return m_networkInterfaceNameHasBeenSet;
}

string ModifyNetworkInterfaceAttributeRequest::GetNetworkInterfaceDescription() const
{
    return m_networkInterfaceDescription;
}

void ModifyNetworkInterfaceAttributeRequest::SetNetworkInterfaceDescription(const string& _networkInterfaceDescription)
{
    m_networkInterfaceDescription = _networkInterfaceDescription;
    m_networkInterfaceDescriptionHasBeenSet = true;
}

bool ModifyNetworkInterfaceAttributeRequest::NetworkInterfaceDescriptionHasBeenSet() const
{
    return m_networkInterfaceDescriptionHasBeenSet;
}

vector<string> ModifyNetworkInterfaceAttributeRequest::GetSecurityGroupIds() const
{
    return m_securityGroupIds;
}

void ModifyNetworkInterfaceAttributeRequest::SetSecurityGroupIds(const vector<string>& _securityGroupIds)
{
    m_securityGroupIds = _securityGroupIds;
    m_securityGroupIdsHasBeenSet = true;
}

bool ModifyNetworkInterfaceAttributeRequest::SecurityGroupIdsHasBeenSet() const
{
    return m_securityGroupIdsHasBeenSet;
}

string ModifyNetworkInterfaceAttributeRequest::GetTrunkingFlag() const
{
    return m_trunkingFlag;
}

void ModifyNetworkInterfaceAttributeRequest::SetTrunkingFlag(const string& _trunkingFlag)
{
    m_trunkingFlag = _trunkingFlag;
    m_trunkingFlagHasBeenSet = true;
}

bool ModifyNetworkInterfaceAttributeRequest::TrunkingFlagHasBeenSet() const
{
    return m_trunkingFlagHasBeenSet;
}


