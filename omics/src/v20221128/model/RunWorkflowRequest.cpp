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

#include <tencentcloud/omics/v20221128/model/RunWorkflowRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Omics::V20221128::Model;
using namespace std;

RunWorkflowRequest::RunWorkflowRequest() :
    m_nameHasBeenSet(false),
    m_environmentIdHasBeenSet(false),
    m_gitSourceHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_nFOptionHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_inputBase64HasBeenSet(false),
    m_inputCosUriHasBeenSet(false),
    m_cacheClearDelayHasBeenSet(false),
    m_workDirHasBeenSet(false),
    m_volumeIdsHasBeenSet(false),
    m_entrypointHasBeenSet(false)
{
}

string RunWorkflowRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_environmentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvironmentId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_environmentId.c_str(), allocator).Move(), allocator);
    }

    if (m_gitSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GitSource";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_gitSource.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_nFOptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NFOption";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_nFOption.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_inputBase64HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputBase64";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_inputBase64.c_str(), allocator).Move(), allocator);
    }

    if (m_inputCosUriHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputCosUri";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_inputCosUri.c_str(), allocator).Move(), allocator);
    }

    if (m_cacheClearDelayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CacheClearDelay";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cacheClearDelay, allocator);
    }

    if (m_workDirHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkDir";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workDir.c_str(), allocator).Move(), allocator);
    }

    if (m_volumeIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VolumeIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_volumeIds.begin(); itr != m_volumeIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_entrypointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Entrypoint";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_entrypoint.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RunWorkflowRequest::GetName() const
{
    return m_name;
}

void RunWorkflowRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool RunWorkflowRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string RunWorkflowRequest::GetEnvironmentId() const
{
    return m_environmentId;
}

void RunWorkflowRequest::SetEnvironmentId(const string& _environmentId)
{
    m_environmentId = _environmentId;
    m_environmentIdHasBeenSet = true;
}

bool RunWorkflowRequest::EnvironmentIdHasBeenSet() const
{
    return m_environmentIdHasBeenSet;
}

GitInfo RunWorkflowRequest::GetGitSource() const
{
    return m_gitSource;
}

void RunWorkflowRequest::SetGitSource(const GitInfo& _gitSource)
{
    m_gitSource = _gitSource;
    m_gitSourceHasBeenSet = true;
}

bool RunWorkflowRequest::GitSourceHasBeenSet() const
{
    return m_gitSourceHasBeenSet;
}

string RunWorkflowRequest::GetType() const
{
    return m_type;
}

void RunWorkflowRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool RunWorkflowRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

NFOption RunWorkflowRequest::GetNFOption() const
{
    return m_nFOption;
}

void RunWorkflowRequest::SetNFOption(const NFOption& _nFOption)
{
    m_nFOption = _nFOption;
    m_nFOptionHasBeenSet = true;
}

bool RunWorkflowRequest::NFOptionHasBeenSet() const
{
    return m_nFOptionHasBeenSet;
}

string RunWorkflowRequest::GetProjectId() const
{
    return m_projectId;
}

void RunWorkflowRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool RunWorkflowRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string RunWorkflowRequest::GetDescription() const
{
    return m_description;
}

void RunWorkflowRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool RunWorkflowRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string RunWorkflowRequest::GetInputBase64() const
{
    return m_inputBase64;
}

void RunWorkflowRequest::SetInputBase64(const string& _inputBase64)
{
    m_inputBase64 = _inputBase64;
    m_inputBase64HasBeenSet = true;
}

bool RunWorkflowRequest::InputBase64HasBeenSet() const
{
    return m_inputBase64HasBeenSet;
}

string RunWorkflowRequest::GetInputCosUri() const
{
    return m_inputCosUri;
}

void RunWorkflowRequest::SetInputCosUri(const string& _inputCosUri)
{
    m_inputCosUri = _inputCosUri;
    m_inputCosUriHasBeenSet = true;
}

bool RunWorkflowRequest::InputCosUriHasBeenSet() const
{
    return m_inputCosUriHasBeenSet;
}

uint64_t RunWorkflowRequest::GetCacheClearDelay() const
{
    return m_cacheClearDelay;
}

void RunWorkflowRequest::SetCacheClearDelay(const uint64_t& _cacheClearDelay)
{
    m_cacheClearDelay = _cacheClearDelay;
    m_cacheClearDelayHasBeenSet = true;
}

bool RunWorkflowRequest::CacheClearDelayHasBeenSet() const
{
    return m_cacheClearDelayHasBeenSet;
}

string RunWorkflowRequest::GetWorkDir() const
{
    return m_workDir;
}

void RunWorkflowRequest::SetWorkDir(const string& _workDir)
{
    m_workDir = _workDir;
    m_workDirHasBeenSet = true;
}

bool RunWorkflowRequest::WorkDirHasBeenSet() const
{
    return m_workDirHasBeenSet;
}

vector<string> RunWorkflowRequest::GetVolumeIds() const
{
    return m_volumeIds;
}

void RunWorkflowRequest::SetVolumeIds(const vector<string>& _volumeIds)
{
    m_volumeIds = _volumeIds;
    m_volumeIdsHasBeenSet = true;
}

bool RunWorkflowRequest::VolumeIdsHasBeenSet() const
{
    return m_volumeIdsHasBeenSet;
}

string RunWorkflowRequest::GetEntrypoint() const
{
    return m_entrypoint;
}

void RunWorkflowRequest::SetEntrypoint(const string& _entrypoint)
{
    m_entrypoint = _entrypoint;
    m_entrypointHasBeenSet = true;
}

bool RunWorkflowRequest::EntrypointHasBeenSet() const
{
    return m_entrypointHasBeenSet;
}


