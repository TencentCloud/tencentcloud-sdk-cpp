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

#include <tencentcloud/emr/v20190103/model/InquiryPriceRenewInstanceResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

InquiryPriceRenewInstanceResponse::InquiryPriceRenewInstanceResponse() :
    m_originalCostHasBeenSet(false),
    m_discountCostHasBeenSet(false),
    m_timeUnitHasBeenSet(false),
    m_timeSpanHasBeenSet(false),
    m_priceDetailHasBeenSet(false),
    m_nodeRenewPriceDetailsHasBeenSet(false)
{
}

CoreInternalOutcome InquiryPriceRenewInstanceResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("OriginalCost") && !rsp["OriginalCost"].IsNull())
    {
        if (!rsp["OriginalCost"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `OriginalCost` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_originalCost = rsp["OriginalCost"].GetDouble();
        m_originalCostHasBeenSet = true;
    }

    if (rsp.HasMember("DiscountCost") && !rsp["DiscountCost"].IsNull())
    {
        if (!rsp["DiscountCost"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DiscountCost` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_discountCost = rsp["DiscountCost"].GetDouble();
        m_discountCostHasBeenSet = true;
    }

    if (rsp.HasMember("TimeUnit") && !rsp["TimeUnit"].IsNull())
    {
        if (!rsp["TimeUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimeUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeUnit = string(rsp["TimeUnit"].GetString());
        m_timeUnitHasBeenSet = true;
    }

    if (rsp.HasMember("TimeSpan") && !rsp["TimeSpan"].IsNull())
    {
        if (!rsp["TimeSpan"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TimeSpan` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timeSpan = rsp["TimeSpan"].GetInt64();
        m_timeSpanHasBeenSet = true;
    }

    if (rsp.HasMember("PriceDetail") && !rsp["PriceDetail"].IsNull())
    {
        if (!rsp["PriceDetail"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PriceDetail` is not array type"));

        const rapidjson::Value &tmpValue = rsp["PriceDetail"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PriceDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_priceDetail.push_back(item);
        }
        m_priceDetailHasBeenSet = true;
    }

    if (rsp.HasMember("NodeRenewPriceDetails") && !rsp["NodeRenewPriceDetails"].IsNull())
    {
        if (!rsp["NodeRenewPriceDetails"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NodeRenewPriceDetails` is not array type"));

        const rapidjson::Value &tmpValue = rsp["NodeRenewPriceDetails"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            NodeRenewPriceDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_nodeRenewPriceDetails.push_back(item);
        }
        m_nodeRenewPriceDetailsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string InquiryPriceRenewInstanceResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_originalCostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_originalCost, allocator);
    }

    if (m_discountCostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiscountCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_discountCost, allocator);
    }

    if (m_timeUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_timeSpanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeSpan";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeSpan, allocator);
    }

    if (m_priceDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PriceDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_priceDetail.begin(); itr != m_priceDetail.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_nodeRenewPriceDetailsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeRenewPriceDetails";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_nodeRenewPriceDetails.begin(); itr != m_nodeRenewPriceDetails.end(); ++itr, ++i)
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


double InquiryPriceRenewInstanceResponse::GetOriginalCost() const
{
    return m_originalCost;
}

bool InquiryPriceRenewInstanceResponse::OriginalCostHasBeenSet() const
{
    return m_originalCostHasBeenSet;
}

double InquiryPriceRenewInstanceResponse::GetDiscountCost() const
{
    return m_discountCost;
}

bool InquiryPriceRenewInstanceResponse::DiscountCostHasBeenSet() const
{
    return m_discountCostHasBeenSet;
}

string InquiryPriceRenewInstanceResponse::GetTimeUnit() const
{
    return m_timeUnit;
}

bool InquiryPriceRenewInstanceResponse::TimeUnitHasBeenSet() const
{
    return m_timeUnitHasBeenSet;
}

int64_t InquiryPriceRenewInstanceResponse::GetTimeSpan() const
{
    return m_timeSpan;
}

bool InquiryPriceRenewInstanceResponse::TimeSpanHasBeenSet() const
{
    return m_timeSpanHasBeenSet;
}

vector<PriceDetail> InquiryPriceRenewInstanceResponse::GetPriceDetail() const
{
    return m_priceDetail;
}

bool InquiryPriceRenewInstanceResponse::PriceDetailHasBeenSet() const
{
    return m_priceDetailHasBeenSet;
}

vector<NodeRenewPriceDetail> InquiryPriceRenewInstanceResponse::GetNodeRenewPriceDetails() const
{
    return m_nodeRenewPriceDetails;
}

bool InquiryPriceRenewInstanceResponse::NodeRenewPriceDetailsHasBeenSet() const
{
    return m_nodeRenewPriceDetailsHasBeenSet;
}


