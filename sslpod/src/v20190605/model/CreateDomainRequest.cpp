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

#include <tencentcloud/sslpod/v20190605/model/CreateDomainRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Sslpod::V20190605::Model;
using namespace std;

CreateDomainRequest::CreateDomainRequest() :
    m_serverTypeHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_portHasBeenSet(false),
    m_iPHasBeenSet(false),
    m_noticeHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

string CreateDomainRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_serverTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_serverType, allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_port.c_str(), allocator).Move(), allocator);
    }

    if (m_iPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IP";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_iP.c_str(), allocator).Move(), allocator);
    }

    if (m_noticeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Notice";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_notice, allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tags.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t CreateDomainRequest::GetServerType() const
{
    return m_serverType;
}

void CreateDomainRequest::SetServerType(const int64_t& _serverType)
{
    m_serverType = _serverType;
    m_serverTypeHasBeenSet = true;
}

bool CreateDomainRequest::ServerTypeHasBeenSet() const
{
    return m_serverTypeHasBeenSet;
}

string CreateDomainRequest::GetDomain() const
{
    return m_domain;
}

void CreateDomainRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool CreateDomainRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string CreateDomainRequest::GetPort() const
{
    return m_port;
}

void CreateDomainRequest::SetPort(const string& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool CreateDomainRequest::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string CreateDomainRequest::GetIP() const
{
    return m_iP;
}

void CreateDomainRequest::SetIP(const string& _iP)
{
    m_iP = _iP;
    m_iPHasBeenSet = true;
}

bool CreateDomainRequest::IPHasBeenSet() const
{
    return m_iPHasBeenSet;
}

bool CreateDomainRequest::GetNotice() const
{
    return m_notice;
}

void CreateDomainRequest::SetNotice(const bool& _notice)
{
    m_notice = _notice;
    m_noticeHasBeenSet = true;
}

bool CreateDomainRequest::NoticeHasBeenSet() const
{
    return m_noticeHasBeenSet;
}

string CreateDomainRequest::GetTags() const
{
    return m_tags;
}

void CreateDomainRequest::SetTags(const string& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateDomainRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}


