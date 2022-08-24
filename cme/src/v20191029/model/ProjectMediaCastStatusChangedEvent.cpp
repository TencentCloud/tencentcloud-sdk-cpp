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

#include <tencentcloud/cme/v20191029/model/ProjectMediaCastStatusChangedEvent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cme::V20191029::Model;
using namespace std;

ProjectMediaCastStatusChangedEvent::ProjectMediaCastStatusChangedEvent() :
    m_projectIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_sourceInterruptInfoHasBeenSet(false),
    m_destinationInterruptInfoHasBeenSet(false)
{
}

CoreInternalOutcome ProjectMediaCastStatusChangedEvent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectMediaCastStatusChangedEvent.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectMediaCastStatusChangedEvent.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("SourceInterruptInfo") && !value["SourceInterruptInfo"].IsNull())
    {
        if (!value["SourceInterruptInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectMediaCastStatusChangedEvent.SourceInterruptInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sourceInterruptInfo.Deserialize(value["SourceInterruptInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sourceInterruptInfoHasBeenSet = true;
    }

    if (value.HasMember("DestinationInterruptInfo") && !value["DestinationInterruptInfo"].IsNull())
    {
        if (!value["DestinationInterruptInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ProjectMediaCastStatusChangedEvent.DestinationInterruptInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_destinationInterruptInfo.Deserialize(value["DestinationInterruptInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_destinationInterruptInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProjectMediaCastStatusChangedEvent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_sourceInterruptInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceInterruptInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sourceInterruptInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_destinationInterruptInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestinationInterruptInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_destinationInterruptInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


string ProjectMediaCastStatusChangedEvent::GetProjectId() const
{
    return m_projectId;
}

void ProjectMediaCastStatusChangedEvent::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ProjectMediaCastStatusChangedEvent::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string ProjectMediaCastStatusChangedEvent::GetStatus() const
{
    return m_status;
}

void ProjectMediaCastStatusChangedEvent::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ProjectMediaCastStatusChangedEvent::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

MediaCastSourceInterruptInfo ProjectMediaCastStatusChangedEvent::GetSourceInterruptInfo() const
{
    return m_sourceInterruptInfo;
}

void ProjectMediaCastStatusChangedEvent::SetSourceInterruptInfo(const MediaCastSourceInterruptInfo& _sourceInterruptInfo)
{
    m_sourceInterruptInfo = _sourceInterruptInfo;
    m_sourceInterruptInfoHasBeenSet = true;
}

bool ProjectMediaCastStatusChangedEvent::SourceInterruptInfoHasBeenSet() const
{
    return m_sourceInterruptInfoHasBeenSet;
}

MediaCastDestinationInterruptInfo ProjectMediaCastStatusChangedEvent::GetDestinationInterruptInfo() const
{
    return m_destinationInterruptInfo;
}

void ProjectMediaCastStatusChangedEvent::SetDestinationInterruptInfo(const MediaCastDestinationInterruptInfo& _destinationInterruptInfo)
{
    m_destinationInterruptInfo = _destinationInterruptInfo;
    m_destinationInterruptInfoHasBeenSet = true;
}

bool ProjectMediaCastStatusChangedEvent::DestinationInterruptInfoHasBeenSet() const
{
    return m_destinationInterruptInfoHasBeenSet;
}

