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

#include <tencentcloud/rce/v20250425/model/ManageIPPortraitRiskInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rce::V20250425::Model;
using namespace std;

ManageIPPortraitRiskInput::ManageIPPortraitRiskInput() :
    m_userIpHasBeenSet(false),
    m_channelHasBeenSet(false)
{
}

CoreInternalOutcome ManageIPPortraitRiskInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserIp") && !value["UserIp"].IsNull())
    {
        if (!value["UserIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ManageIPPortraitRiskInput.UserIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userIp = string(value["UserIp"].GetString());
        m_userIpHasBeenSet = true;
    }

    if (value.HasMember("Channel") && !value["Channel"].IsNull())
    {
        if (!value["Channel"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ManageIPPortraitRiskInput.Channel` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_channel = value["Channel"].GetInt64();
        m_channelHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ManageIPPortraitRiskInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userIp.c_str(), allocator).Move(), allocator);
    }

    if (m_channelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Channel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_channel, allocator);
    }

}


string ManageIPPortraitRiskInput::GetUserIp() const
{
    return m_userIp;
}

void ManageIPPortraitRiskInput::SetUserIp(const string& _userIp)
{
    m_userIp = _userIp;
    m_userIpHasBeenSet = true;
}

bool ManageIPPortraitRiskInput::UserIpHasBeenSet() const
{
    return m_userIpHasBeenSet;
}

int64_t ManageIPPortraitRiskInput::GetChannel() const
{
    return m_channel;
}

void ManageIPPortraitRiskInput::SetChannel(const int64_t& _channel)
{
    m_channel = _channel;
    m_channelHasBeenSet = true;
}

bool ManageIPPortraitRiskInput::ChannelHasBeenSet() const
{
    return m_channelHasBeenSet;
}

