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

#include <tencentcloud/tke/v20180525/model/GetClusterLevelPriceResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

GetClusterLevelPriceResponse::GetClusterLevelPriceResponse() :
    m_costHasBeenSet(false),
    m_totalCostHasBeenSet(false),
    m_policyHasBeenSet(false)
{
}

CoreInternalOutcome GetClusterLevelPriceResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Cost") && !rsp["Cost"].IsNull())
    {
        if (!rsp["Cost"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Cost` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cost = rsp["Cost"].GetUint64();
        m_costHasBeenSet = true;
    }

    if (rsp.HasMember("TotalCost") && !rsp["TotalCost"].IsNull())
    {
        if (!rsp["TotalCost"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalCost` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCost = rsp["TotalCost"].GetUint64();
        m_totalCostHasBeenSet = true;
    }

    if (rsp.HasMember("Policy") && !rsp["Policy"].IsNull())
    {
        if (!rsp["Policy"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Policy` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_policy = rsp["Policy"].GetDouble();
        m_policyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string GetClusterLevelPriceResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_costHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cost, allocator);
    }

    if (m_totalCostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCost, allocator);
    }

    if (m_policyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Policy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_policy, allocator);
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


uint64_t GetClusterLevelPriceResponse::GetCost() const
{
    return m_cost;
}

bool GetClusterLevelPriceResponse::CostHasBeenSet() const
{
    return m_costHasBeenSet;
}

uint64_t GetClusterLevelPriceResponse::GetTotalCost() const
{
    return m_totalCost;
}

bool GetClusterLevelPriceResponse::TotalCostHasBeenSet() const
{
    return m_totalCostHasBeenSet;
}

double GetClusterLevelPriceResponse::GetPolicy() const
{
    return m_policy;
}

bool GetClusterLevelPriceResponse::PolicyHasBeenSet() const
{
    return m_policyHasBeenSet;
}


