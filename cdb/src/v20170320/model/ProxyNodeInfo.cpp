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

#include <tencentcloud/cdb/v20170320/model/ProxyNodeInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

ProxyNodeInfo::ProxyNodeInfo() :
    m_proxyNodeIdHasBeenSet(false),
    m_proxyNodeConnectionsHasBeenSet(false),
    m_proxyNodeCpuHasBeenSet(false),
    m_proxyNodeMemHasBeenSet(false),
    m_proxyStatusHasBeenSet(false)
{
}

CoreInternalOutcome ProxyNodeInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProxyNodeId") && !value["ProxyNodeId"].IsNull())
    {
        if (!value["ProxyNodeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyNodeInfo.ProxyNodeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_proxyNodeId = string(value["ProxyNodeId"].GetString());
        m_proxyNodeIdHasBeenSet = true;
    }

    if (value.HasMember("ProxyNodeConnections") && !value["ProxyNodeConnections"].IsNull())
    {
        if (!value["ProxyNodeConnections"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyNodeInfo.ProxyNodeConnections` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_proxyNodeConnections = value["ProxyNodeConnections"].GetUint64();
        m_proxyNodeConnectionsHasBeenSet = true;
    }

    if (value.HasMember("ProxyNodeCpu") && !value["ProxyNodeCpu"].IsNull())
    {
        if (!value["ProxyNodeCpu"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyNodeInfo.ProxyNodeCpu` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_proxyNodeCpu = value["ProxyNodeCpu"].GetUint64();
        m_proxyNodeCpuHasBeenSet = true;
    }

    if (value.HasMember("ProxyNodeMem") && !value["ProxyNodeMem"].IsNull())
    {
        if (!value["ProxyNodeMem"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyNodeInfo.ProxyNodeMem` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_proxyNodeMem = value["ProxyNodeMem"].GetUint64();
        m_proxyNodeMemHasBeenSet = true;
    }

    if (value.HasMember("ProxyStatus") && !value["ProxyStatus"].IsNull())
    {
        if (!value["ProxyStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyNodeInfo.ProxyStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_proxyStatus = string(value["ProxyStatus"].GetString());
        m_proxyStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProxyNodeInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_proxyNodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyNodeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_proxyNodeId.c_str(), allocator).Move(), allocator);
    }

    if (m_proxyNodeConnectionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyNodeConnections";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_proxyNodeConnections, allocator);
    }

    if (m_proxyNodeCpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyNodeCpu";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_proxyNodeCpu, allocator);
    }

    if (m_proxyNodeMemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyNodeMem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_proxyNodeMem, allocator);
    }

    if (m_proxyStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_proxyStatus.c_str(), allocator).Move(), allocator);
    }

}


string ProxyNodeInfo::GetProxyNodeId() const
{
    return m_proxyNodeId;
}

void ProxyNodeInfo::SetProxyNodeId(const string& _proxyNodeId)
{
    m_proxyNodeId = _proxyNodeId;
    m_proxyNodeIdHasBeenSet = true;
}

bool ProxyNodeInfo::ProxyNodeIdHasBeenSet() const
{
    return m_proxyNodeIdHasBeenSet;
}

uint64_t ProxyNodeInfo::GetProxyNodeConnections() const
{
    return m_proxyNodeConnections;
}

void ProxyNodeInfo::SetProxyNodeConnections(const uint64_t& _proxyNodeConnections)
{
    m_proxyNodeConnections = _proxyNodeConnections;
    m_proxyNodeConnectionsHasBeenSet = true;
}

bool ProxyNodeInfo::ProxyNodeConnectionsHasBeenSet() const
{
    return m_proxyNodeConnectionsHasBeenSet;
}

uint64_t ProxyNodeInfo::GetProxyNodeCpu() const
{
    return m_proxyNodeCpu;
}

void ProxyNodeInfo::SetProxyNodeCpu(const uint64_t& _proxyNodeCpu)
{
    m_proxyNodeCpu = _proxyNodeCpu;
    m_proxyNodeCpuHasBeenSet = true;
}

bool ProxyNodeInfo::ProxyNodeCpuHasBeenSet() const
{
    return m_proxyNodeCpuHasBeenSet;
}

uint64_t ProxyNodeInfo::GetProxyNodeMem() const
{
    return m_proxyNodeMem;
}

void ProxyNodeInfo::SetProxyNodeMem(const uint64_t& _proxyNodeMem)
{
    m_proxyNodeMem = _proxyNodeMem;
    m_proxyNodeMemHasBeenSet = true;
}

bool ProxyNodeInfo::ProxyNodeMemHasBeenSet() const
{
    return m_proxyNodeMemHasBeenSet;
}

string ProxyNodeInfo::GetProxyStatus() const
{
    return m_proxyStatus;
}

void ProxyNodeInfo::SetProxyStatus(const string& _proxyStatus)
{
    m_proxyStatus = _proxyStatus;
    m_proxyStatusHasBeenSet = true;
}

bool ProxyNodeInfo::ProxyStatusHasBeenSet() const
{
    return m_proxyStatusHasBeenSet;
}

