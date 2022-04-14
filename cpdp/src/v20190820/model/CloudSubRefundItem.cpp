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

#include <tencentcloud/cpdp/v20190820/model/CloudSubRefundItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

CloudSubRefundItem::CloudSubRefundItem() :
    m_channelExternalRefundIdHasBeenSet(false),
    m_channelExternalOrderIdHasBeenSet(false),
    m_refundAmtHasBeenSet(false),
    m_subOutTradeNoHasBeenSet(false),
    m_subRefundIdHasBeenSet(false),
    m_subAppIdHasBeenSet(false),
    m_channelSubOrderIdHasBeenSet(false),
    m_channelSubRefundIdHasBeenSet(false)
{
}

CoreInternalOutcome CloudSubRefundItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ChannelExternalRefundId") && !value["ChannelExternalRefundId"].IsNull())
    {
        if (!value["ChannelExternalRefundId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudSubRefundItem.ChannelExternalRefundId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelExternalRefundId = string(value["ChannelExternalRefundId"].GetString());
        m_channelExternalRefundIdHasBeenSet = true;
    }

    if (value.HasMember("ChannelExternalOrderId") && !value["ChannelExternalOrderId"].IsNull())
    {
        if (!value["ChannelExternalOrderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudSubRefundItem.ChannelExternalOrderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelExternalOrderId = string(value["ChannelExternalOrderId"].GetString());
        m_channelExternalOrderIdHasBeenSet = true;
    }

    if (value.HasMember("RefundAmt") && !value["RefundAmt"].IsNull())
    {
        if (!value["RefundAmt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudSubRefundItem.RefundAmt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_refundAmt = value["RefundAmt"].GetInt64();
        m_refundAmtHasBeenSet = true;
    }

    if (value.HasMember("SubOutTradeNo") && !value["SubOutTradeNo"].IsNull())
    {
        if (!value["SubOutTradeNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudSubRefundItem.SubOutTradeNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subOutTradeNo = string(value["SubOutTradeNo"].GetString());
        m_subOutTradeNoHasBeenSet = true;
    }

    if (value.HasMember("SubRefundId") && !value["SubRefundId"].IsNull())
    {
        if (!value["SubRefundId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudSubRefundItem.SubRefundId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subRefundId = string(value["SubRefundId"].GetString());
        m_subRefundIdHasBeenSet = true;
    }

    if (value.HasMember("SubAppId") && !value["SubAppId"].IsNull())
    {
        if (!value["SubAppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudSubRefundItem.SubAppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subAppId = string(value["SubAppId"].GetString());
        m_subAppIdHasBeenSet = true;
    }

    if (value.HasMember("ChannelSubOrderId") && !value["ChannelSubOrderId"].IsNull())
    {
        if (!value["ChannelSubOrderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudSubRefundItem.ChannelSubOrderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelSubOrderId = string(value["ChannelSubOrderId"].GetString());
        m_channelSubOrderIdHasBeenSet = true;
    }

    if (value.HasMember("ChannelSubRefundId") && !value["ChannelSubRefundId"].IsNull())
    {
        if (!value["ChannelSubRefundId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudSubRefundItem.ChannelSubRefundId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelSubRefundId = string(value["ChannelSubRefundId"].GetString());
        m_channelSubRefundIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudSubRefundItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_refundAmtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RefundAmt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_refundAmt, allocator);
    }

    if (m_subOutTradeNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubOutTradeNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subOutTradeNo.c_str(), allocator).Move(), allocator);
    }

    if (m_subRefundIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubRefundId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subRefundId.c_str(), allocator).Move(), allocator);
    }

    if (m_subAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_channelSubOrderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelSubOrderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelSubOrderId.c_str(), allocator).Move(), allocator);
    }

    if (m_channelSubRefundIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelSubRefundId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelSubRefundId.c_str(), allocator).Move(), allocator);
    }

}


string CloudSubRefundItem::GetChannelExternalRefundId() const
{
    return m_channelExternalRefundId;
}

void CloudSubRefundItem::SetChannelExternalRefundId(const string& _channelExternalRefundId)
{
    m_channelExternalRefundId = _channelExternalRefundId;
    m_channelExternalRefundIdHasBeenSet = true;
}

bool CloudSubRefundItem::ChannelExternalRefundIdHasBeenSet() const
{
    return m_channelExternalRefundIdHasBeenSet;
}

string CloudSubRefundItem::GetChannelExternalOrderId() const
{
    return m_channelExternalOrderId;
}

void CloudSubRefundItem::SetChannelExternalOrderId(const string& _channelExternalOrderId)
{
    m_channelExternalOrderId = _channelExternalOrderId;
    m_channelExternalOrderIdHasBeenSet = true;
}

bool CloudSubRefundItem::ChannelExternalOrderIdHasBeenSet() const
{
    return m_channelExternalOrderIdHasBeenSet;
}

int64_t CloudSubRefundItem::GetRefundAmt() const
{
    return m_refundAmt;
}

void CloudSubRefundItem::SetRefundAmt(const int64_t& _refundAmt)
{
    m_refundAmt = _refundAmt;
    m_refundAmtHasBeenSet = true;
}

bool CloudSubRefundItem::RefundAmtHasBeenSet() const
{
    return m_refundAmtHasBeenSet;
}

string CloudSubRefundItem::GetSubOutTradeNo() const
{
    return m_subOutTradeNo;
}

void CloudSubRefundItem::SetSubOutTradeNo(const string& _subOutTradeNo)
{
    m_subOutTradeNo = _subOutTradeNo;
    m_subOutTradeNoHasBeenSet = true;
}

bool CloudSubRefundItem::SubOutTradeNoHasBeenSet() const
{
    return m_subOutTradeNoHasBeenSet;
}

string CloudSubRefundItem::GetSubRefundId() const
{
    return m_subRefundId;
}

void CloudSubRefundItem::SetSubRefundId(const string& _subRefundId)
{
    m_subRefundId = _subRefundId;
    m_subRefundIdHasBeenSet = true;
}

bool CloudSubRefundItem::SubRefundIdHasBeenSet() const
{
    return m_subRefundIdHasBeenSet;
}

string CloudSubRefundItem::GetSubAppId() const
{
    return m_subAppId;
}

void CloudSubRefundItem::SetSubAppId(const string& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool CloudSubRefundItem::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

string CloudSubRefundItem::GetChannelSubOrderId() const
{
    return m_channelSubOrderId;
}

void CloudSubRefundItem::SetChannelSubOrderId(const string& _channelSubOrderId)
{
    m_channelSubOrderId = _channelSubOrderId;
    m_channelSubOrderIdHasBeenSet = true;
}

bool CloudSubRefundItem::ChannelSubOrderIdHasBeenSet() const
{
    return m_channelSubOrderIdHasBeenSet;
}

string CloudSubRefundItem::GetChannelSubRefundId() const
{
    return m_channelSubRefundId;
}

void CloudSubRefundItem::SetChannelSubRefundId(const string& _channelSubRefundId)
{
    m_channelSubRefundId = _channelSubRefundId;
    m_channelSubRefundIdHasBeenSet = true;
}

bool CloudSubRefundItem::ChannelSubRefundIdHasBeenSet() const
{
    return m_channelSubRefundIdHasBeenSet;
}

