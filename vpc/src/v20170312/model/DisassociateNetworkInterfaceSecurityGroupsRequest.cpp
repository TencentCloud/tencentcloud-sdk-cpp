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

#include <tencentcloud/vpc/v20170312/model/DisassociateNetworkInterfaceSecurityGroupsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

DisassociateNetworkInterfaceSecurityGroupsRequest::DisassociateNetworkInterfaceSecurityGroupsRequest() :
    m_networkInterfaceIdsHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false)
{
}

string DisassociateNetworkInterfaceSecurityGroupsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_networkInterfaceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkInterfaceIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_networkInterfaceIds.begin(); itr != m_networkInterfaceIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> DisassociateNetworkInterfaceSecurityGroupsRequest::GetNetworkInterfaceIds() const
{
    return m_networkInterfaceIds;
}

void DisassociateNetworkInterfaceSecurityGroupsRequest::SetNetworkInterfaceIds(const vector<string>& _networkInterfaceIds)
{
    m_networkInterfaceIds = _networkInterfaceIds;
    m_networkInterfaceIdsHasBeenSet = true;
}

bool DisassociateNetworkInterfaceSecurityGroupsRequest::NetworkInterfaceIdsHasBeenSet() const
{
    return m_networkInterfaceIdsHasBeenSet;
}

vector<string> DisassociateNetworkInterfaceSecurityGroupsRequest::GetSecurityGroupIds() const
{
    return m_securityGroupIds;
}

void DisassociateNetworkInterfaceSecurityGroupsRequest::SetSecurityGroupIds(const vector<string>& _securityGroupIds)
{
    m_securityGroupIds = _securityGroupIds;
    m_securityGroupIdsHasBeenSet = true;
}

bool DisassociateNetworkInterfaceSecurityGroupsRequest::SecurityGroupIdsHasBeenSet() const
{
    return m_securityGroupIdsHasBeenSet;
}


