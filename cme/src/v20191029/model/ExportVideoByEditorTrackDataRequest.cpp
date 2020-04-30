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

#include <tencentcloud/cme/v20191029/model/ExportVideoByEditorTrackDataRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cme::V20191029::Model;
using namespace rapidjson;
using namespace std;

ExportVideoByEditorTrackDataRequest::ExportVideoByEditorTrackDataRequest() :
    m_platformHasBeenSet(false),
    m_definitionHasBeenSet(false),
    m_exportDestinationHasBeenSet(false),
    m_trackDataHasBeenSet(false),
    m_cMEExportInfoHasBeenSet(false),
    m_vODExportInfoHasBeenSet(false),
    m_operatorHasBeenSet(false)
{
}

string ExportVideoByEditorTrackDataRequest::ToJsonString() const
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

    if (m_trackDataHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TrackData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_trackData.c_str(), allocator).Move(), allocator);
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


string ExportVideoByEditorTrackDataRequest::GetPlatform() const
{
    return m_platform;
}

void ExportVideoByEditorTrackDataRequest::SetPlatform(const string& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool ExportVideoByEditorTrackDataRequest::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

uint64_t ExportVideoByEditorTrackDataRequest::GetDefinition() const
{
    return m_definition;
}

void ExportVideoByEditorTrackDataRequest::SetDefinition(const uint64_t& _definition)
{
    m_definition = _definition;
    m_definitionHasBeenSet = true;
}

bool ExportVideoByEditorTrackDataRequest::DefinitionHasBeenSet() const
{
    return m_definitionHasBeenSet;
}

string ExportVideoByEditorTrackDataRequest::GetExportDestination() const
{
    return m_exportDestination;
}

void ExportVideoByEditorTrackDataRequest::SetExportDestination(const string& _exportDestination)
{
    m_exportDestination = _exportDestination;
    m_exportDestinationHasBeenSet = true;
}

bool ExportVideoByEditorTrackDataRequest::ExportDestinationHasBeenSet() const
{
    return m_exportDestinationHasBeenSet;
}

string ExportVideoByEditorTrackDataRequest::GetTrackData() const
{
    return m_trackData;
}

void ExportVideoByEditorTrackDataRequest::SetTrackData(const string& _trackData)
{
    m_trackData = _trackData;
    m_trackDataHasBeenSet = true;
}

bool ExportVideoByEditorTrackDataRequest::TrackDataHasBeenSet() const
{
    return m_trackDataHasBeenSet;
}

CMEExportInfo ExportVideoByEditorTrackDataRequest::GetCMEExportInfo() const
{
    return m_cMEExportInfo;
}

void ExportVideoByEditorTrackDataRequest::SetCMEExportInfo(const CMEExportInfo& _cMEExportInfo)
{
    m_cMEExportInfo = _cMEExportInfo;
    m_cMEExportInfoHasBeenSet = true;
}

bool ExportVideoByEditorTrackDataRequest::CMEExportInfoHasBeenSet() const
{
    return m_cMEExportInfoHasBeenSet;
}

VODExportInfo ExportVideoByEditorTrackDataRequest::GetVODExportInfo() const
{
    return m_vODExportInfo;
}

void ExportVideoByEditorTrackDataRequest::SetVODExportInfo(const VODExportInfo& _vODExportInfo)
{
    m_vODExportInfo = _vODExportInfo;
    m_vODExportInfoHasBeenSet = true;
}

bool ExportVideoByEditorTrackDataRequest::VODExportInfoHasBeenSet() const
{
    return m_vODExportInfoHasBeenSet;
}

string ExportVideoByEditorTrackDataRequest::GetOperator() const
{
    return m_operator;
}

void ExportVideoByEditorTrackDataRequest::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool ExportVideoByEditorTrackDataRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}


