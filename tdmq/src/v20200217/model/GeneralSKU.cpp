/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/tdmq/v20200217/model/GeneralSKU.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

GeneralSKU::GeneralSKU() :
    m_skuCodeHasBeenSet(false),
    m_onSaleHasBeenSet(false),
    m_tpsLimitHasBeenSet(false),
    m_topicNumLimitHasBeenSet(false),
    m_topicNumUpperLimitHasBeenSet(false),
    m_priceTagsHasBeenSet(false),
    m_nodeCountHasBeenSet(false)
{
}

CoreInternalOutcome GeneralSKU::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SkuCode") && !value["SkuCode"].IsNull())
    {
        if (!value["SkuCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GeneralSKU.SkuCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_skuCode = string(value["SkuCode"].GetString());
        m_skuCodeHasBeenSet = true;
    }

    if (value.HasMember("OnSale") && !value["OnSale"].IsNull())
    {
        if (!value["OnSale"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `GeneralSKU.OnSale` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_onSale = value["OnSale"].GetBool();
        m_onSaleHasBeenSet = true;
    }

    if (value.HasMember("TpsLimit") && !value["TpsLimit"].IsNull())
    {
        if (!value["TpsLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GeneralSKU.TpsLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tpsLimit = value["TpsLimit"].GetInt64();
        m_tpsLimitHasBeenSet = true;
    }

    if (value.HasMember("TopicNumLimit") && !value["TopicNumLimit"].IsNull())
    {
        if (!value["TopicNumLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GeneralSKU.TopicNumLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_topicNumLimit = value["TopicNumLimit"].GetInt64();
        m_topicNumLimitHasBeenSet = true;
    }

    if (value.HasMember("TopicNumUpperLimit") && !value["TopicNumUpperLimit"].IsNull())
    {
        if (!value["TopicNumUpperLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GeneralSKU.TopicNumUpperLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_topicNumUpperLimit = value["TopicNumUpperLimit"].GetInt64();
        m_topicNumUpperLimitHasBeenSet = true;
    }

    if (value.HasMember("PriceTags") && !value["PriceTags"].IsNull())
    {
        if (!value["PriceTags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GeneralSKU.PriceTags` is not array type"));

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

    if (value.HasMember("NodeCount") && !value["NodeCount"].IsNull())
    {
        if (!value["NodeCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GeneralSKU.NodeCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_nodeCount = value["NodeCount"].GetInt64();
        m_nodeCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GeneralSKU::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_tpsLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TpsLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tpsLimit, allocator);
    }

    if (m_topicNumLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicNumLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_topicNumLimit, allocator);
    }

    if (m_topicNumUpperLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicNumUpperLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_topicNumUpperLimit, allocator);
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

    if (m_nodeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nodeCount, allocator);
    }

}


string GeneralSKU::GetSkuCode() const
{
    return m_skuCode;
}

void GeneralSKU::SetSkuCode(const string& _skuCode)
{
    m_skuCode = _skuCode;
    m_skuCodeHasBeenSet = true;
}

bool GeneralSKU::SkuCodeHasBeenSet() const
{
    return m_skuCodeHasBeenSet;
}

bool GeneralSKU::GetOnSale() const
{
    return m_onSale;
}

void GeneralSKU::SetOnSale(const bool& _onSale)
{
    m_onSale = _onSale;
    m_onSaleHasBeenSet = true;
}

bool GeneralSKU::OnSaleHasBeenSet() const
{
    return m_onSaleHasBeenSet;
}

int64_t GeneralSKU::GetTpsLimit() const
{
    return m_tpsLimit;
}

void GeneralSKU::SetTpsLimit(const int64_t& _tpsLimit)
{
    m_tpsLimit = _tpsLimit;
    m_tpsLimitHasBeenSet = true;
}

bool GeneralSKU::TpsLimitHasBeenSet() const
{
    return m_tpsLimitHasBeenSet;
}

int64_t GeneralSKU::GetTopicNumLimit() const
{
    return m_topicNumLimit;
}

void GeneralSKU::SetTopicNumLimit(const int64_t& _topicNumLimit)
{
    m_topicNumLimit = _topicNumLimit;
    m_topicNumLimitHasBeenSet = true;
}

bool GeneralSKU::TopicNumLimitHasBeenSet() const
{
    return m_topicNumLimitHasBeenSet;
}

int64_t GeneralSKU::GetTopicNumUpperLimit() const
{
    return m_topicNumUpperLimit;
}

void GeneralSKU::SetTopicNumUpperLimit(const int64_t& _topicNumUpperLimit)
{
    m_topicNumUpperLimit = _topicNumUpperLimit;
    m_topicNumUpperLimitHasBeenSet = true;
}

bool GeneralSKU::TopicNumUpperLimitHasBeenSet() const
{
    return m_topicNumUpperLimitHasBeenSet;
}

vector<PriceTag> GeneralSKU::GetPriceTags() const
{
    return m_priceTags;
}

void GeneralSKU::SetPriceTags(const vector<PriceTag>& _priceTags)
{
    m_priceTags = _priceTags;
    m_priceTagsHasBeenSet = true;
}

bool GeneralSKU::PriceTagsHasBeenSet() const
{
    return m_priceTagsHasBeenSet;
}

int64_t GeneralSKU::GetNodeCount() const
{
    return m_nodeCount;
}

void GeneralSKU::SetNodeCount(const int64_t& _nodeCount)
{
    m_nodeCount = _nodeCount;
    m_nodeCountHasBeenSet = true;
}

bool GeneralSKU::NodeCountHasBeenSet() const
{
    return m_nodeCountHasBeenSet;
}

