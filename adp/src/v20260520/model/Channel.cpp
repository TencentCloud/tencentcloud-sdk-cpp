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

#include <tencentcloud/adp/v20260520/model/Channel.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

Channel::Channel() :
    m_channelIdHasBeenSet(false),
    m_channelStatusHasBeenSet(false),
    m_connectStatusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_specHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_updaterHasBeenSet(false)
{
}

CoreInternalOutcome Channel::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ChannelId") && !value["ChannelId"].IsNull())
    {
        if (!value["ChannelId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Channel.ChannelId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelId = string(value["ChannelId"].GetString());
        m_channelIdHasBeenSet = true;
    }

    if (value.HasMember("ChannelStatus") && !value["ChannelStatus"].IsNull())
    {
        if (!value["ChannelStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Channel.ChannelStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_channelStatus = value["ChannelStatus"].GetInt64();
        m_channelStatusHasBeenSet = true;
    }

    if (value.HasMember("ConnectStatus") && !value["ConnectStatus"].IsNull())
    {
        if (!value["ConnectStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Channel.ConnectStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_connectStatus = value["ConnectStatus"].GetInt64();
        m_connectStatusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Channel.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Spec") && !value["Spec"].IsNull())
    {
        if (!value["Spec"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Channel.Spec` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_spec.Deserialize(value["Spec"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_specHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Channel.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Updater") && !value["Updater"].IsNull())
    {
        if (!value["Updater"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Channel.Updater` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updater = string(value["Updater"].GetString());
        m_updaterHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Channel::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_channelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelId.c_str(), allocator).Move(), allocator);
    }

    if (m_channelStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_channelStatus, allocator);
    }

    if (m_connectStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_connectStatus, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_specHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Spec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_spec.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updaterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Updater";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updater.c_str(), allocator).Move(), allocator);
    }

}


string Channel::GetChannelId() const
{
    return m_channelId;
}

void Channel::SetChannelId(const string& _channelId)
{
    m_channelId = _channelId;
    m_channelIdHasBeenSet = true;
}

bool Channel::ChannelIdHasBeenSet() const
{
    return m_channelIdHasBeenSet;
}

int64_t Channel::GetChannelStatus() const
{
    return m_channelStatus;
}

void Channel::SetChannelStatus(const int64_t& _channelStatus)
{
    m_channelStatus = _channelStatus;
    m_channelStatusHasBeenSet = true;
}

bool Channel::ChannelStatusHasBeenSet() const
{
    return m_channelStatusHasBeenSet;
}

int64_t Channel::GetConnectStatus() const
{
    return m_connectStatus;
}

void Channel::SetConnectStatus(const int64_t& _connectStatus)
{
    m_connectStatus = _connectStatus;
    m_connectStatusHasBeenSet = true;
}

bool Channel::ConnectStatusHasBeenSet() const
{
    return m_connectStatusHasBeenSet;
}

string Channel::GetCreateTime() const
{
    return m_createTime;
}

void Channel::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool Channel::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

ChannelSpec Channel::GetSpec() const
{
    return m_spec;
}

void Channel::SetSpec(const ChannelSpec& _spec)
{
    m_spec = _spec;
    m_specHasBeenSet = true;
}

bool Channel::SpecHasBeenSet() const
{
    return m_specHasBeenSet;
}

string Channel::GetUpdateTime() const
{
    return m_updateTime;
}

void Channel::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool Channel::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string Channel::GetUpdater() const
{
    return m_updater;
}

void Channel::SetUpdater(const string& _updater)
{
    m_updater = _updater;
    m_updaterHasBeenSet = true;
}

bool Channel::UpdaterHasBeenSet() const
{
    return m_updaterHasBeenSet;
}

