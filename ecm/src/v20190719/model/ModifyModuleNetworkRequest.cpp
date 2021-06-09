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

#include <tencentcloud/ecm/v20190719/model/ModifyModuleNetworkRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ecm::V20190719::Model;
using namespace std;

ModifyModuleNetworkRequest::ModifyModuleNetworkRequest() :
    m_moduleIdHasBeenSet(false),
    m_defaultBandwidthHasBeenSet(false),
    m_defaultBandwidthInHasBeenSet(false)
{
}

string ModifyModuleNetworkRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_moduleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModuleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_moduleId.c_str(), allocator).Move(), allocator);
    }

    if (m_defaultBandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultBandwidth";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_defaultBandwidth, allocator);
    }

    if (m_defaultBandwidthInHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultBandwidthIn";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_defaultBandwidthIn, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyModuleNetworkRequest::GetModuleId() const
{
    return m_moduleId;
}

void ModifyModuleNetworkRequest::SetModuleId(const string& _moduleId)
{
    m_moduleId = _moduleId;
    m_moduleIdHasBeenSet = true;
}

bool ModifyModuleNetworkRequest::ModuleIdHasBeenSet() const
{
    return m_moduleIdHasBeenSet;
}

int64_t ModifyModuleNetworkRequest::GetDefaultBandwidth() const
{
    return m_defaultBandwidth;
}

void ModifyModuleNetworkRequest::SetDefaultBandwidth(const int64_t& _defaultBandwidth)
{
    m_defaultBandwidth = _defaultBandwidth;
    m_defaultBandwidthHasBeenSet = true;
}

bool ModifyModuleNetworkRequest::DefaultBandwidthHasBeenSet() const
{
    return m_defaultBandwidthHasBeenSet;
}

int64_t ModifyModuleNetworkRequest::GetDefaultBandwidthIn() const
{
    return m_defaultBandwidthIn;
}

void ModifyModuleNetworkRequest::SetDefaultBandwidthIn(const int64_t& _defaultBandwidthIn)
{
    m_defaultBandwidthIn = _defaultBandwidthIn;
    m_defaultBandwidthInHasBeenSet = true;
}

bool ModifyModuleNetworkRequest::DefaultBandwidthInHasBeenSet() const
{
    return m_defaultBandwidthInHasBeenSet;
}


