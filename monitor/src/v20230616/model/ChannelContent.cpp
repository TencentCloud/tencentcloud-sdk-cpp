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

#include <tencentcloud/monitor/v20230616/model/ChannelContent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20230616::Model;
using namespace std;

ChannelContent::ChannelContent() :
    m_subChannelHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_deliverStatusHasBeenSet(false),
    m_deliverTimeHasBeenSet(false),
    m_deliverErrMsgHasBeenSet(false)
{
}

CoreInternalOutcome ChannelContent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SubChannel") && !value["SubChannel"].IsNull())
    {
        if (!value["SubChannel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelContent.SubChannel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subChannel = string(value["SubChannel"].GetString());
        m_subChannelHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelContent.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("DeliverStatus") && !value["DeliverStatus"].IsNull())
    {
        if (!value["DeliverStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelContent.DeliverStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deliverStatus = string(value["DeliverStatus"].GetString());
        m_deliverStatusHasBeenSet = true;
    }

    if (value.HasMember("DeliverTime") && !value["DeliverTime"].IsNull())
    {
        if (!value["DeliverTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelContent.DeliverTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deliverTime = string(value["DeliverTime"].GetString());
        m_deliverTimeHasBeenSet = true;
    }

    if (value.HasMember("DeliverErrMsg") && !value["DeliverErrMsg"].IsNull())
    {
        if (!value["DeliverErrMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelContent.DeliverErrMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deliverErrMsg = string(value["DeliverErrMsg"].GetString());
        m_deliverErrMsgHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ChannelContent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_subChannelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubChannel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subChannel.c_str(), allocator).Move(), allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_deliverStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeliverStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deliverStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_deliverTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeliverTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deliverTime.c_str(), allocator).Move(), allocator);
    }

    if (m_deliverErrMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeliverErrMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deliverErrMsg.c_str(), allocator).Move(), allocator);
    }

}


string ChannelContent::GetSubChannel() const
{
    return m_subChannel;
}

void ChannelContent::SetSubChannel(const string& _subChannel)
{
    m_subChannel = _subChannel;
    m_subChannelHasBeenSet = true;
}

bool ChannelContent::SubChannelHasBeenSet() const
{
    return m_subChannelHasBeenSet;
}

string ChannelContent::GetContent() const
{
    return m_content;
}

void ChannelContent::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool ChannelContent::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

string ChannelContent::GetDeliverStatus() const
{
    return m_deliverStatus;
}

void ChannelContent::SetDeliverStatus(const string& _deliverStatus)
{
    m_deliverStatus = _deliverStatus;
    m_deliverStatusHasBeenSet = true;
}

bool ChannelContent::DeliverStatusHasBeenSet() const
{
    return m_deliverStatusHasBeenSet;
}

string ChannelContent::GetDeliverTime() const
{
    return m_deliverTime;
}

void ChannelContent::SetDeliverTime(const string& _deliverTime)
{
    m_deliverTime = _deliverTime;
    m_deliverTimeHasBeenSet = true;
}

bool ChannelContent::DeliverTimeHasBeenSet() const
{
    return m_deliverTimeHasBeenSet;
}

string ChannelContent::GetDeliverErrMsg() const
{
    return m_deliverErrMsg;
}

void ChannelContent::SetDeliverErrMsg(const string& _deliverErrMsg)
{
    m_deliverErrMsg = _deliverErrMsg;
    m_deliverErrMsgHasBeenSet = true;
}

bool ChannelContent::DeliverErrMsgHasBeenSet() const
{
    return m_deliverErrMsgHasBeenSet;
}

