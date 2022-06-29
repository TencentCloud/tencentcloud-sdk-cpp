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

#include <tencentcloud/vpc/v20170312/model/CreateVpnGatewaySslClientRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

CreateVpnGatewaySslClientRequest::CreateVpnGatewaySslClientRequest() :
    m_sslVpnServerIdHasBeenSet(false),
    m_sslVpnClientNameHasBeenSet(false)
{
}

string CreateVpnGatewaySslClientRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sslVpnServerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SslVpnServerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sslVpnServerId.c_str(), allocator).Move(), allocator);
    }

    if (m_sslVpnClientNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SslVpnClientName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sslVpnClientName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateVpnGatewaySslClientRequest::GetSslVpnServerId() const
{
    return m_sslVpnServerId;
}

void CreateVpnGatewaySslClientRequest::SetSslVpnServerId(const string& _sslVpnServerId)
{
    m_sslVpnServerId = _sslVpnServerId;
    m_sslVpnServerIdHasBeenSet = true;
}

bool CreateVpnGatewaySslClientRequest::SslVpnServerIdHasBeenSet() const
{
    return m_sslVpnServerIdHasBeenSet;
}

string CreateVpnGatewaySslClientRequest::GetSslVpnClientName() const
{
    return m_sslVpnClientName;
}

void CreateVpnGatewaySslClientRequest::SetSslVpnClientName(const string& _sslVpnClientName)
{
    m_sslVpnClientName = _sslVpnClientName;
    m_sslVpnClientNameHasBeenSet = true;
}

bool CreateVpnGatewaySslClientRequest::SslVpnClientNameHasBeenSet() const
{
    return m_sslVpnClientNameHasBeenSet;
}


