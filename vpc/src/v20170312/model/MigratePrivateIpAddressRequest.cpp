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

#include <tencentcloud/vpc/v20170312/model/MigratePrivateIpAddressRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace rapidjson;
using namespace std;

MigratePrivateIpAddressRequest::MigratePrivateIpAddressRequest() :
    m_sourceNetworkInterfaceIdHasBeenSet(false),
    m_destinationNetworkInterfaceIdHasBeenSet(false),
    m_privateIpAddressHasBeenSet(false)
{
}

string MigratePrivateIpAddressRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sourceNetworkInterfaceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SourceNetworkInterfaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_sourceNetworkInterfaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_destinationNetworkInterfaceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DestinationNetworkInterfaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_destinationNetworkInterfaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_privateIpAddressHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PrivateIpAddress";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_privateIpAddress.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string MigratePrivateIpAddressRequest::GetSourceNetworkInterfaceId() const
{
    return m_sourceNetworkInterfaceId;
}

void MigratePrivateIpAddressRequest::SetSourceNetworkInterfaceId(const string& _sourceNetworkInterfaceId)
{
    m_sourceNetworkInterfaceId = _sourceNetworkInterfaceId;
    m_sourceNetworkInterfaceIdHasBeenSet = true;
}

bool MigratePrivateIpAddressRequest::SourceNetworkInterfaceIdHasBeenSet() const
{
    return m_sourceNetworkInterfaceIdHasBeenSet;
}

string MigratePrivateIpAddressRequest::GetDestinationNetworkInterfaceId() const
{
    return m_destinationNetworkInterfaceId;
}

void MigratePrivateIpAddressRequest::SetDestinationNetworkInterfaceId(const string& _destinationNetworkInterfaceId)
{
    m_destinationNetworkInterfaceId = _destinationNetworkInterfaceId;
    m_destinationNetworkInterfaceIdHasBeenSet = true;
}

bool MigratePrivateIpAddressRequest::DestinationNetworkInterfaceIdHasBeenSet() const
{
    return m_destinationNetworkInterfaceIdHasBeenSet;
}

string MigratePrivateIpAddressRequest::GetPrivateIpAddress() const
{
    return m_privateIpAddress;
}

void MigratePrivateIpAddressRequest::SetPrivateIpAddress(const string& _privateIpAddress)
{
    m_privateIpAddress = _privateIpAddress;
    m_privateIpAddressHasBeenSet = true;
}

bool MigratePrivateIpAddressRequest::PrivateIpAddressHasBeenSet() const
{
    return m_privateIpAddressHasBeenSet;
}


