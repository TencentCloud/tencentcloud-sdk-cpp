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

#include <tencentcloud/dbbrain/v20210527/model/ReceiveInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

ReceiveInfo::ReceiveInfo() :
    m_receiveGroupHasBeenSet(false),
    m_endReceiveTimeHasBeenSet(false),
    m_receiveNameHasBeenSet(false),
    m_sendChannelHasBeenSet(false),
    m_startReceiveTimeHasBeenSet(false),
    m_receiveUinHasBeenSet(false)
{
}

CoreInternalOutcome ReceiveInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ReceiveGroup") && !value["ReceiveGroup"].IsNull())
    {
        if (!value["ReceiveGroup"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ReceiveInfo.ReceiveGroup` is not array type"));

        const rapidjson::Value &tmpValue = value["ReceiveGroup"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_receiveGroup.push_back((*itr).GetInt64());
        }
        m_receiveGroupHasBeenSet = true;
    }

    if (value.HasMember("EndReceiveTime") && !value["EndReceiveTime"].IsNull())
    {
        if (!value["EndReceiveTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReceiveInfo.EndReceiveTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endReceiveTime = string(value["EndReceiveTime"].GetString());
        m_endReceiveTimeHasBeenSet = true;
    }

    if (value.HasMember("ReceiveName") && !value["ReceiveName"].IsNull())
    {
        if (!value["ReceiveName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReceiveInfo.ReceiveName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_receiveName = string(value["ReceiveName"].GetString());
        m_receiveNameHasBeenSet = true;
    }

    if (value.HasMember("SendChannel") && !value["SendChannel"].IsNull())
    {
        if (!value["SendChannel"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ReceiveInfo.SendChannel` is not array type"));

        const rapidjson::Value &tmpValue = value["SendChannel"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_sendChannel.push_back((*itr).GetInt64());
        }
        m_sendChannelHasBeenSet = true;
    }

    if (value.HasMember("StartReceiveTime") && !value["StartReceiveTime"].IsNull())
    {
        if (!value["StartReceiveTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReceiveInfo.StartReceiveTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startReceiveTime = string(value["StartReceiveTime"].GetString());
        m_startReceiveTimeHasBeenSet = true;
    }

    if (value.HasMember("ReceiveUin") && !value["ReceiveUin"].IsNull())
    {
        if (!value["ReceiveUin"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ReceiveInfo.ReceiveUin` is not array type"));

        const rapidjson::Value &tmpValue = value["ReceiveUin"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ReceiveUin item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_receiveUin.push_back(item);
        }
        m_receiveUinHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReceiveInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_receiveGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReceiveGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_receiveGroup.begin(); itr != m_receiveGroup.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_endReceiveTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndReceiveTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endReceiveTime.c_str(), allocator).Move(), allocator);
    }

    if (m_receiveNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReceiveName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_receiveName.c_str(), allocator).Move(), allocator);
    }

    if (m_sendChannelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SendChannel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_sendChannel.begin(); itr != m_sendChannel.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_startReceiveTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartReceiveTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startReceiveTime.c_str(), allocator).Move(), allocator);
    }

    if (m_receiveUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReceiveUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_receiveUin.begin(); itr != m_receiveUin.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<int64_t> ReceiveInfo::GetReceiveGroup() const
{
    return m_receiveGroup;
}

void ReceiveInfo::SetReceiveGroup(const vector<int64_t>& _receiveGroup)
{
    m_receiveGroup = _receiveGroup;
    m_receiveGroupHasBeenSet = true;
}

bool ReceiveInfo::ReceiveGroupHasBeenSet() const
{
    return m_receiveGroupHasBeenSet;
}

string ReceiveInfo::GetEndReceiveTime() const
{
    return m_endReceiveTime;
}

void ReceiveInfo::SetEndReceiveTime(const string& _endReceiveTime)
{
    m_endReceiveTime = _endReceiveTime;
    m_endReceiveTimeHasBeenSet = true;
}

bool ReceiveInfo::EndReceiveTimeHasBeenSet() const
{
    return m_endReceiveTimeHasBeenSet;
}

string ReceiveInfo::GetReceiveName() const
{
    return m_receiveName;
}

void ReceiveInfo::SetReceiveName(const string& _receiveName)
{
    m_receiveName = _receiveName;
    m_receiveNameHasBeenSet = true;
}

bool ReceiveInfo::ReceiveNameHasBeenSet() const
{
    return m_receiveNameHasBeenSet;
}

vector<int64_t> ReceiveInfo::GetSendChannel() const
{
    return m_sendChannel;
}

void ReceiveInfo::SetSendChannel(const vector<int64_t>& _sendChannel)
{
    m_sendChannel = _sendChannel;
    m_sendChannelHasBeenSet = true;
}

bool ReceiveInfo::SendChannelHasBeenSet() const
{
    return m_sendChannelHasBeenSet;
}

string ReceiveInfo::GetStartReceiveTime() const
{
    return m_startReceiveTime;
}

void ReceiveInfo::SetStartReceiveTime(const string& _startReceiveTime)
{
    m_startReceiveTime = _startReceiveTime;
    m_startReceiveTimeHasBeenSet = true;
}

bool ReceiveInfo::StartReceiveTimeHasBeenSet() const
{
    return m_startReceiveTimeHasBeenSet;
}

vector<ReceiveUin> ReceiveInfo::GetReceiveUin() const
{
    return m_receiveUin;
}

void ReceiveInfo::SetReceiveUin(const vector<ReceiveUin>& _receiveUin)
{
    m_receiveUin = _receiveUin;
    m_receiveUinHasBeenSet = true;
}

bool ReceiveInfo::ReceiveUinHasBeenSet() const
{
    return m_receiveUinHasBeenSet;
}

