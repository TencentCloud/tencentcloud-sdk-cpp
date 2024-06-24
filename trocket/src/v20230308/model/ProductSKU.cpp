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

#include <tencentcloud/trocket/v20230308/model/ProductSKU.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trocket::V20230308::Model;
using namespace std;

ProductSKU::ProductSKU() :
    m_instanceTypeHasBeenSet(false),
    m_skuCodeHasBeenSet(false),
    m_tpsLimitHasBeenSet(false),
    m_scaledTpsLimitHasBeenSet(false),
    m_topicNumLimitHasBeenSet(false),
    m_groupNumLimitHasBeenSet(false),
    m_defaultRetentionHasBeenSet(false),
    m_retentionUpperLimitHasBeenSet(false),
    m_retentionLowerLimitHasBeenSet(false),
    m_maxMessageDelayHasBeenSet(false),
    m_onSaleHasBeenSet(false),
    m_priceTagsHasBeenSet(false),
    m_topicNumUpperLimitHasBeenSet(false)
{
}

CoreInternalOutcome ProductSKU::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductSKU.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("SkuCode") && !value["SkuCode"].IsNull())
    {
        if (!value["SkuCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductSKU.SkuCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_skuCode = string(value["SkuCode"].GetString());
        m_skuCodeHasBeenSet = true;
    }

    if (value.HasMember("TpsLimit") && !value["TpsLimit"].IsNull())
    {
        if (!value["TpsLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProductSKU.TpsLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tpsLimit = value["TpsLimit"].GetInt64();
        m_tpsLimitHasBeenSet = true;
    }

    if (value.HasMember("ScaledTpsLimit") && !value["ScaledTpsLimit"].IsNull())
    {
        if (!value["ScaledTpsLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProductSKU.ScaledTpsLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_scaledTpsLimit = value["ScaledTpsLimit"].GetInt64();
        m_scaledTpsLimitHasBeenSet = true;
    }

    if (value.HasMember("TopicNumLimit") && !value["TopicNumLimit"].IsNull())
    {
        if (!value["TopicNumLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProductSKU.TopicNumLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_topicNumLimit = value["TopicNumLimit"].GetInt64();
        m_topicNumLimitHasBeenSet = true;
    }

    if (value.HasMember("GroupNumLimit") && !value["GroupNumLimit"].IsNull())
    {
        if (!value["GroupNumLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProductSKU.GroupNumLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_groupNumLimit = value["GroupNumLimit"].GetInt64();
        m_groupNumLimitHasBeenSet = true;
    }

    if (value.HasMember("DefaultRetention") && !value["DefaultRetention"].IsNull())
    {
        if (!value["DefaultRetention"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProductSKU.DefaultRetention` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_defaultRetention = value["DefaultRetention"].GetInt64();
        m_defaultRetentionHasBeenSet = true;
    }

    if (value.HasMember("RetentionUpperLimit") && !value["RetentionUpperLimit"].IsNull())
    {
        if (!value["RetentionUpperLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProductSKU.RetentionUpperLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_retentionUpperLimit = value["RetentionUpperLimit"].GetInt64();
        m_retentionUpperLimitHasBeenSet = true;
    }

    if (value.HasMember("RetentionLowerLimit") && !value["RetentionLowerLimit"].IsNull())
    {
        if (!value["RetentionLowerLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProductSKU.RetentionLowerLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_retentionLowerLimit = value["RetentionLowerLimit"].GetInt64();
        m_retentionLowerLimitHasBeenSet = true;
    }

    if (value.HasMember("MaxMessageDelay") && !value["MaxMessageDelay"].IsNull())
    {
        if (!value["MaxMessageDelay"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProductSKU.MaxMessageDelay` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxMessageDelay = value["MaxMessageDelay"].GetInt64();
        m_maxMessageDelayHasBeenSet = true;
    }

    if (value.HasMember("OnSale") && !value["OnSale"].IsNull())
    {
        if (!value["OnSale"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ProductSKU.OnSale` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_onSale = value["OnSale"].GetBool();
        m_onSaleHasBeenSet = true;
    }

    if (value.HasMember("PriceTags") && !value["PriceTags"].IsNull())
    {
        if (!value["PriceTags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ProductSKU.PriceTags` is not array type"));

        const rapidjson::Value &tmpValue = value["PriceTags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PriceTag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_priceTags.push_back(item);
        }
        m_priceTagsHasBeenSet = true;
    }

    if (value.HasMember("TopicNumUpperLimit") && !value["TopicNumUpperLimit"].IsNull())
    {
        if (!value["TopicNumUpperLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProductSKU.TopicNumUpperLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_topicNumUpperLimit = value["TopicNumUpperLimit"].GetInt64();
        m_topicNumUpperLimitHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProductSKU::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_skuCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkuCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_skuCode.c_str(), allocator).Move(), allocator);
    }

    if (m_tpsLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TpsLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tpsLimit, allocator);
    }

    if (m_scaledTpsLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScaledTpsLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scaledTpsLimit, allocator);
    }

    if (m_topicNumLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicNumLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_topicNumLimit, allocator);
    }

    if (m_groupNumLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupNumLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_groupNumLimit, allocator);
    }

    if (m_defaultRetentionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultRetention";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_defaultRetention, allocator);
    }

    if (m_retentionUpperLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetentionUpperLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_retentionUpperLimit, allocator);
    }

    if (m_retentionLowerLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetentionLowerLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_retentionLowerLimit, allocator);
    }

    if (m_maxMessageDelayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxMessageDelay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxMessageDelay, allocator);
    }

    if (m_onSaleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OnSale";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_onSale, allocator);
    }

    if (m_priceTagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PriceTags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_priceTags.begin(); itr != m_priceTags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_topicNumUpperLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicNumUpperLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_topicNumUpperLimit, allocator);
    }

}


string ProductSKU::GetInstanceType() const
{
    return m_instanceType;
}

void ProductSKU::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool ProductSKU::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string ProductSKU::GetSkuCode() const
{
    return m_skuCode;
}

void ProductSKU::SetSkuCode(const string& _skuCode)
{
    m_skuCode = _skuCode;
    m_skuCodeHasBeenSet = true;
}

bool ProductSKU::SkuCodeHasBeenSet() const
{
    return m_skuCodeHasBeenSet;
}

int64_t ProductSKU::GetTpsLimit() const
{
    return m_tpsLimit;
}

void ProductSKU::SetTpsLimit(const int64_t& _tpsLimit)
{
    m_tpsLimit = _tpsLimit;
    m_tpsLimitHasBeenSet = true;
}

bool ProductSKU::TpsLimitHasBeenSet() const
{
    return m_tpsLimitHasBeenSet;
}

int64_t ProductSKU::GetScaledTpsLimit() const
{
    return m_scaledTpsLimit;
}

void ProductSKU::SetScaledTpsLimit(const int64_t& _scaledTpsLimit)
{
    m_scaledTpsLimit = _scaledTpsLimit;
    m_scaledTpsLimitHasBeenSet = true;
}

bool ProductSKU::ScaledTpsLimitHasBeenSet() const
{
    return m_scaledTpsLimitHasBeenSet;
}

int64_t ProductSKU::GetTopicNumLimit() const
{
    return m_topicNumLimit;
}

void ProductSKU::SetTopicNumLimit(const int64_t& _topicNumLimit)
{
    m_topicNumLimit = _topicNumLimit;
    m_topicNumLimitHasBeenSet = true;
}

bool ProductSKU::TopicNumLimitHasBeenSet() const
{
    return m_topicNumLimitHasBeenSet;
}

int64_t ProductSKU::GetGroupNumLimit() const
{
    return m_groupNumLimit;
}

void ProductSKU::SetGroupNumLimit(const int64_t& _groupNumLimit)
{
    m_groupNumLimit = _groupNumLimit;
    m_groupNumLimitHasBeenSet = true;
}

bool ProductSKU::GroupNumLimitHasBeenSet() const
{
    return m_groupNumLimitHasBeenSet;
}

int64_t ProductSKU::GetDefaultRetention() const
{
    return m_defaultRetention;
}

void ProductSKU::SetDefaultRetention(const int64_t& _defaultRetention)
{
    m_defaultRetention = _defaultRetention;
    m_defaultRetentionHasBeenSet = true;
}

bool ProductSKU::DefaultRetentionHasBeenSet() const
{
    return m_defaultRetentionHasBeenSet;
}

int64_t ProductSKU::GetRetentionUpperLimit() const
{
    return m_retentionUpperLimit;
}

void ProductSKU::SetRetentionUpperLimit(const int64_t& _retentionUpperLimit)
{
    m_retentionUpperLimit = _retentionUpperLimit;
    m_retentionUpperLimitHasBeenSet = true;
}

bool ProductSKU::RetentionUpperLimitHasBeenSet() const
{
    return m_retentionUpperLimitHasBeenSet;
}

int64_t ProductSKU::GetRetentionLowerLimit() const
{
    return m_retentionLowerLimit;
}

void ProductSKU::SetRetentionLowerLimit(const int64_t& _retentionLowerLimit)
{
    m_retentionLowerLimit = _retentionLowerLimit;
    m_retentionLowerLimitHasBeenSet = true;
}

bool ProductSKU::RetentionLowerLimitHasBeenSet() const
{
    return m_retentionLowerLimitHasBeenSet;
}

int64_t ProductSKU::GetMaxMessageDelay() const
{
    return m_maxMessageDelay;
}

void ProductSKU::SetMaxMessageDelay(const int64_t& _maxMessageDelay)
{
    m_maxMessageDelay = _maxMessageDelay;
    m_maxMessageDelayHasBeenSet = true;
}

bool ProductSKU::MaxMessageDelayHasBeenSet() const
{
    return m_maxMessageDelayHasBeenSet;
}

bool ProductSKU::GetOnSale() const
{
    return m_onSale;
}

void ProductSKU::SetOnSale(const bool& _onSale)
{
    m_onSale = _onSale;
    m_onSaleHasBeenSet = true;
}

bool ProductSKU::OnSaleHasBeenSet() const
{
    return m_onSaleHasBeenSet;
}

vector<PriceTag> ProductSKU::GetPriceTags() const
{
    return m_priceTags;
}

void ProductSKU::SetPriceTags(const vector<PriceTag>& _priceTags)
{
    m_priceTags = _priceTags;
    m_priceTagsHasBeenSet = true;
}

bool ProductSKU::PriceTagsHasBeenSet() const
{
    return m_priceTagsHasBeenSet;
}

int64_t ProductSKU::GetTopicNumUpperLimit() const
{
    return m_topicNumUpperLimit;
}

void ProductSKU::SetTopicNumUpperLimit(const int64_t& _topicNumUpperLimit)
{
    m_topicNumUpperLimit = _topicNumUpperLimit;
    m_topicNumUpperLimitHasBeenSet = true;
}

bool ProductSKU::TopicNumUpperLimitHasBeenSet() const
{
    return m_topicNumUpperLimitHasBeenSet;
}

