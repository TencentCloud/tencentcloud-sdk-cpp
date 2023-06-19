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

#include <tencentcloud/cynosdb/v20190107/model/CloseProxyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

CloseProxyRequest::CloseProxyRequest() :
    m_clusterIdHasBeenSet(false),
    m_proxyGroupIdHasBeenSet(false),
    m_onlyCloseRWHasBeenSet(false)
{
}

string CloseProxyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
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


string CloseProxyRequest::GetClusterId() const
{
    return m_clusterId;
}

void CloseProxyRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool CloseProxyRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string CloseProxyRequest::GetProxyGroupId() const
{
    return m_proxyGroupId;
}

void CloseProxyRequest::SetProxyGroupId(const string& _proxyGroupId)
{
    m_proxyGroupId = _proxyGroupId;
    m_proxyGroupIdHasBeenSet = true;
}

bool CloseProxyRequest::ProxyGroupIdHasBeenSet() const
{
    return m_proxyGroupIdHasBeenSet;
}

bool CloseProxyRequest::GetOnlyCloseRW() const
{
    return m_onlyCloseRW;
}

void CloseProxyRequest::SetOnlyCloseRW(const bool& _onlyCloseRW)
{
    m_onlyCloseRW = _onlyCloseRW;
    m_onlyCloseRWHasBeenSet = true;
}

bool CloseProxyRequest::OnlyCloseRWHasBeenSet() const
{
    return m_onlyCloseRWHasBeenSet;
}


