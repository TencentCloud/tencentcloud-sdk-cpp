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

#include <tencentcloud/lighthouse/v20200324/model/DataDiskPrice.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lighthouse::V20200324::Model;
using namespace std;

DataDiskPrice::DataDiskPrice() :
    m_diskIdHasBeenSet(false),
    m_originalDiskPriceHasBeenSet(false),
    m_originalPriceHasBeenSet(false),
    m_discountHasBeenSet(false),
    m_discountPriceHasBeenSet(false),
    m_instanceIdHasBeenSet(false)
{
}

CoreInternalOutcome DataDiskPrice::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DiskId") && !value["DiskId"].IsNull())
    {
        if (!value["DiskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataDiskPrice.DiskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskId = string(value["DiskId"].GetString());
        m_diskIdHasBeenSet = true;
    }

    if (value.HasMember("OriginalDiskPrice") && !value["OriginalDiskPrice"].IsNull())
    {
        if (!value["OriginalDiskPrice"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DataDiskPrice.OriginalDiskPrice` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_originalDiskPrice = value["OriginalDiskPrice"].GetDouble();
        m_originalDiskPriceHasBeenSet = true;
    }

    if (value.HasMember("OriginalPrice") && !value["OriginalPrice"].IsNull())
    {
        if (!value["OriginalPrice"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DataDiskPrice.OriginalPrice` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_originalPrice = value["OriginalPrice"].GetDouble();
        m_originalPriceHasBeenSet = true;
    }

    if (value.HasMember("Discount") && !value["Discount"].IsNull())
    {
        if (!value["Discount"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DataDiskPrice.Discount` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_discount = value["Discount"].GetDouble();
        m_discountHasBeenSet = true;
    }

    if (value.HasMember("DiscountPrice") && !value["DiscountPrice"].IsNull())
    {
        if (!value["DiscountPrice"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DataDiskPrice.DiscountPrice` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_discountPrice = value["DiscountPrice"].GetDouble();
        m_discountPriceHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataDiskPrice.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DataDiskPrice::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_diskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diskId.c_str(), allocator).Move(), allocator);
    }

    if (m_originalDiskPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalDiskPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_originalDiskPrice, allocator);
    }

    if (m_originalPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_originalPrice, allocator);
    }

    if (m_discountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Discount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_discount, allocator);
    }

    if (m_discountPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiscountPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_discountPrice, allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

}


string DataDiskPrice::GetDiskId() const
{
    return m_diskId;
}

void DataDiskPrice::SetDiskId(const string& _diskId)
{
    m_diskId = _diskId;
    m_diskIdHasBeenSet = true;
}

bool DataDiskPrice::DiskIdHasBeenSet() const
{
    return m_diskIdHasBeenSet;
}

double DataDiskPrice::GetOriginalDiskPrice() const
{
    return m_originalDiskPrice;
}

void DataDiskPrice::SetOriginalDiskPrice(const double& _originalDiskPrice)
{
    m_originalDiskPrice = _originalDiskPrice;
    m_originalDiskPriceHasBeenSet = true;
}

bool DataDiskPrice::OriginalDiskPriceHasBeenSet() const
{
    return m_originalDiskPriceHasBeenSet;
}

double DataDiskPrice::GetOriginalPrice() const
{
    return m_originalPrice;
}

void DataDiskPrice::SetOriginalPrice(const double& _originalPrice)
{
    m_originalPrice = _originalPrice;
    m_originalPriceHasBeenSet = true;
}

bool DataDiskPrice::OriginalPriceHasBeenSet() const
{
    return m_originalPriceHasBeenSet;
}

double DataDiskPrice::GetDiscount() const
{
    return m_discount;
}

void DataDiskPrice::SetDiscount(const double& _discount)
{
    m_discount = _discount;
    m_discountHasBeenSet = true;
}

bool DataDiskPrice::DiscountHasBeenSet() const
{
    return m_discountHasBeenSet;
}

double DataDiskPrice::GetDiscountPrice() const
{
    return m_discountPrice;
}

void DataDiskPrice::SetDiscountPrice(const double& _discountPrice)
{
    m_discountPrice = _discountPrice;
    m_discountPriceHasBeenSet = true;
}

bool DataDiskPrice::DiscountPriceHasBeenSet() const
{
    return m_discountPriceHasBeenSet;
}

string DataDiskPrice::GetInstanceId() const
{
    return m_instanceId;
}

void DataDiskPrice::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DataDiskPrice::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

