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

#include <tencentcloud/monitor/v20230616/model/AIWorkbenchSREDigitalTwinWorkLogDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20230616::Model;
using namespace std;

AIWorkbenchSREDigitalTwinWorkLogDetail::AIWorkbenchSREDigitalTwinWorkLogDetail() :
    m_contentHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_dialogIDHasBeenSet(false)
{
}

CoreInternalOutcome AIWorkbenchSREDigitalTwinWorkLogDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIWorkbenchSREDigitalTwinWorkLogDetail.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("TaskType") && !value["TaskType"].IsNull())
    {
        if (!value["TaskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIWorkbenchSREDigitalTwinWorkLogDetail.TaskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskType = string(value["TaskType"].GetString());
        m_taskTypeHasBeenSet = true;
    }

    if (value.HasMember("DialogID") && !value["DialogID"].IsNull())
    {
        if (!value["DialogID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AIWorkbenchSREDigitalTwinWorkLogDetail.DialogID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dialogID = value["DialogID"].GetInt64();
        m_dialogIDHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AIWorkbenchSREDigitalTwinWorkLogDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskType.c_str(), allocator).Move(), allocator);
    }

    if (m_dialogIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DialogID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dialogID, allocator);
    }

}


string AIWorkbenchSREDigitalTwinWorkLogDetail::GetContent() const
{
    return m_content;
}

void AIWorkbenchSREDigitalTwinWorkLogDetail::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool AIWorkbenchSREDigitalTwinWorkLogDetail::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

string AIWorkbenchSREDigitalTwinWorkLogDetail::GetTaskType() const
{
    return m_taskType;
}

void AIWorkbenchSREDigitalTwinWorkLogDetail::SetTaskType(const string& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool AIWorkbenchSREDigitalTwinWorkLogDetail::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

int64_t AIWorkbenchSREDigitalTwinWorkLogDetail::GetDialogID() const
{
    return m_dialogID;
}

void AIWorkbenchSREDigitalTwinWorkLogDetail::SetDialogID(const int64_t& _dialogID)
{
    m_dialogID = _dialogID;
    m_dialogIDHasBeenSet = true;
}

bool AIWorkbenchSREDigitalTwinWorkLogDetail::DialogIDHasBeenSet() const
{
    return m_dialogIDHasBeenSet;
}

