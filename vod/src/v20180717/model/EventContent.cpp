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

#include <tencentcloud/vod/v20180717/model/EventContent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace rapidjson;
using namespace std;

EventContent::EventContent() :
    m_eventHandleHasBeenSet(false),
    m_eventTypeHasBeenSet(false),
    m_fileUploadEventHasBeenSet(false),
    m_procedureStateChangeEventHasBeenSet(false),
    m_fileDeleteEventHasBeenSet(false),
    m_pullCompleteEventHasBeenSet(false),
    m_editMediaCompleteEventHasBeenSet(false),
    m_wechatPublishCompleteEventHasBeenSet(false),
    m_transcodeCompleteEventHasBeenSet(false),
    m_concatCompleteEventHasBeenSet(false),
    m_clipCompleteEventHasBeenSet(false),
    m_createImageSpriteCompleteEventHasBeenSet(false),
    m_snapshotByTimeOffsetCompleteEventHasBeenSet(false),
    m_composeMediaCompleteEventHasBeenSet(false),
    m_wechatMiniProgramPublishCompleteEventHasBeenSet(false)
{
}

CoreInternalOutcome EventContent::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("EventHandle") && !value["EventHandle"].IsNull())
    {
        if (!value["EventHandle"].IsString())
        {
            return CoreInternalOutcome(Error("response `EventContent.EventHandle` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventHandle = string(value["EventHandle"].GetString());
        m_eventHandleHasBeenSet = true;
    }

    if (value.HasMember("EventType") && !value["EventType"].IsNull())
    {
        if (!value["EventType"].IsString())
        {
            return CoreInternalOutcome(Error("response `EventContent.EventType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventType = string(value["EventType"].GetString());
        m_eventTypeHasBeenSet = true;
    }

    if (value.HasMember("FileUploadEvent") && !value["FileUploadEvent"].IsNull())
    {
        if (!value["FileUploadEvent"].IsObject())
        {
            return CoreInternalOutcome(Error("response `EventContent.FileUploadEvent` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_fileUploadEvent.Deserialize(value["FileUploadEvent"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_fileUploadEventHasBeenSet = true;
    }

    if (value.HasMember("ProcedureStateChangeEvent") && !value["ProcedureStateChangeEvent"].IsNull())
    {
        if (!value["ProcedureStateChangeEvent"].IsObject())
        {
            return CoreInternalOutcome(Error("response `EventContent.ProcedureStateChangeEvent` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_procedureStateChangeEvent.Deserialize(value["ProcedureStateChangeEvent"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_procedureStateChangeEventHasBeenSet = true;
    }

    if (value.HasMember("FileDeleteEvent") && !value["FileDeleteEvent"].IsNull())
    {
        if (!value["FileDeleteEvent"].IsObject())
        {
            return CoreInternalOutcome(Error("response `EventContent.FileDeleteEvent` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_fileDeleteEvent.Deserialize(value["FileDeleteEvent"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_fileDeleteEventHasBeenSet = true;
    }

    if (value.HasMember("PullCompleteEvent") && !value["PullCompleteEvent"].IsNull())
    {
        if (!value["PullCompleteEvent"].IsObject())
        {
            return CoreInternalOutcome(Error("response `EventContent.PullCompleteEvent` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_pullCompleteEvent.Deserialize(value["PullCompleteEvent"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_pullCompleteEventHasBeenSet = true;
    }

    if (value.HasMember("EditMediaCompleteEvent") && !value["EditMediaCompleteEvent"].IsNull())
    {
        if (!value["EditMediaCompleteEvent"].IsObject())
        {
            return CoreInternalOutcome(Error("response `EventContent.EditMediaCompleteEvent` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_editMediaCompleteEvent.Deserialize(value["EditMediaCompleteEvent"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_editMediaCompleteEventHasBeenSet = true;
    }

    if (value.HasMember("WechatPublishCompleteEvent") && !value["WechatPublishCompleteEvent"].IsNull())
    {
        if (!value["WechatPublishCompleteEvent"].IsObject())
        {
            return CoreInternalOutcome(Error("response `EventContent.WechatPublishCompleteEvent` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_wechatPublishCompleteEvent.Deserialize(value["WechatPublishCompleteEvent"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_wechatPublishCompleteEventHasBeenSet = true;
    }

    if (value.HasMember("TranscodeCompleteEvent") && !value["TranscodeCompleteEvent"].IsNull())
    {
        if (!value["TranscodeCompleteEvent"].IsObject())
        {
            return CoreInternalOutcome(Error("response `EventContent.TranscodeCompleteEvent` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_transcodeCompleteEvent.Deserialize(value["TranscodeCompleteEvent"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_transcodeCompleteEventHasBeenSet = true;
    }

    if (value.HasMember("ConcatCompleteEvent") && !value["ConcatCompleteEvent"].IsNull())
    {
        if (!value["ConcatCompleteEvent"].IsObject())
        {
            return CoreInternalOutcome(Error("response `EventContent.ConcatCompleteEvent` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_concatCompleteEvent.Deserialize(value["ConcatCompleteEvent"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_concatCompleteEventHasBeenSet = true;
    }

    if (value.HasMember("ClipCompleteEvent") && !value["ClipCompleteEvent"].IsNull())
    {
        if (!value["ClipCompleteEvent"].IsObject())
        {
            return CoreInternalOutcome(Error("response `EventContent.ClipCompleteEvent` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_clipCompleteEvent.Deserialize(value["ClipCompleteEvent"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_clipCompleteEventHasBeenSet = true;
    }

    if (value.HasMember("CreateImageSpriteCompleteEvent") && !value["CreateImageSpriteCompleteEvent"].IsNull())
    {
        if (!value["CreateImageSpriteCompleteEvent"].IsObject())
        {
            return CoreInternalOutcome(Error("response `EventContent.CreateImageSpriteCompleteEvent` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_createImageSpriteCompleteEvent.Deserialize(value["CreateImageSpriteCompleteEvent"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_createImageSpriteCompleteEventHasBeenSet = true;
    }

    if (value.HasMember("SnapshotByTimeOffsetCompleteEvent") && !value["SnapshotByTimeOffsetCompleteEvent"].IsNull())
    {
        if (!value["SnapshotByTimeOffsetCompleteEvent"].IsObject())
        {
            return CoreInternalOutcome(Error("response `EventContent.SnapshotByTimeOffsetCompleteEvent` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_snapshotByTimeOffsetCompleteEvent.Deserialize(value["SnapshotByTimeOffsetCompleteEvent"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_snapshotByTimeOffsetCompleteEventHasBeenSet = true;
    }

    if (value.HasMember("ComposeMediaCompleteEvent") && !value["ComposeMediaCompleteEvent"].IsNull())
    {
        if (!value["ComposeMediaCompleteEvent"].IsObject())
        {
            return CoreInternalOutcome(Error("response `EventContent.ComposeMediaCompleteEvent` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_composeMediaCompleteEvent.Deserialize(value["ComposeMediaCompleteEvent"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_composeMediaCompleteEventHasBeenSet = true;
    }

    if (value.HasMember("WechatMiniProgramPublishCompleteEvent") && !value["WechatMiniProgramPublishCompleteEvent"].IsNull())
    {
        if (!value["WechatMiniProgramPublishCompleteEvent"].IsObject())
        {
            return CoreInternalOutcome(Error("response `EventContent.WechatMiniProgramPublishCompleteEvent` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_wechatMiniProgramPublishCompleteEvent.Deserialize(value["WechatMiniProgramPublishCompleteEvent"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_wechatMiniProgramPublishCompleteEventHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EventContent::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_eventHandleHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EventHandle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_eventHandle.c_str(), allocator).Move(), allocator);
    }

    if (m_eventTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EventType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_eventType.c_str(), allocator).Move(), allocator);
    }

    if (m_fileUploadEventHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FileUploadEvent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_fileUploadEvent.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_procedureStateChangeEventHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProcedureStateChangeEvent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_procedureStateChangeEvent.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_fileDeleteEventHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FileDeleteEvent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_fileDeleteEvent.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_pullCompleteEventHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PullCompleteEvent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_pullCompleteEvent.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_editMediaCompleteEventHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EditMediaCompleteEvent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_editMediaCompleteEvent.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_wechatPublishCompleteEventHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "WechatPublishCompleteEvent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_wechatPublishCompleteEvent.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_transcodeCompleteEventHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TranscodeCompleteEvent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_transcodeCompleteEvent.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_concatCompleteEventHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ConcatCompleteEvent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_concatCompleteEvent.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_clipCompleteEventHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClipCompleteEvent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_clipCompleteEvent.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_createImageSpriteCompleteEventHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreateImageSpriteCompleteEvent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_createImageSpriteCompleteEvent.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_snapshotByTimeOffsetCompleteEventHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SnapshotByTimeOffsetCompleteEvent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_snapshotByTimeOffsetCompleteEvent.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_composeMediaCompleteEventHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ComposeMediaCompleteEvent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_composeMediaCompleteEvent.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_wechatMiniProgramPublishCompleteEventHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "WechatMiniProgramPublishCompleteEvent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_wechatMiniProgramPublishCompleteEvent.ToJsonObject(value[key.c_str()], allocator);
    }

}


string EventContent::GetEventHandle() const
{
    return m_eventHandle;
}

void EventContent::SetEventHandle(const string& _eventHandle)
{
    m_eventHandle = _eventHandle;
    m_eventHandleHasBeenSet = true;
}

bool EventContent::EventHandleHasBeenSet() const
{
    return m_eventHandleHasBeenSet;
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

FileUploadTask EventContent::GetFileUploadEvent() const
{
    return m_fileUploadEvent;
}

void EventContent::SetFileUploadEvent(const FileUploadTask& _fileUploadEvent)
{
    m_fileUploadEvent = _fileUploadEvent;
    m_fileUploadEventHasBeenSet = true;
}

bool EventContent::FileUploadEventHasBeenSet() const
{
    return m_fileUploadEventHasBeenSet;
}

ProcedureTask EventContent::GetProcedureStateChangeEvent() const
{
    return m_procedureStateChangeEvent;
}

void EventContent::SetProcedureStateChangeEvent(const ProcedureTask& _procedureStateChangeEvent)
{
    m_procedureStateChangeEvent = _procedureStateChangeEvent;
    m_procedureStateChangeEventHasBeenSet = true;
}

bool EventContent::ProcedureStateChangeEventHasBeenSet() const
{
    return m_procedureStateChangeEventHasBeenSet;
}

FileDeleteTask EventContent::GetFileDeleteEvent() const
{
    return m_fileDeleteEvent;
}

void EventContent::SetFileDeleteEvent(const FileDeleteTask& _fileDeleteEvent)
{
    m_fileDeleteEvent = _fileDeleteEvent;
    m_fileDeleteEventHasBeenSet = true;
}

bool EventContent::FileDeleteEventHasBeenSet() const
{
    return m_fileDeleteEventHasBeenSet;
}

PullUploadTask EventContent::GetPullCompleteEvent() const
{
    return m_pullCompleteEvent;
}

void EventContent::SetPullCompleteEvent(const PullUploadTask& _pullCompleteEvent)
{
    m_pullCompleteEvent = _pullCompleteEvent;
    m_pullCompleteEventHasBeenSet = true;
}

bool EventContent::PullCompleteEventHasBeenSet() const
{
    return m_pullCompleteEventHasBeenSet;
}

EditMediaTask EventContent::GetEditMediaCompleteEvent() const
{
    return m_editMediaCompleteEvent;
}

void EventContent::SetEditMediaCompleteEvent(const EditMediaTask& _editMediaCompleteEvent)
{
    m_editMediaCompleteEvent = _editMediaCompleteEvent;
    m_editMediaCompleteEventHasBeenSet = true;
}

bool EventContent::EditMediaCompleteEventHasBeenSet() const
{
    return m_editMediaCompleteEventHasBeenSet;
}

WechatPublishTask EventContent::GetWechatPublishCompleteEvent() const
{
    return m_wechatPublishCompleteEvent;
}

void EventContent::SetWechatPublishCompleteEvent(const WechatPublishTask& _wechatPublishCompleteEvent)
{
    m_wechatPublishCompleteEvent = _wechatPublishCompleteEvent;
    m_wechatPublishCompleteEventHasBeenSet = true;
}

bool EventContent::WechatPublishCompleteEventHasBeenSet() const
{
    return m_wechatPublishCompleteEventHasBeenSet;
}

TranscodeTask2017 EventContent::GetTranscodeCompleteEvent() const
{
    return m_transcodeCompleteEvent;
}

void EventContent::SetTranscodeCompleteEvent(const TranscodeTask2017& _transcodeCompleteEvent)
{
    m_transcodeCompleteEvent = _transcodeCompleteEvent;
    m_transcodeCompleteEventHasBeenSet = true;
}

bool EventContent::TranscodeCompleteEventHasBeenSet() const
{
    return m_transcodeCompleteEventHasBeenSet;
}

ConcatTask2017 EventContent::GetConcatCompleteEvent() const
{
    return m_concatCompleteEvent;
}

void EventContent::SetConcatCompleteEvent(const ConcatTask2017& _concatCompleteEvent)
{
    m_concatCompleteEvent = _concatCompleteEvent;
    m_concatCompleteEventHasBeenSet = true;
}

bool EventContent::ConcatCompleteEventHasBeenSet() const
{
    return m_concatCompleteEventHasBeenSet;
}

ClipTask2017 EventContent::GetClipCompleteEvent() const
{
    return m_clipCompleteEvent;
}

void EventContent::SetClipCompleteEvent(const ClipTask2017& _clipCompleteEvent)
{
    m_clipCompleteEvent = _clipCompleteEvent;
    m_clipCompleteEventHasBeenSet = true;
}

bool EventContent::ClipCompleteEventHasBeenSet() const
{
    return m_clipCompleteEventHasBeenSet;
}

CreateImageSpriteTask2017 EventContent::GetCreateImageSpriteCompleteEvent() const
{
    return m_createImageSpriteCompleteEvent;
}

void EventContent::SetCreateImageSpriteCompleteEvent(const CreateImageSpriteTask2017& _createImageSpriteCompleteEvent)
{
    m_createImageSpriteCompleteEvent = _createImageSpriteCompleteEvent;
    m_createImageSpriteCompleteEventHasBeenSet = true;
}

bool EventContent::CreateImageSpriteCompleteEventHasBeenSet() const
{
    return m_createImageSpriteCompleteEventHasBeenSet;
}

SnapshotByTimeOffsetTask2017 EventContent::GetSnapshotByTimeOffsetCompleteEvent() const
{
    return m_snapshotByTimeOffsetCompleteEvent;
}

void EventContent::SetSnapshotByTimeOffsetCompleteEvent(const SnapshotByTimeOffsetTask2017& _snapshotByTimeOffsetCompleteEvent)
{
    m_snapshotByTimeOffsetCompleteEvent = _snapshotByTimeOffsetCompleteEvent;
    m_snapshotByTimeOffsetCompleteEventHasBeenSet = true;
}

bool EventContent::SnapshotByTimeOffsetCompleteEventHasBeenSet() const
{
    return m_snapshotByTimeOffsetCompleteEventHasBeenSet;
}

ComposeMediaTask EventContent::GetComposeMediaCompleteEvent() const
{
    return m_composeMediaCompleteEvent;
}

void EventContent::SetComposeMediaCompleteEvent(const ComposeMediaTask& _composeMediaCompleteEvent)
{
    m_composeMediaCompleteEvent = _composeMediaCompleteEvent;
    m_composeMediaCompleteEventHasBeenSet = true;
}

bool EventContent::ComposeMediaCompleteEventHasBeenSet() const
{
    return m_composeMediaCompleteEventHasBeenSet;
}

WechatMiniProgramPublishTask EventContent::GetWechatMiniProgramPublishCompleteEvent() const
{
    return m_wechatMiniProgramPublishCompleteEvent;
}

void EventContent::SetWechatMiniProgramPublishCompleteEvent(const WechatMiniProgramPublishTask& _wechatMiniProgramPublishCompleteEvent)
{
    m_wechatMiniProgramPublishCompleteEvent = _wechatMiniProgramPublishCompleteEvent;
    m_wechatMiniProgramPublishCompleteEventHasBeenSet = true;
}

bool EventContent::WechatMiniProgramPublishCompleteEventHasBeenSet() const
{
    return m_wechatMiniProgramPublishCompleteEventHasBeenSet;
}

