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

#include <tencentcloud/trtc/v20190722/model/VoiceConversationConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

VoiceConversationConfig::VoiceConversationConfig() :
    m_userIdHasBeenSet(false),
    m_userSigHasBeenSet(false),
    m_targetUserIdHasBeenSet(false),
    m_tTSPushRoomParamsHasBeenSet(false),
    m_maxIdleTimeHasBeenSet(false),
    m_filterBracketsContentHasBeenSet(false),
    m_subtitleModeHasBeenSet(false),
    m_turnDetectionModeHasBeenSet(false)
{
}

CoreInternalOutcome VoiceConversationConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VoiceConversationConfig.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("UserSig") && !value["UserSig"].IsNull())
    {
        if (!value["UserSig"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VoiceConversationConfig.UserSig` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userSig = string(value["UserSig"].GetString());
        m_userSigHasBeenSet = true;
    }

    if (value.HasMember("TargetUserId") && !value["TargetUserId"].IsNull())
    {
        if (!value["TargetUserId"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VoiceConversationConfig.TargetUserId` is not array type"));

        const rapidjson::Value &tmpValue = value["TargetUserId"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_targetUserId.push_back((*itr).GetString());
        }
        m_targetUserIdHasBeenSet = true;
    }

    if (value.HasMember("TTSPushRoomParams") && !value["TTSPushRoomParams"].IsNull())
    {
        if (!value["TTSPushRoomParams"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `VoiceConversationConfig.TTSPushRoomParams` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tTSPushRoomParams.Deserialize(value["TTSPushRoomParams"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tTSPushRoomParamsHasBeenSet = true;
    }

    if (value.HasMember("MaxIdleTime") && !value["MaxIdleTime"].IsNull())
    {
        if (!value["MaxIdleTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VoiceConversationConfig.MaxIdleTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxIdleTime = value["MaxIdleTime"].GetUint64();
        m_maxIdleTimeHasBeenSet = true;
    }

    if (value.HasMember("FilterBracketsContent") && !value["FilterBracketsContent"].IsNull())
    {
        if (!value["FilterBracketsContent"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VoiceConversationConfig.FilterBracketsContent` is not array type"));

        const rapidjson::Value &tmpValue = value["FilterBracketsContent"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_filterBracketsContent.push_back((*itr).GetUint64());
        }
        m_filterBracketsContentHasBeenSet = true;
    }

    if (value.HasMember("SubtitleMode") && !value["SubtitleMode"].IsNull())
    {
        if (!value["SubtitleMode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VoiceConversationConfig.SubtitleMode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_subtitleMode = value["SubtitleMode"].GetUint64();
        m_subtitleModeHasBeenSet = true;
    }

    if (value.HasMember("TurnDetectionMode") && !value["TurnDetectionMode"].IsNull())
    {
        if (!value["TurnDetectionMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VoiceConversationConfig.TurnDetectionMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_turnDetectionMode = string(value["TurnDetectionMode"].GetString());
        m_turnDetectionModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VoiceConversationConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_userSigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserSig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userSig.c_str(), allocator).Move(), allocator);
    }

    if (m_targetUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetUserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_targetUserId.begin(); itr != m_targetUserId.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_tTSPushRoomParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TTSPushRoomParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tTSPushRoomParams.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_maxIdleTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxIdleTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxIdleTime, allocator);
    }

    if (m_filterBracketsContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterBracketsContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_filterBracketsContent.begin(); itr != m_filterBracketsContent.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_subtitleModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubtitleMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_subtitleMode, allocator);
    }

    if (m_turnDetectionModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TurnDetectionMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_turnDetectionMode.c_str(), allocator).Move(), allocator);
    }

}


string VoiceConversationConfig::GetUserId() const
{
    return m_userId;
}

void VoiceConversationConfig::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool VoiceConversationConfig::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string VoiceConversationConfig::GetUserSig() const
{
    return m_userSig;
}

void VoiceConversationConfig::SetUserSig(const string& _userSig)
{
    m_userSig = _userSig;
    m_userSigHasBeenSet = true;
}

bool VoiceConversationConfig::UserSigHasBeenSet() const
{
    return m_userSigHasBeenSet;
}

vector<string> VoiceConversationConfig::GetTargetUserId() const
{
    return m_targetUserId;
}

void VoiceConversationConfig::SetTargetUserId(const vector<string>& _targetUserId)
{
    m_targetUserId = _targetUserId;
    m_targetUserIdHasBeenSet = true;
}

bool VoiceConversationConfig::TargetUserIdHasBeenSet() const
{
    return m_targetUserIdHasBeenSet;
}

TranscriptionUserInfoParams VoiceConversationConfig::GetTTSPushRoomParams() const
{
    return m_tTSPushRoomParams;
}

void VoiceConversationConfig::SetTTSPushRoomParams(const TranscriptionUserInfoParams& _tTSPushRoomParams)
{
    m_tTSPushRoomParams = _tTSPushRoomParams;
    m_tTSPushRoomParamsHasBeenSet = true;
}

bool VoiceConversationConfig::TTSPushRoomParamsHasBeenSet() const
{
    return m_tTSPushRoomParamsHasBeenSet;
}

uint64_t VoiceConversationConfig::GetMaxIdleTime() const
{
    return m_maxIdleTime;
}

void VoiceConversationConfig::SetMaxIdleTime(const uint64_t& _maxIdleTime)
{
    m_maxIdleTime = _maxIdleTime;
    m_maxIdleTimeHasBeenSet = true;
}

bool VoiceConversationConfig::MaxIdleTimeHasBeenSet() const
{
    return m_maxIdleTimeHasBeenSet;
}

vector<uint64_t> VoiceConversationConfig::GetFilterBracketsContent() const
{
    return m_filterBracketsContent;
}

void VoiceConversationConfig::SetFilterBracketsContent(const vector<uint64_t>& _filterBracketsContent)
{
    m_filterBracketsContent = _filterBracketsContent;
    m_filterBracketsContentHasBeenSet = true;
}

bool VoiceConversationConfig::FilterBracketsContentHasBeenSet() const
{
    return m_filterBracketsContentHasBeenSet;
}

uint64_t VoiceConversationConfig::GetSubtitleMode() const
{
    return m_subtitleMode;
}

void VoiceConversationConfig::SetSubtitleMode(const uint64_t& _subtitleMode)
{
    m_subtitleMode = _subtitleMode;
    m_subtitleModeHasBeenSet = true;
}

bool VoiceConversationConfig::SubtitleModeHasBeenSet() const
{
    return m_subtitleModeHasBeenSet;
}

string VoiceConversationConfig::GetTurnDetectionMode() const
{
    return m_turnDetectionMode;
}

void VoiceConversationConfig::SetTurnDetectionMode(const string& _turnDetectionMode)
{
    m_turnDetectionMode = _turnDetectionMode;
    m_turnDetectionModeHasBeenSet = true;
}

bool VoiceConversationConfig::TurnDetectionModeHasBeenSet() const
{
    return m_turnDetectionModeHasBeenSet;
}

