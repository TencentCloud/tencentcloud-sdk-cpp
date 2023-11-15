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

#include <tencentcloud/weilingwith/v20230427/model/ProcessRecordInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

ProcessRecordInfo::ProcessRecordInfo() :
    m_idHasBeenSet(false),
    m_processTimeHasBeenSet(false),
    m_processTypeHasBeenSet(false),
    m_processorHasBeenSet(false),
    m_processDescriptionHasBeenSet(false),
    m_attachedFileIdHasBeenSet(false)
{
}

CoreInternalOutcome ProcessRecordInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessRecordInfo.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("ProcessTime") && !value["ProcessTime"].IsNull())
    {
        if (!value["ProcessTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessRecordInfo.ProcessTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_processTime = value["ProcessTime"].GetInt64();
        m_processTimeHasBeenSet = true;
    }

    if (value.HasMember("ProcessType") && !value["ProcessType"].IsNull())
    {
        if (!value["ProcessType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessRecordInfo.ProcessType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processType = string(value["ProcessType"].GetString());
        m_processTypeHasBeenSet = true;
    }

    if (value.HasMember("Processor") && !value["Processor"].IsNull())
    {
        if (!value["Processor"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessRecordInfo.Processor` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processor = string(value["Processor"].GetString());
        m_processorHasBeenSet = true;
    }

    if (value.HasMember("ProcessDescription") && !value["ProcessDescription"].IsNull())
    {
        if (!value["ProcessDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessRecordInfo.ProcessDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processDescription = string(value["ProcessDescription"].GetString());
        m_processDescriptionHasBeenSet = true;
    }

    if (value.HasMember("AttachedFileId") && !value["AttachedFileId"].IsNull())
    {
        if (!value["AttachedFileId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessRecordInfo.AttachedFileId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attachedFileId = string(value["AttachedFileId"].GetString());
        m_attachedFileIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProcessRecordInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_processTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_processTime, allocator);
    }

    if (m_processTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_processType.c_str(), allocator).Move(), allocator);
    }

    if (m_processorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Processor";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_processor.c_str(), allocator).Move(), allocator);
    }

    if (m_processDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_processDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_attachedFileIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttachedFileId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attachedFileId.c_str(), allocator).Move(), allocator);
    }

}


string ProcessRecordInfo::GetId() const
{
    return m_id;
}

void ProcessRecordInfo::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ProcessRecordInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

int64_t ProcessRecordInfo::GetProcessTime() const
{
    return m_processTime;
}

void ProcessRecordInfo::SetProcessTime(const int64_t& _processTime)
{
    m_processTime = _processTime;
    m_processTimeHasBeenSet = true;
}

bool ProcessRecordInfo::ProcessTimeHasBeenSet() const
{
    return m_processTimeHasBeenSet;
}

string ProcessRecordInfo::GetProcessType() const
{
    return m_processType;
}

void ProcessRecordInfo::SetProcessType(const string& _processType)
{
    m_processType = _processType;
    m_processTypeHasBeenSet = true;
}

bool ProcessRecordInfo::ProcessTypeHasBeenSet() const
{
    return m_processTypeHasBeenSet;
}

string ProcessRecordInfo::GetProcessor() const
{
    return m_processor;
}

void ProcessRecordInfo::SetProcessor(const string& _processor)
{
    m_processor = _processor;
    m_processorHasBeenSet = true;
}

bool ProcessRecordInfo::ProcessorHasBeenSet() const
{
    return m_processorHasBeenSet;
}

string ProcessRecordInfo::GetProcessDescription() const
{
    return m_processDescription;
}

void ProcessRecordInfo::SetProcessDescription(const string& _processDescription)
{
    m_processDescription = _processDescription;
    m_processDescriptionHasBeenSet = true;
}

bool ProcessRecordInfo::ProcessDescriptionHasBeenSet() const
{
    return m_processDescriptionHasBeenSet;
}

string ProcessRecordInfo::GetAttachedFileId() const
{
    return m_attachedFileId;
}

void ProcessRecordInfo::SetAttachedFileId(const string& _attachedFileId)
{
    m_attachedFileId = _attachedFileId;
    m_attachedFileIdHasBeenSet = true;
}

bool ProcessRecordInfo::AttachedFileIdHasBeenSet() const
{
    return m_attachedFileIdHasBeenSet;
}

