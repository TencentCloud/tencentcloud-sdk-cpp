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

#include <tencentcloud/mrs/v20200910/model/TableIndicators.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

TableIndicators::TableIndicators() :
    m_indicatorsHasBeenSet(false),
    m_sampleHasBeenSet(false)
{
}

CoreInternalOutcome TableIndicators::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Indicators") && !value["Indicators"].IsNull())
    {
        if (!value["Indicators"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TableIndicators.Indicators` is not array type"));

        const rapidjson::Value &tmpValue = value["Indicators"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            IndicatorItemV2 item;
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

    if (value.HasMember("Sample") && !value["Sample"].IsNull())
    {
        if (!value["Sample"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TableIndicators.Sample` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sample.Deserialize(value["Sample"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sampleHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TableIndicators::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_indicatorsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Indicators";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_indicators.begin(); itr != m_indicators.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_sampleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sample";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sample.ToJsonObject(value[key.c_str()], allocator);
    }

}


vector<IndicatorItemV2> TableIndicators::GetIndicators() const
{
    return m_indicators;
}

void TableIndicators::SetIndicators(const vector<IndicatorItemV2>& _indicators)
{
    m_indicators = _indicators;
    m_indicatorsHasBeenSet = true;
}

bool TableIndicators::IndicatorsHasBeenSet() const
{
    return m_indicatorsHasBeenSet;
}

BaseItem TableIndicators::GetSample() const
{
    return m_sample;
}

void TableIndicators::SetSample(const BaseItem& _sample)
{
    m_sample = _sample;
    m_sampleHasBeenSet = true;
}

bool TableIndicators::SampleHasBeenSet() const
{
    return m_sampleHasBeenSet;
}

