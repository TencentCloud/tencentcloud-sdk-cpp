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

#include <tencentcloud/cpdp/v20190820/model/CreateOpenBankOrderPaymentResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

CreateOpenBankOrderPaymentResult::CreateOpenBankOrderPaymentResult() :
    m_channelOrderIdHasBeenSet(false),
    m_thirdPayOrderIdHasBeenSet(false),
    m_redirectInfoHasBeenSet(false),
    m_outOrderIdHasBeenSet(false)
{
}

CoreInternalOutcome CreateOpenBankOrderPaymentResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ChannelOrderId") && !value["ChannelOrderId"].IsNull())
    {
        if (!value["ChannelOrderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateOpenBankOrderPaymentResult.ChannelOrderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelOrderId = string(value["ChannelOrderId"].GetString());
        m_channelOrderIdHasBeenSet = true;
    }

    if (value.HasMember("ThirdPayOrderId") && !value["ThirdPayOrderId"].IsNull())
    {
        if (!value["ThirdPayOrderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateOpenBankOrderPaymentResult.ThirdPayOrderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_thirdPayOrderId = string(value["ThirdPayOrderId"].GetString());
        m_thirdPayOrderIdHasBeenSet = true;
    }

    if (value.HasMember("RedirectInfo") && !value["RedirectInfo"].IsNull())
    {
        if (!value["RedirectInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CreateOpenBankOrderPaymentResult.RedirectInfo` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `CreateOpenBankOrderPaymentResult.OutOrderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outOrderId = string(value["OutOrderId"].GetString());
        m_outOrderIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateOpenBankOrderPaymentResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

}


string CreateOpenBankOrderPaymentResult::GetChannelOrderId() const
{
    return m_channelOrderId;
}

void CreateOpenBankOrderPaymentResult::SetChannelOrderId(const string& _channelOrderId)
{
    m_channelOrderId = _channelOrderId;
    m_channelOrderIdHasBeenSet = true;
}

bool CreateOpenBankOrderPaymentResult::ChannelOrderIdHasBeenSet() const
{
    return m_channelOrderIdHasBeenSet;
}

string CreateOpenBankOrderPaymentResult::GetThirdPayOrderId() const
{
    return m_thirdPayOrderId;
}

void CreateOpenBankOrderPaymentResult::SetThirdPayOrderId(const string& _thirdPayOrderId)
{
    m_thirdPayOrderId = _thirdPayOrderId;
    m_thirdPayOrderIdHasBeenSet = true;
}

bool CreateOpenBankOrderPaymentResult::ThirdPayOrderIdHasBeenSet() const
{
    return m_thirdPayOrderIdHasBeenSet;
}

OpenBankRedirectInfo CreateOpenBankOrderPaymentResult::GetRedirectInfo() const
{
    return m_redirectInfo;
}

void CreateOpenBankOrderPaymentResult::SetRedirectInfo(const OpenBankRedirectInfo& _redirectInfo)
{
    m_redirectInfo = _redirectInfo;
    m_redirectInfoHasBeenSet = true;
}

bool CreateOpenBankOrderPaymentResult::RedirectInfoHasBeenSet() const
{
    return m_redirectInfoHasBeenSet;
}

string CreateOpenBankOrderPaymentResult::GetOutOrderId() const
{
    return m_outOrderId;
}

void CreateOpenBankOrderPaymentResult::SetOutOrderId(const string& _outOrderId)
{
    m_outOrderId = _outOrderId;
    m_outOrderIdHasBeenSet = true;
}

bool CreateOpenBankOrderPaymentResult::OutOrderIdHasBeenSet() const
{
    return m_outOrderIdHasBeenSet;
}

