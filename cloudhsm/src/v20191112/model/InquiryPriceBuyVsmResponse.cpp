/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/cloudhsm/v20191112/model/InquiryPriceBuyVsmResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cloudhsm::V20191112::Model;
using namespace std;

InquiryPriceBuyVsmResponse::InquiryPriceBuyVsmResponse() :
    m_totalCostHasBeenSet(false),
    m_goodsNumHasBeenSet(false),
    m_timeSpanHasBeenSet(false),
    m_timeUnitHasBeenSet(false),
    m_originalCostHasBeenSet(false)
{
}

CoreInternalOutcome InquiryPriceBuyVsmResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TotalCost") && !rsp["TotalCost"].IsNull())
    {
        if (!rsp["TotalCost"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TotalCost` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_totalCost = rsp["TotalCost"].GetDouble();
        m_totalCostHasBeenSet = true;
    }

    if (rsp.HasMember("GoodsNum") && !rsp["GoodsNum"].IsNull())
    {
        if (!rsp["GoodsNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GoodsNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_goodsNum = rsp["GoodsNum"].GetInt64();
        m_goodsNumHasBeenSet = true;
    }

    if (rsp.HasMember("TimeSpan") && !rsp["TimeSpan"].IsNull())
    {
        if (!rsp["TimeSpan"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimeSpan` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeSpan = string(rsp["TimeSpan"].GetString());
        m_timeSpanHasBeenSet = true;
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

    if (rsp.HasMember("OriginalCost") && !rsp["OriginalCost"].IsNull())
    {
        if (!rsp["OriginalCost"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `OriginalCost` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_originalCost = rsp["OriginalCost"].GetDouble();
        m_originalCostHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string InquiryPriceBuyVsmResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_totalCostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCost, allocator);
    }

    if (m_goodsNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GoodsNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_goodsNum, allocator);
    }

    if (m_timeSpanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeSpan";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeSpan.c_str(), allocator).Move(), allocator);
    }

    if (m_timeUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_originalCostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_originalCost, allocator);
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


double InquiryPriceBuyVsmResponse::GetTotalCost() const
{
    return m_totalCost;
}

bool InquiryPriceBuyVsmResponse::TotalCostHasBeenSet() const
{
    return m_totalCostHasBeenSet;
}

int64_t InquiryPriceBuyVsmResponse::GetGoodsNum() const
{
    return m_goodsNum;
}

bool InquiryPriceBuyVsmResponse::GoodsNumHasBeenSet() const
{
    return m_goodsNumHasBeenSet;
}

string InquiryPriceBuyVsmResponse::GetTimeSpan() const
{
    return m_timeSpan;
}

bool InquiryPriceBuyVsmResponse::TimeSpanHasBeenSet() const
{
    return m_timeSpanHasBeenSet;
}

string InquiryPriceBuyVsmResponse::GetTimeUnit() const
{
    return m_timeUnit;
}

bool InquiryPriceBuyVsmResponse::TimeUnitHasBeenSet() const
{
    return m_timeUnitHasBeenSet;
}

double InquiryPriceBuyVsmResponse::GetOriginalCost() const
{
    return m_originalCost;
}

bool InquiryPriceBuyVsmResponse::OriginalCostHasBeenSet() const
{
    return m_originalCostHasBeenSet;
}


