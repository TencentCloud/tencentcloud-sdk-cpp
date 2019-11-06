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

#include <tencentcloud/billing/v20180709/model/TagSummaryOverviewItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Billing::V20180709::Model;
using namespace rapidjson;
using namespace std;

TagSummaryOverviewItem::TagSummaryOverviewItem() :
    m_tagValueHasBeenSet(false),
    m_realTotalCostHasBeenSet(false),
    m_realTotalCostRatioHasBeenSet(false)
{
}

CoreInternalOutcome TagSummaryOverviewItem::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("TagValue") && !value["TagValue"].IsNull())
    {
        if (!value["TagValue"].IsString())
        {
            return CoreInternalOutcome(Error("response `TagSummaryOverviewItem.TagValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tagValue = string(value["TagValue"].GetString());
        m_tagValueHasBeenSet = true;
    }

    if (value.HasMember("RealTotalCost") && !value["RealTotalCost"].IsNull())
    {
        if (!value["RealTotalCost"].IsString())
        {
            return CoreInternalOutcome(Error("response `TagSummaryOverviewItem.RealTotalCost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realTotalCost = string(value["RealTotalCost"].GetString());
        m_realTotalCostHasBeenSet = true;
    }

    if (value.HasMember("RealTotalCostRatio") && !value["RealTotalCostRatio"].IsNull())
    {
        if (!value["RealTotalCostRatio"].IsString())
        {
            return CoreInternalOutcome(Error("response `TagSummaryOverviewItem.RealTotalCostRatio` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realTotalCostRatio = string(value["RealTotalCostRatio"].GetString());
        m_realTotalCostRatioHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TagSummaryOverviewItem::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_tagValueHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TagValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_tagValue.c_str(), allocator).Move(), allocator);
    }

    if (m_realTotalCostHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RealTotalCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_realTotalCost.c_str(), allocator).Move(), allocator);
    }

    if (m_realTotalCostRatioHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RealTotalCostRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_realTotalCostRatio.c_str(), allocator).Move(), allocator);
    }

}


string TagSummaryOverviewItem::GetTagValue() const
{
    return m_tagValue;
}

void TagSummaryOverviewItem::SetTagValue(const string& _tagValue)
{
    m_tagValue = _tagValue;
    m_tagValueHasBeenSet = true;
}

bool TagSummaryOverviewItem::TagValueHasBeenSet() const
{
    return m_tagValueHasBeenSet;
}

string TagSummaryOverviewItem::GetRealTotalCost() const
{
    return m_realTotalCost;
}

void TagSummaryOverviewItem::SetRealTotalCost(const string& _realTotalCost)
{
    m_realTotalCost = _realTotalCost;
    m_realTotalCostHasBeenSet = true;
}

bool TagSummaryOverviewItem::RealTotalCostHasBeenSet() const
{
    return m_realTotalCostHasBeenSet;
}

string TagSummaryOverviewItem::GetRealTotalCostRatio() const
{
    return m_realTotalCostRatio;
}

void TagSummaryOverviewItem::SetRealTotalCostRatio(const string& _realTotalCostRatio)
{
    m_realTotalCostRatio = _realTotalCostRatio;
    m_realTotalCostRatioHasBeenSet = true;
}

bool TagSummaryOverviewItem::RealTotalCostRatioHasBeenSet() const
{
    return m_realTotalCostRatioHasBeenSet;
}

