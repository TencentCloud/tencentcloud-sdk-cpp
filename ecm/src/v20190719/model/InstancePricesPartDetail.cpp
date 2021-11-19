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

#include <tencentcloud/ecm/v20190719/model/InstancePricesPartDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ecm::V20190719::Model;
using namespace std;

InstancePricesPartDetail::InstancePricesPartDetail() :
    m_cpuPriceHasBeenSet(false),
    m_memPriceHasBeenSet(false),
    m_disksPriceHasBeenSet(false)
{
}

CoreInternalOutcome InstancePricesPartDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CpuPrice") && !value["CpuPrice"].IsNull())
    {
        if (!value["CpuPrice"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InstancePricesPartDetail.CpuPrice` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cpuPrice.Deserialize(value["CpuPrice"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cpuPriceHasBeenSet = true;
    }

    if (value.HasMember("MemPrice") && !value["MemPrice"].IsNull())
    {
        if (!value["MemPrice"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InstancePricesPartDetail.MemPrice` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_memPrice.Deserialize(value["MemPrice"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_memPriceHasBeenSet = true;
    }

    if (value.HasMember("DisksPrice") && !value["DisksPrice"].IsNull())
    {
        if (!value["DisksPrice"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InstancePricesPartDetail.DisksPrice` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_disksPrice.Deserialize(value["DisksPrice"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_disksPriceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstancePricesPartDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cpuPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cpuPrice.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_memPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_memPrice.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_disksPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisksPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_disksPrice.ToJsonObject(value[key.c_str()], allocator);
    }

}


PriceDetail InstancePricesPartDetail::GetCpuPrice() const
{
    return m_cpuPrice;
}

void InstancePricesPartDetail::SetCpuPrice(const PriceDetail& _cpuPrice)
{
    m_cpuPrice = _cpuPrice;
    m_cpuPriceHasBeenSet = true;
}

bool InstancePricesPartDetail::CpuPriceHasBeenSet() const
{
    return m_cpuPriceHasBeenSet;
}

PriceDetail InstancePricesPartDetail::GetMemPrice() const
{
    return m_memPrice;
}

void InstancePricesPartDetail::SetMemPrice(const PriceDetail& _memPrice)
{
    m_memPrice = _memPrice;
    m_memPriceHasBeenSet = true;
}

bool InstancePricesPartDetail::MemPriceHasBeenSet() const
{
    return m_memPriceHasBeenSet;
}

PriceDetail InstancePricesPartDetail::GetDisksPrice() const
{
    return m_disksPrice;
}

void InstancePricesPartDetail::SetDisksPrice(const PriceDetail& _disksPrice)
{
    m_disksPrice = _disksPrice;
    m_disksPriceHasBeenSet = true;
}

bool InstancePricesPartDetail::DisksPriceHasBeenSet() const
{
    return m_disksPriceHasBeenSet;
}

