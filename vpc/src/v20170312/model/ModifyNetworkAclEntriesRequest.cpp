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
using namespace rapidjson;
using namespace std;

ModifyNetworkAclEntriesRequest::ModifyNetworkAclEntriesRequest() :
    m_networkAclIdHasBeenSet(false),
    m_networkAclEntrySetHasBeenSet(false)
{
}

string ModifyNetworkAclEntriesRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_networkAclIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NetworkAclId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_networkAclId.c_str(), allocator).Move(), allocator);
    }

    if (m_networkAclEntrySetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NetworkAclEntrySet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_networkAclEntrySet.ToJsonObject(d[key.c_str()], allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
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


