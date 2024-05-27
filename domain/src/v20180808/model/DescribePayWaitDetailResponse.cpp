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

#include <tencentcloud/domain/v20180808/model/DescribePayWaitDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Domain::V20180808::Model;
using namespace std;

DescribePayWaitDetailResponse::DescribePayWaitDetailResponse() :
    m_domainHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_regTimeHasBeenSet(false),
    m_priceHasBeenSet(false),
    m_retDepositHasBeenSet(false)
{
}

CoreInternalOutcome DescribePayWaitDetailResponse::Deserialize(const string &payload)
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

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(rsp["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("EndTime") && !rsp["EndTime"].IsNull())
    {
        if (!rsp["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(rsp["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
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

    if (rsp.HasMember("Price") && !rsp["Price"].IsNull())
    {
        if (!rsp["Price"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Price` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_price = rsp["Price"].GetDouble();
        m_priceHasBeenSet = true;
    }

    if (rsp.HasMember("RetDeposit") && !rsp["RetDeposit"].IsNull())
    {
        if (!rsp["RetDeposit"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `RetDeposit` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_retDeposit = rsp["RetDeposit"].GetDouble();
        m_retDepositHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribePayWaitDetailResponse::ToJsonString() const
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

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_regTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regTime.c_str(), allocator).Move(), allocator);
    }

    if (m_priceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Price";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_price, allocator);
    }

    if (m_retDepositHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetDeposit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_retDeposit, allocator);
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


string DescribePayWaitDetailResponse::GetDomain() const
{
    return m_domain;
}

bool DescribePayWaitDetailResponse::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string DescribePayWaitDetailResponse::GetStatus() const
{
    return m_status;
}

bool DescribePayWaitDetailResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribePayWaitDetailResponse::GetEndTime() const
{
    return m_endTime;
}

bool DescribePayWaitDetailResponse::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribePayWaitDetailResponse::GetRegTime() const
{
    return m_regTime;
}

bool DescribePayWaitDetailResponse::RegTimeHasBeenSet() const
{
    return m_regTimeHasBeenSet;
}

double DescribePayWaitDetailResponse::GetPrice() const
{
    return m_price;
}

bool DescribePayWaitDetailResponse::PriceHasBeenSet() const
{
    return m_priceHasBeenSet;
}

double DescribePayWaitDetailResponse::GetRetDeposit() const
{
    return m_retDeposit;
}

bool DescribePayWaitDetailResponse::RetDepositHasBeenSet() const
{
    return m_retDepositHasBeenSet;
}


