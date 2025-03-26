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

#include <tencentcloud/vpc/v20170312/model/EnableVpcEndPointConnectRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

EnableVpcEndPointConnectRequest::EnableVpcEndPointConnectRequest() :
    m_endPointServiceIdHasBeenSet(false),
    m_endPointIdHasBeenSet(false),
    m_acceptFlagHasBeenSet(false),
    m_ipAddressTypeHasBeenSet(false)
{
}

string EnableVpcEndPointConnectRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_endPointServiceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndPointServiceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endPointServiceId.c_str(), allocator).Move(), allocator);
    }

    if (m_endPointIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndPointId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_endPointId.begin(); itr != m_endPointId.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_acceptFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AcceptFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_acceptFlag, allocator);
    }

    if (m_ipAddressTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpAddressType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ipAddressType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string EnableVpcEndPointConnectRequest::GetEndPointServiceId() const
{
    return m_endPointServiceId;
}

void EnableVpcEndPointConnectRequest::SetEndPointServiceId(const string& _endPointServiceId)
{
    m_endPointServiceId = _endPointServiceId;
    m_endPointServiceIdHasBeenSet = true;
}

bool EnableVpcEndPointConnectRequest::EndPointServiceIdHasBeenSet() const
{
    return m_endPointServiceIdHasBeenSet;
}

vector<string> EnableVpcEndPointConnectRequest::GetEndPointId() const
{
    return m_endPointId;
}

void EnableVpcEndPointConnectRequest::SetEndPointId(const vector<string>& _endPointId)
{
    m_endPointId = _endPointId;
    m_endPointIdHasBeenSet = true;
}

bool EnableVpcEndPointConnectRequest::EndPointIdHasBeenSet() const
{
    return m_endPointIdHasBeenSet;
}

bool EnableVpcEndPointConnectRequest::GetAcceptFlag() const
{
    return m_acceptFlag;
}

void EnableVpcEndPointConnectRequest::SetAcceptFlag(const bool& _acceptFlag)
{
    m_acceptFlag = _acceptFlag;
    m_acceptFlagHasBeenSet = true;
}

bool EnableVpcEndPointConnectRequest::AcceptFlagHasBeenSet() const
{
    return m_acceptFlagHasBeenSet;
}

string EnableVpcEndPointConnectRequest::GetIpAddressType() const
{
    return m_ipAddressType;
}

void EnableVpcEndPointConnectRequest::SetIpAddressType(const string& _ipAddressType)
{
    m_ipAddressType = _ipAddressType;
    m_ipAddressTypeHasBeenSet = true;
}

bool EnableVpcEndPointConnectRequest::IpAddressTypeHasBeenSet() const
{
    return m_ipAddressTypeHasBeenSet;
}


