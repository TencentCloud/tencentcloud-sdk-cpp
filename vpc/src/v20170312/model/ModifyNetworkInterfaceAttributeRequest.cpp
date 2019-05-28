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
using namespace rapidjson;
using namespace std;

ModifyNetworkInterfaceAttributeRequest::ModifyNetworkInterfaceAttributeRequest() :
    m_networkInterfaceIdHasBeenSet(false),
    m_networkInterfaceNameHasBeenSet(false),
    m_networkInterfaceDescriptionHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false)
{
}

string ModifyNetworkInterfaceAttributeRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_networkInterfaceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NetworkInterfaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_networkInterfaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_networkInterfaceNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NetworkInterfaceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_networkInterfaceName.c_str(), allocator).Move(), allocator);
    }

    if (m_networkInterfaceDescriptionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NetworkInterfaceDescription";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_networkInterfaceDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_securityGroupIdsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SecurityGroupIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_securityGroupIds.begin(); itr != m_securityGroupIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
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


