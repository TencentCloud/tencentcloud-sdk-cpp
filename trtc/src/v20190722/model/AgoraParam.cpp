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

#include <tencentcloud/trtc/v20190722/model/AgoraParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

AgoraParam::AgoraParam() :
    m_appIdHasBeenSet(false),
    m_channelHasBeenSet(false),
    m_channelProfileHasBeenSet(false),
    m_tokenHasBeenSet(false),
    m_uidHasBeenSet(false),
    m_trustedUserIdListHasBeenSet(false),
    m_untrustedUserIdListHasBeenSet(false)
{
}

CoreInternalOutcome AgoraParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgoraParam.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("Channel") && !value["Channel"].IsNull())
    {
        if (!value["Channel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgoraParam.Channel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channel = string(value["Channel"].GetString());
        m_channelHasBeenSet = true;
    }

    if (value.HasMember("ChannelProfile") && !value["ChannelProfile"].IsNull())
    {
        if (!value["ChannelProfile"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AgoraParam.ChannelProfile` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_channelProfile = value["ChannelProfile"].GetUint64();
        m_channelProfileHasBeenSet = true;
    }

    if (value.HasMember("Token") && !value["Token"].IsNull())
    {
        if (!value["Token"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgoraParam.Token` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_token = string(value["Token"].GetString());
        m_tokenHasBeenSet = true;
    }

    if (value.HasMember("Uid") && !value["Uid"].IsNull())
    {
        if (!value["Uid"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AgoraParam.Uid` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_uid = value["Uid"].GetUint64();
        m_uidHasBeenSet = true;
    }

    if (value.HasMember("TrustedUserIdList") && !value["TrustedUserIdList"].IsNull())
    {
        if (!value["TrustedUserIdList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AgoraParam.TrustedUserIdList` is not array type"));

        const rapidjson::Value &tmpValue = value["TrustedUserIdList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_trustedUserIdList.push_back((*itr).GetUint64());
        }
        m_trustedUserIdListHasBeenSet = true;
    }

    if (value.HasMember("UntrustedUserIdList") && !value["UntrustedUserIdList"].IsNull())
    {
        if (!value["UntrustedUserIdList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AgoraParam.UntrustedUserIdList` is not array type"));

        const rapidjson::Value &tmpValue = value["UntrustedUserIdList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_untrustedUserIdList.push_back((*itr).GetUint64());
        }
        m_untrustedUserIdListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AgoraParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_channelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Channel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channel.c_str(), allocator).Move(), allocator);
    }

    if (m_channelProfileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelProfile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_channelProfile, allocator);
    }

    if (m_tokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Token";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_token.c_str(), allocator).Move(), allocator);
    }

    if (m_uidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_uid, allocator);
    }

    if (m_trustedUserIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrustedUserIdList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_trustedUserIdList.begin(); itr != m_trustedUserIdList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_untrustedUserIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UntrustedUserIdList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_untrustedUserIdList.begin(); itr != m_untrustedUserIdList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

}


string AgoraParam::GetAppId() const
{
    return m_appId;
}

void AgoraParam::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool AgoraParam::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string AgoraParam::GetChannel() const
{
    return m_channel;
}

void AgoraParam::SetChannel(const string& _channel)
{
    m_channel = _channel;
    m_channelHasBeenSet = true;
}

bool AgoraParam::ChannelHasBeenSet() const
{
    return m_channelHasBeenSet;
}

uint64_t AgoraParam::GetChannelProfile() const
{
    return m_channelProfile;
}

void AgoraParam::SetChannelProfile(const uint64_t& _channelProfile)
{
    m_channelProfile = _channelProfile;
    m_channelProfileHasBeenSet = true;
}

bool AgoraParam::ChannelProfileHasBeenSet() const
{
    return m_channelProfileHasBeenSet;
}

string AgoraParam::GetToken() const
{
    return m_token;
}

void AgoraParam::SetToken(const string& _token)
{
    m_token = _token;
    m_tokenHasBeenSet = true;
}

bool AgoraParam::TokenHasBeenSet() const
{
    return m_tokenHasBeenSet;
}

uint64_t AgoraParam::GetUid() const
{
    return m_uid;
}

void AgoraParam::SetUid(const uint64_t& _uid)
{
    m_uid = _uid;
    m_uidHasBeenSet = true;
}

bool AgoraParam::UidHasBeenSet() const
{
    return m_uidHasBeenSet;
}

vector<uint64_t> AgoraParam::GetTrustedUserIdList() const
{
    return m_trustedUserIdList;
}

void AgoraParam::SetTrustedUserIdList(const vector<uint64_t>& _trustedUserIdList)
{
    m_trustedUserIdList = _trustedUserIdList;
    m_trustedUserIdListHasBeenSet = true;
}

bool AgoraParam::TrustedUserIdListHasBeenSet() const
{
    return m_trustedUserIdListHasBeenSet;
}

vector<uint64_t> AgoraParam::GetUntrustedUserIdList() const
{
    return m_untrustedUserIdList;
}

void AgoraParam::SetUntrustedUserIdList(const vector<uint64_t>& _untrustedUserIdList)
{
    m_untrustedUserIdList = _untrustedUserIdList;
    m_untrustedUserIdListHasBeenSet = true;
}

bool AgoraParam::UntrustedUserIdListHasBeenSet() const
{
    return m_untrustedUserIdListHasBeenSet;
}

