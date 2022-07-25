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

#include <tencentcloud/cynosdb/v20190107/model/InquirePriceRenewResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

InquirePriceRenewResponse::InquirePriceRenewResponse() :
    m_clusterIdHasBeenSet(false),
    m_instanceIdsHasBeenSet(false),
    m_pricesHasBeenSet(false),
    m_instanceRealTotalPriceHasBeenSet(false),
    m_storageRealTotalPriceHasBeenSet(false)
{
}

CoreInternalOutcome InquirePriceRenewResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ClusterId") && !rsp["ClusterId"].IsNull())
    {
        if (!rsp["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(rsp["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (rsp.HasMember("InstanceIds") && !rsp["InstanceIds"].IsNull())
    {
        if (!rsp["InstanceIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceIds` is not array type"));

        const rapidjson::Value &tmpValue = rsp["InstanceIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_instanceIds.push_back((*itr).GetString());
        }
        m_instanceIdsHasBeenSet = true;
    }

    if (rsp.HasMember("Prices") && !rsp["Prices"].IsNull())
    {
        if (!rsp["Prices"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Prices` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Prices"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TradePrice item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_prices.push_back(item);
        }
        m_pricesHasBeenSet = true;
    }

    if (rsp.HasMember("InstanceRealTotalPrice") && !rsp["InstanceRealTotalPrice"].IsNull())
    {
        if (!rsp["InstanceRealTotalPrice"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceRealTotalPrice` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceRealTotalPrice = rsp["InstanceRealTotalPrice"].GetInt64();
        m_instanceRealTotalPriceHasBeenSet = true;
    }

    if (rsp.HasMember("StorageRealTotalPrice") && !rsp["StorageRealTotalPrice"].IsNull())
    {
        if (!rsp["StorageRealTotalPrice"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StorageRealTotalPrice` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_storageRealTotalPrice = rsp["StorageRealTotalPrice"].GetInt64();
        m_storageRealTotalPriceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string InquirePriceRenewResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceIds.begin(); itr != m_instanceIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_pricesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Prices";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_prices.begin(); itr != m_prices.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_instanceRealTotalPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceRealTotalPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceRealTotalPrice, allocator);
    }

    if (m_storageRealTotalPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageRealTotalPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storageRealTotalPrice, allocator);
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


string InquirePriceRenewResponse::GetClusterId() const
{
    return m_clusterId;
}

bool InquirePriceRenewResponse::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

vector<string> InquirePriceRenewResponse::GetInstanceIds() const
{
    return m_instanceIds;
}

bool InquirePriceRenewResponse::InstanceIdsHasBeenSet() const
{
    return m_instanceIdsHasBeenSet;
}

vector<TradePrice> InquirePriceRenewResponse::GetPrices() const
{
    return m_prices;
}

bool InquirePriceRenewResponse::PricesHasBeenSet() const
{
    return m_pricesHasBeenSet;
}

int64_t InquirePriceRenewResponse::GetInstanceRealTotalPrice() const
{
    return m_instanceRealTotalPrice;
}

bool InquirePriceRenewResponse::InstanceRealTotalPriceHasBeenSet() const
{
    return m_instanceRealTotalPriceHasBeenSet;
}

int64_t InquirePriceRenewResponse::GetStorageRealTotalPrice() const
{
    return m_storageRealTotalPrice;
}

bool InquirePriceRenewResponse::StorageRealTotalPriceHasBeenSet() const
{
    return m_storageRealTotalPriceHasBeenSet;
}


