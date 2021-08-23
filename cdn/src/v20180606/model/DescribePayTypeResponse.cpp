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

#include <tencentcloud/cdn/v20180606/model/DescribePayTypeResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

DescribePayTypeResponse::DescribePayTypeResponse() :
    m_payTypeHasBeenSet(false),
    m_billingCycleHasBeenSet(false),
    m_statTypeHasBeenSet(false),
    m_regionTypeHasBeenSet(false),
    m_currentPayTypeHasBeenSet(false)
{
}

CoreInternalOutcome DescribePayTypeResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("PayType") && !rsp["PayType"].IsNull())
    {
        if (!rsp["PayType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payType = string(rsp["PayType"].GetString());
        m_payTypeHasBeenSet = true;
    }

    if (rsp.HasMember("BillingCycle") && !rsp["BillingCycle"].IsNull())
    {
        if (!rsp["BillingCycle"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillingCycle` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_billingCycle = string(rsp["BillingCycle"].GetString());
        m_billingCycleHasBeenSet = true;
    }

    if (rsp.HasMember("StatType") && !rsp["StatType"].IsNull())
    {
        if (!rsp["StatType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StatType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statType = string(rsp["StatType"].GetString());
        m_statTypeHasBeenSet = true;
    }

    if (rsp.HasMember("RegionType") && !rsp["RegionType"].IsNull())
    {
        if (!rsp["RegionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionType = string(rsp["RegionType"].GetString());
        m_regionTypeHasBeenSet = true;
    }

    if (rsp.HasMember("CurrentPayType") && !rsp["CurrentPayType"].IsNull())
    {
        if (!rsp["CurrentPayType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CurrentPayType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_currentPayType = string(rsp["CurrentPayType"].GetString());
        m_currentPayTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribePayTypeResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_payTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payType.c_str(), allocator).Move(), allocator);
    }

    if (m_billingCycleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillingCycle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_billingCycle.c_str(), allocator).Move(), allocator);
    }

    if (m_statTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_statType.c_str(), allocator).Move(), allocator);
    }

    if (m_regionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionType.c_str(), allocator).Move(), allocator);
    }

    if (m_currentPayTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentPayType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_currentPayType.c_str(), allocator).Move(), allocator);
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


string DescribePayTypeResponse::GetPayType() const
{
    return m_payType;
}

bool DescribePayTypeResponse::PayTypeHasBeenSet() const
{
    return m_payTypeHasBeenSet;
}

string DescribePayTypeResponse::GetBillingCycle() const
{
    return m_billingCycle;
}

bool DescribePayTypeResponse::BillingCycleHasBeenSet() const
{
    return m_billingCycleHasBeenSet;
}

string DescribePayTypeResponse::GetStatType() const
{
    return m_statType;
}

bool DescribePayTypeResponse::StatTypeHasBeenSet() const
{
    return m_statTypeHasBeenSet;
}

string DescribePayTypeResponse::GetRegionType() const
{
    return m_regionType;
}

bool DescribePayTypeResponse::RegionTypeHasBeenSet() const
{
    return m_regionTypeHasBeenSet;
}

string DescribePayTypeResponse::GetCurrentPayType() const
{
    return m_currentPayType;
}

bool DescribePayTypeResponse::CurrentPayTypeHasBeenSet() const
{
    return m_currentPayTypeHasBeenSet;
}


