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

#include <tencentcloud/trro/v20220325/model/BatchDeletePolicyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trro::V20220325::Model;
using namespace std;

BatchDeletePolicyRequest::BatchDeletePolicyRequest() :
    m_projectIdHasBeenSet(false),
    m_remoteDeviceIdsHasBeenSet(false),
    m_policyModeHasBeenSet(false)
{
}

string BatchDeletePolicyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_remoteDeviceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemoteDeviceIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_remoteDeviceIds.begin(); itr != m_remoteDeviceIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_policyModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_policyMode.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string BatchDeletePolicyRequest::GetProjectId() const
{
    return m_projectId;
}

void BatchDeletePolicyRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool BatchDeletePolicyRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

vector<string> BatchDeletePolicyRequest::GetRemoteDeviceIds() const
{
    return m_remoteDeviceIds;
}

void BatchDeletePolicyRequest::SetRemoteDeviceIds(const vector<string>& _remoteDeviceIds)
{
    m_remoteDeviceIds = _remoteDeviceIds;
    m_remoteDeviceIdsHasBeenSet = true;
}

bool BatchDeletePolicyRequest::RemoteDeviceIdsHasBeenSet() const
{
    return m_remoteDeviceIdsHasBeenSet;
}

string BatchDeletePolicyRequest::GetPolicyMode() const
{
    return m_policyMode;
}

void BatchDeletePolicyRequest::SetPolicyMode(const string& _policyMode)
{
    m_policyMode = _policyMode;
    m_policyModeHasBeenSet = true;
}

bool BatchDeletePolicyRequest::PolicyModeHasBeenSet() const
{
    return m_policyModeHasBeenSet;
}


