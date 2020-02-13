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

#include <tencentcloud/tsf/v20180326/model/DeployServerlessGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tsf::V20180326::Model;
using namespace rapidjson;
using namespace std;

DeployServerlessGroupRequest::DeployServerlessGroupRequest() :
    m_groupIdHasBeenSet(false),
    m_pkgIdHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_instanceRequestHasBeenSet(false),
    m_startupParametersHasBeenSet(false)
{
}

string DeployServerlessGroupRequest::ToJsonString() const
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

    if (m_pkgIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PkgId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_pkgId.c_str(), allocator).Move(), allocator);
    }

    if (m_memoryHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Memory";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_memory.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceRequestHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceRequest";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_instanceRequest, allocator);
    }

    if (m_startupParametersHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StartupParameters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_startupParameters.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeployServerlessGroupRequest::GetGroupId() const
{
    return m_groupId;
}

void DeployServerlessGroupRequest::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool DeployServerlessGroupRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string DeployServerlessGroupRequest::GetPkgId() const
{
    return m_pkgId;
}

void DeployServerlessGroupRequest::SetPkgId(const string& _pkgId)
{
    m_pkgId = _pkgId;
    m_pkgIdHasBeenSet = true;
}

bool DeployServerlessGroupRequest::PkgIdHasBeenSet() const
{
    return m_pkgIdHasBeenSet;
}

string DeployServerlessGroupRequest::GetMemory() const
{
    return m_memory;
}

void DeployServerlessGroupRequest::SetMemory(const string& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool DeployServerlessGroupRequest::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

uint64_t DeployServerlessGroupRequest::GetInstanceRequest() const
{
    return m_instanceRequest;
}

void DeployServerlessGroupRequest::SetInstanceRequest(const uint64_t& _instanceRequest)
{
    m_instanceRequest = _instanceRequest;
    m_instanceRequestHasBeenSet = true;
}

bool DeployServerlessGroupRequest::InstanceRequestHasBeenSet() const
{
    return m_instanceRequestHasBeenSet;
}

string DeployServerlessGroupRequest::GetStartupParameters() const
{
    return m_startupParameters;
}

void DeployServerlessGroupRequest::SetStartupParameters(const string& _startupParameters)
{
    m_startupParameters = _startupParameters;
    m_startupParametersHasBeenSet = true;
}

bool DeployServerlessGroupRequest::StartupParametersHasBeenSet() const
{
    return m_startupParametersHasBeenSet;
}


