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

#include <tencentcloud/teo/v20220901/model/AlgDetectResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

AlgDetectResult::AlgDetectResult() :
    m_resultHasBeenSet(false),
    m_actionHasBeenSet(false)
{
}

CoreInternalOutcome AlgDetectResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Result") && !value["Result"].IsNull())
    {
        if (!value["Result"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlgDetectResult.Result` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_result = string(value["Result"].GetString());
        m_resultHasBeenSet = true;
    }

    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlgDetectResult.Action` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_action = string(value["Action"].GetString());
        m_actionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AlgDetectResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_result.c_str(), allocator).Move(), allocator);
    }

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_action.c_str(), allocator).Move(), allocator);
    }

}


string AlgDetectResult::GetResult() const
{
    return m_result;
}

void AlgDetectResult::SetResult(const string& _result)
{
    m_result = _result;
    m_resultHasBeenSet = true;
}

bool AlgDetectResult::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

string AlgDetectResult::GetAction() const
{
    return m_action;
}

void AlgDetectResult::SetAction(const string& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool AlgDetectResult::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

