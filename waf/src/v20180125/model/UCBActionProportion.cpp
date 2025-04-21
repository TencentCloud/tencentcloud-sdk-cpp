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

#include <tencentcloud/waf/v20180125/model/UCBActionProportion.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

UCBActionProportion::UCBActionProportion() :
    m_actionHasBeenSet(false),
    m_proportionHasBeenSet(false)
{
}

CoreInternalOutcome UCBActionProportion::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UCBActionProportion.Action` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_action = string(value["Action"].GetString());
        m_actionHasBeenSet = true;
    }

    if (value.HasMember("Proportion") && !value["Proportion"].IsNull())
    {
        if (!value["Proportion"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `UCBActionProportion.Proportion` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_proportion = value["Proportion"].GetDouble();
        m_proportionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UCBActionProportion::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_action.c_str(), allocator).Move(), allocator);
    }

    if (m_proportionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Proportion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_proportion, allocator);
    }

}


string UCBActionProportion::GetAction() const
{
    return m_action;
}

void UCBActionProportion::SetAction(const string& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool UCBActionProportion::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

double UCBActionProportion::GetProportion() const
{
    return m_proportion;
}

void UCBActionProportion::SetProportion(const double& _proportion)
{
    m_proportion = _proportion;
    m_proportionHasBeenSet = true;
}

bool UCBActionProportion::ProportionHasBeenSet() const
{
    return m_proportionHasBeenSet;
}

