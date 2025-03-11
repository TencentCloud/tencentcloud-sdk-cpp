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

#include <tencentcloud/mqtt/v20240516/model/CreateHttpAuthenticatorRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mqtt::V20240516::Model;
using namespace std;

CreateHttpAuthenticatorRequest::CreateHttpAuthenticatorRequest() :
    m_instanceIdHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_concurrencyHasBeenSet(false),
    m_methodHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_connectTimeoutHasBeenSet(false),
    m_readTimeoutHasBeenSet(false),
    m_headerHasBeenSet(false),
    m_bodyHasBeenSet(false)
{
}

string CreateHttpAuthenticatorRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_endpointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Endpoint";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endpoint.c_str(), allocator).Move(), allocator);
    }

    if (m_concurrencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Concurrency";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_concurrency, allocator);
    }

    if (m_methodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Method";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_method.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_connectTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectTimeout";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_connectTimeout, allocator);
    }

    if (m_readTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadTimeout";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_readTimeout, allocator);
    }

    if (m_headerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Header";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_header.begin(); itr != m_header.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_bodyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Body";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_body.begin(); itr != m_body.end(); ++itr, ++i)
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


string CreateHttpAuthenticatorRequest::GetInstanceId() const
{
    return m_instanceId;
}

void CreateHttpAuthenticatorRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CreateHttpAuthenticatorRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string CreateHttpAuthenticatorRequest::GetEndpoint() const
{
    return m_endpoint;
}

void CreateHttpAuthenticatorRequest::SetEndpoint(const string& _endpoint)
{
    m_endpoint = _endpoint;
    m_endpointHasBeenSet = true;
}

bool CreateHttpAuthenticatorRequest::EndpointHasBeenSet() const
{
    return m_endpointHasBeenSet;
}

int64_t CreateHttpAuthenticatorRequest::GetConcurrency() const
{
    return m_concurrency;
}

void CreateHttpAuthenticatorRequest::SetConcurrency(const int64_t& _concurrency)
{
    m_concurrency = _concurrency;
    m_concurrencyHasBeenSet = true;
}

bool CreateHttpAuthenticatorRequest::ConcurrencyHasBeenSet() const
{
    return m_concurrencyHasBeenSet;
}

string CreateHttpAuthenticatorRequest::GetMethod() const
{
    return m_method;
}

void CreateHttpAuthenticatorRequest::SetMethod(const string& _method)
{
    m_method = _method;
    m_methodHasBeenSet = true;
}

bool CreateHttpAuthenticatorRequest::MethodHasBeenSet() const
{
    return m_methodHasBeenSet;
}

string CreateHttpAuthenticatorRequest::GetStatus() const
{
    return m_status;
}

void CreateHttpAuthenticatorRequest::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CreateHttpAuthenticatorRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string CreateHttpAuthenticatorRequest::GetRemark() const
{
    return m_remark;
}

void CreateHttpAuthenticatorRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool CreateHttpAuthenticatorRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

int64_t CreateHttpAuthenticatorRequest::GetConnectTimeout() const
{
    return m_connectTimeout;
}

void CreateHttpAuthenticatorRequest::SetConnectTimeout(const int64_t& _connectTimeout)
{
    m_connectTimeout = _connectTimeout;
    m_connectTimeoutHasBeenSet = true;
}

bool CreateHttpAuthenticatorRequest::ConnectTimeoutHasBeenSet() const
{
    return m_connectTimeoutHasBeenSet;
}

int64_t CreateHttpAuthenticatorRequest::GetReadTimeout() const
{
    return m_readTimeout;
}

void CreateHttpAuthenticatorRequest::SetReadTimeout(const int64_t& _readTimeout)
{
    m_readTimeout = _readTimeout;
    m_readTimeoutHasBeenSet = true;
}

bool CreateHttpAuthenticatorRequest::ReadTimeoutHasBeenSet() const
{
    return m_readTimeoutHasBeenSet;
}

vector<HeaderItem> CreateHttpAuthenticatorRequest::GetHeader() const
{
    return m_header;
}

void CreateHttpAuthenticatorRequest::SetHeader(const vector<HeaderItem>& _header)
{
    m_header = _header;
    m_headerHasBeenSet = true;
}

bool CreateHttpAuthenticatorRequest::HeaderHasBeenSet() const
{
    return m_headerHasBeenSet;
}

vector<BodyItem> CreateHttpAuthenticatorRequest::GetBody() const
{
    return m_body;
}

void CreateHttpAuthenticatorRequest::SetBody(const vector<BodyItem>& _body)
{
    m_body = _body;
    m_bodyHasBeenSet = true;
}

bool CreateHttpAuthenticatorRequest::BodyHasBeenSet() const
{
    return m_bodyHasBeenSet;
}


