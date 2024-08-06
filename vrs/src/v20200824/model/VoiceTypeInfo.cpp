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

#include <tencentcloud/vrs/v20200824/model/VoiceTypeInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vrs::V20200824::Model;
using namespace std;

VoiceTypeInfo::VoiceTypeInfo() :
    m_voiceTypeHasBeenSet(false),
    m_voiceNameHasBeenSet(false),
    m_voiceGenderHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_taskIDHasBeenSet(false),
    m_dateCreatedHasBeenSet(false),
    m_isDeployedHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_fastVoiceTypeHasBeenSet(false)
{
}

CoreInternalOutcome VoiceTypeInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VoiceType") && !value["VoiceType"].IsNull())
    {
        if (!value["VoiceType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VoiceTypeInfo.VoiceType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_voiceType = value["VoiceType"].GetInt64();
        m_voiceTypeHasBeenSet = true;
    }

    if (value.HasMember("VoiceName") && !value["VoiceName"].IsNull())
    {
        if (!value["VoiceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VoiceTypeInfo.VoiceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_voiceName = string(value["VoiceName"].GetString());
        m_voiceNameHasBeenSet = true;
    }

    if (value.HasMember("VoiceGender") && !value["VoiceGender"].IsNull())
    {
        if (!value["VoiceGender"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VoiceTypeInfo.VoiceGender` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_voiceGender = value["VoiceGender"].GetInt64();
        m_voiceGenderHasBeenSet = true;
    }

    if (value.HasMember("TaskType") && !value["TaskType"].IsNull())
    {
        if (!value["TaskType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VoiceTypeInfo.TaskType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskType = value["TaskType"].GetInt64();
        m_taskTypeHasBeenSet = true;
    }

    if (value.HasMember("TaskID") && !value["TaskID"].IsNull())
    {
        if (!value["TaskID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VoiceTypeInfo.TaskID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskID = string(value["TaskID"].GetString());
        m_taskIDHasBeenSet = true;
    }

    if (value.HasMember("DateCreated") && !value["DateCreated"].IsNull())
    {
        if (!value["DateCreated"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VoiceTypeInfo.DateCreated` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dateCreated = string(value["DateCreated"].GetString());
        m_dateCreatedHasBeenSet = true;
    }

    if (value.HasMember("IsDeployed") && !value["IsDeployed"].IsNull())
    {
        if (!value["IsDeployed"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `VoiceTypeInfo.IsDeployed` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isDeployed = value["IsDeployed"].GetBool();
        m_isDeployedHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VoiceTypeInfo.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("FastVoiceType") && !value["FastVoiceType"].IsNull())
    {
        if (!value["FastVoiceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VoiceTypeInfo.FastVoiceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fastVoiceType = string(value["FastVoiceType"].GetString());
        m_fastVoiceTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VoiceTypeInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_voiceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoiceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_voiceType, allocator);
    }

    if (m_voiceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoiceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_voiceName.c_str(), allocator).Move(), allocator);
    }

    if (m_voiceGenderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoiceGender";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_voiceGender, allocator);
    }

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskType, allocator);
    }

    if (m_taskIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskID.c_str(), allocator).Move(), allocator);
    }

    if (m_dateCreatedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DateCreated";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dateCreated.c_str(), allocator).Move(), allocator);
    }

    if (m_isDeployedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDeployed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDeployed, allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_fastVoiceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FastVoiceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fastVoiceType.c_str(), allocator).Move(), allocator);
    }

}


int64_t VoiceTypeInfo::GetVoiceType() const
{
    return m_voiceType;
}

void VoiceTypeInfo::SetVoiceType(const int64_t& _voiceType)
{
    m_voiceType = _voiceType;
    m_voiceTypeHasBeenSet = true;
}

bool VoiceTypeInfo::VoiceTypeHasBeenSet() const
{
    return m_voiceTypeHasBeenSet;
}

string VoiceTypeInfo::GetVoiceName() const
{
    return m_voiceName;
}

void VoiceTypeInfo::SetVoiceName(const string& _voiceName)
{
    m_voiceName = _voiceName;
    m_voiceNameHasBeenSet = true;
}

bool VoiceTypeInfo::VoiceNameHasBeenSet() const
{
    return m_voiceNameHasBeenSet;
}

int64_t VoiceTypeInfo::GetVoiceGender() const
{
    return m_voiceGender;
}

void VoiceTypeInfo::SetVoiceGender(const int64_t& _voiceGender)
{
    m_voiceGender = _voiceGender;
    m_voiceGenderHasBeenSet = true;
}

bool VoiceTypeInfo::VoiceGenderHasBeenSet() const
{
    return m_voiceGenderHasBeenSet;
}

int64_t VoiceTypeInfo::GetTaskType() const
{
    return m_taskType;
}

void VoiceTypeInfo::SetTaskType(const int64_t& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool VoiceTypeInfo::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

string VoiceTypeInfo::GetTaskID() const
{
    return m_taskID;
}

void VoiceTypeInfo::SetTaskID(const string& _taskID)
{
    m_taskID = _taskID;
    m_taskIDHasBeenSet = true;
}

bool VoiceTypeInfo::TaskIDHasBeenSet() const
{
    return m_taskIDHasBeenSet;
}

string VoiceTypeInfo::GetDateCreated() const
{
    return m_dateCreated;
}

void VoiceTypeInfo::SetDateCreated(const string& _dateCreated)
{
    m_dateCreated = _dateCreated;
    m_dateCreatedHasBeenSet = true;
}

bool VoiceTypeInfo::DateCreatedHasBeenSet() const
{
    return m_dateCreatedHasBeenSet;
}

bool VoiceTypeInfo::GetIsDeployed() const
{
    return m_isDeployed;
}

void VoiceTypeInfo::SetIsDeployed(const bool& _isDeployed)
{
    m_isDeployed = _isDeployed;
    m_isDeployedHasBeenSet = true;
}

bool VoiceTypeInfo::IsDeployedHasBeenSet() const
{
    return m_isDeployedHasBeenSet;
}

string VoiceTypeInfo::GetExpireTime() const
{
    return m_expireTime;
}

void VoiceTypeInfo::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool VoiceTypeInfo::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string VoiceTypeInfo::GetFastVoiceType() const
{
    return m_fastVoiceType;
}

void VoiceTypeInfo::SetFastVoiceType(const string& _fastVoiceType)
{
    m_fastVoiceType = _fastVoiceType;
    m_fastVoiceTypeHasBeenSet = true;
}

bool VoiceTypeInfo::FastVoiceTypeHasBeenSet() const
{
    return m_fastVoiceTypeHasBeenSet;
}

