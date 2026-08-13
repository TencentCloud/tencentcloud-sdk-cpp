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

#include <tencentcloud/teo/v20220901/model/CustomActionParameters.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

CustomActionParameters::CustomActionParameters() :
    m_customActionsHasBeenSet(false)
{
}

CoreInternalOutcome CustomActionParameters::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CustomActions") && !value["CustomActions"].IsNull())
    {
        if (!value["CustomActions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CustomActionParameters.CustomActions` is not array type"));

        const rapidjson::Value &tmpValue = value["CustomActions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CustomAction item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_customActions.push_back(item);
        }
        m_customActionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CustomActionParameters::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_customActionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomActions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_customActions.begin(); itr != m_customActions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<CustomAction> CustomActionParameters::GetCustomActions() const
{
    return m_customActions;
}

void CustomActionParameters::SetCustomActions(const vector<CustomAction>& _customActions)
{
    m_customActions = _customActions;
    m_customActionsHasBeenSet = true;
}

bool CustomActionParameters::CustomActionsHasBeenSet() const
{
    return m_customActionsHasBeenSet;
}

