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

#include <tencentcloud/cpdp/v20190820/model/OldSubRefund.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

OldSubRefund::OldSubRefund() :
    m_channelExternalRefundIdHasBeenSet(false),
    m_channelExternalOrderIdHasBeenSet(false),
    m_channelRefundIdHasBeenSet(false),
    m_subOutTradeNoHasBeenSet(false),
    m_refundAmtHasBeenSet(false)
{
}

CoreInternalOutcome OldSubRefund::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ChannelExternalRefundId") && !value["ChannelExternalRefundId"].IsNull())
    {
        if (!value["ChannelExternalRefundId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OldSubRefund.ChannelExternalRefundId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelExternalRefundId = string(value["ChannelExternalRefundId"].GetString());
        m_channelExternalRefundIdHasBeenSet = true;
    }

    if (value.HasMember("ChannelExternalOrderId") && !value["ChannelExternalOrderId"].IsNull())
    {
        if (!value["ChannelExternalOrderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OldSubRefund.ChannelExternalOrderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelExternalOrderId = string(value["ChannelExternalOrderId"].GetString());
        m_channelExternalOrderIdHasBeenSet = true;
    }

    if (value.HasMember("ChannelRefundId") && !value["ChannelRefundId"].IsNull())
    {
        if (!value["ChannelRefundId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OldSubRefund.ChannelRefundId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelRefundId = string(value["ChannelRefundId"].GetString());
        m_channelRefundIdHasBeenSet = true;
    }

    if (value.HasMember("SubOutTradeNo") && !value["SubOutTradeNo"].IsNull())
    {
        if (!value["SubOutTradeNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OldSubRefund.SubOutTradeNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subOutTradeNo = string(value["SubOutTradeNo"].GetString());
        m_subOutTradeNoHasBeenSet = true;
    }

    if (value.HasMember("RefundAmt") && !value["RefundAmt"].IsNull())
    {
        if (!value["RefundAmt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OldSubRefund.RefundAmt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_refundAmt = string(value["RefundAmt"].GetString());
        m_refundAmtHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OldSubRefund::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_channelExternalRefundIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelExternalRefundId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelExternalRefundId.c_str(), allocator).Move(), allocator);
    }

    if (m_channelExternalOrderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelExternalOrderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelExternalOrderId.c_str(), allocator).Move(), allocator);
    }

    if (m_channelRefundIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelRefundId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelRefundId.c_str(), allocator).Move(), allocator);
    }

    if (m_subOutTradeNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubOutTradeNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subOutTradeNo.c_str(), allocator).Move(), allocator);
    }

    if (m_refundAmtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RefundAmt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_refundAmt.c_str(), allocator).Move(), allocator);
    }

}


string OldSubRefund::GetChannelExternalRefundId() const
{
    return m_channelExternalRefundId;
}

void OldSubRefund::SetChannelExternalRefundId(const string& _channelExternalRefundId)
{
    m_channelExternalRefundId = _channelExternalRefundId;
    m_channelExternalRefundIdHasBeenSet = true;
}

bool OldSubRefund::ChannelExternalRefundIdHasBeenSet() const
{
    return m_channelExternalRefundIdHasBeenSet;
}

string OldSubRefund::GetChannelExternalOrderId() const
{
    return m_channelExternalOrderId;
}

void OldSubRefund::SetChannelExternalOrderId(const string& _channelExternalOrderId)
{
    m_channelExternalOrderId = _channelExternalOrderId;
    m_channelExternalOrderIdHasBeenSet = true;
}

bool OldSubRefund::ChannelExternalOrderIdHasBeenSet() const
{
    return m_channelExternalOrderIdHasBeenSet;
}

string OldSubRefund::GetChannelRefundId() const
{
    return m_channelRefundId;
}

void OldSubRefund::SetChannelRefundId(const string& _channelRefundId)
{
    m_channelRefundId = _channelRefundId;
    m_channelRefundIdHasBeenSet = true;
}

bool OldSubRefund::ChannelRefundIdHasBeenSet() const
{
    return m_channelRefundIdHasBeenSet;
}

string OldSubRefund::GetSubOutTradeNo() const
{
    return m_subOutTradeNo;
}

void OldSubRefund::SetSubOutTradeNo(const string& _subOutTradeNo)
{
    m_subOutTradeNo = _subOutTradeNo;
    m_subOutTradeNoHasBeenSet = true;
}

bool OldSubRefund::SubOutTradeNoHasBeenSet() const
{
    return m_subOutTradeNoHasBeenSet;
}

string OldSubRefund::GetRefundAmt() const
{
    return m_refundAmt;
}

void OldSubRefund::SetRefundAmt(const string& _refundAmt)
{
    m_refundAmt = _refundAmt;
    m_refundAmtHasBeenSet = true;
}

bool OldSubRefund::RefundAmtHasBeenSet() const
{
    return m_refundAmtHasBeenSet;
}

