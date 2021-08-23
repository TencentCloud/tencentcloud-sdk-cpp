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

#include <tencentcloud/vpc/v20170312/model/InquirePriceCreateDirectConnectGatewayResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

InquirePriceCreateDirectConnectGatewayResponse::InquirePriceCreateDirectConnectGatewayResponse() :
    m_totalCostHasBeenSet(false),
    m_realTotalCostHasBeenSet(false)
{
}

CoreInternalOutcome InquirePriceCreateDirectConnectGatewayResponse::Deserialize(const string &payload)
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
        if (!rsp["TotalCost"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalCost` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCost = rsp["TotalCost"].GetInt64();
        m_totalCostHasBeenSet = true;
    }

    if (rsp.HasMember("RealTotalCost") && !rsp["RealTotalCost"].IsNull())
    {
        if (!rsp["RealTotalCost"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RealTotalCost` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_realTotalCost = rsp["RealTotalCost"].GetInt64();
        m_realTotalCostHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string InquirePriceCreateDirectConnectGatewayResponse::ToJsonString() const
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


int64_t InquirePriceCreateDirectConnectGatewayResponse::GetTotalCost() const
{
    return m_totalCost;
}

bool InquirePriceCreateDirectConnectGatewayResponse::TotalCostHasBeenSet() const
{
    return m_totalCostHasBeenSet;
}

int64_t InquirePriceCreateDirectConnectGatewayResponse::GetRealTotalCost() const
{
    return m_realTotalCost;
}

bool InquirePriceCreateDirectConnectGatewayResponse::RealTotalCostHasBeenSet() const
{
    return m_realTotalCostHasBeenSet;
}


