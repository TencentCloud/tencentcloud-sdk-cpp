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

#include <tencentcloud/vpc/v20170312/model/ModifyNetworkAclAttributeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

ModifyNetworkAclAttributeRequest::ModifyNetworkAclAttributeRequest() :
    m_networkAclIdHasBeenSet(false),
    m_networkAclNameHasBeenSet(false)
{
}

string ModifyNetworkAclAttributeRequest::ToJsonString() const
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

    if (m_networkAclNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkAclName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_networkAclName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyNetworkAclAttributeRequest::GetNetworkAclId() const
{
    return m_networkAclId;
}

void ModifyNetworkAclAttributeRequest::SetNetworkAclId(const string& _networkAclId)
{
    m_networkAclId = _networkAclId;
    m_networkAclIdHasBeenSet = true;
}

bool ModifyNetworkAclAttributeRequest::NetworkAclIdHasBeenSet() const
{
    return m_networkAclIdHasBeenSet;
}

string ModifyNetworkAclAttributeRequest::GetNetworkAclName() const
{
    return m_networkAclName;
}

void ModifyNetworkAclAttributeRequest::SetNetworkAclName(const string& _networkAclName)
{
    m_networkAclName = _networkAclName;
    m_networkAclNameHasBeenSet = true;
}

bool ModifyNetworkAclAttributeRequest::NetworkAclNameHasBeenSet() const
{
    return m_networkAclNameHasBeenSet;
}


