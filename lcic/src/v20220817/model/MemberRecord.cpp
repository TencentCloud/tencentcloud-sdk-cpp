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

#include <tencentcloud/lcic/v20220817/model/MemberRecord.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lcic::V20220817::Model;
using namespace std;

MemberRecord::MemberRecord() :
    m_userIdHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_presentTimeHasBeenSet(false),
    m_cameraHasBeenSet(false),
    m_micHasBeenSet(false),
    m_silenceHasBeenSet(false),
    m_answerQuestionsHasBeenSet(false),
    m_handUpsHasBeenSet(false),
    m_firstJoinTimestampHasBeenSet(false),
    m_lastQuitTimestampHasBeenSet(false),
    m_rewordsHasBeenSet(false)
{
}

CoreInternalOutcome MemberRecord::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MemberRecord.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MemberRecord.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("PresentTime") && !value["PresentTime"].IsNull())
    {
        if (!value["PresentTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MemberRecord.PresentTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_presentTime = value["PresentTime"].GetUint64();
        m_presentTimeHasBeenSet = true;
    }

    if (value.HasMember("Camera") && !value["Camera"].IsNull())
    {
        if (!value["Camera"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MemberRecord.Camera` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_camera = value["Camera"].GetUint64();
        m_cameraHasBeenSet = true;
    }

    if (value.HasMember("Mic") && !value["Mic"].IsNull())
    {
        if (!value["Mic"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MemberRecord.Mic` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_mic = value["Mic"].GetUint64();
        m_micHasBeenSet = true;
    }

    if (value.HasMember("Silence") && !value["Silence"].IsNull())
    {
        if (!value["Silence"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MemberRecord.Silence` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_silence = value["Silence"].GetUint64();
        m_silenceHasBeenSet = true;
    }

    if (value.HasMember("AnswerQuestions") && !value["AnswerQuestions"].IsNull())
    {
        if (!value["AnswerQuestions"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MemberRecord.AnswerQuestions` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_answerQuestions = value["AnswerQuestions"].GetUint64();
        m_answerQuestionsHasBeenSet = true;
    }

    if (value.HasMember("HandUps") && !value["HandUps"].IsNull())
    {
        if (!value["HandUps"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MemberRecord.HandUps` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_handUps = value["HandUps"].GetUint64();
        m_handUpsHasBeenSet = true;
    }

    if (value.HasMember("FirstJoinTimestamp") && !value["FirstJoinTimestamp"].IsNull())
    {
        if (!value["FirstJoinTimestamp"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MemberRecord.FirstJoinTimestamp` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_firstJoinTimestamp = value["FirstJoinTimestamp"].GetUint64();
        m_firstJoinTimestampHasBeenSet = true;
    }

    if (value.HasMember("LastQuitTimestamp") && !value["LastQuitTimestamp"].IsNull())
    {
        if (!value["LastQuitTimestamp"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MemberRecord.LastQuitTimestamp` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_lastQuitTimestamp = value["LastQuitTimestamp"].GetUint64();
        m_lastQuitTimestampHasBeenSet = true;
    }

    if (value.HasMember("Rewords") && !value["Rewords"].IsNull())
    {
        if (!value["Rewords"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MemberRecord.Rewords` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_rewords = value["Rewords"].GetUint64();
        m_rewordsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MemberRecord::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_presentTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PresentTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_presentTime, allocator);
    }

    if (m_cameraHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Camera";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_camera, allocator);
    }

    if (m_micHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mic, allocator);
    }

    if (m_silenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Silence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_silence, allocator);
    }

    if (m_answerQuestionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnswerQuestions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_answerQuestions, allocator);
    }

    if (m_handUpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HandUps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_handUps, allocator);
    }

    if (m_firstJoinTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstJoinTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_firstJoinTimestamp, allocator);
    }

    if (m_lastQuitTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastQuitTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastQuitTimestamp, allocator);
    }

    if (m_rewordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rewords";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rewords, allocator);
    }

}


string MemberRecord::GetUserId() const
{
    return m_userId;
}

void MemberRecord::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool MemberRecord::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string MemberRecord::GetUserName() const
{
    return m_userName;
}

void MemberRecord::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool MemberRecord::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

uint64_t MemberRecord::GetPresentTime() const
{
    return m_presentTime;
}

void MemberRecord::SetPresentTime(const uint64_t& _presentTime)
{
    m_presentTime = _presentTime;
    m_presentTimeHasBeenSet = true;
}

bool MemberRecord::PresentTimeHasBeenSet() const
{
    return m_presentTimeHasBeenSet;
}

uint64_t MemberRecord::GetCamera() const
{
    return m_camera;
}

void MemberRecord::SetCamera(const uint64_t& _camera)
{
    m_camera = _camera;
    m_cameraHasBeenSet = true;
}

bool MemberRecord::CameraHasBeenSet() const
{
    return m_cameraHasBeenSet;
}

uint64_t MemberRecord::GetMic() const
{
    return m_mic;
}

void MemberRecord::SetMic(const uint64_t& _mic)
{
    m_mic = _mic;
    m_micHasBeenSet = true;
}

bool MemberRecord::MicHasBeenSet() const
{
    return m_micHasBeenSet;
}

uint64_t MemberRecord::GetSilence() const
{
    return m_silence;
}

void MemberRecord::SetSilence(const uint64_t& _silence)
{
    m_silence = _silence;
    m_silenceHasBeenSet = true;
}

bool MemberRecord::SilenceHasBeenSet() const
{
    return m_silenceHasBeenSet;
}

uint64_t MemberRecord::GetAnswerQuestions() const
{
    return m_answerQuestions;
}

void MemberRecord::SetAnswerQuestions(const uint64_t& _answerQuestions)
{
    m_answerQuestions = _answerQuestions;
    m_answerQuestionsHasBeenSet = true;
}

bool MemberRecord::AnswerQuestionsHasBeenSet() const
{
    return m_answerQuestionsHasBeenSet;
}

uint64_t MemberRecord::GetHandUps() const
{
    return m_handUps;
}

void MemberRecord::SetHandUps(const uint64_t& _handUps)
{
    m_handUps = _handUps;
    m_handUpsHasBeenSet = true;
}

bool MemberRecord::HandUpsHasBeenSet() const
{
    return m_handUpsHasBeenSet;
}

uint64_t MemberRecord::GetFirstJoinTimestamp() const
{
    return m_firstJoinTimestamp;
}

void MemberRecord::SetFirstJoinTimestamp(const uint64_t& _firstJoinTimestamp)
{
    m_firstJoinTimestamp = _firstJoinTimestamp;
    m_firstJoinTimestampHasBeenSet = true;
}

bool MemberRecord::FirstJoinTimestampHasBeenSet() const
{
    return m_firstJoinTimestampHasBeenSet;
}

uint64_t MemberRecord::GetLastQuitTimestamp() const
{
    return m_lastQuitTimestamp;
}

void MemberRecord::SetLastQuitTimestamp(const uint64_t& _lastQuitTimestamp)
{
    m_lastQuitTimestamp = _lastQuitTimestamp;
    m_lastQuitTimestampHasBeenSet = true;
}

bool MemberRecord::LastQuitTimestampHasBeenSet() const
{
    return m_lastQuitTimestampHasBeenSet;
}

uint64_t MemberRecord::GetRewords() const
{
    return m_rewords;
}

void MemberRecord::SetRewords(const uint64_t& _rewords)
{
    m_rewords = _rewords;
    m_rewordsHasBeenSet = true;
}

bool MemberRecord::RewordsHasBeenSet() const
{
    return m_rewordsHasBeenSet;
}

