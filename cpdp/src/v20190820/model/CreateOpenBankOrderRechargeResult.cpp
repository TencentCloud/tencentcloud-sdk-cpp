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

#include <tencentcloud/cpdp/v20190820/model/CreateOpenBankOrderRechargeResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

CreateOpenBankOrderRechargeResult::CreateOpenBankOrderRechargeResult() :
    m_channelOrderIdHasBeenSet(false),
    m_thirdPayOrderIdHasBeenSet(false),
    m_redirectInfoHasBeenSet(false),
    m_outOrderIdHasBeenSet(false),
    m_dealStatusHasBeenSet(false),
    m_dealMessageHasBeenSet(false),
    m_pcWebUrlHasBeenSet(false)
{
}

CoreInternalOutcome CreateOpenBankOrderRechargeResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ChannelOrderId") && !value["ChannelOrderId"].IsNull())
    {
        if (!value["ChannelOrderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateOpenBankOrderRechargeResult.ChannelOrderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelOrderId = string(value["ChannelOrderId"].GetString());
        m_channelOrderIdHasBeenSet = true;
    }

    if (value.HasMember("ThirdPayOrderId") && !value["ThirdPayOrderId"].IsNull())
    {
        if (!value["ThirdPayOrderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateOpenBankOrderRechargeResult.ThirdPayOrderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_thirdPayOrderId = string(value["ThirdPayOrderId"].GetString());
        m_thirdPayOrderIdHasBeenSet = true;
    }

    if (value.HasMember("RedirectInfo") && !value["RedirectInfo"].IsNull())
    {
        if (!value["RedirectInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CreateOpenBankOrderRechargeResult.RedirectInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_redirectInfo.Deserialize(value["RedirectInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_redirectInfoHasBeenSet = true;
    }

    if (value.HasMember("OutOrderId") && !value["OutOrderId"].IsNull())
    {
        if (!value["OutOrderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateOpenBankOrderRechargeResult.OutOrderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outOrderId = string(value["OutOrderId"].GetString());
        m_outOrderIdHasBeenSet = true;
    }

    if (value.HasMember("DealStatus") && !value["DealStatus"].IsNull())
    {
        if (!value["DealStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateOpenBankOrderRechargeResult.DealStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dealStatus = string(value["DealStatus"].GetString());
        m_dealStatusHasBeenSet = true;
    }

    if (value.HasMember("DealMessage") && !value["DealMessage"].IsNull())
    {
        if (!value["DealMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateOpenBankOrderRechargeResult.DealMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dealMessage = string(value["DealMessage"].GetString());
        m_dealMessageHasBeenSet = true;
    }

    if (value.HasMember("PcWebUrl") && !value["PcWebUrl"].IsNull())
    {
        if (!value["PcWebUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateOpenBankOrderRechargeResult.PcWebUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pcWebUrl = string(value["PcWebUrl"].GetString());
        m_pcWebUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateOpenBankOrderRechargeResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_channelOrderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelOrderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelOrderId.c_str(), allocator).Move(), allocator);
    }

    if (m_thirdPayOrderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThirdPayOrderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_thirdPayOrderId.c_str(), allocator).Move(), allocator);
    }

    if (m_redirectInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RedirectInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_redirectInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_outOrderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutOrderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outOrderId.c_str(), allocator).Move(), allocator);
    }

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

    if (m_pcWebUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PcWebUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pcWebUrl.c_str(), allocator).Move(), allocator);
    }

}


string CreateOpenBankOrderRechargeResult::GetChannelOrderId() const
{
    return m_channelOrderId;
}

void CreateOpenBankOrderRechargeResult::SetChannelOrderId(const string& _channelOrderId)
{
    m_channelOrderId = _channelOrderId;
    m_channelOrderIdHasBeenSet = true;
}

bool CreateOpenBankOrderRechargeResult::ChannelOrderIdHasBeenSet() const
{
    return m_channelOrderIdHasBeenSet;
}

string CreateOpenBankOrderRechargeResult::GetThirdPayOrderId() const
{
    return m_thirdPayOrderId;
}

void CreateOpenBankOrderRechargeResult::SetThirdPayOrderId(const string& _thirdPayOrderId)
{
    m_thirdPayOrderId = _thirdPayOrderId;
    m_thirdPayOrderIdHasBeenSet = true;
}

bool CreateOpenBankOrderRechargeResult::ThirdPayOrderIdHasBeenSet() const
{
    return m_thirdPayOrderIdHasBeenSet;
}

OpenBankRechargeRedirectInfo CreateOpenBankOrderRechargeResult::GetRedirectInfo() const
{
    return m_redirectInfo;
}

void CreateOpenBankOrderRechargeResult::SetRedirectInfo(const OpenBankRechargeRedirectInfo& _redirectInfo)
{
    m_redirectInfo = _redirectInfo;
    m_redirectInfoHasBeenSet = true;
}

bool CreateOpenBankOrderRechargeResult::RedirectInfoHasBeenSet() const
{
    return m_redirectInfoHasBeenSet;
}

string CreateOpenBankOrderRechargeResult::GetOutOrderId() const
{
    return m_outOrderId;
}

void CreateOpenBankOrderRechargeResult::SetOutOrderId(const string& _outOrderId)
{
    m_outOrderId = _outOrderId;
    m_outOrderIdHasBeenSet = true;
}

bool CreateOpenBankOrderRechargeResult::OutOrderIdHasBeenSet() const
{
    return m_outOrderIdHasBeenSet;
}

string CreateOpenBankOrderRechargeResult::GetDealStatus() const
{
    return m_dealStatus;
}

void CreateOpenBankOrderRechargeResult::SetDealStatus(const string& _dealStatus)
{
    m_dealStatus = _dealStatus;
    m_dealStatusHasBeenSet = true;
}

bool CreateOpenBankOrderRechargeResult::DealStatusHasBeenSet() const
{
    return m_dealStatusHasBeenSet;
}

string CreateOpenBankOrderRechargeResult::GetDealMessage() const
{
    return m_dealMessage;
}

void CreateOpenBankOrderRechargeResult::SetDealMessage(const string& _dealMessage)
{
    m_dealMessage = _dealMessage;
    m_dealMessageHasBeenSet = true;
}

bool CreateOpenBankOrderRechargeResult::DealMessageHasBeenSet() const
{
    return m_dealMessageHasBeenSet;
}

string CreateOpenBankOrderRechargeResult::GetPcWebUrl() const
{
    return m_pcWebUrl;
}

void CreateOpenBankOrderRechargeResult::SetPcWebUrl(const string& _pcWebUrl)
{
    m_pcWebUrl = _pcWebUrl;
    m_pcWebUrlHasBeenSet = true;
}

bool CreateOpenBankOrderRechargeResult::PcWebUrlHasBeenSet() const
{
    return m_pcWebUrlHasBeenSet;
}

