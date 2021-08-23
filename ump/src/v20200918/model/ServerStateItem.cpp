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

#include <tencentcloud/ump/v20200918/model/ServerStateItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ump::V20200918::Model;
using namespace std;

ServerStateItem::ServerStateItem() :
    m_serverStateHasBeenSet(false),
    m_serverIpHasBeenSet(false),
    m_diskInfosHasBeenSet(false)
{
}

CoreInternalOutcome ServerStateItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ServerState") && !value["ServerState"].IsNull())
    {
        if (!value["ServerState"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ServerStateItem.ServerState` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_serverState = value["ServerState"].GetInt64();
        m_serverStateHasBeenSet = true;
    }

    if (value.HasMember("ServerIp") && !value["ServerIp"].IsNull())
    {
        if (!value["ServerIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerStateItem.ServerIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serverIp = string(value["ServerIp"].GetString());
        m_serverIpHasBeenSet = true;
    }

    if (value.HasMember("DiskInfos") && !value["DiskInfos"].IsNull())
    {
        if (!value["DiskInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ServerStateItem.DiskInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["DiskInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DiskInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_diskInfos.push_back(item);
        }
        m_diskInfosHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ServerStateItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_serverStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_serverState, allocator);
    }

    if (m_serverIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serverIp.c_str(), allocator).Move(), allocator);
    }

    if (m_diskInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_diskInfos.begin(); itr != m_diskInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t ServerStateItem::GetServerState() const
{
    return m_serverState;
}

void ServerStateItem::SetServerState(const int64_t& _serverState)
{
    m_serverState = _serverState;
    m_serverStateHasBeenSet = true;
}

bool ServerStateItem::ServerStateHasBeenSet() const
{
    return m_serverStateHasBeenSet;
}

string ServerStateItem::GetServerIp() const
{
    return m_serverIp;
}

void ServerStateItem::SetServerIp(const string& _serverIp)
{
    m_serverIp = _serverIp;
    m_serverIpHasBeenSet = true;
}

bool ServerStateItem::ServerIpHasBeenSet() const
{
    return m_serverIpHasBeenSet;
}

vector<DiskInfo> ServerStateItem::GetDiskInfos() const
{
    return m_diskInfos;
}

void ServerStateItem::SetDiskInfos(const vector<DiskInfo>& _diskInfos)
{
    m_diskInfos = _diskInfos;
    m_diskInfosHasBeenSet = true;
}

bool ServerStateItem::DiskInfosHasBeenSet() const
{
    return m_diskInfosHasBeenSet;
}

