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

#include <tencentcloud/vpc/v20170312/model/ModifyNetworkAclEntriesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

ModifyNetworkAclEntriesRequest::ModifyNetworkAclEntriesRequest() :
    m_networkAclIdHasBeenSet(false),
    m_networkAclEntrySetHasBeenSet(false),
    m_networkAclQuintupleSetHasBeenSet(false),
    m_enableUpdateAclEntriesHasBeenSet(false)
{
}

string ModifyNetworkAclEntriesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_networkAclIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkAclId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_networkAclId.c_str(), allocator).Move(), allocator);
    }

    if (m_networkAclEntrySetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkAclEntrySet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_networkAclEntrySet.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_networkAclQuintupleSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkAclQuintupleSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_networkAclQuintupleSet.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_enableUpdateAclEntriesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableUpdateAclEntries";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableUpdateAclEntries, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyNetworkAclEntriesRequest::GetNetworkAclId() const
{
    return m_networkAclId;
}

void ModifyNetworkAclEntriesRequest::SetNetworkAclId(const string& _networkAclId)
{
    m_networkAclId = _networkAclId;
    m_networkAclIdHasBeenSet = true;
}

bool ModifyNetworkAclEntriesRequest::NetworkAclIdHasBeenSet() const
{
    return m_networkAclIdHasBeenSet;
}

NetworkAclEntrySet ModifyNetworkAclEntriesRequest::GetNetworkAclEntrySet() const
{
    return m_networkAclEntrySet;
}

void ModifyNetworkAclEntriesRequest::SetNetworkAclEntrySet(const NetworkAclEntrySet& _networkAclEntrySet)
{
    m_networkAclEntrySet = _networkAclEntrySet;
    m_networkAclEntrySetHasBeenSet = true;
}

bool ModifyNetworkAclEntriesRequest::NetworkAclEntrySetHasBeenSet() const
{
    return m_networkAclEntrySetHasBeenSet;
}

NetworkAclQuintupleEntries ModifyNetworkAclEntriesRequest::GetNetworkAclQuintupleSet() const
{
    return m_networkAclQuintupleSet;
}

void ModifyNetworkAclEntriesRequest::SetNetworkAclQuintupleSet(const NetworkAclQuintupleEntries& _networkAclQuintupleSet)
{
    m_networkAclQuintupleSet = _networkAclQuintupleSet;
    m_networkAclQuintupleSetHasBeenSet = true;
}

bool ModifyNetworkAclEntriesRequest::NetworkAclQuintupleSetHasBeenSet() const
{
    return m_networkAclQuintupleSetHasBeenSet;
}

bool ModifyNetworkAclEntriesRequest::GetEnableUpdateAclEntries() const
{
    return m_enableUpdateAclEntries;
}

void ModifyNetworkAclEntriesRequest::SetEnableUpdateAclEntries(const bool& _enableUpdateAclEntries)
{
    m_enableUpdateAclEntries = _enableUpdateAclEntries;
    m_enableUpdateAclEntriesHasBeenSet = true;
}

bool ModifyNetworkAclEntriesRequest::EnableUpdateAclEntriesHasBeenSet() const
{
    return m_enableUpdateAclEntriesHasBeenSet;
}


