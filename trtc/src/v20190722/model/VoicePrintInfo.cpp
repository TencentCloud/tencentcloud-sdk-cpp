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

#include <tencentcloud/trtc/v20190722/model/VoicePrintInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

VoicePrintInfo::VoicePrintInfo() :
    m_voicePrintIdHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_voicePrintMetaInfoHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_audioFormatHasBeenSet(false),
    m_audioNameHasBeenSet(false),
    m_reqTimestampHasBeenSet(false)
{
}

CoreInternalOutcome VoicePrintInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VoicePrintId") && !value["VoicePrintId"].IsNull())
    {
        if (!value["VoicePrintId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VoicePrintInfo.VoicePrintId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_voicePrintId = string(value["VoicePrintId"].GetString());
        m_voicePrintIdHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VoicePrintInfo.AppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetUint64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("VoicePrintMetaInfo") && !value["VoicePrintMetaInfo"].IsNull())
    {
        if (!value["VoicePrintMetaInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VoicePrintInfo.VoicePrintMetaInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_voicePrintMetaInfo = string(value["VoicePrintMetaInfo"].GetString());
        m_voicePrintMetaInfoHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VoicePrintInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VoicePrintInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("AudioFormat") && !value["AudioFormat"].IsNull())
    {
        if (!value["AudioFormat"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VoicePrintInfo.AudioFormat` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_audioFormat = value["AudioFormat"].GetUint64();
        m_audioFormatHasBeenSet = true;
    }

    if (value.HasMember("AudioName") && !value["AudioName"].IsNull())
    {
        if (!value["AudioName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VoicePrintInfo.AudioName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_audioName = string(value["AudioName"].GetString());
        m_audioNameHasBeenSet = true;
    }

    if (value.HasMember("ReqTimestamp") && !value["ReqTimestamp"].IsNull())
    {
        if (!value["ReqTimestamp"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VoicePrintInfo.ReqTimestamp` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_reqTimestamp = value["ReqTimestamp"].GetUint64();
        m_reqTimestampHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VoicePrintInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_voicePrintIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoicePrintId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_voicePrintId.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_voicePrintMetaInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoicePrintMetaInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_voicePrintMetaInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_audioFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioFormat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_audioFormat, allocator);
    }

    if (m_audioNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_audioName.c_str(), allocator).Move(), allocator);
    }

    if (m_reqTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReqTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_reqTimestamp, allocator);
    }

}


string VoicePrintInfo::GetVoicePrintId() const
{
    return m_voicePrintId;
}

void VoicePrintInfo::SetVoicePrintId(const string& _voicePrintId)
{
    m_voicePrintId = _voicePrintId;
    m_voicePrintIdHasBeenSet = true;
}

bool VoicePrintInfo::VoicePrintIdHasBeenSet() const
{
    return m_voicePrintIdHasBeenSet;
}

uint64_t VoicePrintInfo::GetAppId() const
{
    return m_appId;
}

void VoicePrintInfo::SetAppId(const uint64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool VoicePrintInfo::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string VoicePrintInfo::GetVoicePrintMetaInfo() const
{
    return m_voicePrintMetaInfo;
}

void VoicePrintInfo::SetVoicePrintMetaInfo(const string& _voicePrintMetaInfo)
{
    m_voicePrintMetaInfo = _voicePrintMetaInfo;
    m_voicePrintMetaInfoHasBeenSet = true;
}

bool VoicePrintInfo::VoicePrintMetaInfoHasBeenSet() const
{
    return m_voicePrintMetaInfoHasBeenSet;
}

string VoicePrintInfo::GetCreateTime() const
{
    return m_createTime;
}

void VoicePrintInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool VoicePrintInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string VoicePrintInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void VoicePrintInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool VoicePrintInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

uint64_t VoicePrintInfo::GetAudioFormat() const
{
    return m_audioFormat;
}

void VoicePrintInfo::SetAudioFormat(const uint64_t& _audioFormat)
{
    m_audioFormat = _audioFormat;
    m_audioFormatHasBeenSet = true;
}

bool VoicePrintInfo::AudioFormatHasBeenSet() const
{
    return m_audioFormatHasBeenSet;
}

string VoicePrintInfo::GetAudioName() const
{
    return m_audioName;
}

void VoicePrintInfo::SetAudioName(const string& _audioName)
{
    m_audioName = _audioName;
    m_audioNameHasBeenSet = true;
}

bool VoicePrintInfo::AudioNameHasBeenSet() const
{
    return m_audioNameHasBeenSet;
}

uint64_t VoicePrintInfo::GetReqTimestamp() const
{
    return m_reqTimestamp;
}

void VoicePrintInfo::SetReqTimestamp(const uint64_t& _reqTimestamp)
{
    m_reqTimestamp = _reqTimestamp;
    m_reqTimestampHasBeenSet = true;
}

bool VoicePrintInfo::ReqTimestampHasBeenSet() const
{
    return m_reqTimestampHasBeenSet;
}

