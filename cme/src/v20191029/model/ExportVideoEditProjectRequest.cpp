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

#include <tencentcloud/cme/v20191029/model/ExportVideoEditProjectRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cme::V20191029::Model;
using namespace rapidjson;
using namespace std;

ExportVideoEditProjectRequest::ExportVideoEditProjectRequest() :
    m_platformHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_definitionHasBeenSet(false),
    m_exportDestinationHasBeenSet(false),
    m_coverDataHasBeenSet(false),
    m_cMEExportInfoHasBeenSet(false),
    m_vODExportInfoHasBeenSet(false),
    m_operatorHasBeenSet(false)
{
}

string ExportVideoEditProjectRequest::ToJsonString() const
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

    if (m_definitionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Definition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_definition, allocator);
    }

    if (m_exportDestinationHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ExportDestination";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_exportDestination.c_str(), allocator).Move(), allocator);
    }

    if (m_coverDataHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CoverData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_coverData.c_str(), allocator).Move(), allocator);
    }

    if (m_cMEExportInfoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CMEExportInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_cMEExportInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_vODExportInfoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VODExportInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_vODExportInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_operatorHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_operator.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ExportVideoEditProjectRequest::GetPlatform() const
{
    return m_platform;
}

void ExportVideoEditProjectRequest::SetPlatform(const string& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool ExportVideoEditProjectRequest::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

string ExportVideoEditProjectRequest::GetProjectId() const
{
    return m_projectId;
}

void ExportVideoEditProjectRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ExportVideoEditProjectRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

uint64_t ExportVideoEditProjectRequest::GetDefinition() const
{
    return m_definition;
}

void ExportVideoEditProjectRequest::SetDefinition(const uint64_t& _definition)
{
    m_definition = _definition;
    m_definitionHasBeenSet = true;
}

bool ExportVideoEditProjectRequest::DefinitionHasBeenSet() const
{
    return m_definitionHasBeenSet;
}

string ExportVideoEditProjectRequest::GetExportDestination() const
{
    return m_exportDestination;
}

void ExportVideoEditProjectRequest::SetExportDestination(const string& _exportDestination)
{
    m_exportDestination = _exportDestination;
    m_exportDestinationHasBeenSet = true;
}

bool ExportVideoEditProjectRequest::ExportDestinationHasBeenSet() const
{
    return m_exportDestinationHasBeenSet;
}

string ExportVideoEditProjectRequest::GetCoverData() const
{
    return m_coverData;
}

void ExportVideoEditProjectRequest::SetCoverData(const string& _coverData)
{
    m_coverData = _coverData;
    m_coverDataHasBeenSet = true;
}

bool ExportVideoEditProjectRequest::CoverDataHasBeenSet() const
{
    return m_coverDataHasBeenSet;
}

CMEExportInfo ExportVideoEditProjectRequest::GetCMEExportInfo() const
{
    return m_cMEExportInfo;
}

void ExportVideoEditProjectRequest::SetCMEExportInfo(const CMEExportInfo& _cMEExportInfo)
{
    m_cMEExportInfo = _cMEExportInfo;
    m_cMEExportInfoHasBeenSet = true;
}

bool ExportVideoEditProjectRequest::CMEExportInfoHasBeenSet() const
{
    return m_cMEExportInfoHasBeenSet;
}

VODExportInfo ExportVideoEditProjectRequest::GetVODExportInfo() const
{
    return m_vODExportInfo;
}

void ExportVideoEditProjectRequest::SetVODExportInfo(const VODExportInfo& _vODExportInfo)
{
    m_vODExportInfo = _vODExportInfo;
    m_vODExportInfoHasBeenSet = true;
}

bool ExportVideoEditProjectRequest::VODExportInfoHasBeenSet() const
{
    return m_vODExportInfoHasBeenSet;
}

string ExportVideoEditProjectRequest::GetOperator() const
{
    return m_operator;
}

void ExportVideoEditProjectRequest::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool ExportVideoEditProjectRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}


