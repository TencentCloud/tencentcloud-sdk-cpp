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

#include <tencentcloud/adp/v20260520/model/RetrievalOption.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

RetrievalOption::RetrievalOption() :
    m_expirationAwarenessHasBeenSet(false),
    m_graphRagHasBeenSet(false),
    m_tableEnhancementHasBeenSet(false)
{
}

CoreInternalOutcome RetrievalOption::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ExpirationAwareness") && !value["ExpirationAwareness"].IsNull())
    {
        if (!value["ExpirationAwareness"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RetrievalOption.ExpirationAwareness` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_expirationAwareness.Deserialize(value["ExpirationAwareness"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_expirationAwarenessHasBeenSet = true;
    }

    if (value.HasMember("GraphRag") && !value["GraphRag"].IsNull())
    {
        if (!value["GraphRag"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RetrievalOption.GraphRag` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_graphRag.Deserialize(value["GraphRag"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_graphRagHasBeenSet = true;
    }

    if (value.HasMember("TableEnhancement") && !value["TableEnhancement"].IsNull())
    {
        if (!value["TableEnhancement"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RetrievalOption.TableEnhancement` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tableEnhancement.Deserialize(value["TableEnhancement"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tableEnhancementHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RetrievalOption::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_expirationAwarenessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpirationAwareness";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_expirationAwareness.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_graphRagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GraphRag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_graphRag.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_tableEnhancementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableEnhancement";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tableEnhancement.ToJsonObject(value[key.c_str()], allocator);
    }

}


ExpirationAwareness RetrievalOption::GetExpirationAwareness() const
{
    return m_expirationAwareness;
}

void RetrievalOption::SetExpirationAwareness(const ExpirationAwareness& _expirationAwareness)
{
    m_expirationAwareness = _expirationAwareness;
    m_expirationAwarenessHasBeenSet = true;
}

bool RetrievalOption::ExpirationAwarenessHasBeenSet() const
{
    return m_expirationAwarenessHasBeenSet;
}

GraphRAG RetrievalOption::GetGraphRag() const
{
    return m_graphRag;
}

void RetrievalOption::SetGraphRag(const GraphRAG& _graphRag)
{
    m_graphRag = _graphRag;
    m_graphRagHasBeenSet = true;
}

bool RetrievalOption::GraphRagHasBeenSet() const
{
    return m_graphRagHasBeenSet;
}

TableEnhancement RetrievalOption::GetTableEnhancement() const
{
    return m_tableEnhancement;
}

void RetrievalOption::SetTableEnhancement(const TableEnhancement& _tableEnhancement)
{
    m_tableEnhancement = _tableEnhancement;
    m_tableEnhancementHasBeenSet = true;
}

bool RetrievalOption::TableEnhancementHasBeenSet() const
{
    return m_tableEnhancementHasBeenSet;
}

