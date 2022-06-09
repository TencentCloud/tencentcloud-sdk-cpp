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

#include <tencentcloud/cme/v20191029/model/ProjectStreamConnectStatusChangedEvent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cme::V20191029::Model;
using namespace std;

ProjectStreamConnectStatusChangedEvent::ProjectStreamConnectStatusChangedEvent() :
    m_projectIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_inputInterruptInfoHasBeenSet(false),
    m_outputInterruptInfoHasBeenSet(false)
{
}

CoreInternalOutcome ProjectStreamConnectStatusChangedEvent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectStreamConnectStatusChangedEvent.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectStreamConnectStatusChangedEvent.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("InputInterruptInfo") && !value["InputInterruptInfo"].IsNull())
    {
        if (!value["InputInterruptInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectStreamConnectStatusChangedEvent.InputInterruptInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_inputInterruptInfo.Deserialize(value["InputInterruptInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_inputInterruptInfoHasBeenSet = true;
    }

    if (value.HasMember("OutputInterruptInfo") && !value["OutputInterruptInfo"].IsNull())
    {
        if (!value["OutputInterruptInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectStreamConnectStatusChangedEvent.OutputInterruptInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_outputInterruptInfo.Deserialize(value["OutputInterruptInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_outputInterruptInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProjectStreamConnectStatusChangedEvent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_inputInterruptInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputInterruptInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_inputInterruptInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_outputInterruptInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputInterruptInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_outputInterruptInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


string ProjectStreamConnectStatusChangedEvent::GetProjectId() const
{
    return m_projectId;
}

void ProjectStreamConnectStatusChangedEvent::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ProjectStreamConnectStatusChangedEvent::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string ProjectStreamConnectStatusChangedEvent::GetStatus() const
{
    return m_status;
}

void ProjectStreamConnectStatusChangedEvent::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ProjectStreamConnectStatusChangedEvent::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

StreamConnectInputInterruptInfo ProjectStreamConnectStatusChangedEvent::GetInputInterruptInfo() const
{
    return m_inputInterruptInfo;
}

void ProjectStreamConnectStatusChangedEvent::SetInputInterruptInfo(const StreamConnectInputInterruptInfo& _inputInterruptInfo)
{
    m_inputInterruptInfo = _inputInterruptInfo;
    m_inputInterruptInfoHasBeenSet = true;
}

bool ProjectStreamConnectStatusChangedEvent::InputInterruptInfoHasBeenSet() const
{
    return m_inputInterruptInfoHasBeenSet;
}

StreamConnectOutputInterruptInfo ProjectStreamConnectStatusChangedEvent::GetOutputInterruptInfo() const
{
    return m_outputInterruptInfo;
}

void ProjectStreamConnectStatusChangedEvent::SetOutputInterruptInfo(const StreamConnectOutputInterruptInfo& _outputInterruptInfo)
{
    m_outputInterruptInfo = _outputInterruptInfo;
    m_outputInterruptInfoHasBeenSet = true;
}

bool ProjectStreamConnectStatusChangedEvent::OutputInterruptInfoHasBeenSet() const
{
    return m_outputInterruptInfoHasBeenSet;
}

