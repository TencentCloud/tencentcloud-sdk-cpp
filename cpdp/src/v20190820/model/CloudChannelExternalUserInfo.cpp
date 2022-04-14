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

#include <tencentcloud/cpdp/v20190820/model/CloudChannelExternalUserInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

CloudChannelExternalUserInfo::CloudChannelExternalUserInfo() :
    m_channelExternalUserTypeHasBeenSet(false),
    m_channelExternalUserIdHasBeenSet(false)
{
}

CoreInternalOutcome CloudChannelExternalUserInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ChannelExternalUserType") && !value["ChannelExternalUserType"].IsNull())
    {
        if (!value["ChannelExternalUserType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudChannelExternalUserInfo.ChannelExternalUserType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelExternalUserType = string(value["ChannelExternalUserType"].GetString());
        m_channelExternalUserTypeHasBeenSet = true;
    }

    if (value.HasMember("ChannelExternalUserId") && !value["ChannelExternalUserId"].IsNull())
    {
        if (!value["ChannelExternalUserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudChannelExternalUserInfo.ChannelExternalUserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelExternalUserId = string(value["ChannelExternalUserId"].GetString());
        m_channelExternalUserIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudChannelExternalUserInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_channelExternalUserTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelExternalUserType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelExternalUserType.c_str(), allocator).Move(), allocator);
    }

    if (m_channelExternalUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelExternalUserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelExternalUserId.c_str(), allocator).Move(), allocator);
    }

}


string CloudChannelExternalUserInfo::GetChannelExternalUserType() const
{
    return m_channelExternalUserType;
}

void CloudChannelExternalUserInfo::SetChannelExternalUserType(const string& _channelExternalUserType)
{
    m_channelExternalUserType = _channelExternalUserType;
    m_channelExternalUserTypeHasBeenSet = true;
}

bool CloudChannelExternalUserInfo::ChannelExternalUserTypeHasBeenSet() const
{
    return m_channelExternalUserTypeHasBeenSet;
}

string CloudChannelExternalUserInfo::GetChannelExternalUserId() const
{
    return m_channelExternalUserId;
}

void CloudChannelExternalUserInfo::SetChannelExternalUserId(const string& _channelExternalUserId)
{
    m_channelExternalUserId = _channelExternalUserId;
    m_channelExternalUserIdHasBeenSet = true;
}

bool CloudChannelExternalUserInfo::ChannelExternalUserIdHasBeenSet() const
{
    return m_channelExternalUserIdHasBeenSet;
}

