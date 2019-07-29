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

#include <tencentcloud/tsf/v20180326/model/DeployContainerGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tsf::V20180326::Model;
using namespace rapidjson;
using namespace std;

DeployContainerGroupRequest::DeployContainerGroupRequest() :
    m_groupIdHasBeenSet(false),
    m_serverHasBeenSet(false),
    m_tagNameHasBeenSet(false),
    m_instanceNumHasBeenSet(false),
    m_reponameHasBeenSet(false),
    m_cpuLimitHasBeenSet(false),
    m_memLimitHasBeenSet(false),
    m_jvmOptsHasBeenSet(false),
    m_cpuRequestHasBeenSet(false),
    m_memRequestHasBeenSet(false),
    m_doNotStartHasBeenSet(false),
    m_repoNameHasBeenSet(false),
    m_updateTypeHasBeenSet(false),
    m_updateIvlHasBeenSet(false)
{
}

string DeployContainerGroupRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_groupIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_serverHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Server";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_server.c_str(), allocator).Move(), allocator);
    }

    if (m_tagNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TagName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_tagName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNumHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_instanceNum, allocator);
    }

    if (m_reponameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Reponame";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_reponame.c_str(), allocator).Move(), allocator);
    }

    if (m_cpuLimitHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CpuLimit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_cpuLimit.c_str(), allocator).Move(), allocator);
    }

    if (m_memLimitHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MemLimit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_memLimit.c_str(), allocator).Move(), allocator);
    }

    if (m_jvmOptsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "JvmOpts";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_jvmOpts.c_str(), allocator).Move(), allocator);
    }

    if (m_cpuRequestHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CpuRequest";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_cpuRequest.c_str(), allocator).Move(), allocator);
    }

    if (m_memRequestHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MemRequest";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_memRequest.c_str(), allocator).Move(), allocator);
    }

    if (m_doNotStartHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DoNotStart";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_doNotStart, allocator);
    }

    if (m_repoNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RepoName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_repoName.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UpdateType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_updateType, allocator);
    }

    if (m_updateIvlHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UpdateIvl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_updateIvl, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeployContainerGroupRequest::GetGroupId() const
{
    return m_groupId;
}

void DeployContainerGroupRequest::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool DeployContainerGroupRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string DeployContainerGroupRequest::GetServer() const
{
    return m_server;
}

void DeployContainerGroupRequest::SetServer(const string& _server)
{
    m_server = _server;
    m_serverHasBeenSet = true;
}

bool DeployContainerGroupRequest::ServerHasBeenSet() const
{
    return m_serverHasBeenSet;
}

string DeployContainerGroupRequest::GetTagName() const
{
    return m_tagName;
}

void DeployContainerGroupRequest::SetTagName(const string& _tagName)
{
    m_tagName = _tagName;
    m_tagNameHasBeenSet = true;
}

bool DeployContainerGroupRequest::TagNameHasBeenSet() const
{
    return m_tagNameHasBeenSet;
}

int64_t DeployContainerGroupRequest::GetInstanceNum() const
{
    return m_instanceNum;
}

void DeployContainerGroupRequest::SetInstanceNum(const int64_t& _instanceNum)
{
    m_instanceNum = _instanceNum;
    m_instanceNumHasBeenSet = true;
}

bool DeployContainerGroupRequest::InstanceNumHasBeenSet() const
{
    return m_instanceNumHasBeenSet;
}

string DeployContainerGroupRequest::GetReponame() const
{
    return m_reponame;
}

void DeployContainerGroupRequest::SetReponame(const string& _reponame)
{
    m_reponame = _reponame;
    m_reponameHasBeenSet = true;
}

bool DeployContainerGroupRequest::ReponameHasBeenSet() const
{
    return m_reponameHasBeenSet;
}

string DeployContainerGroupRequest::GetCpuLimit() const
{
    return m_cpuLimit;
}

void DeployContainerGroupRequest::SetCpuLimit(const string& _cpuLimit)
{
    m_cpuLimit = _cpuLimit;
    m_cpuLimitHasBeenSet = true;
}

bool DeployContainerGroupRequest::CpuLimitHasBeenSet() const
{
    return m_cpuLimitHasBeenSet;
}

string DeployContainerGroupRequest::GetMemLimit() const
{
    return m_memLimit;
}

void DeployContainerGroupRequest::SetMemLimit(const string& _memLimit)
{
    m_memLimit = _memLimit;
    m_memLimitHasBeenSet = true;
}

bool DeployContainerGroupRequest::MemLimitHasBeenSet() const
{
    return m_memLimitHasBeenSet;
}

string DeployContainerGroupRequest::GetJvmOpts() const
{
    return m_jvmOpts;
}

void DeployContainerGroupRequest::SetJvmOpts(const string& _jvmOpts)
{
    m_jvmOpts = _jvmOpts;
    m_jvmOptsHasBeenSet = true;
}

bool DeployContainerGroupRequest::JvmOptsHasBeenSet() const
{
    return m_jvmOptsHasBeenSet;
}

string DeployContainerGroupRequest::GetCpuRequest() const
{
    return m_cpuRequest;
}

void DeployContainerGroupRequest::SetCpuRequest(const string& _cpuRequest)
{
    m_cpuRequest = _cpuRequest;
    m_cpuRequestHasBeenSet = true;
}

bool DeployContainerGroupRequest::CpuRequestHasBeenSet() const
{
    return m_cpuRequestHasBeenSet;
}

string DeployContainerGroupRequest::GetMemRequest() const
{
    return m_memRequest;
}

void DeployContainerGroupRequest::SetMemRequest(const string& _memRequest)
{
    m_memRequest = _memRequest;
    m_memRequestHasBeenSet = true;
}

bool DeployContainerGroupRequest::MemRequestHasBeenSet() const
{
    return m_memRequestHasBeenSet;
}

bool DeployContainerGroupRequest::GetDoNotStart() const
{
    return m_doNotStart;
}

void DeployContainerGroupRequest::SetDoNotStart(const bool& _doNotStart)
{
    m_doNotStart = _doNotStart;
    m_doNotStartHasBeenSet = true;
}

bool DeployContainerGroupRequest::DoNotStartHasBeenSet() const
{
    return m_doNotStartHasBeenSet;
}

string DeployContainerGroupRequest::GetRepoName() const
{
    return m_repoName;
}

void DeployContainerGroupRequest::SetRepoName(const string& _repoName)
{
    m_repoName = _repoName;
    m_repoNameHasBeenSet = true;
}

bool DeployContainerGroupRequest::RepoNameHasBeenSet() const
{
    return m_repoNameHasBeenSet;
}

int64_t DeployContainerGroupRequest::GetUpdateType() const
{
    return m_updateType;
}

void DeployContainerGroupRequest::SetUpdateType(const int64_t& _updateType)
{
    m_updateType = _updateType;
    m_updateTypeHasBeenSet = true;
}

bool DeployContainerGroupRequest::UpdateTypeHasBeenSet() const
{
    return m_updateTypeHasBeenSet;
}

int64_t DeployContainerGroupRequest::GetUpdateIvl() const
{
    return m_updateIvl;
}

void DeployContainerGroupRequest::SetUpdateIvl(const int64_t& _updateIvl)
{
    m_updateIvl = _updateIvl;
    m_updateIvlHasBeenSet = true;
}

bool DeployContainerGroupRequest::UpdateIvlHasBeenSet() const
{
    return m_updateIvlHasBeenSet;
}


