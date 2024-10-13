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

#include <tencentcloud/trtc/v20190722/model/TranscriptionParams.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

TranscriptionParams::TranscriptionParams() :
    m_userIdHasBeenSet(false),
    m_userSigHasBeenSet(false),
    m_iMAdminUserIdHasBeenSet(false),
    m_iMAdminUserSigHasBeenSet(false),
    m_maxIdleTimeHasBeenSet(false),
    m_transcriptionModeHasBeenSet(false),
    m_targetUserIdHasBeenSet(false),
    m_targetUserIdListHasBeenSet(false)
{
}

CoreInternalOutcome TranscriptionParams::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TranscriptionParams.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("UserSig") && !value["UserSig"].IsNull())
    {
        if (!value["UserSig"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TranscriptionParams.UserSig` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userSig = string(value["UserSig"].GetString());
        m_userSigHasBeenSet = true;
    }

    if (value.HasMember("IMAdminUserId") && !value["IMAdminUserId"].IsNull())
    {
        if (!value["IMAdminUserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TranscriptionParams.IMAdminUserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iMAdminUserId = string(value["IMAdminUserId"].GetString());
        m_iMAdminUserIdHasBeenSet = true;
    }

    if (value.HasMember("IMAdminUserSig") && !value["IMAdminUserSig"].IsNull())
    {
        if (!value["IMAdminUserSig"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TranscriptionParams.IMAdminUserSig` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iMAdminUserSig = string(value["IMAdminUserSig"].GetString());
        m_iMAdminUserSigHasBeenSet = true;
    }

    if (value.HasMember("MaxIdleTime") && !value["MaxIdleTime"].IsNull())
    {
        if (!value["MaxIdleTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TranscriptionParams.MaxIdleTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxIdleTime = value["MaxIdleTime"].GetUint64();
        m_maxIdleTimeHasBeenSet = true;
    }

    if (value.HasMember("TranscriptionMode") && !value["TranscriptionMode"].IsNull())
    {
        if (!value["TranscriptionMode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TranscriptionParams.TranscriptionMode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_transcriptionMode = value["TranscriptionMode"].GetUint64();
        m_transcriptionModeHasBeenSet = true;
    }

    if (value.HasMember("TargetUserId") && !value["TargetUserId"].IsNull())
    {
        if (!value["TargetUserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TranscriptionParams.TargetUserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetUserId = string(value["TargetUserId"].GetString());
        m_targetUserIdHasBeenSet = true;
    }

    if (value.HasMember("TargetUserIdList") && !value["TargetUserIdList"].IsNull())
    {
        if (!value["TargetUserIdList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TranscriptionParams.TargetUserIdList` is not array type"));

        const rapidjson::Value &tmpValue = value["TargetUserIdList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_targetUserIdList.push_back((*itr).GetString());
        }
        m_targetUserIdListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TranscriptionParams::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_iMAdminUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IMAdminUserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iMAdminUserId.c_str(), allocator).Move(), allocator);
    }

    if (m_iMAdminUserSigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IMAdminUserSig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iMAdminUserSig.c_str(), allocator).Move(), allocator);
    }

    if (m_maxIdleTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxIdleTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxIdleTime, allocator);
    }

    if (m_transcriptionModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TranscriptionMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_transcriptionMode, allocator);
    }

    if (m_targetUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetUserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetUserId.c_str(), allocator).Move(), allocator);
    }

    if (m_targetUserIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetUserIdList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_targetUserIdList.begin(); itr != m_targetUserIdList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string TranscriptionParams::GetUserId() const
{
    return m_userId;
}

void TranscriptionParams::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool TranscriptionParams::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string TranscriptionParams::GetUserSig() const
{
    return m_userSig;
}

void TranscriptionParams::SetUserSig(const string& _userSig)
{
    m_userSig = _userSig;
    m_userSigHasBeenSet = true;
}

bool TranscriptionParams::UserSigHasBeenSet() const
{
    return m_userSigHasBeenSet;
}

string TranscriptionParams::GetIMAdminUserId() const
{
    return m_iMAdminUserId;
}

void TranscriptionParams::SetIMAdminUserId(const string& _iMAdminUserId)
{
    m_iMAdminUserId = _iMAdminUserId;
    m_iMAdminUserIdHasBeenSet = true;
}

bool TranscriptionParams::IMAdminUserIdHasBeenSet() const
{
    return m_iMAdminUserIdHasBeenSet;
}

string TranscriptionParams::GetIMAdminUserSig() const
{
    return m_iMAdminUserSig;
}

void TranscriptionParams::SetIMAdminUserSig(const string& _iMAdminUserSig)
{
    m_iMAdminUserSig = _iMAdminUserSig;
    m_iMAdminUserSigHasBeenSet = true;
}

bool TranscriptionParams::IMAdminUserSigHasBeenSet() const
{
    return m_iMAdminUserSigHasBeenSet;
}

uint64_t TranscriptionParams::GetMaxIdleTime() const
{
    return m_maxIdleTime;
}

void TranscriptionParams::SetMaxIdleTime(const uint64_t& _maxIdleTime)
{
    m_maxIdleTime = _maxIdleTime;
    m_maxIdleTimeHasBeenSet = true;
}

bool TranscriptionParams::MaxIdleTimeHasBeenSet() const
{
    return m_maxIdleTimeHasBeenSet;
}

uint64_t TranscriptionParams::GetTranscriptionMode() const
{
    return m_transcriptionMode;
}

void TranscriptionParams::SetTranscriptionMode(const uint64_t& _transcriptionMode)
{
    m_transcriptionMode = _transcriptionMode;
    m_transcriptionModeHasBeenSet = true;
}

bool TranscriptionParams::TranscriptionModeHasBeenSet() const
{
    return m_transcriptionModeHasBeenSet;
}

string TranscriptionParams::GetTargetUserId() const
{
    return m_targetUserId;
}

void TranscriptionParams::SetTargetUserId(const string& _targetUserId)
{
    m_targetUserId = _targetUserId;
    m_targetUserIdHasBeenSet = true;
}

bool TranscriptionParams::TargetUserIdHasBeenSet() const
{
    return m_targetUserIdHasBeenSet;
}

vector<string> TranscriptionParams::GetTargetUserIdList() const
{
    return m_targetUserIdList;
}

void TranscriptionParams::SetTargetUserIdList(const vector<string>& _targetUserIdList)
{
    m_targetUserIdList = _targetUserIdList;
    m_targetUserIdListHasBeenSet = true;
}

bool TranscriptionParams::TargetUserIdListHasBeenSet() const
{
    return m_targetUserIdListHasBeenSet;
}

