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

#include <tencentcloud/mrs/v20200910/model/Indicator.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace rapidjson;
using namespace std;

Indicator::Indicator() :
    m_indicatorsHasBeenSet(false)
{
}

CoreInternalOutcome Indicator::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Indicators") && !value["Indicators"].IsNull())
    {
        if (!value["Indicators"].IsArray())
            return CoreInternalOutcome(Error("response `Indicator.Indicators` is not array type"));

        const Value &tmpValue = value["Indicators"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            IndicatorItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_indicators.push_back(item);
        }
        m_indicatorsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Indicator::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_indicatorsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Indicators";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_indicators.begin(); itr != m_indicators.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<IndicatorItem> Indicator::GetIndicators() const
{
    return m_indicators;
}

void Indicator::SetIndicators(const vector<IndicatorItem>& _indicators)
{
    m_indicators = _indicators;
    m_indicatorsHasBeenSet = true;
}

bool Indicator::IndicatorsHasBeenSet() const
{
    return m_indicatorsHasBeenSet;
}

