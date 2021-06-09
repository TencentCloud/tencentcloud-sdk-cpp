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

#include <tencentcloud/gaap/v20180529/model/CreateDomainErrorPageInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gaap::V20180529::Model;
using namespace std;

CreateDomainErrorPageInfoRequest::CreateDomainErrorPageInfoRequest() :
    m_listenerIdHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_errorNosHasBeenSet(false),
    m_bodyHasBeenSet(false),
    m_newErrorNoHasBeenSet(false),
    m_clearHeadersHasBeenSet(false),
    m_setHeadersHasBeenSet(false)
{
}

string CreateDomainErrorPageInfoRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_listenerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListenerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_listenerId.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_errorNosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorNos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_errorNos.begin(); itr != m_errorNos.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_bodyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Body";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_body.c_str(), allocator).Move(), allocator);
    }

    if (m_newErrorNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewErrorNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_newErrorNo, allocator);
    }

    if (m_clearHeadersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClearHeaders";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_clearHeaders.begin(); itr != m_clearHeaders.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_setHeadersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SetHeaders";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_setHeaders.begin(); itr != m_setHeaders.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateDomainErrorPageInfoRequest::GetListenerId() const
{
    return m_listenerId;
}

void CreateDomainErrorPageInfoRequest::SetListenerId(const string& _listenerId)
{
    m_listenerId = _listenerId;
    m_listenerIdHasBeenSet = true;
}

bool CreateDomainErrorPageInfoRequest::ListenerIdHasBeenSet() const
{
    return m_listenerIdHasBeenSet;
}

string CreateDomainErrorPageInfoRequest::GetDomain() const
{
    return m_domain;
}

void CreateDomainErrorPageInfoRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool CreateDomainErrorPageInfoRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

vector<int64_t> CreateDomainErrorPageInfoRequest::GetErrorNos() const
{
    return m_errorNos;
}

void CreateDomainErrorPageInfoRequest::SetErrorNos(const vector<int64_t>& _errorNos)
{
    m_errorNos = _errorNos;
    m_errorNosHasBeenSet = true;
}

bool CreateDomainErrorPageInfoRequest::ErrorNosHasBeenSet() const
{
    return m_errorNosHasBeenSet;
}

string CreateDomainErrorPageInfoRequest::GetBody() const
{
    return m_body;
}

void CreateDomainErrorPageInfoRequest::SetBody(const string& _body)
{
    m_body = _body;
    m_bodyHasBeenSet = true;
}

bool CreateDomainErrorPageInfoRequest::BodyHasBeenSet() const
{
    return m_bodyHasBeenSet;
}

int64_t CreateDomainErrorPageInfoRequest::GetNewErrorNo() const
{
    return m_newErrorNo;
}

void CreateDomainErrorPageInfoRequest::SetNewErrorNo(const int64_t& _newErrorNo)
{
    m_newErrorNo = _newErrorNo;
    m_newErrorNoHasBeenSet = true;
}

bool CreateDomainErrorPageInfoRequest::NewErrorNoHasBeenSet() const
{
    return m_newErrorNoHasBeenSet;
}

vector<string> CreateDomainErrorPageInfoRequest::GetClearHeaders() const
{
    return m_clearHeaders;
}

void CreateDomainErrorPageInfoRequest::SetClearHeaders(const vector<string>& _clearHeaders)
{
    m_clearHeaders = _clearHeaders;
    m_clearHeadersHasBeenSet = true;
}

bool CreateDomainErrorPageInfoRequest::ClearHeadersHasBeenSet() const
{
    return m_clearHeadersHasBeenSet;
}

vector<HttpHeaderParam> CreateDomainErrorPageInfoRequest::GetSetHeaders() const
{
    return m_setHeaders;
}

void CreateDomainErrorPageInfoRequest::SetSetHeaders(const vector<HttpHeaderParam>& _setHeaders)
{
    m_setHeaders = _setHeaders;
    m_setHeadersHasBeenSet = true;
}

bool CreateDomainErrorPageInfoRequest::SetHeadersHasBeenSet() const
{
    return m_setHeadersHasBeenSet;
}


