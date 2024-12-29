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

#include <tencentcloud/emr/v20190103/model/ModifyResourceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

ModifyResourceRequest::ModifyResourceRequest() :
    m_instanceIdHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_newCpuHasBeenSet(false),
    m_newMemHasBeenSet(false),
    m_clientTokenHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_resourceIdListHasBeenSet(false)
{
}

string ModifyResourceRequest::ToJsonString() const
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

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_payMode, allocator);
    }

    if (m_newCpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewCpu";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_newCpu, allocator);
    }

    if (m_newMemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewMem";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_newMem, allocator);
    }

    if (m_clientTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clientToken.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_resourceIdList.begin(); itr != m_resourceIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyResourceRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyResourceRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyResourceRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

uint64_t ModifyResourceRequest::GetPayMode() const
{
    return m_payMode;
}

void ModifyResourceRequest::SetPayMode(const uint64_t& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool ModifyResourceRequest::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

int64_t ModifyResourceRequest::GetNewCpu() const
{
    return m_newCpu;
}

void ModifyResourceRequest::SetNewCpu(const int64_t& _newCpu)
{
    m_newCpu = _newCpu;
    m_newCpuHasBeenSet = true;
}

bool ModifyResourceRequest::NewCpuHasBeenSet() const
{
    return m_newCpuHasBeenSet;
}

int64_t ModifyResourceRequest::GetNewMem() const
{
    return m_newMem;
}

void ModifyResourceRequest::SetNewMem(const int64_t& _newMem)
{
    m_newMem = _newMem;
    m_newMemHasBeenSet = true;
}

bool ModifyResourceRequest::NewMemHasBeenSet() const
{
    return m_newMemHasBeenSet;
}

string ModifyResourceRequest::GetClientToken() const
{
    return m_clientToken;
}

void ModifyResourceRequest::SetClientToken(const string& _clientToken)
{
    m_clientToken = _clientToken;
    m_clientTokenHasBeenSet = true;
}

bool ModifyResourceRequest::ClientTokenHasBeenSet() const
{
    return m_clientTokenHasBeenSet;
}

string ModifyResourceRequest::GetInstanceType() const
{
    return m_instanceType;
}

void ModifyResourceRequest::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool ModifyResourceRequest::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

vector<string> ModifyResourceRequest::GetResourceIdList() const
{
    return m_resourceIdList;
}

void ModifyResourceRequest::SetResourceIdList(const vector<string>& _resourceIdList)
{
    m_resourceIdList = _resourceIdList;
    m_resourceIdListHasBeenSet = true;
}

bool ModifyResourceRequest::ResourceIdListHasBeenSet() const
{
    return m_resourceIdListHasBeenSet;
}


