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

#include <tencentcloud/cynosdb/v20190107/model/OpenClusterReadOnlyInstanceGroupAccessRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

OpenClusterReadOnlyInstanceGroupAccessRequest::OpenClusterReadOnlyInstanceGroupAccessRequest() :
    m_clusterIdHasBeenSet(false),
    m_portHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false)
{
}

string OpenClusterReadOnlyInstanceGroupAccessRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_port.c_str(), allocator).Move(), allocator);
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


string OpenClusterReadOnlyInstanceGroupAccessRequest::GetClusterId() const
{
    return m_clusterId;
}

void OpenClusterReadOnlyInstanceGroupAccessRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool OpenClusterReadOnlyInstanceGroupAccessRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string OpenClusterReadOnlyInstanceGroupAccessRequest::GetPort() const
{
    return m_port;
}

void OpenClusterReadOnlyInstanceGroupAccessRequest::SetPort(const string& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool OpenClusterReadOnlyInstanceGroupAccessRequest::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

vector<string> OpenClusterReadOnlyInstanceGroupAccessRequest::GetSecurityGroupIds() const
{
    return m_securityGroupIds;
}

void OpenClusterReadOnlyInstanceGroupAccessRequest::SetSecurityGroupIds(const vector<string>& _securityGroupIds)
{
    m_securityGroupIds = _securityGroupIds;
    m_securityGroupIdsHasBeenSet = true;
}

bool OpenClusterReadOnlyInstanceGroupAccessRequest::SecurityGroupIdsHasBeenSet() const
{
    return m_securityGroupIdsHasBeenSet;
}


