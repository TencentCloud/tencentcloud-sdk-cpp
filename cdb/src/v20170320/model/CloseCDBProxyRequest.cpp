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

#include <tencentcloud/cdb/v20170320/model/CloseCDBProxyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

CloseCDBProxyRequest::CloseCDBProxyRequest() :
    m_instanceIdHasBeenSet(false),
    m_proxyGroupIdHasBeenSet(false),
    m_onlyCloseRWHasBeenSet(false)
{
}

string CloseCDBProxyRequest::ToJsonString() const
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

    if (m_proxyGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_proxyGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_onlyCloseRWHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OnlyCloseRW";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_onlyCloseRW, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CloseCDBProxyRequest::GetInstanceId() const
{
    return m_instanceId;
}

void CloseCDBProxyRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CloseCDBProxyRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string CloseCDBProxyRequest::GetProxyGroupId() const
{
    return m_proxyGroupId;
}

void CloseCDBProxyRequest::SetProxyGroupId(const string& _proxyGroupId)
{
    m_proxyGroupId = _proxyGroupId;
    m_proxyGroupIdHasBeenSet = true;
}

bool CloseCDBProxyRequest::ProxyGroupIdHasBeenSet() const
{
    return m_proxyGroupIdHasBeenSet;
}

bool CloseCDBProxyRequest::GetOnlyCloseRW() const
{
    return m_onlyCloseRW;
}

void CloseCDBProxyRequest::SetOnlyCloseRW(const bool& _onlyCloseRW)
{
    m_onlyCloseRW = _onlyCloseRW;
    m_onlyCloseRWHasBeenSet = true;
}

bool CloseCDBProxyRequest::OnlyCloseRWHasBeenSet() const
{
    return m_onlyCloseRWHasBeenSet;
}


