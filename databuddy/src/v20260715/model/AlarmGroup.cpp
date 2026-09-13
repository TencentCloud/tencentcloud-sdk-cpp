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

#include <tencentcloud/databuddy/v20260715/model/AlarmGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

AlarmGroup::AlarmGroup() :
    m_channelIdHasBeenSet(false),
    m_channelNameHasBeenSet(false),
    m_isEmailChannelHasBeenSet(false),
    m_alarmConditionsHasBeenSet(false),
    m_channelTypeHasBeenSet(false)
{
}

CoreInternalOutcome AlarmGroup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ChannelId") && !value["ChannelId"].IsNull())
    {
        if (!value["ChannelId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmGroup.ChannelId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelId = string(value["ChannelId"].GetString());
        m_channelIdHasBeenSet = true;
    }

    if (value.HasMember("ChannelName") && !value["ChannelName"].IsNull())
    {
        if (!value["ChannelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmGroup.ChannelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelName = string(value["ChannelName"].GetString());
        m_channelNameHasBeenSet = true;
    }

    if (value.HasMember("IsEmailChannel") && !value["IsEmailChannel"].IsNull())
    {
        if (!value["IsEmailChannel"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmGroup.IsEmailChannel` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isEmailChannel = value["IsEmailChannel"].GetBool();
        m_isEmailChannelHasBeenSet = true;
    }

    if (value.HasMember("AlarmConditions") && !value["AlarmConditions"].IsNull())
    {
        if (!value["AlarmConditions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AlarmGroup.AlarmConditions` is not array type"));

        const rapidjson::Value &tmpValue = value["AlarmConditions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_alarmConditions.push_back((*itr).GetString());
        }
        m_alarmConditionsHasBeenSet = true;
    }

    if (value.HasMember("ChannelType") && !value["ChannelType"].IsNull())
    {
        if (!value["ChannelType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmGroup.ChannelType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_channelType = value["ChannelType"].GetInt64();
        m_channelTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AlarmGroup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_channelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelId.c_str(), allocator).Move(), allocator);
    }

    if (m_channelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelName.c_str(), allocator).Move(), allocator);
    }

    if (m_isEmailChannelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsEmailChannel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isEmailChannel, allocator);
    }

    if (m_alarmConditionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmConditions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_alarmConditions.begin(); itr != m_alarmConditions.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_channelTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_channelType, allocator);
    }

}


string AlarmGroup::GetChannelId() const
{
    return m_channelId;
}

void AlarmGroup::SetChannelId(const string& _channelId)
{
    m_channelId = _channelId;
    m_channelIdHasBeenSet = true;
}

bool AlarmGroup::ChannelIdHasBeenSet() const
{
    return m_channelIdHasBeenSet;
}

string AlarmGroup::GetChannelName() const
{
    return m_channelName;
}

void AlarmGroup::SetChannelName(const string& _channelName)
{
    m_channelName = _channelName;
    m_channelNameHasBeenSet = true;
}

bool AlarmGroup::ChannelNameHasBeenSet() const
{
    return m_channelNameHasBeenSet;
}

bool AlarmGroup::GetIsEmailChannel() const
{
    return m_isEmailChannel;
}

void AlarmGroup::SetIsEmailChannel(const bool& _isEmailChannel)
{
    m_isEmailChannel = _isEmailChannel;
    m_isEmailChannelHasBeenSet = true;
}

bool AlarmGroup::IsEmailChannelHasBeenSet() const
{
    return m_isEmailChannelHasBeenSet;
}

vector<string> AlarmGroup::GetAlarmConditions() const
{
    return m_alarmConditions;
}

void AlarmGroup::SetAlarmConditions(const vector<string>& _alarmConditions)
{
    m_alarmConditions = _alarmConditions;
    m_alarmConditionsHasBeenSet = true;
}

bool AlarmGroup::AlarmConditionsHasBeenSet() const
{
    return m_alarmConditionsHasBeenSet;
}

int64_t AlarmGroup::GetChannelType() const
{
    return m_channelType;
}

void AlarmGroup::SetChannelType(const int64_t& _channelType)
{
    m_channelType = _channelType;
    m_channelTypeHasBeenSet = true;
}

bool AlarmGroup::ChannelTypeHasBeenSet() const
{
    return m_channelTypeHasBeenSet;
}

