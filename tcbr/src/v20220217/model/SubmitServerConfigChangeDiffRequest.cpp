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

#include <tencentcloud/tcbr/v20220217/model/SubmitServerConfigChangeDiffRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcbr::V20220217::Model;
using namespace std;

SubmitServerConfigChangeDiffRequest::SubmitServerConfigChangeDiffRequest() :
    m_envIdHasBeenSet(false),
    m_serverNameHasBeenSet(false),
    m_confHasBeenSet(false),
    m_itemsHasBeenSet(false)
{
}

string SubmitServerConfigChangeDiffRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_envIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_envId.c_str(), allocator).Move(), allocator);
    }

    if (m_serverNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serverName.c_str(), allocator).Move(), allocator);
    }

    if (m_confHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Conf";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_conf.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_itemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Items";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_items.begin(); itr != m_items.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SubmitServerConfigChangeDiffRequest::GetEnvId() const
{
    return m_envId;
}

void SubmitServerConfigChangeDiffRequest::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool SubmitServerConfigChangeDiffRequest::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

string SubmitServerConfigChangeDiffRequest::GetServerName() const
{
    return m_serverName;
}

void SubmitServerConfigChangeDiffRequest::SetServerName(const string& _serverName)
{
    m_serverName = _serverName;
    m_serverNameHasBeenSet = true;
}

bool SubmitServerConfigChangeDiffRequest::ServerNameHasBeenSet() const
{
    return m_serverNameHasBeenSet;
}

ServerBaseConfigDiff SubmitServerConfigChangeDiffRequest::GetConf() const
{
    return m_conf;
}

void SubmitServerConfigChangeDiffRequest::SetConf(const ServerBaseConfigDiff& _conf)
{
    m_conf = _conf;
    m_confHasBeenSet = true;
}

bool SubmitServerConfigChangeDiffRequest::ConfHasBeenSet() const
{
    return m_confHasBeenSet;
}

vector<DiffConfigItem> SubmitServerConfigChangeDiffRequest::GetItems() const
{
    return m_items;
}

void SubmitServerConfigChangeDiffRequest::SetItems(const vector<DiffConfigItem>& _items)
{
    m_items = _items;
    m_itemsHasBeenSet = true;
}

bool SubmitServerConfigChangeDiffRequest::ItemsHasBeenSet() const
{
    return m_itemsHasBeenSet;
}


