/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/edgezone/v20260401/model/ModifyPrivateNetworkInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Edgezone::V20260401::Model;
using namespace std;

ModifyPrivateNetworkInstanceRequest::ModifyPrivateNetworkInstanceRequest() :
    m_networkInstanceIdHasBeenSet(false),
    m_networkInstanceNameHasBeenSet(false)
{
}

string ModifyPrivateNetworkInstanceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_networkInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_networkInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_networkInstanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkInstanceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_networkInstanceName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyPrivateNetworkInstanceRequest::GetNetworkInstanceId() const
{
    return m_networkInstanceId;
}

void ModifyPrivateNetworkInstanceRequest::SetNetworkInstanceId(const string& _networkInstanceId)
{
    m_networkInstanceId = _networkInstanceId;
    m_networkInstanceIdHasBeenSet = true;
}

bool ModifyPrivateNetworkInstanceRequest::NetworkInstanceIdHasBeenSet() const
{
    return m_networkInstanceIdHasBeenSet;
}

string ModifyPrivateNetworkInstanceRequest::GetNetworkInstanceName() const
{
    return m_networkInstanceName;
}

void ModifyPrivateNetworkInstanceRequest::SetNetworkInstanceName(const string& _networkInstanceName)
{
    m_networkInstanceName = _networkInstanceName;
    m_networkInstanceNameHasBeenSet = true;
}

bool ModifyPrivateNetworkInstanceRequest::NetworkInstanceNameHasBeenSet() const
{
    return m_networkInstanceNameHasBeenSet;
}


