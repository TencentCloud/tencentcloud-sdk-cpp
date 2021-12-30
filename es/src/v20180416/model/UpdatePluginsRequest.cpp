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

#include <tencentcloud/es/v20180416/model/UpdatePluginsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

UpdatePluginsRequest::UpdatePluginsRequest() :
    m_instanceIdHasBeenSet(false),
    m_installPluginListHasBeenSet(false),
    m_removePluginListHasBeenSet(false),
    m_forceRestartHasBeenSet(false),
    m_forceUpdateHasBeenSet(false),
    m_pluginTypeHasBeenSet(false)
{
}

string UpdatePluginsRequest::ToJsonString() const
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

    if (m_installPluginListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstallPluginList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_installPluginList.begin(); itr != m_installPluginList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_removePluginListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemovePluginList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_removePluginList.begin(); itr != m_removePluginList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_forceRestartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForceRestart";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_forceRestart, allocator);
    }

    if (m_forceUpdateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForceUpdate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_forceUpdate, allocator);
    }

    if (m_pluginTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PluginType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pluginType, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdatePluginsRequest::GetInstanceId() const
{
    return m_instanceId;
}

void UpdatePluginsRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool UpdatePluginsRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

vector<string> UpdatePluginsRequest::GetInstallPluginList() const
{
    return m_installPluginList;
}

void UpdatePluginsRequest::SetInstallPluginList(const vector<string>& _installPluginList)
{
    m_installPluginList = _installPluginList;
    m_installPluginListHasBeenSet = true;
}

bool UpdatePluginsRequest::InstallPluginListHasBeenSet() const
{
    return m_installPluginListHasBeenSet;
}

vector<string> UpdatePluginsRequest::GetRemovePluginList() const
{
    return m_removePluginList;
}

void UpdatePluginsRequest::SetRemovePluginList(const vector<string>& _removePluginList)
{
    m_removePluginList = _removePluginList;
    m_removePluginListHasBeenSet = true;
}

bool UpdatePluginsRequest::RemovePluginListHasBeenSet() const
{
    return m_removePluginListHasBeenSet;
}

bool UpdatePluginsRequest::GetForceRestart() const
{
    return m_forceRestart;
}

void UpdatePluginsRequest::SetForceRestart(const bool& _forceRestart)
{
    m_forceRestart = _forceRestart;
    m_forceRestartHasBeenSet = true;
}

bool UpdatePluginsRequest::ForceRestartHasBeenSet() const
{
    return m_forceRestartHasBeenSet;
}

bool UpdatePluginsRequest::GetForceUpdate() const
{
    return m_forceUpdate;
}

void UpdatePluginsRequest::SetForceUpdate(const bool& _forceUpdate)
{
    m_forceUpdate = _forceUpdate;
    m_forceUpdateHasBeenSet = true;
}

bool UpdatePluginsRequest::ForceUpdateHasBeenSet() const
{
    return m_forceUpdateHasBeenSet;
}

uint64_t UpdatePluginsRequest::GetPluginType() const
{
    return m_pluginType;
}

void UpdatePluginsRequest::SetPluginType(const uint64_t& _pluginType)
{
    m_pluginType = _pluginType;
    m_pluginTypeHasBeenSet = true;
}

bool UpdatePluginsRequest::PluginTypeHasBeenSet() const
{
    return m_pluginTypeHasBeenSet;
}


