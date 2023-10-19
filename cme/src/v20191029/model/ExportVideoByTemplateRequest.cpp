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

#include <tencentcloud/cme/v20191029/model/ExportVideoByTemplateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cme::V20191029::Model;
using namespace std;

ExportVideoByTemplateRequest::ExportVideoByTemplateRequest() :
    m_platformHasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_definitionHasBeenSet(false),
    m_exportDestinationHasBeenSet(false),
    m_slotReplacementsHasBeenSet(false),
    m_cMEExportInfoHasBeenSet(false),
    m_vODExportInfoHasBeenSet(false),
    m_exportExtensionArgsHasBeenSet(false),
    m_operatorHasBeenSet(false)
{
}

string ExportVideoByTemplateRequest::ToJsonString() const
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

    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_templateId.c_str(), allocator).Move(), allocator);
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

    if (m_slotReplacementsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SlotReplacements";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_slotReplacements.begin(); itr != m_slotReplacements.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
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

    if (m_exportExtensionArgsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExportExtensionArgs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_exportExtensionArgs.ToJsonObject(d[key.c_str()], allocator);
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


string ExportVideoByTemplateRequest::GetPlatform() const
{
    return m_platform;
}

void ExportVideoByTemplateRequest::SetPlatform(const string& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool ExportVideoByTemplateRequest::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

string ExportVideoByTemplateRequest::GetTemplateId() const
{
    return m_templateId;
}

void ExportVideoByTemplateRequest::SetTemplateId(const string& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool ExportVideoByTemplateRequest::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

int64_t ExportVideoByTemplateRequest::GetDefinition() const
{
    return m_definition;
}

void ExportVideoByTemplateRequest::SetDefinition(const int64_t& _definition)
{
    m_definition = _definition;
    m_definitionHasBeenSet = true;
}

bool ExportVideoByTemplateRequest::DefinitionHasBeenSet() const
{
    return m_definitionHasBeenSet;
}

string ExportVideoByTemplateRequest::GetExportDestination() const
{
    return m_exportDestination;
}

void ExportVideoByTemplateRequest::SetExportDestination(const string& _exportDestination)
{
    m_exportDestination = _exportDestination;
    m_exportDestinationHasBeenSet = true;
}

bool ExportVideoByTemplateRequest::ExportDestinationHasBeenSet() const
{
    return m_exportDestinationHasBeenSet;
}

vector<SlotReplacementInfo> ExportVideoByTemplateRequest::GetSlotReplacements() const
{
    return m_slotReplacements;
}

void ExportVideoByTemplateRequest::SetSlotReplacements(const vector<SlotReplacementInfo>& _slotReplacements)
{
    m_slotReplacements = _slotReplacements;
    m_slotReplacementsHasBeenSet = true;
}

bool ExportVideoByTemplateRequest::SlotReplacementsHasBeenSet() const
{
    return m_slotReplacementsHasBeenSet;
}

CMEExportInfo ExportVideoByTemplateRequest::GetCMEExportInfo() const
{
    return m_cMEExportInfo;
}

void ExportVideoByTemplateRequest::SetCMEExportInfo(const CMEExportInfo& _cMEExportInfo)
{
    m_cMEExportInfo = _cMEExportInfo;
    m_cMEExportInfoHasBeenSet = true;
}

bool ExportVideoByTemplateRequest::CMEExportInfoHasBeenSet() const
{
    return m_cMEExportInfoHasBeenSet;
}

VODExportInfo ExportVideoByTemplateRequest::GetVODExportInfo() const
{
    return m_vODExportInfo;
}

void ExportVideoByTemplateRequest::SetVODExportInfo(const VODExportInfo& _vODExportInfo)
{
    m_vODExportInfo = _vODExportInfo;
    m_vODExportInfoHasBeenSet = true;
}

bool ExportVideoByTemplateRequest::VODExportInfoHasBeenSet() const
{
    return m_vODExportInfoHasBeenSet;
}

VideoExportExtensionArgs ExportVideoByTemplateRequest::GetExportExtensionArgs() const
{
    return m_exportExtensionArgs;
}

void ExportVideoByTemplateRequest::SetExportExtensionArgs(const VideoExportExtensionArgs& _exportExtensionArgs)
{
    m_exportExtensionArgs = _exportExtensionArgs;
    m_exportExtensionArgsHasBeenSet = true;
}

bool ExportVideoByTemplateRequest::ExportExtensionArgsHasBeenSet() const
{
    return m_exportExtensionArgsHasBeenSet;
}

string ExportVideoByTemplateRequest::GetOperator() const
{
    return m_operator;
}

void ExportVideoByTemplateRequest::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool ExportVideoByTemplateRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}


