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

#include <tencentcloud/databuddy/v20260715/model/AsyncActionRsp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

AsyncActionRsp::AsyncActionRsp() :
    m_actionResultsHasBeenSet(false)
{
}

CoreInternalOutcome AsyncActionRsp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ActionResults") && !value["ActionResults"].IsNull())
    {
        if (!value["ActionResults"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AsyncActionRsp.ActionResults` is not array type"));

        const rapidjson::Value &tmpValue = value["ActionResults"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RunActionBrief item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_actionResults.push_back(item);
        }
        m_actionResultsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AsyncActionRsp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_actionResultsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionResults";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_actionResults.begin(); itr != m_actionResults.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<RunActionBrief> AsyncActionRsp::GetActionResults() const
{
    return m_actionResults;
}

void AsyncActionRsp::SetActionResults(const vector<RunActionBrief>& _actionResults)
{
    m_actionResults = _actionResults;
    m_actionResultsHasBeenSet = true;
}

bool AsyncActionRsp::ActionResultsHasBeenSet() const
{
    return m_actionResultsHasBeenSet;
}

