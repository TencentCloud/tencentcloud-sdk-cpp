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

#include <tencentcloud/pts/v20210728/model/StartJobRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Pts::V20210728::Model;
using namespace std;

StartJobRequest::StartJobRequest() :
    m_scenarioIdHasBeenSet(false),
    m_jobOwnerHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_debugHasBeenSet(false),
    m_noteHasBeenSet(false)
{
}

string StartJobRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_scenarioIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScenarioId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scenarioId.c_str(), allocator).Move(), allocator);
    }

    if (m_jobOwnerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobOwner";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_jobOwner.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_debugHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Debug";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_debug, allocator);
    }

    if (m_noteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Note";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_note.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string StartJobRequest::GetScenarioId() const
{
    return m_scenarioId;
}

void StartJobRequest::SetScenarioId(const string& _scenarioId)
{
    m_scenarioId = _scenarioId;
    m_scenarioIdHasBeenSet = true;
}

bool StartJobRequest::ScenarioIdHasBeenSet() const
{
    return m_scenarioIdHasBeenSet;
}

string StartJobRequest::GetJobOwner() const
{
    return m_jobOwner;
}

void StartJobRequest::SetJobOwner(const string& _jobOwner)
{
    m_jobOwner = _jobOwner;
    m_jobOwnerHasBeenSet = true;
}

bool StartJobRequest::JobOwnerHasBeenSet() const
{
    return m_jobOwnerHasBeenSet;
}

string StartJobRequest::GetProjectId() const
{
    return m_projectId;
}

void StartJobRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool StartJobRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

bool StartJobRequest::GetDebug() const
{
    return m_debug;
}

void StartJobRequest::SetDebug(const bool& _debug)
{
    m_debug = _debug;
    m_debugHasBeenSet = true;
}

bool StartJobRequest::DebugHasBeenSet() const
{
    return m_debugHasBeenSet;
}

string StartJobRequest::GetNote() const
{
    return m_note;
}

void StartJobRequest::SetNote(const string& _note)
{
    m_note = _note;
    m_noteHasBeenSet = true;
}

bool StartJobRequest::NoteHasBeenSet() const
{
    return m_noteHasBeenSet;
}


