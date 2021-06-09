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

#include <tencentcloud/gaap/v20180529/model/CreateUDPListenersRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gaap::V20180529::Model;
using namespace std;

CreateUDPListenersRequest::CreateUDPListenersRequest() :
    m_listenerNameHasBeenSet(false),
    m_portsHasBeenSet(false),
    m_schedulerHasBeenSet(false),
    m_realServerTypeHasBeenSet(false),
    m_proxyIdHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_realServerPortsHasBeenSet(false)
{
}

string CreateUDPListenersRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_listenerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListenerName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_listenerName.c_str(), allocator).Move(), allocator);
    }

    if (m_portsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ports";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ports.begin(); itr != m_ports.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_schedulerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scheduler";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scheduler.c_str(), allocator).Move(), allocator);
    }

    if (m_realServerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealServerType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_realServerType.c_str(), allocator).Move(), allocator);
    }

    if (m_proxyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_proxyId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_realServerPortsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealServerPorts";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_realServerPorts.begin(); itr != m_realServerPorts.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateUDPListenersRequest::GetListenerName() const
{
    return m_listenerName;
}

void CreateUDPListenersRequest::SetListenerName(const string& _listenerName)
{
    m_listenerName = _listenerName;
    m_listenerNameHasBeenSet = true;
}

bool CreateUDPListenersRequest::ListenerNameHasBeenSet() const
{
    return m_listenerNameHasBeenSet;
}

vector<uint64_t> CreateUDPListenersRequest::GetPorts() const
{
    return m_ports;
}

void CreateUDPListenersRequest::SetPorts(const vector<uint64_t>& _ports)
{
    m_ports = _ports;
    m_portsHasBeenSet = true;
}

bool CreateUDPListenersRequest::PortsHasBeenSet() const
{
    return m_portsHasBeenSet;
}

string CreateUDPListenersRequest::GetScheduler() const
{
    return m_scheduler;
}

void CreateUDPListenersRequest::SetScheduler(const string& _scheduler)
{
    m_scheduler = _scheduler;
    m_schedulerHasBeenSet = true;
}

bool CreateUDPListenersRequest::SchedulerHasBeenSet() const
{
    return m_schedulerHasBeenSet;
}

string CreateUDPListenersRequest::GetRealServerType() const
{
    return m_realServerType;
}

void CreateUDPListenersRequest::SetRealServerType(const string& _realServerType)
{
    m_realServerType = _realServerType;
    m_realServerTypeHasBeenSet = true;
}

bool CreateUDPListenersRequest::RealServerTypeHasBeenSet() const
{
    return m_realServerTypeHasBeenSet;
}

string CreateUDPListenersRequest::GetProxyId() const
{
    return m_proxyId;
}

void CreateUDPListenersRequest::SetProxyId(const string& _proxyId)
{
    m_proxyId = _proxyId;
    m_proxyIdHasBeenSet = true;
}

bool CreateUDPListenersRequest::ProxyIdHasBeenSet() const
{
    return m_proxyIdHasBeenSet;
}

string CreateUDPListenersRequest::GetGroupId() const
{
    return m_groupId;
}

void CreateUDPListenersRequest::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool CreateUDPListenersRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

vector<uint64_t> CreateUDPListenersRequest::GetRealServerPorts() const
{
    return m_realServerPorts;
}

void CreateUDPListenersRequest::SetRealServerPorts(const vector<uint64_t>& _realServerPorts)
{
    m_realServerPorts = _realServerPorts;
    m_realServerPortsHasBeenSet = true;
}

bool CreateUDPListenersRequest::RealServerPortsHasBeenSet() const
{
    return m_realServerPortsHasBeenSet;
}


