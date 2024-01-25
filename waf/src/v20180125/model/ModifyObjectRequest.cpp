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

#include <tencentcloud/waf/v20180125/model/ModifyObjectRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

ModifyObjectRequest::ModifyObjectRequest() :
    m_objectIdHasBeenSet(false),
    m_opTypeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_proxyHasBeenSet(false),
    m_ipHeadersHasBeenSet(false)
{
}

string ModifyObjectRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_objectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_objectId.c_str(), allocator).Move(), allocator);
    }

    if (m_opTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_opType.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_proxyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Proxy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_proxy, allocator);
    }

    if (m_ipHeadersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpHeaders";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ipHeaders.begin(); itr != m_ipHeaders.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyObjectRequest::GetObjectId() const
{
    return m_objectId;
}

void ModifyObjectRequest::SetObjectId(const string& _objectId)
{
    m_objectId = _objectId;
    m_objectIdHasBeenSet = true;
}

bool ModifyObjectRequest::ObjectIdHasBeenSet() const
{
    return m_objectIdHasBeenSet;
}

string ModifyObjectRequest::GetOpType() const
{
    return m_opType;
}

void ModifyObjectRequest::SetOpType(const string& _opType)
{
    m_opType = _opType;
    m_opTypeHasBeenSet = true;
}

bool ModifyObjectRequest::OpTypeHasBeenSet() const
{
    return m_opTypeHasBeenSet;
}

int64_t ModifyObjectRequest::GetStatus() const
{
    return m_status;
}

void ModifyObjectRequest::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModifyObjectRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ModifyObjectRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyObjectRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyObjectRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

uint64_t ModifyObjectRequest::GetProxy() const
{
    return m_proxy;
}

void ModifyObjectRequest::SetProxy(const uint64_t& _proxy)
{
    m_proxy = _proxy;
    m_proxyHasBeenSet = true;
}

bool ModifyObjectRequest::ProxyHasBeenSet() const
{
    return m_proxyHasBeenSet;
}

vector<string> ModifyObjectRequest::GetIpHeaders() const
{
    return m_ipHeaders;
}

void ModifyObjectRequest::SetIpHeaders(const vector<string>& _ipHeaders)
{
    m_ipHeaders = _ipHeaders;
    m_ipHeadersHasBeenSet = true;
}

bool ModifyObjectRequest::IpHeadersHasBeenSet() const
{
    return m_ipHeadersHasBeenSet;
}


