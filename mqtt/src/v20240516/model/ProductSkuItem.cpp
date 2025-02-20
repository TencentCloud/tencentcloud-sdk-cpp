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

#include <tencentcloud/mqtt/v20240516/model/ProductSkuItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mqtt::V20240516::Model;
using namespace std;

ProductSkuItem::ProductSkuItem() :
    m_instanceTypeHasBeenSet(false),
    m_skuCodeHasBeenSet(false),
    m_onSaleHasBeenSet(false),
    m_topicNumLimitHasBeenSet(false),
    m_tpsLimitHasBeenSet(false),
    m_clientNumLimitHasBeenSet(false),
    m_maxSubscriptionPerClientHasBeenSet(false),
    m_authorizationPolicyLimitHasBeenSet(false),
    m_priceTagsHasBeenSet(false)
{
}

CoreInternalOutcome ProductSkuItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductSkuItem.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("SkuCode") && !value["SkuCode"].IsNull())
    {
        if (!value["SkuCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductSkuItem.SkuCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_skuCode = string(value["SkuCode"].GetString());
        m_skuCodeHasBeenSet = true;
    }

    if (value.HasMember("OnSale") && !value["OnSale"].IsNull())
    {
        if (!value["OnSale"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ProductSkuItem.OnSale` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_onSale = value["OnSale"].GetBool();
        m_onSaleHasBeenSet = true;
    }

    if (value.HasMember("TopicNumLimit") && !value["TopicNumLimit"].IsNull())
    {
        if (!value["TopicNumLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProductSkuItem.TopicNumLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_topicNumLimit = value["TopicNumLimit"].GetInt64();
        m_topicNumLimitHasBeenSet = true;
    }

    if (value.HasMember("TpsLimit") && !value["TpsLimit"].IsNull())
    {
        if (!value["TpsLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProductSkuItem.TpsLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tpsLimit = value["TpsLimit"].GetInt64();
        m_tpsLimitHasBeenSet = true;
    }

    if (value.HasMember("ClientNumLimit") && !value["ClientNumLimit"].IsNull())
    {
        if (!value["ClientNumLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProductSkuItem.ClientNumLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_clientNumLimit = value["ClientNumLimit"].GetInt64();
        m_clientNumLimitHasBeenSet = true;
    }

    if (value.HasMember("MaxSubscriptionPerClient") && !value["MaxSubscriptionPerClient"].IsNull())
    {
        if (!value["MaxSubscriptionPerClient"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProductSkuItem.MaxSubscriptionPerClient` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxSubscriptionPerClient = value["MaxSubscriptionPerClient"].GetInt64();
        m_maxSubscriptionPerClientHasBeenSet = true;
    }

    if (value.HasMember("AuthorizationPolicyLimit") && !value["AuthorizationPolicyLimit"].IsNull())
    {
        if (!value["AuthorizationPolicyLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProductSkuItem.AuthorizationPolicyLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_authorizationPolicyLimit = value["AuthorizationPolicyLimit"].GetInt64();
        m_authorizationPolicyLimitHasBeenSet = true;
    }

    if (value.HasMember("PriceTags") && !value["PriceTags"].IsNull())
    {
        if (!value["PriceTags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ProductSkuItem.PriceTags` is not array type"));

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


    return CoreInternalOutcome(true);
}

void ProductSkuItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_onSaleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OnSale";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_onSale, allocator);
    }

    if (m_topicNumLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicNumLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_topicNumLimit, allocator);
    }

    if (m_tpsLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TpsLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tpsLimit, allocator);
    }

    if (m_clientNumLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientNumLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clientNumLimit, allocator);
    }

    if (m_maxSubscriptionPerClientHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxSubscriptionPerClient";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxSubscriptionPerClient, allocator);
    }

    if (m_authorizationPolicyLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthorizationPolicyLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_authorizationPolicyLimit, allocator);
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

}


string ProductSkuItem::GetInstanceType() const
{
    return m_instanceType;
}

void ProductSkuItem::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool ProductSkuItem::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string ProductSkuItem::GetSkuCode() const
{
    return m_skuCode;
}

void ProductSkuItem::SetSkuCode(const string& _skuCode)
{
    m_skuCode = _skuCode;
    m_skuCodeHasBeenSet = true;
}

bool ProductSkuItem::SkuCodeHasBeenSet() const
{
    return m_skuCodeHasBeenSet;
}

bool ProductSkuItem::GetOnSale() const
{
    return m_onSale;
}

void ProductSkuItem::SetOnSale(const bool& _onSale)
{
    m_onSale = _onSale;
    m_onSaleHasBeenSet = true;
}

bool ProductSkuItem::OnSaleHasBeenSet() const
{
    return m_onSaleHasBeenSet;
}

int64_t ProductSkuItem::GetTopicNumLimit() const
{
    return m_topicNumLimit;
}

void ProductSkuItem::SetTopicNumLimit(const int64_t& _topicNumLimit)
{
    m_topicNumLimit = _topicNumLimit;
    m_topicNumLimitHasBeenSet = true;
}

bool ProductSkuItem::TopicNumLimitHasBeenSet() const
{
    return m_topicNumLimitHasBeenSet;
}

int64_t ProductSkuItem::GetTpsLimit() const
{
    return m_tpsLimit;
}

void ProductSkuItem::SetTpsLimit(const int64_t& _tpsLimit)
{
    m_tpsLimit = _tpsLimit;
    m_tpsLimitHasBeenSet = true;
}

bool ProductSkuItem::TpsLimitHasBeenSet() const
{
    return m_tpsLimitHasBeenSet;
}

int64_t ProductSkuItem::GetClientNumLimit() const
{
    return m_clientNumLimit;
}

void ProductSkuItem::SetClientNumLimit(const int64_t& _clientNumLimit)
{
    m_clientNumLimit = _clientNumLimit;
    m_clientNumLimitHasBeenSet = true;
}

bool ProductSkuItem::ClientNumLimitHasBeenSet() const
{
    return m_clientNumLimitHasBeenSet;
}

int64_t ProductSkuItem::GetMaxSubscriptionPerClient() const
{
    return m_maxSubscriptionPerClient;
}

void ProductSkuItem::SetMaxSubscriptionPerClient(const int64_t& _maxSubscriptionPerClient)
{
    m_maxSubscriptionPerClient = _maxSubscriptionPerClient;
    m_maxSubscriptionPerClientHasBeenSet = true;
}

bool ProductSkuItem::MaxSubscriptionPerClientHasBeenSet() const
{
    return m_maxSubscriptionPerClientHasBeenSet;
}

int64_t ProductSkuItem::GetAuthorizationPolicyLimit() const
{
    return m_authorizationPolicyLimit;
}

void ProductSkuItem::SetAuthorizationPolicyLimit(const int64_t& _authorizationPolicyLimit)
{
    m_authorizationPolicyLimit = _authorizationPolicyLimit;
    m_authorizationPolicyLimitHasBeenSet = true;
}

bool ProductSkuItem::AuthorizationPolicyLimitHasBeenSet() const
{
    return m_authorizationPolicyLimitHasBeenSet;
}

vector<PriceTag> ProductSkuItem::GetPriceTags() const
{
    return m_priceTags;
}

void ProductSkuItem::SetPriceTags(const vector<PriceTag>& _priceTags)
{
    m_priceTags = _priceTags;
    m_priceTagsHasBeenSet = true;
}

bool ProductSkuItem::PriceTagsHasBeenSet() const
{
    return m_priceTagsHasBeenSet;
}

