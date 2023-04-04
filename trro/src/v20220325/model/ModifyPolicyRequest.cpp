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

#include <tencentcloud/trro/v20220325/model/ModifyPolicyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trro::V20220325::Model;
using namespace std;

ModifyPolicyRequest::ModifyPolicyRequest() :
    m_projectIdHasBeenSet(false),
    m_remoteDeviceIdHasBeenSet(false),
    m_fieldDeviceIdsHasBeenSet(false),
    m_policyModeHasBeenSet(false),
    m_modifyModeHasBeenSet(false)
{
}

string ModifyPolicyRequest::ToJsonString() const
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

    if (m_remoteDeviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemoteDeviceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remoteDeviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_fieldDeviceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FieldDeviceIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_fieldDeviceIds.begin(); itr != m_fieldDeviceIds.end(); ++itr)
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

    if (m_modifyModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modifyMode.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyPolicyRequest::GetProjectId() const
{
    return m_projectId;
}

void ModifyPolicyRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ModifyPolicyRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string ModifyPolicyRequest::GetRemoteDeviceId() const
{
    return m_remoteDeviceId;
}

void ModifyPolicyRequest::SetRemoteDeviceId(const string& _remoteDeviceId)
{
    m_remoteDeviceId = _remoteDeviceId;
    m_remoteDeviceIdHasBeenSet = true;
}

bool ModifyPolicyRequest::RemoteDeviceIdHasBeenSet() const
{
    return m_remoteDeviceIdHasBeenSet;
}

vector<string> ModifyPolicyRequest::GetFieldDeviceIds() const
{
    return m_fieldDeviceIds;
}

void ModifyPolicyRequest::SetFieldDeviceIds(const vector<string>& _fieldDeviceIds)
{
    m_fieldDeviceIds = _fieldDeviceIds;
    m_fieldDeviceIdsHasBeenSet = true;
}

bool ModifyPolicyRequest::FieldDeviceIdsHasBeenSet() const
{
    return m_fieldDeviceIdsHasBeenSet;
}

string ModifyPolicyRequest::GetPolicyMode() const
{
    return m_policyMode;
}

void ModifyPolicyRequest::SetPolicyMode(const string& _policyMode)
{
    m_policyMode = _policyMode;
    m_policyModeHasBeenSet = true;
}

bool ModifyPolicyRequest::PolicyModeHasBeenSet() const
{
    return m_policyModeHasBeenSet;
}

string ModifyPolicyRequest::GetModifyMode() const
{
    return m_modifyMode;
}

void ModifyPolicyRequest::SetModifyMode(const string& _modifyMode)
{
    m_modifyMode = _modifyMode;
    m_modifyModeHasBeenSet = true;
}

bool ModifyPolicyRequest::ModifyModeHasBeenSet() const
{
    return m_modifyModeHasBeenSet;
}


