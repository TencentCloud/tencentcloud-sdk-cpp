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

#include <tencentcloud/tiw/v20190919/model/MixStream.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tiw::V20190919::Model;
using namespace std;

MixStream::MixStream() :
    m_enabledHasBeenSet(false),
    m_disableAudioHasBeenSet(false),
    m_modelIdHasBeenSet(false),
    m_teacherIdHasBeenSet(false),
    m_customHasBeenSet(false)
{
}

CoreInternalOutcome MixStream::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `MixStream.Enabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = value["Enabled"].GetBool();
        m_enabledHasBeenSet = true;
    }

    if (value.HasMember("DisableAudio") && !value["DisableAudio"].IsNull())
    {
        if (!value["DisableAudio"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `MixStream.DisableAudio` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_disableAudio = value["DisableAudio"].GetBool();
        m_disableAudioHasBeenSet = true;
    }

    if (value.HasMember("ModelId") && !value["ModelId"].IsNull())
    {
        if (!value["ModelId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MixStream.ModelId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_modelId = value["ModelId"].GetInt64();
        m_modelIdHasBeenSet = true;
    }

    if (value.HasMember("TeacherId") && !value["TeacherId"].IsNull())
    {
        if (!value["TeacherId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MixStream.TeacherId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_teacherId = string(value["TeacherId"].GetString());
        m_teacherIdHasBeenSet = true;
    }

    if (value.HasMember("Custom") && !value["Custom"].IsNull())
    {
        if (!value["Custom"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MixStream.Custom` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_custom.Deserialize(value["Custom"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_customHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MixStream::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enabled, allocator);
    }

    if (m_disableAudioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisableAudio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_disableAudio, allocator);
    }

    if (m_modelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_modelId, allocator);
    }

    if (m_teacherIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TeacherId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_teacherId.c_str(), allocator).Move(), allocator);
    }

    if (m_customHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Custom";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_custom.ToJsonObject(value[key.c_str()], allocator);
    }

}


bool MixStream::GetEnabled() const
{
    return m_enabled;
}

void MixStream::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool MixStream::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

bool MixStream::GetDisableAudio() const
{
    return m_disableAudio;
}

void MixStream::SetDisableAudio(const bool& _disableAudio)
{
    m_disableAudio = _disableAudio;
    m_disableAudioHasBeenSet = true;
}

bool MixStream::DisableAudioHasBeenSet() const
{
    return m_disableAudioHasBeenSet;
}

int64_t MixStream::GetModelId() const
{
    return m_modelId;
}

void MixStream::SetModelId(const int64_t& _modelId)
{
    m_modelId = _modelId;
    m_modelIdHasBeenSet = true;
}

bool MixStream::ModelIdHasBeenSet() const
{
    return m_modelIdHasBeenSet;
}

string MixStream::GetTeacherId() const
{
    return m_teacherId;
}

void MixStream::SetTeacherId(const string& _teacherId)
{
    m_teacherId = _teacherId;
    m_teacherIdHasBeenSet = true;
}

bool MixStream::TeacherIdHasBeenSet() const
{
    return m_teacherIdHasBeenSet;
}

CustomLayout MixStream::GetCustom() const
{
    return m_custom;
}

void MixStream::SetCustom(const CustomLayout& _custom)
{
    m_custom = _custom;
    m_customHasBeenSet = true;
}

bool MixStream::CustomHasBeenSet() const
{
    return m_customHasBeenSet;
}

