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

#include <tencentcloud/taf/v20200210/model/ManagePortraitRiskInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Taf::V20200210::Model;
using namespace std;

ManagePortraitRiskInput::ManagePortraitRiskInput() :
    m_postTimeHasBeenSet(false),
    m_userIpHasBeenSet(false),
    m_channelHasBeenSet(false)
{
}

CoreInternalOutcome ManagePortraitRiskInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PostTime") && !value["PostTime"].IsNull())
    {
        if (!value["PostTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ManagePortraitRiskInput.PostTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_postTime = value["PostTime"].GetInt64();
        m_postTimeHasBeenSet = true;
    }

    if (value.HasMember("UserIp") && !value["UserIp"].IsNull())
    {
        if (!value["UserIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ManagePortraitRiskInput.UserIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userIp = string(value["UserIp"].GetString());
        m_userIpHasBeenSet = true;
    }

    if (value.HasMember("Channel") && !value["Channel"].IsNull())
    {
        if (!value["Channel"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ManagePortraitRiskInput.Channel` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_channel = value["Channel"].GetInt64();
        m_channelHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ManagePortraitRiskInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_postTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PostTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_postTime, allocator);
    }

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


int64_t ManagePortraitRiskInput::GetPostTime() const
{
    return m_postTime;
}

void ManagePortraitRiskInput::SetPostTime(const int64_t& _postTime)
{
    m_postTime = _postTime;
    m_postTimeHasBeenSet = true;
}

bool ManagePortraitRiskInput::PostTimeHasBeenSet() const
{
    return m_postTimeHasBeenSet;
}

string ManagePortraitRiskInput::GetUserIp() const
{
    return m_userIp;
}

void ManagePortraitRiskInput::SetUserIp(const string& _userIp)
{
    m_userIp = _userIp;
    m_userIpHasBeenSet = true;
}

bool ManagePortraitRiskInput::UserIpHasBeenSet() const
{
    return m_userIpHasBeenSet;
}

int64_t ManagePortraitRiskInput::GetChannel() const
{
    return m_channel;
}

void ManagePortraitRiskInput::SetChannel(const int64_t& _channel)
{
    m_channel = _channel;
    m_channelHasBeenSet = true;
}

bool ManagePortraitRiskInput::ChannelHasBeenSet() const
{
    return m_channelHasBeenSet;
}

