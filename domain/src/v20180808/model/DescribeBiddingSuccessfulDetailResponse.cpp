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

#include <tencentcloud/domain/v20180808/model/DescribeBiddingSuccessfulDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Domain::V20180808::Model;
using namespace std;

DescribeBiddingSuccessfulDetailResponse::DescribeBiddingSuccessfulDetailResponse() :
    m_domainHasBeenSet(false),
    m_successfulTimeHasBeenSet(false),
    m_successfulPriceHasBeenSet(false),
    m_regTimeHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_deleteTimeHasBeenSet(false),
    m_payEndTimeHasBeenSet(false),
    m_biddingBondRefundHasBeenSet(false),
    m_biddingBondPriceHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome DescribeBiddingSuccessfulDetailResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Domain") && !rsp["Domain"].IsNull())
    {
        if (!rsp["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(rsp["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (rsp.HasMember("SuccessfulTime") && !rsp["SuccessfulTime"].IsNull())
    {
        if (!rsp["SuccessfulTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SuccessfulTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_successfulTime = string(rsp["SuccessfulTime"].GetString());
        m_successfulTimeHasBeenSet = true;
    }

    if (rsp.HasMember("SuccessfulPrice") && !rsp["SuccessfulPrice"].IsNull())
    {
        if (!rsp["SuccessfulPrice"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SuccessfulPrice` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_successfulPrice = rsp["SuccessfulPrice"].GetDouble();
        m_successfulPriceHasBeenSet = true;
    }

    if (rsp.HasMember("RegTime") && !rsp["RegTime"].IsNull())
    {
        if (!rsp["RegTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regTime = string(rsp["RegTime"].GetString());
        m_regTimeHasBeenSet = true;
    }

    if (rsp.HasMember("ExpireTime") && !rsp["ExpireTime"].IsNull())
    {
        if (!rsp["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(rsp["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (rsp.HasMember("DeleteTime") && !rsp["DeleteTime"].IsNull())
    {
        if (!rsp["DeleteTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeleteTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deleteTime = string(rsp["DeleteTime"].GetString());
        m_deleteTimeHasBeenSet = true;
    }

    if (rsp.HasMember("PayEndTime") && !rsp["PayEndTime"].IsNull())
    {
        if (!rsp["PayEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payEndTime = string(rsp["PayEndTime"].GetString());
        m_payEndTimeHasBeenSet = true;
    }

    if (rsp.HasMember("BiddingBondRefund") && !rsp["BiddingBondRefund"].IsNull())
    {
        if (!rsp["BiddingBondRefund"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BiddingBondRefund` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_biddingBondRefund = string(rsp["BiddingBondRefund"].GetString());
        m_biddingBondRefundHasBeenSet = true;
    }

    if (rsp.HasMember("BiddingBondPrice") && !rsp["BiddingBondPrice"].IsNull())
    {
        if (!rsp["BiddingBondPrice"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `BiddingBondPrice` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_biddingBondPrice = rsp["BiddingBondPrice"].GetDouble();
        m_biddingBondPriceHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = rsp["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeBiddingSuccessfulDetailResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_successfulTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuccessfulTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_successfulTime.c_str(), allocator).Move(), allocator);
    }

    if (m_successfulPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuccessfulPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_successfulPrice, allocator);
    }

    if (m_regTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regTime.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_deleteTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deleteTime.c_str(), allocator).Move(), allocator);
    }

    if (m_payEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_biddingBondRefundHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BiddingBondRefund";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_biddingBondRefund.c_str(), allocator).Move(), allocator);
    }

    if (m_biddingBondPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BiddingBondPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_biddingBondPrice, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
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


string DescribeBiddingSuccessfulDetailResponse::GetDomain() const
{
    return m_domain;
}

bool DescribeBiddingSuccessfulDetailResponse::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string DescribeBiddingSuccessfulDetailResponse::GetSuccessfulTime() const
{
    return m_successfulTime;
}

bool DescribeBiddingSuccessfulDetailResponse::SuccessfulTimeHasBeenSet() const
{
    return m_successfulTimeHasBeenSet;
}

double DescribeBiddingSuccessfulDetailResponse::GetSuccessfulPrice() const
{
    return m_successfulPrice;
}

bool DescribeBiddingSuccessfulDetailResponse::SuccessfulPriceHasBeenSet() const
{
    return m_successfulPriceHasBeenSet;
}

string DescribeBiddingSuccessfulDetailResponse::GetRegTime() const
{
    return m_regTime;
}

bool DescribeBiddingSuccessfulDetailResponse::RegTimeHasBeenSet() const
{
    return m_regTimeHasBeenSet;
}

string DescribeBiddingSuccessfulDetailResponse::GetExpireTime() const
{
    return m_expireTime;
}

bool DescribeBiddingSuccessfulDetailResponse::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string DescribeBiddingSuccessfulDetailResponse::GetDeleteTime() const
{
    return m_deleteTime;
}

bool DescribeBiddingSuccessfulDetailResponse::DeleteTimeHasBeenSet() const
{
    return m_deleteTimeHasBeenSet;
}

string DescribeBiddingSuccessfulDetailResponse::GetPayEndTime() const
{
    return m_payEndTime;
}

bool DescribeBiddingSuccessfulDetailResponse::PayEndTimeHasBeenSet() const
{
    return m_payEndTimeHasBeenSet;
}

string DescribeBiddingSuccessfulDetailResponse::GetBiddingBondRefund() const
{
    return m_biddingBondRefund;
}

bool DescribeBiddingSuccessfulDetailResponse::BiddingBondRefundHasBeenSet() const
{
    return m_biddingBondRefundHasBeenSet;
}

double DescribeBiddingSuccessfulDetailResponse::GetBiddingBondPrice() const
{
    return m_biddingBondPrice;
}

bool DescribeBiddingSuccessfulDetailResponse::BiddingBondPriceHasBeenSet() const
{
    return m_biddingBondPriceHasBeenSet;
}

uint64_t DescribeBiddingSuccessfulDetailResponse::GetStatus() const
{
    return m_status;
}

bool DescribeBiddingSuccessfulDetailResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}


