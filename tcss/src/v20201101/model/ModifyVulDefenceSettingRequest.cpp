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

#include <tencentcloud/tcss/v20201101/model/ModifyVulDefenceSettingRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

ModifyVulDefenceSettingRequest::ModifyVulDefenceSettingRequest() :
    m_isEnabledHasBeenSet(false),
    m_scopeHasBeenSet(false),
    m_hostIDsHasBeenSet(false),
    m_superScopeHasBeenSet(false),
    m_nodeIdsHasBeenSet(false)
{
}

string ModifyVulDefenceSettingRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_isEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsEnabled";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isEnabled, allocator);
    }

    if (m_scopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scope";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_scope, allocator);
    }

    if (m_hostIDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostIDs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_hostIDs.begin(); itr != m_hostIDs.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_superScopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuperScope";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_superScope, allocator);
    }

    if (m_nodeIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_nodeIds.begin(); itr != m_nodeIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t ModifyVulDefenceSettingRequest::GetIsEnabled() const
{
    return m_isEnabled;
}

void ModifyVulDefenceSettingRequest::SetIsEnabled(const int64_t& _isEnabled)
{
    m_isEnabled = _isEnabled;
    m_isEnabledHasBeenSet = true;
}

bool ModifyVulDefenceSettingRequest::IsEnabledHasBeenSet() const
{
    return m_isEnabledHasBeenSet;
}

int64_t ModifyVulDefenceSettingRequest::GetScope() const
{
    return m_scope;
}

void ModifyVulDefenceSettingRequest::SetScope(const int64_t& _scope)
{
    m_scope = _scope;
    m_scopeHasBeenSet = true;
}

bool ModifyVulDefenceSettingRequest::ScopeHasBeenSet() const
{
    return m_scopeHasBeenSet;
}

vector<string> ModifyVulDefenceSettingRequest::GetHostIDs() const
{
    return m_hostIDs;
}

void ModifyVulDefenceSettingRequest::SetHostIDs(const vector<string>& _hostIDs)
{
    m_hostIDs = _hostIDs;
    m_hostIDsHasBeenSet = true;
}

bool ModifyVulDefenceSettingRequest::HostIDsHasBeenSet() const
{
    return m_hostIDsHasBeenSet;
}

int64_t ModifyVulDefenceSettingRequest::GetSuperScope() const
{
    return m_superScope;
}

void ModifyVulDefenceSettingRequest::SetSuperScope(const int64_t& _superScope)
{
    m_superScope = _superScope;
    m_superScopeHasBeenSet = true;
}

bool ModifyVulDefenceSettingRequest::SuperScopeHasBeenSet() const
{
    return m_superScopeHasBeenSet;
}

vector<string> ModifyVulDefenceSettingRequest::GetNodeIds() const
{
    return m_nodeIds;
}

void ModifyVulDefenceSettingRequest::SetNodeIds(const vector<string>& _nodeIds)
{
    m_nodeIds = _nodeIds;
    m_nodeIdsHasBeenSet = true;
}

bool ModifyVulDefenceSettingRequest::NodeIdsHasBeenSet() const
{
    return m_nodeIdsHasBeenSet;
}


