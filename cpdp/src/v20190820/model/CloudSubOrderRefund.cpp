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

#include <tencentcloud/cpdp/v20190820/model/CloudSubOrderRefund.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

CloudSubOrderRefund::CloudSubOrderRefund() :
    m_refundAmtHasBeenSet(false),
    m_platformRefundAmtHasBeenSet(false),
    m_subMchRefundAmtHasBeenSet(false),
    m_subOutTradeNoHasBeenSet(false),
    m_subRefundIdHasBeenSet(false)
{
}

CoreInternalOutcome CloudSubOrderRefund::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RefundAmt") && !value["RefundAmt"].IsNull())
    {
        if (!value["RefundAmt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudSubOrderRefund.RefundAmt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_refundAmt = value["RefundAmt"].GetInt64();
        m_refundAmtHasBeenSet = true;
    }

    if (value.HasMember("PlatformRefundAmt") && !value["PlatformRefundAmt"].IsNull())
    {
        if (!value["PlatformRefundAmt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudSubOrderRefund.PlatformRefundAmt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_platformRefundAmt = value["PlatformRefundAmt"].GetInt64();
        m_platformRefundAmtHasBeenSet = true;
    }

    if (value.HasMember("SubMchRefundAmt") && !value["SubMchRefundAmt"].IsNull())
    {
        if (!value["SubMchRefundAmt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudSubOrderRefund.SubMchRefundAmt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_subMchRefundAmt = value["SubMchRefundAmt"].GetInt64();
        m_subMchRefundAmtHasBeenSet = true;
    }

    if (value.HasMember("SubOutTradeNo") && !value["SubOutTradeNo"].IsNull())
    {
        if (!value["SubOutTradeNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudSubOrderRefund.SubOutTradeNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subOutTradeNo = string(value["SubOutTradeNo"].GetString());
        m_subOutTradeNoHasBeenSet = true;
    }

    if (value.HasMember("SubRefundId") && !value["SubRefundId"].IsNull())
    {
        if (!value["SubRefundId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudSubOrderRefund.SubRefundId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subRefundId = string(value["SubRefundId"].GetString());
        m_subRefundIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudSubOrderRefund::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_refundAmtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RefundAmt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_refundAmt, allocator);
    }

    if (m_platformRefundAmtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlatformRefundAmt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_platformRefundAmt, allocator);
    }

    if (m_subMchRefundAmtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubMchRefundAmt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_subMchRefundAmt, allocator);
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

}


int64_t CloudSubOrderRefund::GetRefundAmt() const
{
    return m_refundAmt;
}

void CloudSubOrderRefund::SetRefundAmt(const int64_t& _refundAmt)
{
    m_refundAmt = _refundAmt;
    m_refundAmtHasBeenSet = true;
}

bool CloudSubOrderRefund::RefundAmtHasBeenSet() const
{
    return m_refundAmtHasBeenSet;
}

int64_t CloudSubOrderRefund::GetPlatformRefundAmt() const
{
    return m_platformRefundAmt;
}

void CloudSubOrderRefund::SetPlatformRefundAmt(const int64_t& _platformRefundAmt)
{
    m_platformRefundAmt = _platformRefundAmt;
    m_platformRefundAmtHasBeenSet = true;
}

bool CloudSubOrderRefund::PlatformRefundAmtHasBeenSet() const
{
    return m_platformRefundAmtHasBeenSet;
}

int64_t CloudSubOrderRefund::GetSubMchRefundAmt() const
{
    return m_subMchRefundAmt;
}

void CloudSubOrderRefund::SetSubMchRefundAmt(const int64_t& _subMchRefundAmt)
{
    m_subMchRefundAmt = _subMchRefundAmt;
    m_subMchRefundAmtHasBeenSet = true;
}

bool CloudSubOrderRefund::SubMchRefundAmtHasBeenSet() const
{
    return m_subMchRefundAmtHasBeenSet;
}

string CloudSubOrderRefund::GetSubOutTradeNo() const
{
    return m_subOutTradeNo;
}

void CloudSubOrderRefund::SetSubOutTradeNo(const string& _subOutTradeNo)
{
    m_subOutTradeNo = _subOutTradeNo;
    m_subOutTradeNoHasBeenSet = true;
}

bool CloudSubOrderRefund::SubOutTradeNoHasBeenSet() const
{
    return m_subOutTradeNoHasBeenSet;
}

string CloudSubOrderRefund::GetSubRefundId() const
{
    return m_subRefundId;
}

void CloudSubOrderRefund::SetSubRefundId(const string& _subRefundId)
{
    m_subRefundId = _subRefundId;
    m_subRefundIdHasBeenSet = true;
}

bool CloudSubOrderRefund::SubRefundIdHasBeenSet() const
{
    return m_subRefundIdHasBeenSet;
}

