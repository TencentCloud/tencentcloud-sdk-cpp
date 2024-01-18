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

#include <tencentcloud/trocket/v20230308/model/MQTTProductSkuItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trocket::V20230308::Model;
using namespace std;

MQTTProductSkuItem::MQTTProductSkuItem() :
    m_instanceTypeHasBeenSet(false),
    m_skuCodeHasBeenSet(false),
    m_onSaleHasBeenSet(false),
    m_topicNumLimitHasBeenSet(false),
    m_tpsLimitHasBeenSet(false),
    m_clientNumLimitHasBeenSet(false),
    m_subscriptionNumLimitHasBeenSet(false),
    m_proxySpecCoreHasBeenSet(false),
    m_proxySpecMemoryHasBeenSet(false),
    m_proxySpecCountHasBeenSet(false)
{
}

CoreInternalOutcome MQTTProductSkuItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MQTTProductSkuItem.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("SkuCode") && !value["SkuCode"].IsNull())
    {
        if (!value["SkuCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MQTTProductSkuItem.SkuCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_skuCode = string(value["SkuCode"].GetString());
        m_skuCodeHasBeenSet = true;
    }

    if (value.HasMember("OnSale") && !value["OnSale"].IsNull())
    {
        if (!value["OnSale"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `MQTTProductSkuItem.OnSale` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_onSale = value["OnSale"].GetBool();
        m_onSaleHasBeenSet = true;
    }

    if (value.HasMember("TopicNumLimit") && !value["TopicNumLimit"].IsNull())
    {
        if (!value["TopicNumLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MQTTProductSkuItem.TopicNumLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_topicNumLimit = value["TopicNumLimit"].GetInt64();
        m_topicNumLimitHasBeenSet = true;
    }

    if (value.HasMember("TpsLimit") && !value["TpsLimit"].IsNull())
    {
        if (!value["TpsLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MQTTProductSkuItem.TpsLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tpsLimit = value["TpsLimit"].GetInt64();
        m_tpsLimitHasBeenSet = true;
    }

    if (value.HasMember("ClientNumLimit") && !value["ClientNumLimit"].IsNull())
    {
        if (!value["ClientNumLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MQTTProductSkuItem.ClientNumLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_clientNumLimit = value["ClientNumLimit"].GetInt64();
        m_clientNumLimitHasBeenSet = true;
    }

    if (value.HasMember("SubscriptionNumLimit") && !value["SubscriptionNumLimit"].IsNull())
    {
        if (!value["SubscriptionNumLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MQTTProductSkuItem.SubscriptionNumLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_subscriptionNumLimit = value["SubscriptionNumLimit"].GetInt64();
        m_subscriptionNumLimitHasBeenSet = true;
    }

    if (value.HasMember("ProxySpecCore") && !value["ProxySpecCore"].IsNull())
    {
        if (!value["ProxySpecCore"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MQTTProductSkuItem.ProxySpecCore` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_proxySpecCore = value["ProxySpecCore"].GetInt64();
        m_proxySpecCoreHasBeenSet = true;
    }

    if (value.HasMember("ProxySpecMemory") && !value["ProxySpecMemory"].IsNull())
    {
        if (!value["ProxySpecMemory"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MQTTProductSkuItem.ProxySpecMemory` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_proxySpecMemory = value["ProxySpecMemory"].GetInt64();
        m_proxySpecMemoryHasBeenSet = true;
    }

    if (value.HasMember("ProxySpecCount") && !value["ProxySpecCount"].IsNull())
    {
        if (!value["ProxySpecCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MQTTProductSkuItem.ProxySpecCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_proxySpecCount = value["ProxySpecCount"].GetInt64();
        m_proxySpecCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MQTTProductSkuItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_subscriptionNumLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubscriptionNumLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_subscriptionNumLimit, allocator);
    }

    if (m_proxySpecCoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxySpecCore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_proxySpecCore, allocator);
    }

    if (m_proxySpecMemoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxySpecMemory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_proxySpecMemory, allocator);
    }

    if (m_proxySpecCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxySpecCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_proxySpecCount, allocator);
    }

}


string MQTTProductSkuItem::GetInstanceType() const
{
    return m_instanceType;
}

void MQTTProductSkuItem::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool MQTTProductSkuItem::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string MQTTProductSkuItem::GetSkuCode() const
{
    return m_skuCode;
}

void MQTTProductSkuItem::SetSkuCode(const string& _skuCode)
{
    m_skuCode = _skuCode;
    m_skuCodeHasBeenSet = true;
}

bool MQTTProductSkuItem::SkuCodeHasBeenSet() const
{
    return m_skuCodeHasBeenSet;
}

bool MQTTProductSkuItem::GetOnSale() const
{
    return m_onSale;
}

void MQTTProductSkuItem::SetOnSale(const bool& _onSale)
{
    m_onSale = _onSale;
    m_onSaleHasBeenSet = true;
}

bool MQTTProductSkuItem::OnSaleHasBeenSet() const
{
    return m_onSaleHasBeenSet;
}

int64_t MQTTProductSkuItem::GetTopicNumLimit() const
{
    return m_topicNumLimit;
}

void MQTTProductSkuItem::SetTopicNumLimit(const int64_t& _topicNumLimit)
{
    m_topicNumLimit = _topicNumLimit;
    m_topicNumLimitHasBeenSet = true;
}

bool MQTTProductSkuItem::TopicNumLimitHasBeenSet() const
{
    return m_topicNumLimitHasBeenSet;
}

int64_t MQTTProductSkuItem::GetTpsLimit() const
{
    return m_tpsLimit;
}

void MQTTProductSkuItem::SetTpsLimit(const int64_t& _tpsLimit)
{
    m_tpsLimit = _tpsLimit;
    m_tpsLimitHasBeenSet = true;
}

bool MQTTProductSkuItem::TpsLimitHasBeenSet() const
{
    return m_tpsLimitHasBeenSet;
}

int64_t MQTTProductSkuItem::GetClientNumLimit() const
{
    return m_clientNumLimit;
}

void MQTTProductSkuItem::SetClientNumLimit(const int64_t& _clientNumLimit)
{
    m_clientNumLimit = _clientNumLimit;
    m_clientNumLimitHasBeenSet = true;
}

bool MQTTProductSkuItem::ClientNumLimitHasBeenSet() const
{
    return m_clientNumLimitHasBeenSet;
}

int64_t MQTTProductSkuItem::GetSubscriptionNumLimit() const
{
    return m_subscriptionNumLimit;
}

void MQTTProductSkuItem::SetSubscriptionNumLimit(const int64_t& _subscriptionNumLimit)
{
    m_subscriptionNumLimit = _subscriptionNumLimit;
    m_subscriptionNumLimitHasBeenSet = true;
}

bool MQTTProductSkuItem::SubscriptionNumLimitHasBeenSet() const
{
    return m_subscriptionNumLimitHasBeenSet;
}

int64_t MQTTProductSkuItem::GetProxySpecCore() const
{
    return m_proxySpecCore;
}

void MQTTProductSkuItem::SetProxySpecCore(const int64_t& _proxySpecCore)
{
    m_proxySpecCore = _proxySpecCore;
    m_proxySpecCoreHasBeenSet = true;
}

bool MQTTProductSkuItem::ProxySpecCoreHasBeenSet() const
{
    return m_proxySpecCoreHasBeenSet;
}

int64_t MQTTProductSkuItem::GetProxySpecMemory() const
{
    return m_proxySpecMemory;
}

void MQTTProductSkuItem::SetProxySpecMemory(const int64_t& _proxySpecMemory)
{
    m_proxySpecMemory = _proxySpecMemory;
    m_proxySpecMemoryHasBeenSet = true;
}

bool MQTTProductSkuItem::ProxySpecMemoryHasBeenSet() const
{
    return m_proxySpecMemoryHasBeenSet;
}

int64_t MQTTProductSkuItem::GetProxySpecCount() const
{
    return m_proxySpecCount;
}

void MQTTProductSkuItem::SetProxySpecCount(const int64_t& _proxySpecCount)
{
    m_proxySpecCount = _proxySpecCount;
    m_proxySpecCountHasBeenSet = true;
}

bool MQTTProductSkuItem::ProxySpecCountHasBeenSet() const
{
    return m_proxySpecCountHasBeenSet;
}

