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

#include <tencentcloud/wedata/v20250806/model/QualityCompareRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

QualityCompareRule::QualityCompareRule() :
    m_itemsHasBeenSet(false),
    m_cycleStepHasBeenSet(false),
    m_computeExpressionHasBeenSet(false)
{
}

CoreInternalOutcome QualityCompareRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Items") && !value["Items"].IsNull())
    {
        if (!value["Items"].IsArray())
            return CoreInternalOutcome(Core::Error("response `QualityCompareRule.Items` is not array type"));

        const rapidjson::Value &tmpValue = value["Items"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            QualityCompareRuleItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_items.push_back(item);
        }
        m_itemsHasBeenSet = true;
    }

    if (value.HasMember("CycleStep") && !value["CycleStep"].IsNull())
    {
        if (!value["CycleStep"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QualityCompareRule.CycleStep` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cycleStep = value["CycleStep"].GetUint64();
        m_cycleStepHasBeenSet = true;
    }

    if (value.HasMember("ComputeExpression") && !value["ComputeExpression"].IsNull())
    {
        if (!value["ComputeExpression"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QualityCompareRule.ComputeExpression` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_computeExpression = string(value["ComputeExpression"].GetString());
        m_computeExpressionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QualityCompareRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_itemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Items";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_items.begin(); itr != m_items.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_cycleStepHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CycleStep";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cycleStep, allocator);
    }

    if (m_computeExpressionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComputeExpression";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_computeExpression.c_str(), allocator).Move(), allocator);
    }

}


vector<QualityCompareRuleItem> QualityCompareRule::GetItems() const
{
    return m_items;
}

void QualityCompareRule::SetItems(const vector<QualityCompareRuleItem>& _items)
{
    m_items = _items;
    m_itemsHasBeenSet = true;
}

bool QualityCompareRule::ItemsHasBeenSet() const
{
    return m_itemsHasBeenSet;
}

uint64_t QualityCompareRule::GetCycleStep() const
{
    return m_cycleStep;
}

void QualityCompareRule::SetCycleStep(const uint64_t& _cycleStep)
{
    m_cycleStep = _cycleStep;
    m_cycleStepHasBeenSet = true;
}

bool QualityCompareRule::CycleStepHasBeenSet() const
{
    return m_cycleStepHasBeenSet;
}

string QualityCompareRule::GetComputeExpression() const
{
    return m_computeExpression;
}

void QualityCompareRule::SetComputeExpression(const string& _computeExpression)
{
    m_computeExpression = _computeExpression;
    m_computeExpressionHasBeenSet = true;
}

bool QualityCompareRule::ComputeExpressionHasBeenSet() const
{
    return m_computeExpressionHasBeenSet;
}

