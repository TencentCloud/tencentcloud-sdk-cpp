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

#include <tencentcloud/ckafka/v20190819/model/InquiryDetailPrice.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

InquiryDetailPrice::InquiryDetailPrice() :
    m_bandwidthPriceHasBeenSet(false),
    m_diskPriceHasBeenSet(false),
    m_partitionPriceHasBeenSet(false),
    m_topicPriceHasBeenSet(false),
    m_instanceTypePriceHasBeenSet(false)
{
}

CoreInternalOutcome InquiryDetailPrice::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BandwidthPrice") && !value["BandwidthPrice"].IsNull())
    {
        if (!value["BandwidthPrice"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InquiryDetailPrice.BandwidthPrice` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_bandwidthPrice.Deserialize(value["BandwidthPrice"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_bandwidthPriceHasBeenSet = true;
    }

    if (value.HasMember("DiskPrice") && !value["DiskPrice"].IsNull())
    {
        if (!value["DiskPrice"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InquiryDetailPrice.DiskPrice` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_diskPrice.Deserialize(value["DiskPrice"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_diskPriceHasBeenSet = true;
    }

    if (value.HasMember("PartitionPrice") && !value["PartitionPrice"].IsNull())
    {
        if (!value["PartitionPrice"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InquiryDetailPrice.PartitionPrice` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_partitionPrice.Deserialize(value["PartitionPrice"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_partitionPriceHasBeenSet = true;
    }

    if (value.HasMember("TopicPrice") && !value["TopicPrice"].IsNull())
    {
        if (!value["TopicPrice"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InquiryDetailPrice.TopicPrice` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_topicPrice.Deserialize(value["TopicPrice"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_topicPriceHasBeenSet = true;
    }

    if (value.HasMember("InstanceTypePrice") && !value["InstanceTypePrice"].IsNull())
    {
        if (!value["InstanceTypePrice"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InquiryDetailPrice.InstanceTypePrice` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_instanceTypePrice.Deserialize(value["InstanceTypePrice"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_instanceTypePriceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InquiryDetailPrice::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_bandwidthPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BandwidthPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_bandwidthPrice.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_diskPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_diskPrice.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_partitionPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PartitionPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_partitionPrice.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_topicPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_topicPrice.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_instanceTypePriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceTypePrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_instanceTypePrice.ToJsonObject(value[key.c_str()], allocator);
    }

}


InquiryBasePrice InquiryDetailPrice::GetBandwidthPrice() const
{
    return m_bandwidthPrice;
}

void InquiryDetailPrice::SetBandwidthPrice(const InquiryBasePrice& _bandwidthPrice)
{
    m_bandwidthPrice = _bandwidthPrice;
    m_bandwidthPriceHasBeenSet = true;
}

bool InquiryDetailPrice::BandwidthPriceHasBeenSet() const
{
    return m_bandwidthPriceHasBeenSet;
}

InquiryBasePrice InquiryDetailPrice::GetDiskPrice() const
{
    return m_diskPrice;
}

void InquiryDetailPrice::SetDiskPrice(const InquiryBasePrice& _diskPrice)
{
    m_diskPrice = _diskPrice;
    m_diskPriceHasBeenSet = true;
}

bool InquiryDetailPrice::DiskPriceHasBeenSet() const
{
    return m_diskPriceHasBeenSet;
}

InquiryBasePrice InquiryDetailPrice::GetPartitionPrice() const
{
    return m_partitionPrice;
}

void InquiryDetailPrice::SetPartitionPrice(const InquiryBasePrice& _partitionPrice)
{
    m_partitionPrice = _partitionPrice;
    m_partitionPriceHasBeenSet = true;
}

bool InquiryDetailPrice::PartitionPriceHasBeenSet() const
{
    return m_partitionPriceHasBeenSet;
}

InquiryBasePrice InquiryDetailPrice::GetTopicPrice() const
{
    return m_topicPrice;
}

void InquiryDetailPrice::SetTopicPrice(const InquiryBasePrice& _topicPrice)
{
    m_topicPrice = _topicPrice;
    m_topicPriceHasBeenSet = true;
}

bool InquiryDetailPrice::TopicPriceHasBeenSet() const
{
    return m_topicPriceHasBeenSet;
}

InquiryBasePrice InquiryDetailPrice::GetInstanceTypePrice() const
{
    return m_instanceTypePrice;
}

void InquiryDetailPrice::SetInstanceTypePrice(const InquiryBasePrice& _instanceTypePrice)
{
    m_instanceTypePrice = _instanceTypePrice;
    m_instanceTypePriceHasBeenSet = true;
}

bool InquiryDetailPrice::InstanceTypePriceHasBeenSet() const
{
    return m_instanceTypePriceHasBeenSet;
}

