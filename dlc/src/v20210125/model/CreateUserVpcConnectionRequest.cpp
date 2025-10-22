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

#include <tencentcloud/dlc/v20210125/model/CreateUserVpcConnectionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

CreateUserVpcConnectionRequest::CreateUserVpcConnectionRequest() :
    m_userVpcIdHasBeenSet(false),
    m_userSubnetIdHasBeenSet(false),
    m_userVpcEndpointNameHasBeenSet(false),
    m_engineNetworkIdHasBeenSet(false),
    m_userVpcEndpointVipHasBeenSet(false)
{
}

string CreateUserVpcConnectionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_userVpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserVpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userVpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_userSubnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserSubnetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userSubnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_userVpcEndpointNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserVpcEndpointName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userVpcEndpointName.c_str(), allocator).Move(), allocator);
    }

    if (m_engineNetworkIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineNetworkId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_engineNetworkId.c_str(), allocator).Move(), allocator);
    }

    if (m_userVpcEndpointVipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserVpcEndpointVip";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userVpcEndpointVip.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateUserVpcConnectionRequest::GetUserVpcId() const
{
    return m_userVpcId;
}

void CreateUserVpcConnectionRequest::SetUserVpcId(const string& _userVpcId)
{
    m_userVpcId = _userVpcId;
    m_userVpcIdHasBeenSet = true;
}

bool CreateUserVpcConnectionRequest::UserVpcIdHasBeenSet() const
{
    return m_userVpcIdHasBeenSet;
}

string CreateUserVpcConnectionRequest::GetUserSubnetId() const
{
    return m_userSubnetId;
}

void CreateUserVpcConnectionRequest::SetUserSubnetId(const string& _userSubnetId)
{
    m_userSubnetId = _userSubnetId;
    m_userSubnetIdHasBeenSet = true;
}

bool CreateUserVpcConnectionRequest::UserSubnetIdHasBeenSet() const
{
    return m_userSubnetIdHasBeenSet;
}

string CreateUserVpcConnectionRequest::GetUserVpcEndpointName() const
{
    return m_userVpcEndpointName;
}

void CreateUserVpcConnectionRequest::SetUserVpcEndpointName(const string& _userVpcEndpointName)
{
    m_userVpcEndpointName = _userVpcEndpointName;
    m_userVpcEndpointNameHasBeenSet = true;
}

bool CreateUserVpcConnectionRequest::UserVpcEndpointNameHasBeenSet() const
{
    return m_userVpcEndpointNameHasBeenSet;
}

string CreateUserVpcConnectionRequest::GetEngineNetworkId() const
{
    return m_engineNetworkId;
}

void CreateUserVpcConnectionRequest::SetEngineNetworkId(const string& _engineNetworkId)
{
    m_engineNetworkId = _engineNetworkId;
    m_engineNetworkIdHasBeenSet = true;
}

bool CreateUserVpcConnectionRequest::EngineNetworkIdHasBeenSet() const
{
    return m_engineNetworkIdHasBeenSet;
}

string CreateUserVpcConnectionRequest::GetUserVpcEndpointVip() const
{
    return m_userVpcEndpointVip;
}

void CreateUserVpcConnectionRequest::SetUserVpcEndpointVip(const string& _userVpcEndpointVip)
{
    m_userVpcEndpointVip = _userVpcEndpointVip;
    m_userVpcEndpointVipHasBeenSet = true;
}

bool CreateUserVpcConnectionRequest::UserVpcEndpointVipHasBeenSet() const
{
    return m_userVpcEndpointVipHasBeenSet;
}


