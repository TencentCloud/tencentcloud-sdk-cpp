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

#include <tencentcloud/cme/v20191029/model/ImportMediaToProjectRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cme::V20191029::Model;
using namespace rapidjson;
using namespace std;

ImportMediaToProjectRequest::ImportMediaToProjectRequest() :
    m_platformHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_vodFileIdHasBeenSet(false),
    m_externalMediaInfoHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_preProcessDefinitionHasBeenSet(false)
{
}

string ImportMediaToProjectRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_platformHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Platform";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_platform.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SourceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_sourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_vodFileIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VodFileId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_vodFileId.c_str(), allocator).Move(), allocator);
    }

    if (m_externalMediaInfoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ExternalMediaInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_externalMediaInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_preProcessDefinitionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PreProcessDefinition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_preProcessDefinition, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ImportMediaToProjectRequest::GetPlatform() const
{
    return m_platform;
}

void ImportMediaToProjectRequest::SetPlatform(const string& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool ImportMediaToProjectRequest::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

string ImportMediaToProjectRequest::GetProjectId() const
{
    return m_projectId;
}

void ImportMediaToProjectRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ImportMediaToProjectRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string ImportMediaToProjectRequest::GetSourceType() const
{
    return m_sourceType;
}

void ImportMediaToProjectRequest::SetSourceType(const string& _sourceType)
{
    m_sourceType = _sourceType;
    m_sourceTypeHasBeenSet = true;
}

bool ImportMediaToProjectRequest::SourceTypeHasBeenSet() const
{
    return m_sourceTypeHasBeenSet;
}

string ImportMediaToProjectRequest::GetVodFileId() const
{
    return m_vodFileId;
}

void ImportMediaToProjectRequest::SetVodFileId(const string& _vodFileId)
{
    m_vodFileId = _vodFileId;
    m_vodFileIdHasBeenSet = true;
}

bool ImportMediaToProjectRequest::VodFileIdHasBeenSet() const
{
    return m_vodFileIdHasBeenSet;
}

ExternalMediaInfo ImportMediaToProjectRequest::GetExternalMediaInfo() const
{
    return m_externalMediaInfo;
}

void ImportMediaToProjectRequest::SetExternalMediaInfo(const ExternalMediaInfo& _externalMediaInfo)
{
    m_externalMediaInfo = _externalMediaInfo;
    m_externalMediaInfoHasBeenSet = true;
}

bool ImportMediaToProjectRequest::ExternalMediaInfoHasBeenSet() const
{
    return m_externalMediaInfoHasBeenSet;
}

string ImportMediaToProjectRequest::GetName() const
{
    return m_name;
}

void ImportMediaToProjectRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ImportMediaToProjectRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t ImportMediaToProjectRequest::GetPreProcessDefinition() const
{
    return m_preProcessDefinition;
}

void ImportMediaToProjectRequest::SetPreProcessDefinition(const int64_t& _preProcessDefinition)
{
    m_preProcessDefinition = _preProcessDefinition;
    m_preProcessDefinitionHasBeenSet = true;
}

bool ImportMediaToProjectRequest::PreProcessDefinitionHasBeenSet() const
{
    return m_preProcessDefinitionHasBeenSet;
}


