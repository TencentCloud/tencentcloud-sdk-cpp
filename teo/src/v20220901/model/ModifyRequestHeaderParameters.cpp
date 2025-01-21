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

#include <tencentcloud/teo/v20220901/model/ModifyRequestHeaderParameters.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

ModifyRequestHeaderParameters::ModifyRequestHeaderParameters() :
    m_headerActionsHasBeenSet(false)
{
}

CoreInternalOutcome ModifyRequestHeaderParameters::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HeaderActions") && !value["HeaderActions"].IsNull())
    {
        if (!value["HeaderActions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ModifyRequestHeaderParameters.HeaderActions` is not array type"));

        const rapidjson::Value &tmpValue = value["HeaderActions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            HeaderAction item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_headerActions.push_back(item);
        }
        m_headerActionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModifyRequestHeaderParameters::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_headerActionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HeaderActions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_headerActions.begin(); itr != m_headerActions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<HeaderAction> ModifyRequestHeaderParameters::GetHeaderActions() const
{
    return m_headerActions;
}

void ModifyRequestHeaderParameters::SetHeaderActions(const vector<HeaderAction>& _headerActions)
{
    m_headerActions = _headerActions;
    m_headerActionsHasBeenSet = true;
}

bool ModifyRequestHeaderParameters::HeaderActionsHasBeenSet() const
{
    return m_headerActionsHasBeenSet;
}

