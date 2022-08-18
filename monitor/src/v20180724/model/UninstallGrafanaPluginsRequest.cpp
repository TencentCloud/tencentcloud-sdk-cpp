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

#include <tencentcloud/monitor/v20180724/model/UninstallGrafanaPluginsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

UninstallGrafanaPluginsRequest::UninstallGrafanaPluginsRequest() :
    m_pluginIdsHasBeenSet(false),
    m_instanceIdHasBeenSet(false)
{
}

string UninstallGrafanaPluginsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_pluginIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PluginIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_pluginIds.begin(); itr != m_pluginIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> UninstallGrafanaPluginsRequest::GetPluginIds() const
{
    return m_pluginIds;
}

void UninstallGrafanaPluginsRequest::SetPluginIds(const vector<string>& _pluginIds)
{
    m_pluginIds = _pluginIds;
    m_pluginIdsHasBeenSet = true;
}

bool UninstallGrafanaPluginsRequest::PluginIdsHasBeenSet() const
{
    return m_pluginIdsHasBeenSet;
}

string UninstallGrafanaPluginsRequest::GetInstanceId() const
{
    return m_instanceId;
}

void UninstallGrafanaPluginsRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool UninstallGrafanaPluginsRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}


