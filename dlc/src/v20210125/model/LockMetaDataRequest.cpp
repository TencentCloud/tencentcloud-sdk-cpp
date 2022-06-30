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

#include <tencentcloud/dlc/v20210125/model/LockMetaDataRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

LockMetaDataRequest::LockMetaDataRequest() :
    m_lockComponentListHasBeenSet(false),
    m_datasourceConnectionNameHasBeenSet(false),
    m_txnIdHasBeenSet(false),
    m_agentInfoHasBeenSet(false),
    m_hostnameHasBeenSet(false)
{
}

string LockMetaDataRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_lockComponentListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LockComponentList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_lockComponentList.begin(); itr != m_lockComponentList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_datasourceConnectionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceConnectionName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_datasourceConnectionName.c_str(), allocator).Move(), allocator);
    }

    if (m_txnIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TxnId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_txnId, allocator);
    }

    if (m_agentInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_agentInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_hostnameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Hostname";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_hostname.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<LockComponentInfo> LockMetaDataRequest::GetLockComponentList() const
{
    return m_lockComponentList;
}

void LockMetaDataRequest::SetLockComponentList(const vector<LockComponentInfo>& _lockComponentList)
{
    m_lockComponentList = _lockComponentList;
    m_lockComponentListHasBeenSet = true;
}

bool LockMetaDataRequest::LockComponentListHasBeenSet() const
{
    return m_lockComponentListHasBeenSet;
}

string LockMetaDataRequest::GetDatasourceConnectionName() const
{
    return m_datasourceConnectionName;
}

void LockMetaDataRequest::SetDatasourceConnectionName(const string& _datasourceConnectionName)
{
    m_datasourceConnectionName = _datasourceConnectionName;
    m_datasourceConnectionNameHasBeenSet = true;
}

bool LockMetaDataRequest::DatasourceConnectionNameHasBeenSet() const
{
    return m_datasourceConnectionNameHasBeenSet;
}

int64_t LockMetaDataRequest::GetTxnId() const
{
    return m_txnId;
}

void LockMetaDataRequest::SetTxnId(const int64_t& _txnId)
{
    m_txnId = _txnId;
    m_txnIdHasBeenSet = true;
}

bool LockMetaDataRequest::TxnIdHasBeenSet() const
{
    return m_txnIdHasBeenSet;
}

string LockMetaDataRequest::GetAgentInfo() const
{
    return m_agentInfo;
}

void LockMetaDataRequest::SetAgentInfo(const string& _agentInfo)
{
    m_agentInfo = _agentInfo;
    m_agentInfoHasBeenSet = true;
}

bool LockMetaDataRequest::AgentInfoHasBeenSet() const
{
    return m_agentInfoHasBeenSet;
}

string LockMetaDataRequest::GetHostname() const
{
    return m_hostname;
}

void LockMetaDataRequest::SetHostname(const string& _hostname)
{
    m_hostname = _hostname;
    m_hostnameHasBeenSet = true;
}

bool LockMetaDataRequest::HostnameHasBeenSet() const
{
    return m_hostnameHasBeenSet;
}


