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

#include <tencentcloud/cpdp/v20190820/model/ApplyOpenBankSettleOrderResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

ApplyOpenBankSettleOrderResult::ApplyOpenBankSettleOrderResult() :
    m_outSettleIdHasBeenSet(false),
    m_channelSettleIdHasBeenSet(false),
    m_settleStatusHasBeenSet(false)
{
}

CoreInternalOutcome ApplyOpenBankSettleOrderResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OutSettleId") && !value["OutSettleId"].IsNull())
    {
        if (!value["OutSettleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplyOpenBankSettleOrderResult.OutSettleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outSettleId = string(value["OutSettleId"].GetString());
        m_outSettleIdHasBeenSet = true;
    }

    if (value.HasMember("ChannelSettleId") && !value["ChannelSettleId"].IsNull())
    {
        if (!value["ChannelSettleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplyOpenBankSettleOrderResult.ChannelSettleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelSettleId = string(value["ChannelSettleId"].GetString());
        m_channelSettleIdHasBeenSet = true;
    }

    if (value.HasMember("SettleStatus") && !value["SettleStatus"].IsNull())
    {
        if (!value["SettleStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplyOpenBankSettleOrderResult.SettleStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_settleStatus = string(value["SettleStatus"].GetString());
        m_settleStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApplyOpenBankSettleOrderResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_outSettleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutSettleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outSettleId.c_str(), allocator).Move(), allocator);
    }

    if (m_channelSettleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelSettleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelSettleId.c_str(), allocator).Move(), allocator);
    }

    if (m_settleStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SettleStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_settleStatus.c_str(), allocator).Move(), allocator);
    }

}


string ApplyOpenBankSettleOrderResult::GetOutSettleId() const
{
    return m_outSettleId;
}

void ApplyOpenBankSettleOrderResult::SetOutSettleId(const string& _outSettleId)
{
    m_outSettleId = _outSettleId;
    m_outSettleIdHasBeenSet = true;
}

bool ApplyOpenBankSettleOrderResult::OutSettleIdHasBeenSet() const
{
    return m_outSettleIdHasBeenSet;
}

string ApplyOpenBankSettleOrderResult::GetChannelSettleId() const
{
    return m_channelSettleId;
}

void ApplyOpenBankSettleOrderResult::SetChannelSettleId(const string& _channelSettleId)
{
    m_channelSettleId = _channelSettleId;
    m_channelSettleIdHasBeenSet = true;
}

bool ApplyOpenBankSettleOrderResult::ChannelSettleIdHasBeenSet() const
{
    return m_channelSettleIdHasBeenSet;
}

string ApplyOpenBankSettleOrderResult::GetSettleStatus() const
{
    return m_settleStatus;
}

void ApplyOpenBankSettleOrderResult::SetSettleStatus(const string& _settleStatus)
{
    m_settleStatus = _settleStatus;
    m_settleStatusHasBeenSet = true;
}

bool ApplyOpenBankSettleOrderResult::SettleStatusHasBeenSet() const
{
    return m_settleStatusHasBeenSet;
}

