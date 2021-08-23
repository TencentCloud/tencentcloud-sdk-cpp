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

#include <tencentcloud/cds/v20180420/model/InquiryPriceDbauditInstanceResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cds::V20180420::Model;
using namespace std;

InquiryPriceDbauditInstanceResponse::InquiryPriceDbauditInstanceResponse() :
    m_totalPriceHasBeenSet(false),
    m_realTotalCostHasBeenSet(false)
{
}

CoreInternalOutcome InquiryPriceDbauditInstanceResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TotalPrice") && !rsp["TotalPrice"].IsNull())
    {
        if (!rsp["TotalPrice"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TotalPrice` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_totalPrice = rsp["TotalPrice"].GetDouble();
        m_totalPriceHasBeenSet = true;
    }

    if (rsp.HasMember("RealTotalCost") && !rsp["RealTotalCost"].IsNull())
    {
        if (!rsp["RealTotalCost"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `RealTotalCost` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_realTotalCost = rsp["RealTotalCost"].GetDouble();
        m_realTotalCostHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string InquiryPriceDbauditInstanceResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_totalPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalPrice, allocator);
    }

    if (m_realTotalCostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealTotalCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_realTotalCost, allocator);
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


double InquiryPriceDbauditInstanceResponse::GetTotalPrice() const
{
    return m_totalPrice;
}

bool InquiryPriceDbauditInstanceResponse::TotalPriceHasBeenSet() const
{
    return m_totalPriceHasBeenSet;
}

double InquiryPriceDbauditInstanceResponse::GetRealTotalCost() const
{
    return m_realTotalCost;
}

bool InquiryPriceDbauditInstanceResponse::RealTotalCostHasBeenSet() const
{
    return m_realTotalCostHasBeenSet;
}


