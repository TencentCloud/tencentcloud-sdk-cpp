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

#include <tencentcloud/lighthouse/v20200324/model/InquirePriceRenewInstancesResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lighthouse::V20200324::Model;
using namespace std;

InquirePriceRenewInstancesResponse::InquirePriceRenewInstancesResponse() :
    m_priceHasBeenSet(false),
    m_dataDiskPriceSetHasBeenSet(false),
    m_instancePriceDetailSetHasBeenSet(false),
    m_totalPriceHasBeenSet(false)
{
}

CoreInternalOutcome InquirePriceRenewInstancesResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Price") && !rsp["Price"].IsNull())
    {
        if (!rsp["Price"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Price` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_price.Deserialize(rsp["Price"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_priceHasBeenSet = true;
    }

    if (rsp.HasMember("DataDiskPriceSet") && !rsp["DataDiskPriceSet"].IsNull())
    {
        if (!rsp["DataDiskPriceSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DataDiskPriceSet` is not array type"));

        const rapidjson::Value &tmpValue = rsp["DataDiskPriceSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DataDiskPrice item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dataDiskPriceSet.push_back(item);
        }
        m_dataDiskPriceSetHasBeenSet = true;
    }

    if (rsp.HasMember("InstancePriceDetailSet") && !rsp["InstancePriceDetailSet"].IsNull())
    {
        if (!rsp["InstancePriceDetailSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstancePriceDetailSet` is not array type"));

        const rapidjson::Value &tmpValue = rsp["InstancePriceDetailSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            InstancePriceDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_instancePriceDetailSet.push_back(item);
        }
        m_instancePriceDetailSetHasBeenSet = true;
    }

    if (rsp.HasMember("TotalPrice") && !rsp["TotalPrice"].IsNull())
    {
        if (!rsp["TotalPrice"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TotalPrice` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_totalPrice.Deserialize(rsp["TotalPrice"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_totalPriceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string InquirePriceRenewInstancesResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_priceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Price";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_price.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_dataDiskPriceSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataDiskPriceSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dataDiskPriceSet.begin(); itr != m_dataDiskPriceSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_instancePriceDetailSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstancePriceDetailSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_instancePriceDetailSet.begin(); itr != m_instancePriceDetailSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_totalPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_totalPrice.ToJsonObject(value[key.c_str()], allocator);
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


Price InquirePriceRenewInstancesResponse::GetPrice() const
{
    return m_price;
}

bool InquirePriceRenewInstancesResponse::PriceHasBeenSet() const
{
    return m_priceHasBeenSet;
}

vector<DataDiskPrice> InquirePriceRenewInstancesResponse::GetDataDiskPriceSet() const
{
    return m_dataDiskPriceSet;
}

bool InquirePriceRenewInstancesResponse::DataDiskPriceSetHasBeenSet() const
{
    return m_dataDiskPriceSetHasBeenSet;
}

vector<InstancePriceDetail> InquirePriceRenewInstancesResponse::GetInstancePriceDetailSet() const
{
    return m_instancePriceDetailSet;
}

bool InquirePriceRenewInstancesResponse::InstancePriceDetailSetHasBeenSet() const
{
    return m_instancePriceDetailSetHasBeenSet;
}

TotalPrice InquirePriceRenewInstancesResponse::GetTotalPrice() const
{
    return m_totalPrice;
}

bool InquirePriceRenewInstancesResponse::TotalPriceHasBeenSet() const
{
    return m_totalPriceHasBeenSet;
}


