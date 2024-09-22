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

#include <tencentcloud/mqtt/v20240516/model/CreateJWKSAuthenticatorRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mqtt::V20240516::Model;
using namespace std;

CreateJWKSAuthenticatorRequest::CreateJWKSAuthenticatorRequest() :
    m_instanceIdHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_refreshIntervalHasBeenSet(false),
    m_textHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_fromHasBeenSet(false)
{
}

string CreateJWKSAuthenticatorRequest::ToJsonString() const
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

    if (m_refreshIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RefreshInterval";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_refreshInterval, allocator);
    }

    if (m_textHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_text.c_str(), allocator).Move(), allocator);
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

    if (m_fromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "From";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_from.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateJWKSAuthenticatorRequest::GetInstanceId() const
{
    return m_instanceId;
}

void CreateJWKSAuthenticatorRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CreateJWKSAuthenticatorRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string CreateJWKSAuthenticatorRequest::GetEndpoint() const
{
    return m_endpoint;
}

void CreateJWKSAuthenticatorRequest::SetEndpoint(const string& _endpoint)
{
    m_endpoint = _endpoint;
    m_endpointHasBeenSet = true;
}

bool CreateJWKSAuthenticatorRequest::EndpointHasBeenSet() const
{
    return m_endpointHasBeenSet;
}

int64_t CreateJWKSAuthenticatorRequest::GetRefreshInterval() const
{
    return m_refreshInterval;
}

void CreateJWKSAuthenticatorRequest::SetRefreshInterval(const int64_t& _refreshInterval)
{
    m_refreshInterval = _refreshInterval;
    m_refreshIntervalHasBeenSet = true;
}

bool CreateJWKSAuthenticatorRequest::RefreshIntervalHasBeenSet() const
{
    return m_refreshIntervalHasBeenSet;
}

string CreateJWKSAuthenticatorRequest::GetText() const
{
    return m_text;
}

void CreateJWKSAuthenticatorRequest::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool CreateJWKSAuthenticatorRequest::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

string CreateJWKSAuthenticatorRequest::GetStatus() const
{
    return m_status;
}

void CreateJWKSAuthenticatorRequest::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CreateJWKSAuthenticatorRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string CreateJWKSAuthenticatorRequest::GetRemark() const
{
    return m_remark;
}

void CreateJWKSAuthenticatorRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool CreateJWKSAuthenticatorRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string CreateJWKSAuthenticatorRequest::GetFrom() const
{
    return m_from;
}

void CreateJWKSAuthenticatorRequest::SetFrom(const string& _from)
{
    m_from = _from;
    m_fromHasBeenSet = true;
}

bool CreateJWKSAuthenticatorRequest::FromHasBeenSet() const
{
    return m_fromHasBeenSet;
}


