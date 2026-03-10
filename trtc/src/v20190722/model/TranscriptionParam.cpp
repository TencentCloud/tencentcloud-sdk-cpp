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

#include <tencentcloud/trtc/v20190722/model/TranscriptionParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

TranscriptionParam::TranscriptionParam() :
    m_userIdHasBeenSet(false),
    m_userSigHasBeenSet(false),
    m_subscribeListHasBeenSet(false),
    m_unSubscribeListHasBeenSet(false),
    m_maxIdleTimeHasBeenSet(false),
    m_sendCustomModeHasBeenSet(false)
{
}

CoreInternalOutcome TranscriptionParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TranscriptionParam.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("UserSig") && !value["UserSig"].IsNull())
    {
        if (!value["UserSig"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TranscriptionParam.UserSig` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userSig = string(value["UserSig"].GetString());
        m_userSigHasBeenSet = true;
    }

    if (value.HasMember("SubscribeList") && !value["SubscribeList"].IsNull())
    {
        if (!value["SubscribeList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TranscriptionParam.SubscribeList` is not array type"));

        const rapidjson::Value &tmpValue = value["SubscribeList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TranscriptionUserInfoParams item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_subscribeList.push_back(item);
        }
        m_subscribeListHasBeenSet = true;
    }

    if (value.HasMember("UnSubscribeList") && !value["UnSubscribeList"].IsNull())
    {
        if (!value["UnSubscribeList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TranscriptionParam.UnSubscribeList` is not array type"));

        const rapidjson::Value &tmpValue = value["UnSubscribeList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TranscriptionUserInfoParams item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_unSubscribeList.push_back(item);
        }
        m_unSubscribeListHasBeenSet = true;
    }

    if (value.HasMember("MaxIdleTime") && !value["MaxIdleTime"].IsNull())
    {
        if (!value["MaxIdleTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TranscriptionParam.MaxIdleTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxIdleTime = value["MaxIdleTime"].GetUint64();
        m_maxIdleTimeHasBeenSet = true;
    }

    if (value.HasMember("SendCustomMode") && !value["SendCustomMode"].IsNull())
    {
        if (!value["SendCustomMode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TranscriptionParam.SendCustomMode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sendCustomMode = value["SendCustomMode"].GetUint64();
        m_sendCustomModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TranscriptionParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_subscribeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubscribeList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_subscribeList.begin(); itr != m_subscribeList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_unSubscribeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnSubscribeList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_unSubscribeList.begin(); itr != m_unSubscribeList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_maxIdleTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxIdleTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxIdleTime, allocator);
    }

    if (m_sendCustomModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SendCustomMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sendCustomMode, allocator);
    }

}


string TranscriptionParam::GetUserId() const
{
    return m_userId;
}

void TranscriptionParam::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool TranscriptionParam::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string TranscriptionParam::GetUserSig() const
{
    return m_userSig;
}

void TranscriptionParam::SetUserSig(const string& _userSig)
{
    m_userSig = _userSig;
    m_userSigHasBeenSet = true;
}

bool TranscriptionParam::UserSigHasBeenSet() const
{
    return m_userSigHasBeenSet;
}

vector<TranscriptionUserInfoParams> TranscriptionParam::GetSubscribeList() const
{
    return m_subscribeList;
}

void TranscriptionParam::SetSubscribeList(const vector<TranscriptionUserInfoParams>& _subscribeList)
{
    m_subscribeList = _subscribeList;
    m_subscribeListHasBeenSet = true;
}

bool TranscriptionParam::SubscribeListHasBeenSet() const
{
    return m_subscribeListHasBeenSet;
}

vector<TranscriptionUserInfoParams> TranscriptionParam::GetUnSubscribeList() const
{
    return m_unSubscribeList;
}

void TranscriptionParam::SetUnSubscribeList(const vector<TranscriptionUserInfoParams>& _unSubscribeList)
{
    m_unSubscribeList = _unSubscribeList;
    m_unSubscribeListHasBeenSet = true;
}

bool TranscriptionParam::UnSubscribeListHasBeenSet() const
{
    return m_unSubscribeListHasBeenSet;
}

uint64_t TranscriptionParam::GetMaxIdleTime() const
{
    return m_maxIdleTime;
}

void TranscriptionParam::SetMaxIdleTime(const uint64_t& _maxIdleTime)
{
    m_maxIdleTime = _maxIdleTime;
    m_maxIdleTimeHasBeenSet = true;
}

bool TranscriptionParam::MaxIdleTimeHasBeenSet() const
{
    return m_maxIdleTimeHasBeenSet;
}

uint64_t TranscriptionParam::GetSendCustomMode() const
{
    return m_sendCustomMode;
}

void TranscriptionParam::SetSendCustomMode(const uint64_t& _sendCustomMode)
{
    m_sendCustomMode = _sendCustomMode;
    m_sendCustomModeHasBeenSet = true;
}

bool TranscriptionParam::SendCustomModeHasBeenSet() const
{
    return m_sendCustomModeHasBeenSet;
}

