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

#include <tencentcloud/mqtt/v20240516/model/ModifyJWKSAuthenticatorRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mqtt::V20240516::Model;
using namespace std;

ModifyJWKSAuthenticatorRequest::ModifyJWKSAuthenticatorRequest() :
    m_instanceIdHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_refreshIntervalHasBeenSet(false),
    m_textHasBeenSet(false),
    m_fromHasBeenSet(false),
    m_remarkHasBeenSet(false)
{
}

string ModifyJWKSAuthenticatorRequest::ToJsonString() const
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

    if (m_fromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "From";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_from.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyJWKSAuthenticatorRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyJWKSAuthenticatorRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyJWKSAuthenticatorRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ModifyJWKSAuthenticatorRequest::GetEndpoint() const
{
    return m_endpoint;
}

void ModifyJWKSAuthenticatorRequest::SetEndpoint(const string& _endpoint)
{
    m_endpoint = _endpoint;
    m_endpointHasBeenSet = true;
}

bool ModifyJWKSAuthenticatorRequest::EndpointHasBeenSet() const
{
    return m_endpointHasBeenSet;
}

string ModifyJWKSAuthenticatorRequest::GetStatus() const
{
    return m_status;
}

void ModifyJWKSAuthenticatorRequest::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModifyJWKSAuthenticatorRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t ModifyJWKSAuthenticatorRequest::GetRefreshInterval() const
{
    return m_refreshInterval;
}

void ModifyJWKSAuthenticatorRequest::SetRefreshInterval(const int64_t& _refreshInterval)
{
    m_refreshInterval = _refreshInterval;
    m_refreshIntervalHasBeenSet = true;
}

bool ModifyJWKSAuthenticatorRequest::RefreshIntervalHasBeenSet() const
{
    return m_refreshIntervalHasBeenSet;
}

string ModifyJWKSAuthenticatorRequest::GetText() const
{
    return m_text;
}

void ModifyJWKSAuthenticatorRequest::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool ModifyJWKSAuthenticatorRequest::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

string ModifyJWKSAuthenticatorRequest::GetFrom() const
{
    return m_from;
}

void ModifyJWKSAuthenticatorRequest::SetFrom(const string& _from)
{
    m_from = _from;
    m_fromHasBeenSet = true;
}

bool ModifyJWKSAuthenticatorRequest::FromHasBeenSet() const
{
    return m_fromHasBeenSet;
}

string ModifyJWKSAuthenticatorRequest::GetRemark() const
{
    return m_remark;
}

void ModifyJWKSAuthenticatorRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool ModifyJWKSAuthenticatorRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}


