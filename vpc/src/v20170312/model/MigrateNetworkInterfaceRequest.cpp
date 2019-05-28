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

#include <tencentcloud/vpc/v20170312/model/MigrateNetworkInterfaceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace rapidjson;
using namespace std;

MigrateNetworkInterfaceRequest::MigrateNetworkInterfaceRequest() :
    m_networkInterfaceIdHasBeenSet(false),
    m_sourceInstanceIdHasBeenSet(false),
    m_destinationInstanceIdHasBeenSet(false)
{
}

string MigrateNetworkInterfaceRequest::ToJsonString() const
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

    if (m_sourceInstanceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SourceInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_sourceInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_destinationInstanceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DestinationInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_destinationInstanceId.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string MigrateNetworkInterfaceRequest::GetNetworkInterfaceId() const
{
    return m_networkInterfaceId;
}

void MigrateNetworkInterfaceRequest::SetNetworkInterfaceId(const string& _networkInterfaceId)
{
    m_networkInterfaceId = _networkInterfaceId;
    m_networkInterfaceIdHasBeenSet = true;
}

bool MigrateNetworkInterfaceRequest::NetworkInterfaceIdHasBeenSet() const
{
    return m_networkInterfaceIdHasBeenSet;
}

string MigrateNetworkInterfaceRequest::GetSourceInstanceId() const
{
    return m_sourceInstanceId;
}

void MigrateNetworkInterfaceRequest::SetSourceInstanceId(const string& _sourceInstanceId)
{
    m_sourceInstanceId = _sourceInstanceId;
    m_sourceInstanceIdHasBeenSet = true;
}

bool MigrateNetworkInterfaceRequest::SourceInstanceIdHasBeenSet() const
{
    return m_sourceInstanceIdHasBeenSet;
}

string MigrateNetworkInterfaceRequest::GetDestinationInstanceId() const
{
    return m_destinationInstanceId;
}

void MigrateNetworkInterfaceRequest::SetDestinationInstanceId(const string& _destinationInstanceId)
{
    m_destinationInstanceId = _destinationInstanceId;
    m_destinationInstanceIdHasBeenSet = true;
}

bool MigrateNetworkInterfaceRequest::DestinationInstanceIdHasBeenSet() const
{
    return m_destinationInstanceIdHasBeenSet;
}


