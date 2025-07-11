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

#include <tencentcloud/tse/v20201207/model/ModifyConfigFileGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

ModifyConfigFileGroupRequest::ModifyConfigFileGroupRequest() :
    m_instanceIdHasBeenSet(false),
    m_configFileGroupHasBeenSet(false)
{
}

string ModifyConfigFileGroupRequest::ToJsonString() const
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

    if (m_configFileGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigFileGroup";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_configFileGroup.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyConfigFileGroupRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyConfigFileGroupRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyConfigFileGroupRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

ConfigFileGroup ModifyConfigFileGroupRequest::GetConfigFileGroup() const
{
    return m_configFileGroup;
}

void ModifyConfigFileGroupRequest::SetConfigFileGroup(const ConfigFileGroup& _configFileGroup)
{
    m_configFileGroup = _configFileGroup;
    m_configFileGroupHasBeenSet = true;
}

bool ModifyConfigFileGroupRequest::ConfigFileGroupHasBeenSet() const
{
    return m_configFileGroupHasBeenSet;
}


