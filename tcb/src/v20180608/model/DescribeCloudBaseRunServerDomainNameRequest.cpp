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

#include <tencentcloud/tcb/v20180608/model/DescribeCloudBaseRunServerDomainNameRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

DescribeCloudBaseRunServerDomainNameRequest::DescribeCloudBaseRunServerDomainNameRequest() :
    m_serverNameHasBeenSet(false),
    m_userEnvIdHasBeenSet(false),
    m_userUinHasBeenSet(false),
    m_externalIdHasBeenSet(false)
{
}

string DescribeCloudBaseRunServerDomainNameRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_serverNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serverName.c_str(), allocator).Move(), allocator);
    }

    if (m_userEnvIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserEnvId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userEnvId.c_str(), allocator).Move(), allocator);
    }

    if (m_userUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userUin.c_str(), allocator).Move(), allocator);
    }

    if (m_externalIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_externalId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeCloudBaseRunServerDomainNameRequest::GetServerName() const
{
    return m_serverName;
}

void DescribeCloudBaseRunServerDomainNameRequest::SetServerName(const string& _serverName)
{
    m_serverName = _serverName;
    m_serverNameHasBeenSet = true;
}

bool DescribeCloudBaseRunServerDomainNameRequest::ServerNameHasBeenSet() const
{
    return m_serverNameHasBeenSet;
}

string DescribeCloudBaseRunServerDomainNameRequest::GetUserEnvId() const
{
    return m_userEnvId;
}

void DescribeCloudBaseRunServerDomainNameRequest::SetUserEnvId(const string& _userEnvId)
{
    m_userEnvId = _userEnvId;
    m_userEnvIdHasBeenSet = true;
}

bool DescribeCloudBaseRunServerDomainNameRequest::UserEnvIdHasBeenSet() const
{
    return m_userEnvIdHasBeenSet;
}

string DescribeCloudBaseRunServerDomainNameRequest::GetUserUin() const
{
    return m_userUin;
}

void DescribeCloudBaseRunServerDomainNameRequest::SetUserUin(const string& _userUin)
{
    m_userUin = _userUin;
    m_userUinHasBeenSet = true;
}

bool DescribeCloudBaseRunServerDomainNameRequest::UserUinHasBeenSet() const
{
    return m_userUinHasBeenSet;
}

string DescribeCloudBaseRunServerDomainNameRequest::GetExternalId() const
{
    return m_externalId;
}

void DescribeCloudBaseRunServerDomainNameRequest::SetExternalId(const string& _externalId)
{
    m_externalId = _externalId;
    m_externalIdHasBeenSet = true;
}

bool DescribeCloudBaseRunServerDomainNameRequest::ExternalIdHasBeenSet() const
{
    return m_externalIdHasBeenSet;
}


