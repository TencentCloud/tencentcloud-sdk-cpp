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
    m_sendStatusHasBeenSet(false),
    m_sendStatusCodeHasBeenSet(false),
    m_sendTimeHasBeenSet(false),
    m_subChannelsHasBeenSet(false),
    m_execDetailHasBeenSet(false),
    m_realDeliverStatusHasBeenSet(false),
    m_realDeliverTimeHasBeenSet(false),
    m_realDeliverErrMsgHasBeenSet(false),
    m_contentsHasBeenSet(false)
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

    if (value.HasMember("SendStatusCode") && !value["SendStatusCode"].IsNull())
    {
        if (!value["SendStatusCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelsReceivers.SendStatusCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sendStatusCode = string(value["SendStatusCode"].GetString());
        m_sendStatusCodeHasBeenSet = true;
    }

    if (value.HasMember("SendTime") && !value["SendTime"].IsNull())
    {
        if (!value["SendTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelsReceivers.SendTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sendTime = value["SendTime"].GetInt64();
        m_sendTimeHasBeenSet = true;
    }

    if (value.HasMember("SubChannels") && !value["SubChannels"].IsNull())
    {
        if (!value["SubChannels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ChannelsReceivers.SubChannels` is not array type"));

        const rapidjson::Value &tmpValue = value["SubChannels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_subChannels.push_back((*itr).GetString());
        }
        m_subChannelsHasBeenSet = true;
    }

    if (value.HasMember("ExecDetail") && !value["ExecDetail"].IsNull())
    {
        if (!value["ExecDetail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelsReceivers.ExecDetail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_execDetail = string(value["ExecDetail"].GetString());
        m_execDetailHasBeenSet = true;
    }

    if (value.HasMember("RealDeliverStatus") && !value["RealDeliverStatus"].IsNull())
    {
        if (!value["RealDeliverStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelsReceivers.RealDeliverStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realDeliverStatus = string(value["RealDeliverStatus"].GetString());
        m_realDeliverStatusHasBeenSet = true;
    }

    if (value.HasMember("RealDeliverTime") && !value["RealDeliverTime"].IsNull())
    {
        if (!value["RealDeliverTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelsReceivers.RealDeliverTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realDeliverTime = string(value["RealDeliverTime"].GetString());
        m_realDeliverTimeHasBeenSet = true;
    }

    if (value.HasMember("RealDeliverErrMsg") && !value["RealDeliverErrMsg"].IsNull())
    {
        if (!value["RealDeliverErrMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelsReceivers.RealDeliverErrMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realDeliverErrMsg = string(value["RealDeliverErrMsg"].GetString());
        m_realDeliverErrMsgHasBeenSet = true;
    }

    if (value.HasMember("Contents") && !value["Contents"].IsNull())
    {
        if (!value["Contents"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ChannelsReceivers.Contents` is not array type"));

        const rapidjson::Value &tmpValue = value["Contents"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ChannelContent item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_contents.push_back(item);
        }
        m_contentsHasBeenSet = true;
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

    if (m_sendStatusCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SendStatusCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sendStatusCode.c_str(), allocator).Move(), allocator);
    }

    if (m_sendTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SendTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sendTime, allocator);
    }

    if (m_subChannelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubChannels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_subChannels.begin(); itr != m_subChannels.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_execDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_execDetail.c_str(), allocator).Move(), allocator);
    }

    if (m_realDeliverStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealDeliverStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_realDeliverStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_realDeliverTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealDeliverTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_realDeliverTime.c_str(), allocator).Move(), allocator);
    }

    if (m_realDeliverErrMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealDeliverErrMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_realDeliverErrMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_contentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Contents";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_contents.begin(); itr != m_contents.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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

string ChannelsReceivers::GetSendStatusCode() const
{
    return m_sendStatusCode;
}

void ChannelsReceivers::SetSendStatusCode(const string& _sendStatusCode)
{
    m_sendStatusCode = _sendStatusCode;
    m_sendStatusCodeHasBeenSet = true;
}

bool ChannelsReceivers::SendStatusCodeHasBeenSet() const
{
    return m_sendStatusCodeHasBeenSet;
}

int64_t ChannelsReceivers::GetSendTime() const
{
    return m_sendTime;
}

void ChannelsReceivers::SetSendTime(const int64_t& _sendTime)
{
    m_sendTime = _sendTime;
    m_sendTimeHasBeenSet = true;
}

bool ChannelsReceivers::SendTimeHasBeenSet() const
{
    return m_sendTimeHasBeenSet;
}

vector<string> ChannelsReceivers::GetSubChannels() const
{
    return m_subChannels;
}

void ChannelsReceivers::SetSubChannels(const vector<string>& _subChannels)
{
    m_subChannels = _subChannels;
    m_subChannelsHasBeenSet = true;
}

bool ChannelsReceivers::SubChannelsHasBeenSet() const
{
    return m_subChannelsHasBeenSet;
}

string ChannelsReceivers::GetExecDetail() const
{
    return m_execDetail;
}

void ChannelsReceivers::SetExecDetail(const string& _execDetail)
{
    m_execDetail = _execDetail;
    m_execDetailHasBeenSet = true;
}

bool ChannelsReceivers::ExecDetailHasBeenSet() const
{
    return m_execDetailHasBeenSet;
}

string ChannelsReceivers::GetRealDeliverStatus() const
{
    return m_realDeliverStatus;
}

void ChannelsReceivers::SetRealDeliverStatus(const string& _realDeliverStatus)
{
    m_realDeliverStatus = _realDeliverStatus;
    m_realDeliverStatusHasBeenSet = true;
}

bool ChannelsReceivers::RealDeliverStatusHasBeenSet() const
{
    return m_realDeliverStatusHasBeenSet;
}

string ChannelsReceivers::GetRealDeliverTime() const
{
    return m_realDeliverTime;
}

void ChannelsReceivers::SetRealDeliverTime(const string& _realDeliverTime)
{
    m_realDeliverTime = _realDeliverTime;
    m_realDeliverTimeHasBeenSet = true;
}

bool ChannelsReceivers::RealDeliverTimeHasBeenSet() const
{
    return m_realDeliverTimeHasBeenSet;
}

string ChannelsReceivers::GetRealDeliverErrMsg() const
{
    return m_realDeliverErrMsg;
}

void ChannelsReceivers::SetRealDeliverErrMsg(const string& _realDeliverErrMsg)
{
    m_realDeliverErrMsg = _realDeliverErrMsg;
    m_realDeliverErrMsgHasBeenSet = true;
}

bool ChannelsReceivers::RealDeliverErrMsgHasBeenSet() const
{
    return m_realDeliverErrMsgHasBeenSet;
}

vector<ChannelContent> ChannelsReceivers::GetContents() const
{
    return m_contents;
}

void ChannelsReceivers::SetContents(const vector<ChannelContent>& _contents)
{
    m_contents = _contents;
    m_contentsHasBeenSet = true;
}

bool ChannelsReceivers::ContentsHasBeenSet() const
{
    return m_contentsHasBeenSet;
}

