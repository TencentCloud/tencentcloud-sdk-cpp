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

#include <tencentcloud/mqtt/v20240516/model/ModifyHttpAuthenticatorRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mqtt::V20240516::Model;
using namespace std;

ModifyHttpAuthenticatorRequest::ModifyHttpAuthenticatorRequest() :
    m_instanceIdHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_concurrencyHasBeenSet(false),
    m_connectTimeoutHasBeenSet(false),
    m_readTimeoutHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_methodHasBeenSet(false),
    m_headerHasBeenSet(false),
    m_bodyHasBeenSet(false)
{
}

string ModifyHttpAuthenticatorRequest::ToJsonString() const
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

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_concurrencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Concurrency";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_concurrency, allocator);
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

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_methodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Method";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_method.c_str(), allocator).Move(), allocator);
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


string ModifyHttpAuthenticatorRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyHttpAuthenticatorRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyHttpAuthenticatorRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ModifyHttpAuthenticatorRequest::GetEndpoint() const
{
    return m_endpoint;
}

void ModifyHttpAuthenticatorRequest::SetEndpoint(const string& _endpoint)
{
    m_endpoint = _endpoint;
    m_endpointHasBeenSet = true;
}

bool ModifyHttpAuthenticatorRequest::EndpointHasBeenSet() const
{
    return m_endpointHasBeenSet;
}

string ModifyHttpAuthenticatorRequest::GetStatus() const
{
    return m_status;
}

void ModifyHttpAuthenticatorRequest::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModifyHttpAuthenticatorRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t ModifyHttpAuthenticatorRequest::GetConcurrency() const
{
    return m_concurrency;
}

void ModifyHttpAuthenticatorRequest::SetConcurrency(const int64_t& _concurrency)
{
    m_concurrency = _concurrency;
    m_concurrencyHasBeenSet = true;
}

bool ModifyHttpAuthenticatorRequest::ConcurrencyHasBeenSet() const
{
    return m_concurrencyHasBeenSet;
}

int64_t ModifyHttpAuthenticatorRequest::GetConnectTimeout() const
{
    return m_connectTimeout;
}

void ModifyHttpAuthenticatorRequest::SetConnectTimeout(const int64_t& _connectTimeout)
{
    m_connectTimeout = _connectTimeout;
    m_connectTimeoutHasBeenSet = true;
}

bool ModifyHttpAuthenticatorRequest::ConnectTimeoutHasBeenSet() const
{
    return m_connectTimeoutHasBeenSet;
}

int64_t ModifyHttpAuthenticatorRequest::GetReadTimeout() const
{
    return m_readTimeout;
}

void ModifyHttpAuthenticatorRequest::SetReadTimeout(const int64_t& _readTimeout)
{
    m_readTimeout = _readTimeout;
    m_readTimeoutHasBeenSet = true;
}

bool ModifyHttpAuthenticatorRequest::ReadTimeoutHasBeenSet() const
{
    return m_readTimeoutHasBeenSet;
}

string ModifyHttpAuthenticatorRequest::GetRemark() const
{
    return m_remark;
}

void ModifyHttpAuthenticatorRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool ModifyHttpAuthenticatorRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string ModifyHttpAuthenticatorRequest::GetMethod() const
{
    return m_method;
}

void ModifyHttpAuthenticatorRequest::SetMethod(const string& _method)
{
    m_method = _method;
    m_methodHasBeenSet = true;
}

bool ModifyHttpAuthenticatorRequest::MethodHasBeenSet() const
{
    return m_methodHasBeenSet;
}

vector<HeaderItem> ModifyHttpAuthenticatorRequest::GetHeader() const
{
    return m_header;
}

void ModifyHttpAuthenticatorRequest::SetHeader(const vector<HeaderItem>& _header)
{
    m_header = _header;
    m_headerHasBeenSet = true;
}

bool ModifyHttpAuthenticatorRequest::HeaderHasBeenSet() const
{
    return m_headerHasBeenSet;
}

vector<BodyItem> ModifyHttpAuthenticatorRequest::GetBody() const
{
    return m_body;
}

void ModifyHttpAuthenticatorRequest::SetBody(const vector<BodyItem>& _body)
{
    m_body = _body;
    m_bodyHasBeenSet = true;
}

bool ModifyHttpAuthenticatorRequest::BodyHasBeenSet() const
{
    return m_bodyHasBeenSet;
}


