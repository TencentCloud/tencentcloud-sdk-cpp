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

#include <tencentcloud/tsf/v20180326/model/DeployGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tsf::V20180326::Model;
using namespace rapidjson;
using namespace std;

DeployGroupRequest::DeployGroupRequest() :
    m_groupIdHasBeenSet(false),
    m_pkgIdHasBeenSet(false),
    m_startupParametersHasBeenSet(false),
    m_deployDescHasBeenSet(false),
    m_forceStartHasBeenSet(false)
{
}

string DeployGroupRequest::ToJsonString() const
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

    if (m_startupParametersHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StartupParameters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_startupParameters.c_str(), allocator).Move(), allocator);
    }

    if (m_deployDescHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DeployDesc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_deployDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_forceStartHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ForceStart";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_forceStart, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeployGroupRequest::GetGroupId() const
{
    return m_groupId;
}

void DeployGroupRequest::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool DeployGroupRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string DeployGroupRequest::GetPkgId() const
{
    return m_pkgId;
}

void DeployGroupRequest::SetPkgId(const string& _pkgId)
{
    m_pkgId = _pkgId;
    m_pkgIdHasBeenSet = true;
}

bool DeployGroupRequest::PkgIdHasBeenSet() const
{
    return m_pkgIdHasBeenSet;
}

string DeployGroupRequest::GetStartupParameters() const
{
    return m_startupParameters;
}

void DeployGroupRequest::SetStartupParameters(const string& _startupParameters)
{
    m_startupParameters = _startupParameters;
    m_startupParametersHasBeenSet = true;
}

bool DeployGroupRequest::StartupParametersHasBeenSet() const
{
    return m_startupParametersHasBeenSet;
}

string DeployGroupRequest::GetDeployDesc() const
{
    return m_deployDesc;
}

void DeployGroupRequest::SetDeployDesc(const string& _deployDesc)
{
    m_deployDesc = _deployDesc;
    m_deployDescHasBeenSet = true;
}

bool DeployGroupRequest::DeployDescHasBeenSet() const
{
    return m_deployDescHasBeenSet;
}

bool DeployGroupRequest::GetForceStart() const
{
    return m_forceStart;
}

void DeployGroupRequest::SetForceStart(const bool& _forceStart)
{
    m_forceStart = _forceStart;
    m_forceStartHasBeenSet = true;
}

bool DeployGroupRequest::ForceStartHasBeenSet() const
{
    return m_forceStartHasBeenSet;
}


