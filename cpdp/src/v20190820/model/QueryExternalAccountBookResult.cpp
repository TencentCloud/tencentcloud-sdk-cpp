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

#include <tencentcloud/cpdp/v20190820/model/QueryExternalAccountBookResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

QueryExternalAccountBookResult::QueryExternalAccountBookResult() :
    m_channelAccountBookIdHasBeenSet(false),
    m_availableBalanceHasBeenSet(false),
    m_collectMoneyAccountInfoHasBeenSet(false)
{
}

CoreInternalOutcome QueryExternalAccountBookResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ChannelAccountBookId") && !value["ChannelAccountBookId"].IsNull())
    {
        if (!value["ChannelAccountBookId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryExternalAccountBookResult.ChannelAccountBookId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelAccountBookId = string(value["ChannelAccountBookId"].GetString());
        m_channelAccountBookIdHasBeenSet = true;
    }

    if (value.HasMember("AvailableBalance") && !value["AvailableBalance"].IsNull())
    {
        if (!value["AvailableBalance"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryExternalAccountBookResult.AvailableBalance` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_availableBalance = string(value["AvailableBalance"].GetString());
        m_availableBalanceHasBeenSet = true;
    }

    if (value.HasMember("CollectMoneyAccountInfo") && !value["CollectMoneyAccountInfo"].IsNull())
    {
        if (!value["CollectMoneyAccountInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryExternalAccountBookResult.CollectMoneyAccountInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_collectMoneyAccountInfo = string(value["CollectMoneyAccountInfo"].GetString());
        m_collectMoneyAccountInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QueryExternalAccountBookResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_channelAccountBookIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelAccountBookId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelAccountBookId.c_str(), allocator).Move(), allocator);
    }

    if (m_availableBalanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvailableBalance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_availableBalance.c_str(), allocator).Move(), allocator);
    }

    if (m_collectMoneyAccountInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CollectMoneyAccountInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_collectMoneyAccountInfo.c_str(), allocator).Move(), allocator);
    }

}


string QueryExternalAccountBookResult::GetChannelAccountBookId() const
{
    return m_channelAccountBookId;
}

void QueryExternalAccountBookResult::SetChannelAccountBookId(const string& _channelAccountBookId)
{
    m_channelAccountBookId = _channelAccountBookId;
    m_channelAccountBookIdHasBeenSet = true;
}

bool QueryExternalAccountBookResult::ChannelAccountBookIdHasBeenSet() const
{
    return m_channelAccountBookIdHasBeenSet;
}

string QueryExternalAccountBookResult::GetAvailableBalance() const
{
    return m_availableBalance;
}

void QueryExternalAccountBookResult::SetAvailableBalance(const string& _availableBalance)
{
    m_availableBalance = _availableBalance;
    m_availableBalanceHasBeenSet = true;
}

bool QueryExternalAccountBookResult::AvailableBalanceHasBeenSet() const
{
    return m_availableBalanceHasBeenSet;
}

string QueryExternalAccountBookResult::GetCollectMoneyAccountInfo() const
{
    return m_collectMoneyAccountInfo;
}

void QueryExternalAccountBookResult::SetCollectMoneyAccountInfo(const string& _collectMoneyAccountInfo)
{
    m_collectMoneyAccountInfo = _collectMoneyAccountInfo;
    m_collectMoneyAccountInfoHasBeenSet = true;
}

bool QueryExternalAccountBookResult::CollectMoneyAccountInfoHasBeenSet() const
{
    return m_collectMoneyAccountInfoHasBeenSet;
}

