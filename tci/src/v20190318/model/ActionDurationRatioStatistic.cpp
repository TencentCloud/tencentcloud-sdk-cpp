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

#include <tencentcloud/tci/v20190318/model/ActionDurationRatioStatistic.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tci::V20190318::Model;
using namespace std;

ActionDurationRatioStatistic::ActionDurationRatioStatistic() :
    m_nameHasBeenSet(false),
    m_ratioHasBeenSet(false)
{
}

CoreInternalOutcome ActionDurationRatioStatistic::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ActionDurationRatioStatistic.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Ratio") && !value["Ratio"].IsNull())
    {
        if (!value["Ratio"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ActionDurationRatioStatistic.Ratio` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_ratio = value["Ratio"].GetDouble();
        m_ratioHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ActionDurationRatioStatistic::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_ratioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ratio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ratio, allocator);
    }

}


string ActionDurationRatioStatistic::GetName() const
{
    return m_name;
}

void ActionDurationRatioStatistic::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ActionDurationRatioStatistic::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

double ActionDurationRatioStatistic::GetRatio() const
{
    return m_ratio;
}

void ActionDurationRatioStatistic::SetRatio(const double& _ratio)
{
    m_ratio = _ratio;
    m_ratioHasBeenSet = true;
}

bool ActionDurationRatioStatistic::RatioHasBeenSet() const
{
    return m_ratioHasBeenSet;
}

