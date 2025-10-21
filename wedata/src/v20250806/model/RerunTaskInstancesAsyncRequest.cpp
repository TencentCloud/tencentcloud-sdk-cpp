/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/wedata/v20250806/model/RerunTaskInstancesAsyncRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

RerunTaskInstancesAsyncRequest::RerunTaskInstancesAsyncRequest() :
    m_projectIdHasBeenSet(false),
    m_instanceKeyListHasBeenSet(false),
    m_rerunTypeHasBeenSet(false),
    m_checkParentTypeHasBeenSet(false),
    m_sonRangeTypeHasBeenSet(false),
    m_skipEventListeningHasBeenSet(false),
    m_redefineParallelNumHasBeenSet(false),
    m_redefineSelfWorkflowDependencyHasBeenSet(false),
    m_redefineParamListHasBeenSet(false)
{
}

string RerunTaskInstancesAsyncRequest::ToJsonString() const
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

    if (m_instanceKeyListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceKeyList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceKeyList.begin(); itr != m_instanceKeyList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_rerunTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RerunType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_rerunType.c_str(), allocator).Move(), allocator);
    }

    if (m_checkParentTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckParentType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_checkParentType.c_str(), allocator).Move(), allocator);
    }

    if (m_sonRangeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SonRangeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sonRangeType.c_str(), allocator).Move(), allocator);
    }

    if (m_skipEventListeningHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkipEventListening";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_skipEventListening, allocator);
    }

    if (m_redefineParallelNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RedefineParallelNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_redefineParallelNum, allocator);
    }

    if (m_redefineSelfWorkflowDependencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RedefineSelfWorkflowDependency";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_redefineSelfWorkflowDependency.c_str(), allocator).Move(), allocator);
    }

    if (m_redefineParamListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RedefineParamList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_redefineParamList.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RerunTaskInstancesAsyncRequest::GetProjectId() const
{
    return m_projectId;
}

void RerunTaskInstancesAsyncRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool RerunTaskInstancesAsyncRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

vector<string> RerunTaskInstancesAsyncRequest::GetInstanceKeyList() const
{
    return m_instanceKeyList;
}

void RerunTaskInstancesAsyncRequest::SetInstanceKeyList(const vector<string>& _instanceKeyList)
{
    m_instanceKeyList = _instanceKeyList;
    m_instanceKeyListHasBeenSet = true;
}

bool RerunTaskInstancesAsyncRequest::InstanceKeyListHasBeenSet() const
{
    return m_instanceKeyListHasBeenSet;
}

string RerunTaskInstancesAsyncRequest::GetRerunType() const
{
    return m_rerunType;
}

void RerunTaskInstancesAsyncRequest::SetRerunType(const string& _rerunType)
{
    m_rerunType = _rerunType;
    m_rerunTypeHasBeenSet = true;
}

bool RerunTaskInstancesAsyncRequest::RerunTypeHasBeenSet() const
{
    return m_rerunTypeHasBeenSet;
}

string RerunTaskInstancesAsyncRequest::GetCheckParentType() const
{
    return m_checkParentType;
}

void RerunTaskInstancesAsyncRequest::SetCheckParentType(const string& _checkParentType)
{
    m_checkParentType = _checkParentType;
    m_checkParentTypeHasBeenSet = true;
}

bool RerunTaskInstancesAsyncRequest::CheckParentTypeHasBeenSet() const
{
    return m_checkParentTypeHasBeenSet;
}

string RerunTaskInstancesAsyncRequest::GetSonRangeType() const
{
    return m_sonRangeType;
}

void RerunTaskInstancesAsyncRequest::SetSonRangeType(const string& _sonRangeType)
{
    m_sonRangeType = _sonRangeType;
    m_sonRangeTypeHasBeenSet = true;
}

bool RerunTaskInstancesAsyncRequest::SonRangeTypeHasBeenSet() const
{
    return m_sonRangeTypeHasBeenSet;
}

bool RerunTaskInstancesAsyncRequest::GetSkipEventListening() const
{
    return m_skipEventListening;
}

void RerunTaskInstancesAsyncRequest::SetSkipEventListening(const bool& _skipEventListening)
{
    m_skipEventListening = _skipEventListening;
    m_skipEventListeningHasBeenSet = true;
}

bool RerunTaskInstancesAsyncRequest::SkipEventListeningHasBeenSet() const
{
    return m_skipEventListeningHasBeenSet;
}

int64_t RerunTaskInstancesAsyncRequest::GetRedefineParallelNum() const
{
    return m_redefineParallelNum;
}

void RerunTaskInstancesAsyncRequest::SetRedefineParallelNum(const int64_t& _redefineParallelNum)
{
    m_redefineParallelNum = _redefineParallelNum;
    m_redefineParallelNumHasBeenSet = true;
}

bool RerunTaskInstancesAsyncRequest::RedefineParallelNumHasBeenSet() const
{
    return m_redefineParallelNumHasBeenSet;
}

string RerunTaskInstancesAsyncRequest::GetRedefineSelfWorkflowDependency() const
{
    return m_redefineSelfWorkflowDependency;
}

void RerunTaskInstancesAsyncRequest::SetRedefineSelfWorkflowDependency(const string& _redefineSelfWorkflowDependency)
{
    m_redefineSelfWorkflowDependency = _redefineSelfWorkflowDependency;
    m_redefineSelfWorkflowDependencyHasBeenSet = true;
}

bool RerunTaskInstancesAsyncRequest::RedefineSelfWorkflowDependencyHasBeenSet() const
{
    return m_redefineSelfWorkflowDependencyHasBeenSet;
}

KVMap RerunTaskInstancesAsyncRequest::GetRedefineParamList() const
{
    return m_redefineParamList;
}

void RerunTaskInstancesAsyncRequest::SetRedefineParamList(const KVMap& _redefineParamList)
{
    m_redefineParamList = _redefineParamList;
    m_redefineParamListHasBeenSet = true;
}

bool RerunTaskInstancesAsyncRequest::RedefineParamListHasBeenSet() const
{
    return m_redefineParamListHasBeenSet;
}


