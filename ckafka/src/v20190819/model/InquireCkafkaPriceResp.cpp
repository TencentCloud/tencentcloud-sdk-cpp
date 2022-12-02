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

#include <tencentcloud/ckafka/v20190819/model/InquireCkafkaPriceResp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

InquireCkafkaPriceResp::InquireCkafkaPriceResp() :
    m_instancePriceHasBeenSet(false),
    m_publicNetworkBandwidthPriceHasBeenSet(false)
{
}

CoreInternalOutcome InquireCkafkaPriceResp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstancePrice") && !value["InstancePrice"].IsNull())
    {
        if (!value["InstancePrice"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InquireCkafkaPriceResp.InstancePrice` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_instancePrice.Deserialize(value["InstancePrice"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_instancePriceHasBeenSet = true;
    }

    if (value.HasMember("PublicNetworkBandwidthPrice") && !value["PublicNetworkBandwidthPrice"].IsNull())
    {
        if (!value["PublicNetworkBandwidthPrice"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InquireCkafkaPriceResp.PublicNetworkBandwidthPrice` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_publicNetworkBandwidthPrice.Deserialize(value["PublicNetworkBandwidthPrice"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_publicNetworkBandwidthPriceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InquireCkafkaPriceResp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instancePriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstancePrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_instancePrice.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_publicNetworkBandwidthPriceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicNetworkBandwidthPrice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_publicNetworkBandwidthPrice.ToJsonObject(value[key.c_str()], allocator);
    }

}


InquiryPrice InquireCkafkaPriceResp::GetInstancePrice() const
{
    return m_instancePrice;
}

void InquireCkafkaPriceResp::SetInstancePrice(const InquiryPrice& _instancePrice)
{
    m_instancePrice = _instancePrice;
    m_instancePriceHasBeenSet = true;
}

bool InquireCkafkaPriceResp::InstancePriceHasBeenSet() const
{
    return m_instancePriceHasBeenSet;
}

InquiryPrice InquireCkafkaPriceResp::GetPublicNetworkBandwidthPrice() const
{
    return m_publicNetworkBandwidthPrice;
}

void InquireCkafkaPriceResp::SetPublicNetworkBandwidthPrice(const InquiryPrice& _publicNetworkBandwidthPrice)
{
    m_publicNetworkBandwidthPrice = _publicNetworkBandwidthPrice;
    m_publicNetworkBandwidthPriceHasBeenSet = true;
}

bool InquireCkafkaPriceResp::PublicNetworkBandwidthPriceHasBeenSet() const
{
    return m_publicNetworkBandwidthPriceHasBeenSet;
}

