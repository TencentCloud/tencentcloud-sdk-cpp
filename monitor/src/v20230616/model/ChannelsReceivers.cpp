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

#include <tencentcloud/monitor/v20230616/model/ChannelsReceivers.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20230616::Model;
using namespace std;

ChannelsReceivers::ChannelsReceivers() :
    m_channelNameHasBeenSet(false),
    m_receiversHasBeenSet(false),
    m_sendStatusHasBeenSet(false)
{
}

CoreInternalOutcome ChannelsReceivers::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ChannelName") && !value["ChannelName"].IsNull())
    {
        if (!value["ChannelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelsReceivers.ChannelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelName = string(value["ChannelName"].GetString());
        m_channelNameHasBeenSet = true;
    }

    if (value.HasMember("Receivers") && !value["Receivers"].IsNull())
    {
        if (!value["Receivers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ChannelsReceivers.Receivers` is not array type"));

        const rapidjson::Value &tmpValue = value["Receivers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_receivers.push_back((*itr).GetString());
        }
        m_receiversHasBeenSet = true;
    }

    if (value.HasMember("SendStatus") && !value["SendStatus"].IsNull())
    {
        if (!value["SendStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelsReceivers.SendStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sendStatus = string(value["SendStatus"].GetString());
        m_sendStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ChannelsReceivers::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_channelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelName.c_str(), allocator).Move(), allocator);
    }

    if (m_receiversHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Receivers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_receivers.begin(); itr != m_receivers.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_sendStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SendStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sendStatus.c_str(), allocator).Move(), allocator);
    }

}


string ChannelsReceivers::GetChannelName() const
{
    return m_channelName;
}

void ChannelsReceivers::SetChannelName(const string& _channelName)
{
    m_channelName = _channelName;
    m_channelNameHasBeenSet = true;
}

bool ChannelsReceivers::ChannelNameHasBeenSet() const
{
    return m_channelNameHasBeenSet;
}

vector<string> ChannelsReceivers::GetReceivers() const
{
    return m_receivers;
}

void ChannelsReceivers::SetReceivers(const vector<string>& _receivers)
{
    m_receivers = _receivers;
    m_receiversHasBeenSet = true;
}

bool ChannelsReceivers::ReceiversHasBeenSet() const
{
    return m_receiversHasBeenSet;
}

string ChannelsReceivers::GetSendStatus() const
{
    return m_sendStatus;
}

void ChannelsReceivers::SetSendStatus(const string& _sendStatus)
{
    m_sendStatus = _sendStatus;
    m_sendStatusHasBeenSet = true;
}

bool ChannelsReceivers::SendStatusHasBeenSet() const
{
    return m_sendStatusHasBeenSet;
}

