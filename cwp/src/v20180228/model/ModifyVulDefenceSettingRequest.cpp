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

#include <tencentcloud/cwp/v20180228/model/ModifyVulDefenceSettingRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

ModifyVulDefenceSettingRequest::ModifyVulDefenceSettingRequest() :
    m_enableHasBeenSet(false),
    m_scopeHasBeenSet(false),
    m_quuidsHasBeenSet(false),
    m_excludeInstanceIdsHasBeenSet(false),
    m_autoIncludeHasBeenSet(false),
    m_instanceIdsHasBeenSet(false)
{
}

string ModifyVulDefenceSettingRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enable, allocator);
    }

    if (m_scopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scope";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_scope, allocator);
    }

    if (m_quuidsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quuids";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_quuids.begin(); itr != m_quuids.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_excludeInstanceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExcludeInstanceIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_excludeInstanceIds.begin(); itr != m_excludeInstanceIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_autoIncludeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoInclude";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoInclude, allocator);
    }

    if (m_instanceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceIds.begin(); itr != m_instanceIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ModifyVulDefenceSettingRequest::GetEnable() const
{
    return m_enable;
}

void ModifyVulDefenceSettingRequest::SetEnable(const uint64_t& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool ModifyVulDefenceSettingRequest::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

uint64_t ModifyVulDefenceSettingRequest::GetScope() const
{
    return m_scope;
}

void ModifyVulDefenceSettingRequest::SetScope(const uint64_t& _scope)
{
    m_scope = _scope;
    m_scopeHasBeenSet = true;
}

bool ModifyVulDefenceSettingRequest::ScopeHasBeenSet() const
{
    return m_scopeHasBeenSet;
}

vector<string> ModifyVulDefenceSettingRequest::GetQuuids() const
{
    return m_quuids;
}

void ModifyVulDefenceSettingRequest::SetQuuids(const vector<string>& _quuids)
{
    m_quuids = _quuids;
    m_quuidsHasBeenSet = true;
}

bool ModifyVulDefenceSettingRequest::QuuidsHasBeenSet() const
{
    return m_quuidsHasBeenSet;
}

vector<string> ModifyVulDefenceSettingRequest::GetExcludeInstanceIds() const
{
    return m_excludeInstanceIds;
}

void ModifyVulDefenceSettingRequest::SetExcludeInstanceIds(const vector<string>& _excludeInstanceIds)
{
    m_excludeInstanceIds = _excludeInstanceIds;
    m_excludeInstanceIdsHasBeenSet = true;
}

bool ModifyVulDefenceSettingRequest::ExcludeInstanceIdsHasBeenSet() const
{
    return m_excludeInstanceIdsHasBeenSet;
}

uint64_t ModifyVulDefenceSettingRequest::GetAutoInclude() const
{
    return m_autoInclude;
}

void ModifyVulDefenceSettingRequest::SetAutoInclude(const uint64_t& _autoInclude)
{
    m_autoInclude = _autoInclude;
    m_autoIncludeHasBeenSet = true;
}

bool ModifyVulDefenceSettingRequest::AutoIncludeHasBeenSet() const
{
    return m_autoIncludeHasBeenSet;
}

vector<string> ModifyVulDefenceSettingRequest::GetInstanceIds() const
{
    return m_instanceIds;
}

void ModifyVulDefenceSettingRequest::SetInstanceIds(const vector<string>& _instanceIds)
{
    m_instanceIds = _instanceIds;
    m_instanceIdsHasBeenSet = true;
}

bool ModifyVulDefenceSettingRequest::InstanceIdsHasBeenSet() const
{
    return m_instanceIdsHasBeenSet;
}


