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

#include <tencentcloud/tcss/v20201101/model/ModifyAssetRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

ModifyAssetRequest::ModifyAssetRequest() :
    m_allHasBeenSet(false),
    m_hostsHasBeenSet(false),
    m_allSuperHostHasBeenSet(false),
    m_nodeUniqueIdsHasBeenSet(false),
    m_timeoutSecHasBeenSet(false)
{
}

string ModifyAssetRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_allHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "All";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_all, allocator);
    }

    if (m_hostsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Hosts";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_hosts.begin(); itr != m_hosts.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_allSuperHostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllSuperHost";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_allSuperHost, allocator);
    }

    if (m_nodeUniqueIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeUniqueIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_nodeUniqueIds.begin(); itr != m_nodeUniqueIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_timeoutSecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeoutSec";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timeoutSec, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


bool ModifyAssetRequest::GetAll() const
{
    return m_all;
}

void ModifyAssetRequest::SetAll(const bool& _all)
{
    m_all = _all;
    m_allHasBeenSet = true;
}

bool ModifyAssetRequest::AllHasBeenSet() const
{
    return m_allHasBeenSet;
}

vector<string> ModifyAssetRequest::GetHosts() const
{
    return m_hosts;
}

void ModifyAssetRequest::SetHosts(const vector<string>& _hosts)
{
    m_hosts = _hosts;
    m_hostsHasBeenSet = true;
}

bool ModifyAssetRequest::HostsHasBeenSet() const
{
    return m_hostsHasBeenSet;
}

bool ModifyAssetRequest::GetAllSuperHost() const
{
    return m_allSuperHost;
}

void ModifyAssetRequest::SetAllSuperHost(const bool& _allSuperHost)
{
    m_allSuperHost = _allSuperHost;
    m_allSuperHostHasBeenSet = true;
}

bool ModifyAssetRequest::AllSuperHostHasBeenSet() const
{
    return m_allSuperHostHasBeenSet;
}

vector<string> ModifyAssetRequest::GetNodeUniqueIds() const
{
    return m_nodeUniqueIds;
}

void ModifyAssetRequest::SetNodeUniqueIds(const vector<string>& _nodeUniqueIds)
{
    m_nodeUniqueIds = _nodeUniqueIds;
    m_nodeUniqueIdsHasBeenSet = true;
}

bool ModifyAssetRequest::NodeUniqueIdsHasBeenSet() const
{
    return m_nodeUniqueIdsHasBeenSet;
}

uint64_t ModifyAssetRequest::GetTimeoutSec() const
{
    return m_timeoutSec;
}

void ModifyAssetRequest::SetTimeoutSec(const uint64_t& _timeoutSec)
{
    m_timeoutSec = _timeoutSec;
    m_timeoutSecHasBeenSet = true;
}

bool ModifyAssetRequest::TimeoutSecHasBeenSet() const
{
    return m_timeoutSecHasBeenSet;
}


