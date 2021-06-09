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

#include <tencentcloud/batch/v20170312/model/ModifyComputeEnvRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Batch::V20170312::Model;
using namespace std;

ModifyComputeEnvRequest::ModifyComputeEnvRequest() :
    m_envIdHasBeenSet(false),
    m_desiredComputeNodeCountHasBeenSet(false),
    m_envNameHasBeenSet(false),
    m_envDescriptionHasBeenSet(false),
    m_envDataHasBeenSet(false)
{
}

string ModifyComputeEnvRequest::ToJsonString() const
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

    if (m_desiredComputeNodeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DesiredComputeNodeCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_desiredComputeNodeCount, allocator);
    }

    if (m_envNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_envName.c_str(), allocator).Move(), allocator);
    }

    if (m_envDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvDescription";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_envDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_envDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_envData.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyComputeEnvRequest::GetEnvId() const
{
    return m_envId;
}

void ModifyComputeEnvRequest::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool ModifyComputeEnvRequest::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

int64_t ModifyComputeEnvRequest::GetDesiredComputeNodeCount() const
{
    return m_desiredComputeNodeCount;
}

void ModifyComputeEnvRequest::SetDesiredComputeNodeCount(const int64_t& _desiredComputeNodeCount)
{
    m_desiredComputeNodeCount = _desiredComputeNodeCount;
    m_desiredComputeNodeCountHasBeenSet = true;
}

bool ModifyComputeEnvRequest::DesiredComputeNodeCountHasBeenSet() const
{
    return m_desiredComputeNodeCountHasBeenSet;
}

string ModifyComputeEnvRequest::GetEnvName() const
{
    return m_envName;
}

void ModifyComputeEnvRequest::SetEnvName(const string& _envName)
{
    m_envName = _envName;
    m_envNameHasBeenSet = true;
}

bool ModifyComputeEnvRequest::EnvNameHasBeenSet() const
{
    return m_envNameHasBeenSet;
}

string ModifyComputeEnvRequest::GetEnvDescription() const
{
    return m_envDescription;
}

void ModifyComputeEnvRequest::SetEnvDescription(const string& _envDescription)
{
    m_envDescription = _envDescription;
    m_envDescriptionHasBeenSet = true;
}

bool ModifyComputeEnvRequest::EnvDescriptionHasBeenSet() const
{
    return m_envDescriptionHasBeenSet;
}

ComputeEnvData ModifyComputeEnvRequest::GetEnvData() const
{
    return m_envData;
}

void ModifyComputeEnvRequest::SetEnvData(const ComputeEnvData& _envData)
{
    m_envData = _envData;
    m_envDataHasBeenSet = true;
}

bool ModifyComputeEnvRequest::EnvDataHasBeenSet() const
{
    return m_envDataHasBeenSet;
}


