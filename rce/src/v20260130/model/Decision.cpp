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

#include <tencentcloud/rce/v20260130/model/Decision.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rce::V20260130::Model;
using namespace std;

Decision::Decision() :
    m_decisionResultHasBeenSet(false)
{
}

CoreInternalOutcome Decision::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DecisionResult") && !value["DecisionResult"].IsNull())
    {
        if (!value["DecisionResult"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Decision.DecisionResult` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_decisionResult = string(value["DecisionResult"].GetString());
        m_decisionResultHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Decision::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_decisionResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DecisionResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_decisionResult.c_str(), allocator).Move(), allocator);
    }

}


string Decision::GetDecisionResult() const
{
    return m_decisionResult;
}

void Decision::SetDecisionResult(const string& _decisionResult)
{
    m_decisionResult = _decisionResult;
    m_decisionResultHasBeenSet = true;
}

bool Decision::DecisionResultHasBeenSet() const
{
    return m_decisionResultHasBeenSet;
}

