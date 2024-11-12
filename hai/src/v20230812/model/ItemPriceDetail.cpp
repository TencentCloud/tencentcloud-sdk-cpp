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

#include <tencentcloud/hai/v20230812/model/ItemPriceDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Hai::V20230812::Model;
using namespace std;

ItemPriceDetail::ItemPriceDetail() :
    m_instanceIdHasBeenSet(false),
    m_instancePriceHasBeenSet(false),
    m_cloudDiskPriceHasBeenSet(false),
    m_instanceTotalPriceHasBeenSet(false)
{
}

CoreInternalOutcome ItemPriceDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ItemPriceDetail.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstancePrice") && !value["InstancePrice"].IsNull())
    {
        if (!value["InstancePrice"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ItemPriceDetail.InstancePrice` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_instancePrice.Deserialize(value["InstancePrice"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_instancePriceHasBeenSet = true;
    }

    if (value.HasMember("CloudDiskPrice") && !value["CloudDiskPrice"].IsNull())
    {
        if (!value["CloudDiskPrice"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ItemPriceDetail.CloudDiskPrice` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cloudDiskPrice.Deserialize(value["CloudDiskPrice"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cloudDiskPriceHasBeenSet = true;
    }

    if (value.HasMember("InstanceTotalPrice") && !value["InstanceTotalPrice"].IsNull())
    {
        if (!value["InstanceTotalPrice"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ItemPriceDetail.InstanceTotalPrice` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_instanceTotalPrice.Deserialize(value["InstanceTotalPrice"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_instanceTotalPriceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ItemPriceDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instancePriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstancePrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_instancePrice.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_cloudDiskPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudDiskPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cloudDiskPrice.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_instanceTotalPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceTotalPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_instanceTotalPrice.ToJsonObject(value[key.c_str()], allocator);
    }

}


string ItemPriceDetail::GetInstanceId() const
{
    return m_instanceId;
}

void ItemPriceDetail::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ItemPriceDetail::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

ItemPrice ItemPriceDetail::GetInstancePrice() const
{
    return m_instancePrice;
}

void ItemPriceDetail::SetInstancePrice(const ItemPrice& _instancePrice)
{
    m_instancePrice = _instancePrice;
    m_instancePriceHasBeenSet = true;
}

bool ItemPriceDetail::InstancePriceHasBeenSet() const
{
    return m_instancePriceHasBeenSet;
}

ItemPrice ItemPriceDetail::GetCloudDiskPrice() const
{
    return m_cloudDiskPrice;
}

void ItemPriceDetail::SetCloudDiskPrice(const ItemPrice& _cloudDiskPrice)
{
    m_cloudDiskPrice = _cloudDiskPrice;
    m_cloudDiskPriceHasBeenSet = true;
}

bool ItemPriceDetail::CloudDiskPriceHasBeenSet() const
{
    return m_cloudDiskPriceHasBeenSet;
}

ItemPrice ItemPriceDetail::GetInstanceTotalPrice() const
{
    return m_instanceTotalPrice;
}

void ItemPriceDetail::SetInstanceTotalPrice(const ItemPrice& _instanceTotalPrice)
{
    m_instanceTotalPrice = _instanceTotalPrice;
    m_instanceTotalPriceHasBeenSet = true;
}

bool ItemPriceDetail::InstanceTotalPriceHasBeenSet() const
{
    return m_instanceTotalPriceHasBeenSet;
}

