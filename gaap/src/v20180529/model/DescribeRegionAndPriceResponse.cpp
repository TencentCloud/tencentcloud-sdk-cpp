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

#include <tencentcloud/gaap/v20180529/model/DescribeRegionAndPriceResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gaap::V20180529::Model;
using namespace std;

DescribeRegionAndPriceResponse::DescribeRegionAndPriceResponse() :
    m_totalCountHasBeenSet(false),
    m_destRegionSetHasBeenSet(false),
    m_bandwidthUnitPriceHasBeenSet(false),
    m_currencyHasBeenSet(false)
{
}

CoreInternalOutcome DescribeRegionAndPriceResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TotalCount") && !rsp["TotalCount"].IsNull())
    {
        if (!rsp["TotalCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = rsp["TotalCount"].GetUint64();
        m_totalCountHasBeenSet = true;
    }

    if (rsp.HasMember("DestRegionSet") && !rsp["DestRegionSet"].IsNull())
    {
        if (!rsp["DestRegionSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DestRegionSet` is not array type"));

        const rapidjson::Value &tmpValue = rsp["DestRegionSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RegionDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_destRegionSet.push_back(item);
        }
        m_destRegionSetHasBeenSet = true;
    }

    if (rsp.HasMember("BandwidthUnitPrice") && !rsp["BandwidthUnitPrice"].IsNull())
    {
        if (!rsp["BandwidthUnitPrice"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BandwidthUnitPrice` is not array type"));

        const rapidjson::Value &tmpValue = rsp["BandwidthUnitPrice"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BandwidthPriceGradient item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_bandwidthUnitPrice.push_back(item);
        }
        m_bandwidthUnitPriceHasBeenSet = true;
    }

    if (rsp.HasMember("Currency") && !rsp["Currency"].IsNull())
    {
        if (!rsp["Currency"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Currency` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_currency = string(rsp["Currency"].GetString());
        m_currencyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeRegionAndPriceResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_destRegionSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestRegionSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_destRegionSet.begin(); itr != m_destRegionSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_bandwidthUnitPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BandwidthUnitPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_bandwidthUnitPrice.begin(); itr != m_bandwidthUnitPrice.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_currencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Currency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_currency.c_str(), allocator).Move(), allocator);
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


uint64_t DescribeRegionAndPriceResponse::GetTotalCount() const
{
    return m_totalCount;
}

bool DescribeRegionAndPriceResponse::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

vector<RegionDetail> DescribeRegionAndPriceResponse::GetDestRegionSet() const
{
    return m_destRegionSet;
}

bool DescribeRegionAndPriceResponse::DestRegionSetHasBeenSet() const
{
    return m_destRegionSetHasBeenSet;
}

vector<BandwidthPriceGradient> DescribeRegionAndPriceResponse::GetBandwidthUnitPrice() const
{
    return m_bandwidthUnitPrice;
}

bool DescribeRegionAndPriceResponse::BandwidthUnitPriceHasBeenSet() const
{
    return m_bandwidthUnitPriceHasBeenSet;
}

string DescribeRegionAndPriceResponse::GetCurrency() const
{
    return m_currency;
}

bool DescribeRegionAndPriceResponse::CurrencyHasBeenSet() const
{
    return m_currencyHasBeenSet;
}


