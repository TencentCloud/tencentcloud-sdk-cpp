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

#include <tencentcloud/cpdp/v20190820/model/MigrateOrderRefundQueryResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

MigrateOrderRefundQueryResponse::MigrateOrderRefundQueryResponse() :
    m_isSuccessHasBeenSet(false),
    m_tradeSerialNoHasBeenSet(false),
    m_tradeMsgHasBeenSet(false),
    m_tradeStatusHasBeenSet(false),
    m_thirdChannelOrderIdHasBeenSet(false)
{
}

CoreInternalOutcome MigrateOrderRefundQueryResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("IsSuccess") && !rsp["IsSuccess"].IsNull())
    {
        if (!rsp["IsSuccess"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IsSuccess` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isSuccess = rsp["IsSuccess"].GetBool();
        m_isSuccessHasBeenSet = true;
    }

    if (rsp.HasMember("TradeSerialNo") && !rsp["TradeSerialNo"].IsNull())
    {
        if (!rsp["TradeSerialNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TradeSerialNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tradeSerialNo = string(rsp["TradeSerialNo"].GetString());
        m_tradeSerialNoHasBeenSet = true;
    }

    if (rsp.HasMember("TradeMsg") && !rsp["TradeMsg"].IsNull())
    {
        if (!rsp["TradeMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TradeMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tradeMsg = string(rsp["TradeMsg"].GetString());
        m_tradeMsgHasBeenSet = true;
    }

    if (rsp.HasMember("TradeStatus") && !rsp["TradeStatus"].IsNull())
    {
        if (!rsp["TradeStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TradeStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tradeStatus = rsp["TradeStatus"].GetInt64();
        m_tradeStatusHasBeenSet = true;
    }

    if (rsp.HasMember("ThirdChannelOrderId") && !rsp["ThirdChannelOrderId"].IsNull())
    {
        if (!rsp["ThirdChannelOrderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ThirdChannelOrderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_thirdChannelOrderId = string(rsp["ThirdChannelOrderId"].GetString());
        m_thirdChannelOrderIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string MigrateOrderRefundQueryResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_isSuccessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSuccess";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSuccess, allocator);
    }

    if (m_tradeSerialNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TradeSerialNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tradeSerialNo.c_str(), allocator).Move(), allocator);
    }

    if (m_tradeMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TradeMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tradeMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_tradeStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TradeStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tradeStatus, allocator);
    }

    if (m_thirdChannelOrderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThirdChannelOrderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_thirdChannelOrderId.c_str(), allocator).Move(), allocator);
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


bool MigrateOrderRefundQueryResponse::GetIsSuccess() const
{
    return m_isSuccess;
}

bool MigrateOrderRefundQueryResponse::IsSuccessHasBeenSet() const
{
    return m_isSuccessHasBeenSet;
}

string MigrateOrderRefundQueryResponse::GetTradeSerialNo() const
{
    return m_tradeSerialNo;
}

bool MigrateOrderRefundQueryResponse::TradeSerialNoHasBeenSet() const
{
    return m_tradeSerialNoHasBeenSet;
}

string MigrateOrderRefundQueryResponse::GetTradeMsg() const
{
    return m_tradeMsg;
}

bool MigrateOrderRefundQueryResponse::TradeMsgHasBeenSet() const
{
    return m_tradeMsgHasBeenSet;
}

int64_t MigrateOrderRefundQueryResponse::GetTradeStatus() const
{
    return m_tradeStatus;
}

bool MigrateOrderRefundQueryResponse::TradeStatusHasBeenSet() const
{
    return m_tradeStatusHasBeenSet;
}

string MigrateOrderRefundQueryResponse::GetThirdChannelOrderId() const
{
    return m_thirdChannelOrderId;
}

bool MigrateOrderRefundQueryResponse::ThirdChannelOrderIdHasBeenSet() const
{
    return m_thirdChannelOrderIdHasBeenSet;
}


