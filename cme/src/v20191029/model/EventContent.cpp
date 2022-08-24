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

#include <tencentcloud/cme/v20191029/model/EventContent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cme::V20191029::Model;
using namespace std;

EventContent::EventContent() :
    m_eventTypeHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_storageNewFileCreatedEventHasBeenSet(false),
    m_projectStreamConnectStatusChangedEventHasBeenSet(false),
    m_projectSwitcherStatusChangedEventHasBeenSet(false),
    m_materialImportedEventHasBeenSet(false),
    m_materialAddedEventHasBeenSet(false),
    m_materialMovedEventHasBeenSet(false),
    m_materialModifiedEventHasBeenSet(false),
    m_materialDeletedEventHasBeenSet(false),
    m_classCreatedEventHasBeenSet(false),
    m_classMovedEventHasBeenSet(false),
    m_classDeletedEventHasBeenSet(false),
    m_videoExportCompletedEventHasBeenSet(false),
    m_projectMediaCastStatusChangedEventHasBeenSet(false)
{
}

CoreInternalOutcome EventContent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EventType") && !value["EventType"].IsNull())
    {
        if (!value["EventType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventContent.EventType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventType = string(value["EventType"].GetString());
        m_eventTypeHasBeenSet = true;
    }

    if (value.HasMember("Operator") && !value["Operator"].IsNull())
    {
        if (!value["Operator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventContent.Operator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operator = string(value["Operator"].GetString());
        m_operatorHasBeenSet = true;
    }

    if (value.HasMember("StorageNewFileCreatedEvent") && !value["StorageNewFileCreatedEvent"].IsNull())
    {
        if (!value["StorageNewFileCreatedEvent"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EventContent.StorageNewFileCreatedEvent` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_storageNewFileCreatedEvent.Deserialize(value["StorageNewFileCreatedEvent"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_storageNewFileCreatedEventHasBeenSet = true;
    }

    if (value.HasMember("ProjectStreamConnectStatusChangedEvent") && !value["ProjectStreamConnectStatusChangedEvent"].IsNull())
    {
        if (!value["ProjectStreamConnectStatusChangedEvent"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EventContent.ProjectStreamConnectStatusChangedEvent` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_projectStreamConnectStatusChangedEvent.Deserialize(value["ProjectStreamConnectStatusChangedEvent"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_projectStreamConnectStatusChangedEventHasBeenSet = true;
    }

    if (value.HasMember("ProjectSwitcherStatusChangedEvent") && !value["ProjectSwitcherStatusChangedEvent"].IsNull())
    {
        if (!value["ProjectSwitcherStatusChangedEvent"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EventContent.ProjectSwitcherStatusChangedEvent` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_projectSwitcherStatusChangedEvent.Deserialize(value["ProjectSwitcherStatusChangedEvent"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_projectSwitcherStatusChangedEventHasBeenSet = true;
    }

    if (value.HasMember("MaterialImportedEvent") && !value["MaterialImportedEvent"].IsNull())
    {
        if (!value["MaterialImportedEvent"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EventContent.MaterialImportedEvent` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_materialImportedEvent.Deserialize(value["MaterialImportedEvent"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_materialImportedEventHasBeenSet = true;
    }

    if (value.HasMember("MaterialAddedEvent") && !value["MaterialAddedEvent"].IsNull())
    {
        if (!value["MaterialAddedEvent"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EventContent.MaterialAddedEvent` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_materialAddedEvent.Deserialize(value["MaterialAddedEvent"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_materialAddedEventHasBeenSet = true;
    }

    if (value.HasMember("MaterialMovedEvent") && !value["MaterialMovedEvent"].IsNull())
    {
        if (!value["MaterialMovedEvent"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EventContent.MaterialMovedEvent` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_materialMovedEvent.Deserialize(value["MaterialMovedEvent"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_materialMovedEventHasBeenSet = true;
    }

    if (value.HasMember("MaterialModifiedEvent") && !value["MaterialModifiedEvent"].IsNull())
    {
        if (!value["MaterialModifiedEvent"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EventContent.MaterialModifiedEvent` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_materialModifiedEvent.Deserialize(value["MaterialModifiedEvent"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_materialModifiedEventHasBeenSet = true;
    }

    if (value.HasMember("MaterialDeletedEvent") && !value["MaterialDeletedEvent"].IsNull())
    {
        if (!value["MaterialDeletedEvent"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EventContent.MaterialDeletedEvent` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_materialDeletedEvent.Deserialize(value["MaterialDeletedEvent"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_materialDeletedEventHasBeenSet = true;
    }

    if (value.HasMember("ClassCreatedEvent") && !value["ClassCreatedEvent"].IsNull())
    {
        if (!value["ClassCreatedEvent"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EventContent.ClassCreatedEvent` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_classCreatedEvent.Deserialize(value["ClassCreatedEvent"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_classCreatedEventHasBeenSet = true;
    }

    if (value.HasMember("ClassMovedEvent") && !value["ClassMovedEvent"].IsNull())
    {
        if (!value["ClassMovedEvent"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EventContent.ClassMovedEvent` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_classMovedEvent.Deserialize(value["ClassMovedEvent"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_classMovedEventHasBeenSet = true;
    }

    if (value.HasMember("ClassDeletedEvent") && !value["ClassDeletedEvent"].IsNull())
    {
        if (!value["ClassDeletedEvent"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EventContent.ClassDeletedEvent` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_classDeletedEvent.Deserialize(value["ClassDeletedEvent"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_classDeletedEventHasBeenSet = true;
    }

    if (value.HasMember("VideoExportCompletedEvent") && !value["VideoExportCompletedEvent"].IsNull())
    {
        if (!value["VideoExportCompletedEvent"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EventContent.VideoExportCompletedEvent` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_videoExportCompletedEvent.Deserialize(value["VideoExportCompletedEvent"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_videoExportCompletedEventHasBeenSet = true;
    }

    if (value.HasMember("ProjectMediaCastStatusChangedEvent") && !value["ProjectMediaCastStatusChangedEvent"].IsNull())
    {
        if (!value["ProjectMediaCastStatusChangedEvent"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EventContent.ProjectMediaCastStatusChangedEvent` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_projectMediaCastStatusChangedEvent.Deserialize(value["ProjectMediaCastStatusChangedEvent"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_projectMediaCastStatusChangedEventHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EventContent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_eventTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventType.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operator.c_str(), allocator).Move(), allocator);
    }

    if (m_storageNewFileCreatedEventHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageNewFileCreatedEvent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_storageNewFileCreatedEvent.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_projectStreamConnectStatusChangedEventHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectStreamConnectStatusChangedEvent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_projectStreamConnectStatusChangedEvent.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_projectSwitcherStatusChangedEventHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectSwitcherStatusChangedEvent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_projectSwitcherStatusChangedEvent.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_materialImportedEventHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaterialImportedEvent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_materialImportedEvent.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_materialAddedEventHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaterialAddedEvent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_materialAddedEvent.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_materialMovedEventHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaterialMovedEvent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_materialMovedEvent.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_materialModifiedEventHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaterialModifiedEvent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_materialModifiedEvent.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_materialDeletedEventHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaterialDeletedEvent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_materialDeletedEvent.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_classCreatedEventHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClassCreatedEvent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_classCreatedEvent.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_classMovedEventHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClassMovedEvent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_classMovedEvent.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_classDeletedEventHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClassDeletedEvent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_classDeletedEvent.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_videoExportCompletedEventHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoExportCompletedEvent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_videoExportCompletedEvent.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_projectMediaCastStatusChangedEventHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectMediaCastStatusChangedEvent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_projectMediaCastStatusChangedEvent.ToJsonObject(value[key.c_str()], allocator);
    }

}


string EventContent::GetEventType() const
{
    return m_eventType;
}

void EventContent::SetEventType(const string& _eventType)
{
    m_eventType = _eventType;
    m_eventTypeHasBeenSet = true;
}

bool EventContent::EventTypeHasBeenSet() const
{
    return m_eventTypeHasBeenSet;
}

string EventContent::GetOperator() const
{
    return m_operator;
}

void EventContent::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool EventContent::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

StorageNewFileCreatedEvent EventContent::GetStorageNewFileCreatedEvent() const
{
    return m_storageNewFileCreatedEvent;
}

void EventContent::SetStorageNewFileCreatedEvent(const StorageNewFileCreatedEvent& _storageNewFileCreatedEvent)
{
    m_storageNewFileCreatedEvent = _storageNewFileCreatedEvent;
    m_storageNewFileCreatedEventHasBeenSet = true;
}

bool EventContent::StorageNewFileCreatedEventHasBeenSet() const
{
    return m_storageNewFileCreatedEventHasBeenSet;
}

ProjectStreamConnectStatusChangedEvent EventContent::GetProjectStreamConnectStatusChangedEvent() const
{
    return m_projectStreamConnectStatusChangedEvent;
}

void EventContent::SetProjectStreamConnectStatusChangedEvent(const ProjectStreamConnectStatusChangedEvent& _projectStreamConnectStatusChangedEvent)
{
    m_projectStreamConnectStatusChangedEvent = _projectStreamConnectStatusChangedEvent;
    m_projectStreamConnectStatusChangedEventHasBeenSet = true;
}

bool EventContent::ProjectStreamConnectStatusChangedEventHasBeenSet() const
{
    return m_projectStreamConnectStatusChangedEventHasBeenSet;
}

ProjectSwitcherStatusChangedEvent EventContent::GetProjectSwitcherStatusChangedEvent() const
{
    return m_projectSwitcherStatusChangedEvent;
}

void EventContent::SetProjectSwitcherStatusChangedEvent(const ProjectSwitcherStatusChangedEvent& _projectSwitcherStatusChangedEvent)
{
    m_projectSwitcherStatusChangedEvent = _projectSwitcherStatusChangedEvent;
    m_projectSwitcherStatusChangedEventHasBeenSet = true;
}

bool EventContent::ProjectSwitcherStatusChangedEventHasBeenSet() const
{
    return m_projectSwitcherStatusChangedEventHasBeenSet;
}

MaterialImportedEvent EventContent::GetMaterialImportedEvent() const
{
    return m_materialImportedEvent;
}

void EventContent::SetMaterialImportedEvent(const MaterialImportedEvent& _materialImportedEvent)
{
    m_materialImportedEvent = _materialImportedEvent;
    m_materialImportedEventHasBeenSet = true;
}

bool EventContent::MaterialImportedEventHasBeenSet() const
{
    return m_materialImportedEventHasBeenSet;
}

MaterialAddedEvent EventContent::GetMaterialAddedEvent() const
{
    return m_materialAddedEvent;
}

void EventContent::SetMaterialAddedEvent(const MaterialAddedEvent& _materialAddedEvent)
{
    m_materialAddedEvent = _materialAddedEvent;
    m_materialAddedEventHasBeenSet = true;
}

bool EventContent::MaterialAddedEventHasBeenSet() const
{
    return m_materialAddedEventHasBeenSet;
}

MaterialMovedEvent EventContent::GetMaterialMovedEvent() const
{
    return m_materialMovedEvent;
}

void EventContent::SetMaterialMovedEvent(const MaterialMovedEvent& _materialMovedEvent)
{
    m_materialMovedEvent = _materialMovedEvent;
    m_materialMovedEventHasBeenSet = true;
}

bool EventContent::MaterialMovedEventHasBeenSet() const
{
    return m_materialMovedEventHasBeenSet;
}

MaterialModifiedEvent EventContent::GetMaterialModifiedEvent() const
{
    return m_materialModifiedEvent;
}

void EventContent::SetMaterialModifiedEvent(const MaterialModifiedEvent& _materialModifiedEvent)
{
    m_materialModifiedEvent = _materialModifiedEvent;
    m_materialModifiedEventHasBeenSet = true;
}

bool EventContent::MaterialModifiedEventHasBeenSet() const
{
    return m_materialModifiedEventHasBeenSet;
}

MaterialDeletedEvent EventContent::GetMaterialDeletedEvent() const
{
    return m_materialDeletedEvent;
}

void EventContent::SetMaterialDeletedEvent(const MaterialDeletedEvent& _materialDeletedEvent)
{
    m_materialDeletedEvent = _materialDeletedEvent;
    m_materialDeletedEventHasBeenSet = true;
}

bool EventContent::MaterialDeletedEventHasBeenSet() const
{
    return m_materialDeletedEventHasBeenSet;
}

ClassCreatedEvent EventContent::GetClassCreatedEvent() const
{
    return m_classCreatedEvent;
}

void EventContent::SetClassCreatedEvent(const ClassCreatedEvent& _classCreatedEvent)
{
    m_classCreatedEvent = _classCreatedEvent;
    m_classCreatedEventHasBeenSet = true;
}

bool EventContent::ClassCreatedEventHasBeenSet() const
{
    return m_classCreatedEventHasBeenSet;
}

ClassMovedEvent EventContent::GetClassMovedEvent() const
{
    return m_classMovedEvent;
}

void EventContent::SetClassMovedEvent(const ClassMovedEvent& _classMovedEvent)
{
    m_classMovedEvent = _classMovedEvent;
    m_classMovedEventHasBeenSet = true;
}

bool EventContent::ClassMovedEventHasBeenSet() const
{
    return m_classMovedEventHasBeenSet;
}

ClassDeletedEvent EventContent::GetClassDeletedEvent() const
{
    return m_classDeletedEvent;
}

void EventContent::SetClassDeletedEvent(const ClassDeletedEvent& _classDeletedEvent)
{
    m_classDeletedEvent = _classDeletedEvent;
    m_classDeletedEventHasBeenSet = true;
}

bool EventContent::ClassDeletedEventHasBeenSet() const
{
    return m_classDeletedEventHasBeenSet;
}

VideoExportCompletedEvent EventContent::GetVideoExportCompletedEvent() const
{
    return m_videoExportCompletedEvent;
}

void EventContent::SetVideoExportCompletedEvent(const VideoExportCompletedEvent& _videoExportCompletedEvent)
{
    m_videoExportCompletedEvent = _videoExportCompletedEvent;
    m_videoExportCompletedEventHasBeenSet = true;
}

bool EventContent::VideoExportCompletedEventHasBeenSet() const
{
    return m_videoExportCompletedEventHasBeenSet;
}

ProjectMediaCastStatusChangedEvent EventContent::GetProjectMediaCastStatusChangedEvent() const
{
    return m_projectMediaCastStatusChangedEvent;
}

void EventContent::SetProjectMediaCastStatusChangedEvent(const ProjectMediaCastStatusChangedEvent& _projectMediaCastStatusChangedEvent)
{
    m_projectMediaCastStatusChangedEvent = _projectMediaCastStatusChangedEvent;
    m_projectMediaCastStatusChangedEventHasBeenSet = true;
}

bool EventContent::ProjectMediaCastStatusChangedEventHasBeenSet() const
{
    return m_projectMediaCastStatusChangedEventHasBeenSet;
}

