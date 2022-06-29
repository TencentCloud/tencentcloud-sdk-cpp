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

#include <tencentcloud/cpdp/v20190820/model/CreateExternalAccountBookResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

CreateExternalAccountBookResult::CreateExternalAccountBookResult() :
    m_dealStatusHasBeenSet(false),
    m_dealMessageHasBeenSet(false),
    m_channelAccountBookIdHasBeenSet(false),
    m_collectMoneyAccountInfoHasBeenSet(false)
{
}

CoreInternalOutcome CreateExternalAccountBookResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DealStatus") && !value["DealStatus"].IsNull())
    {
        if (!value["DealStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateExternalAccountBookResult.DealStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dealStatus = string(value["DealStatus"].GetString());
        m_dealStatusHasBeenSet = true;
    }

    if (value.HasMember("DealMessage") && !value["DealMessage"].IsNull())
    {
        if (!value["DealMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateExternalAccountBookResult.DealMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dealMessage = string(value["DealMessage"].GetString());
        m_dealMessageHasBeenSet = true;
    }

    if (value.HasMember("ChannelAccountBookId") && !value["ChannelAccountBookId"].IsNull())
    {
        if (!value["ChannelAccountBookId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateExternalAccountBookResult.ChannelAccountBookId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelAccountBookId = string(value["ChannelAccountBookId"].GetString());
        m_channelAccountBookIdHasBeenSet = true;
    }

    if (value.HasMember("CollectMoneyAccountInfo") && !value["CollectMoneyAccountInfo"].IsNull())
    {
        if (!value["CollectMoneyAccountInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateExternalAccountBookResult.CollectMoneyAccountInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_collectMoneyAccountInfo = string(value["CollectMoneyAccountInfo"].GetString());
        m_collectMoneyAccountInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateExternalAccountBookResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dealStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DealStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dealStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_dealMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DealMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dealMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_channelAccountBookIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelAccountBookId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelAccountBookId.c_str(), allocator).Move(), allocator);
    }

    if (m_collectMoneyAccountInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CollectMoneyAccountInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_collectMoneyAccountInfo.c_str(), allocator).Move(), allocator);
    }

}


string CreateExternalAccountBookResult::GetDealStatus() const
{
    return m_dealStatus;
}

void CreateExternalAccountBookResult::SetDealStatus(const string& _dealStatus)
{
    m_dealStatus = _dealStatus;
    m_dealStatusHasBeenSet = true;
}

bool CreateExternalAccountBookResult::DealStatusHasBeenSet() const
{
    return m_dealStatusHasBeenSet;
}

string CreateExternalAccountBookResult::GetDealMessage() const
{
    return m_dealMessage;
}

void CreateExternalAccountBookResult::SetDealMessage(const string& _dealMessage)
{
    m_dealMessage = _dealMessage;
    m_dealMessageHasBeenSet = true;
}

bool CreateExternalAccountBookResult::DealMessageHasBeenSet() const
{
    return m_dealMessageHasBeenSet;
}

string CreateExternalAccountBookResult::GetChannelAccountBookId() const
{
    return m_channelAccountBookId;
}

void CreateExternalAccountBookResult::SetChannelAccountBookId(const string& _channelAccountBookId)
{
    m_channelAccountBookId = _channelAccountBookId;
    m_channelAccountBookIdHasBeenSet = true;
}

bool CreateExternalAccountBookResult::ChannelAccountBookIdHasBeenSet() const
{
    return m_channelAccountBookIdHasBeenSet;
}

string CreateExternalAccountBookResult::GetCollectMoneyAccountInfo() const
{
    return m_collectMoneyAccountInfo;
}

void CreateExternalAccountBookResult::SetCollectMoneyAccountInfo(const string& _collectMoneyAccountInfo)
{
    m_collectMoneyAccountInfo = _collectMoneyAccountInfo;
    m_collectMoneyAccountInfoHasBeenSet = true;
}

bool CreateExternalAccountBookResult::CollectMoneyAccountInfoHasBeenSet() const
{
    return m_collectMoneyAccountInfoHasBeenSet;
}

