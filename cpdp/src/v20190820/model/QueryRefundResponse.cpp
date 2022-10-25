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

#include <tencentcloud/cpdp/v20190820/model/QueryRefundResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

QueryRefundResponse::QueryRefundResponse() :
    m_stateHasBeenSet(false),
    m_channelExternalOrderIdHasBeenSet(false),
    m_channelExternalRefundIdHasBeenSet(false),
    m_channelOrderIdHasBeenSet(false),
    m_totalRefundAmtHasBeenSet(false),
    m_currencyTypeHasBeenSet(false),
    m_outTradeNoHasBeenSet(false),
    m_refundIdHasBeenSet(false),
    m_midasAppIdHasBeenSet(false),
    m_usedRefundIdHasBeenSet(false),
    m_subRefundListHasBeenSet(false)
{
}

CoreInternalOutcome QueryRefundResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("State") && !rsp["State"].IsNull())
    {
        if (!rsp["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(rsp["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (rsp.HasMember("ChannelExternalOrderId") && !rsp["ChannelExternalOrderId"].IsNull())
    {
        if (!rsp["ChannelExternalOrderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelExternalOrderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelExternalOrderId = string(rsp["ChannelExternalOrderId"].GetString());
        m_channelExternalOrderIdHasBeenSet = true;
    }

    if (rsp.HasMember("ChannelExternalRefundId") && !rsp["ChannelExternalRefundId"].IsNull())
    {
        if (!rsp["ChannelExternalRefundId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelExternalRefundId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelExternalRefundId = string(rsp["ChannelExternalRefundId"].GetString());
        m_channelExternalRefundIdHasBeenSet = true;
    }

    if (rsp.HasMember("ChannelOrderId") && !rsp["ChannelOrderId"].IsNull())
    {
        if (!rsp["ChannelOrderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelOrderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelOrderId = string(rsp["ChannelOrderId"].GetString());
        m_channelOrderIdHasBeenSet = true;
    }

    if (rsp.HasMember("TotalRefundAmt") && !rsp["TotalRefundAmt"].IsNull())
    {
        if (!rsp["TotalRefundAmt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalRefundAmt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalRefundAmt = rsp["TotalRefundAmt"].GetInt64();
        m_totalRefundAmtHasBeenSet = true;
    }

    if (rsp.HasMember("CurrencyType") && !rsp["CurrencyType"].IsNull())
    {
        if (!rsp["CurrencyType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CurrencyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_currencyType = string(rsp["CurrencyType"].GetString());
        m_currencyTypeHasBeenSet = true;
    }

    if (rsp.HasMember("OutTradeNo") && !rsp["OutTradeNo"].IsNull())
    {
        if (!rsp["OutTradeNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutTradeNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outTradeNo = string(rsp["OutTradeNo"].GetString());
        m_outTradeNoHasBeenSet = true;
    }

    if (rsp.HasMember("RefundId") && !rsp["RefundId"].IsNull())
    {
        if (!rsp["RefundId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RefundId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_refundId = string(rsp["RefundId"].GetString());
        m_refundIdHasBeenSet = true;
    }

    if (rsp.HasMember("MidasAppId") && !rsp["MidasAppId"].IsNull())
    {
        if (!rsp["MidasAppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MidasAppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_midasAppId = string(rsp["MidasAppId"].GetString());
        m_midasAppIdHasBeenSet = true;
    }

    if (rsp.HasMember("UsedRefundId") && !rsp["UsedRefundId"].IsNull())
    {
        if (!rsp["UsedRefundId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsedRefundId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_usedRefundId = string(rsp["UsedRefundId"].GetString());
        m_usedRefundIdHasBeenSet = true;
    }

    if (rsp.HasMember("SubRefundList") && !rsp["SubRefundList"].IsNull())
    {
        if (!rsp["SubRefundList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SubRefundList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["SubRefundList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            OldSubRefund item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_subRefundList.push_back(item);
        }
        m_subRefundListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string QueryRefundResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_channelExternalOrderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelExternalOrderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelExternalOrderId.c_str(), allocator).Move(), allocator);
    }

    if (m_channelExternalRefundIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelExternalRefundId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelExternalRefundId.c_str(), allocator).Move(), allocator);
    }

    if (m_channelOrderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelOrderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelOrderId.c_str(), allocator).Move(), allocator);
    }

    if (m_totalRefundAmtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalRefundAmt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalRefundAmt, allocator);
    }

    if (m_currencyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrencyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_currencyType.c_str(), allocator).Move(), allocator);
    }

    if (m_outTradeNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutTradeNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outTradeNo.c_str(), allocator).Move(), allocator);
    }

    if (m_refundIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RefundId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_refundId.c_str(), allocator).Move(), allocator);
    }

    if (m_midasAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MidasAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_midasAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_usedRefundIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedRefundId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_usedRefundId.c_str(), allocator).Move(), allocator);
    }

    if (m_subRefundListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubRefundList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_subRefundList.begin(); itr != m_subRefundList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string QueryRefundResponse::GetState() const
{
    return m_state;
}

bool QueryRefundResponse::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string QueryRefundResponse::GetChannelExternalOrderId() const
{
    return m_channelExternalOrderId;
}

bool QueryRefundResponse::ChannelExternalOrderIdHasBeenSet() const
{
    return m_channelExternalOrderIdHasBeenSet;
}

string QueryRefundResponse::GetChannelExternalRefundId() const
{
    return m_channelExternalRefundId;
}

bool QueryRefundResponse::ChannelExternalRefundIdHasBeenSet() const
{
    return m_channelExternalRefundIdHasBeenSet;
}

string QueryRefundResponse::GetChannelOrderId() const
{
    return m_channelOrderId;
}

bool QueryRefundResponse::ChannelOrderIdHasBeenSet() const
{
    return m_channelOrderIdHasBeenSet;
}

int64_t QueryRefundResponse::GetTotalRefundAmt() const
{
    return m_totalRefundAmt;
}

bool QueryRefundResponse::TotalRefundAmtHasBeenSet() const
{
    return m_totalRefundAmtHasBeenSet;
}

string QueryRefundResponse::GetCurrencyType() const
{
    return m_currencyType;
}

bool QueryRefundResponse::CurrencyTypeHasBeenSet() const
{
    return m_currencyTypeHasBeenSet;
}

string QueryRefundResponse::GetOutTradeNo() const
{
    return m_outTradeNo;
}

bool QueryRefundResponse::OutTradeNoHasBeenSet() const
{
    return m_outTradeNoHasBeenSet;
}

string QueryRefundResponse::GetRefundId() const
{
    return m_refundId;
}

bool QueryRefundResponse::RefundIdHasBeenSet() const
{
    return m_refundIdHasBeenSet;
}

string QueryRefundResponse::GetMidasAppId() const
{
    return m_midasAppId;
}

bool QueryRefundResponse::MidasAppIdHasBeenSet() const
{
    return m_midasAppIdHasBeenSet;
}

string QueryRefundResponse::GetUsedRefundId() const
{
    return m_usedRefundId;
}

bool QueryRefundResponse::UsedRefundIdHasBeenSet() const
{
    return m_usedRefundIdHasBeenSet;
}

vector<OldSubRefund> QueryRefundResponse::GetSubRefundList() const
{
    return m_subRefundList;
}

bool QueryRefundResponse::SubRefundListHasBeenSet() const
{
    return m_subRefundListHasBeenSet;
}


