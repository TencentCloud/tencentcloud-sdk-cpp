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

#include <tencentcloud/lcic/v20220817/model/ModifyRoomRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lcic::V20220817::Model;
using namespace std;

ModifyRoomRequest::ModifyRoomRequest() :
    m_roomIdHasBeenSet(false),
    m_sdkAppIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_teacherIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_resolutionHasBeenSet(false),
    m_maxMicNumberHasBeenSet(false),
    m_autoMicHasBeenSet(false),
    m_audioQualityHasBeenSet(false),
    m_subTypeHasBeenSet(false),
    m_disableRecordHasBeenSet(false),
    m_assistantsHasBeenSet(false),
    m_groupIdHasBeenSet(false)
{
}

string ModifyRoomRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_roomIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoomId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_roomId, allocator);
    }

    if (m_sdkAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sdkAppId, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_startTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endTime, allocator);
    }

    if (m_teacherIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TeacherId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_teacherId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_resolutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resolution";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_resolution, allocator);
    }

    if (m_maxMicNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxMicNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxMicNumber, allocator);
    }

    if (m_autoMicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoMic";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoMic, allocator);
    }

    if (m_audioQualityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioQuality";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_audioQuality, allocator);
    }

    if (m_subTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subType.c_str(), allocator).Move(), allocator);
    }

    if (m_disableRecordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisableRecord";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_disableRecord, allocator);
    }

    if (m_assistantsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Assistants";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_assistants.begin(); itr != m_assistants.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ModifyRoomRequest::GetRoomId() const
{
    return m_roomId;
}

void ModifyRoomRequest::SetRoomId(const uint64_t& _roomId)
{
    m_roomId = _roomId;
    m_roomIdHasBeenSet = true;
}

bool ModifyRoomRequest::RoomIdHasBeenSet() const
{
    return m_roomIdHasBeenSet;
}

uint64_t ModifyRoomRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void ModifyRoomRequest::SetSdkAppId(const uint64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool ModifyRoomRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

uint64_t ModifyRoomRequest::GetStartTime() const
{
    return m_startTime;
}

void ModifyRoomRequest::SetStartTime(const uint64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool ModifyRoomRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

uint64_t ModifyRoomRequest::GetEndTime() const
{
    return m_endTime;
}

void ModifyRoomRequest::SetEndTime(const uint64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool ModifyRoomRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string ModifyRoomRequest::GetTeacherId() const
{
    return m_teacherId;
}

void ModifyRoomRequest::SetTeacherId(const string& _teacherId)
{
    m_teacherId = _teacherId;
    m_teacherIdHasBeenSet = true;
}

bool ModifyRoomRequest::TeacherIdHasBeenSet() const
{
    return m_teacherIdHasBeenSet;
}

string ModifyRoomRequest::GetName() const
{
    return m_name;
}

void ModifyRoomRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyRoomRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t ModifyRoomRequest::GetResolution() const
{
    return m_resolution;
}

void ModifyRoomRequest::SetResolution(const uint64_t& _resolution)
{
    m_resolution = _resolution;
    m_resolutionHasBeenSet = true;
}

bool ModifyRoomRequest::ResolutionHasBeenSet() const
{
    return m_resolutionHasBeenSet;
}

uint64_t ModifyRoomRequest::GetMaxMicNumber() const
{
    return m_maxMicNumber;
}

void ModifyRoomRequest::SetMaxMicNumber(const uint64_t& _maxMicNumber)
{
    m_maxMicNumber = _maxMicNumber;
    m_maxMicNumberHasBeenSet = true;
}

bool ModifyRoomRequest::MaxMicNumberHasBeenSet() const
{
    return m_maxMicNumberHasBeenSet;
}

uint64_t ModifyRoomRequest::GetAutoMic() const
{
    return m_autoMic;
}

void ModifyRoomRequest::SetAutoMic(const uint64_t& _autoMic)
{
    m_autoMic = _autoMic;
    m_autoMicHasBeenSet = true;
}

bool ModifyRoomRequest::AutoMicHasBeenSet() const
{
    return m_autoMicHasBeenSet;
}

uint64_t ModifyRoomRequest::GetAudioQuality() const
{
    return m_audioQuality;
}

void ModifyRoomRequest::SetAudioQuality(const uint64_t& _audioQuality)
{
    m_audioQuality = _audioQuality;
    m_audioQualityHasBeenSet = true;
}

bool ModifyRoomRequest::AudioQualityHasBeenSet() const
{
    return m_audioQualityHasBeenSet;
}

string ModifyRoomRequest::GetSubType() const
{
    return m_subType;
}

void ModifyRoomRequest::SetSubType(const string& _subType)
{
    m_subType = _subType;
    m_subTypeHasBeenSet = true;
}

bool ModifyRoomRequest::SubTypeHasBeenSet() const
{
    return m_subTypeHasBeenSet;
}

uint64_t ModifyRoomRequest::GetDisableRecord() const
{
    return m_disableRecord;
}

void ModifyRoomRequest::SetDisableRecord(const uint64_t& _disableRecord)
{
    m_disableRecord = _disableRecord;
    m_disableRecordHasBeenSet = true;
}

bool ModifyRoomRequest::DisableRecordHasBeenSet() const
{
    return m_disableRecordHasBeenSet;
}

vector<string> ModifyRoomRequest::GetAssistants() const
{
    return m_assistants;
}

void ModifyRoomRequest::SetAssistants(const vector<string>& _assistants)
{
    m_assistants = _assistants;
    m_assistantsHasBeenSet = true;
}

bool ModifyRoomRequest::AssistantsHasBeenSet() const
{
    return m_assistantsHasBeenSet;
}

string ModifyRoomRequest::GetGroupId() const
{
    return m_groupId;
}

void ModifyRoomRequest::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool ModifyRoomRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}


