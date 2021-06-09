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

#include <tencentcloud/cme/v20191029/model/ExportVideoByVideoSegmentationDataRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cme::V20191029::Model;
using namespace std;

ExportVideoByVideoSegmentationDataRequest::ExportVideoByVideoSegmentationDataRequest() :
    m_platformHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_segmentGroupIdHasBeenSet(false),
    m_segmentIdsHasBeenSet(false),
    m_definitionHasBeenSet(false),
    m_exportDestinationHasBeenSet(false),
    m_cMEExportInfoHasBeenSet(false),
    m_vODExportInfoHasBeenSet(false),
    m_operatorHasBeenSet(false)
{
}

string ExportVideoByVideoSegmentationDataRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_platformHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Platform";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_platform.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_segmentGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SegmentGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_segmentGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_segmentIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SegmentIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_segmentIds.begin(); itr != m_segmentIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_definitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Definition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_definition, allocator);
    }

    if (m_exportDestinationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExportDestination";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_exportDestination.c_str(), allocator).Move(), allocator);
    }

    if (m_cMEExportInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CMEExportInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cMEExportInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_vODExportInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VODExportInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_vODExportInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operator.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ExportVideoByVideoSegmentationDataRequest::GetPlatform() const
{
    return m_platform;
}

void ExportVideoByVideoSegmentationDataRequest::SetPlatform(const string& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool ExportVideoByVideoSegmentationDataRequest::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

string ExportVideoByVideoSegmentationDataRequest::GetProjectId() const
{
    return m_projectId;
}

void ExportVideoByVideoSegmentationDataRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ExportVideoByVideoSegmentationDataRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string ExportVideoByVideoSegmentationDataRequest::GetSegmentGroupId() const
{
    return m_segmentGroupId;
}

void ExportVideoByVideoSegmentationDataRequest::SetSegmentGroupId(const string& _segmentGroupId)
{
    m_segmentGroupId = _segmentGroupId;
    m_segmentGroupIdHasBeenSet = true;
}

bool ExportVideoByVideoSegmentationDataRequest::SegmentGroupIdHasBeenSet() const
{
    return m_segmentGroupIdHasBeenSet;
}

vector<string> ExportVideoByVideoSegmentationDataRequest::GetSegmentIds() const
{
    return m_segmentIds;
}

void ExportVideoByVideoSegmentationDataRequest::SetSegmentIds(const vector<string>& _segmentIds)
{
    m_segmentIds = _segmentIds;
    m_segmentIdsHasBeenSet = true;
}

bool ExportVideoByVideoSegmentationDataRequest::SegmentIdsHasBeenSet() const
{
    return m_segmentIdsHasBeenSet;
}

uint64_t ExportVideoByVideoSegmentationDataRequest::GetDefinition() const
{
    return m_definition;
}

void ExportVideoByVideoSegmentationDataRequest::SetDefinition(const uint64_t& _definition)
{
    m_definition = _definition;
    m_definitionHasBeenSet = true;
}

bool ExportVideoByVideoSegmentationDataRequest::DefinitionHasBeenSet() const
{
    return m_definitionHasBeenSet;
}

string ExportVideoByVideoSegmentationDataRequest::GetExportDestination() const
{
    return m_exportDestination;
}

void ExportVideoByVideoSegmentationDataRequest::SetExportDestination(const string& _exportDestination)
{
    m_exportDestination = _exportDestination;
    m_exportDestinationHasBeenSet = true;
}

bool ExportVideoByVideoSegmentationDataRequest::ExportDestinationHasBeenSet() const
{
    return m_exportDestinationHasBeenSet;
}

CMEExportInfo ExportVideoByVideoSegmentationDataRequest::GetCMEExportInfo() const
{
    return m_cMEExportInfo;
}

void ExportVideoByVideoSegmentationDataRequest::SetCMEExportInfo(const CMEExportInfo& _cMEExportInfo)
{
    m_cMEExportInfo = _cMEExportInfo;
    m_cMEExportInfoHasBeenSet = true;
}

bool ExportVideoByVideoSegmentationDataRequest::CMEExportInfoHasBeenSet() const
{
    return m_cMEExportInfoHasBeenSet;
}

VODExportInfo ExportVideoByVideoSegmentationDataRequest::GetVODExportInfo() const
{
    return m_vODExportInfo;
}

void ExportVideoByVideoSegmentationDataRequest::SetVODExportInfo(const VODExportInfo& _vODExportInfo)
{
    m_vODExportInfo = _vODExportInfo;
    m_vODExportInfoHasBeenSet = true;
}

bool ExportVideoByVideoSegmentationDataRequest::VODExportInfoHasBeenSet() const
{
    return m_vODExportInfoHasBeenSet;
}

string ExportVideoByVideoSegmentationDataRequest::GetOperator() const
{
    return m_operator;
}

void ExportVideoByVideoSegmentationDataRequest::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool ExportVideoByVideoSegmentationDataRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}


