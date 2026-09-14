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

#include <tencentcloud/adp/v20260520/model/CheckResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

CheckResult::CheckResult() :
    m_passedHasBeenSet(false),
    m_reasonHasBeenSet(false)
{
}

CoreInternalOutcome CheckResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Passed") && !value["Passed"].IsNull())
    {
        if (!value["Passed"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CheckResult.Passed` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_passed = value["Passed"].GetBool();
        m_passedHasBeenSet = true;
    }

    if (value.HasMember("Reason") && !value["Reason"].IsNull())
    {
        if (!value["Reason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CheckResult.Reason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reason = string(value["Reason"].GetString());
        m_reasonHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CheckResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_passedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Passed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_passed, allocator);
    }

    if (m_reasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reason.c_str(), allocator).Move(), allocator);
    }

}


bool CheckResult::GetPassed() const
{
    return m_passed;
}

void CheckResult::SetPassed(const bool& _passed)
{
    m_passed = _passed;
    m_passedHasBeenSet = true;
}

bool CheckResult::PassedHasBeenSet() const
{
    return m_passedHasBeenSet;
}

string CheckResult::GetReason() const
{
    return m_reason;
}

void CheckResult::SetReason(const string& _reason)
{
    m_reason = _reason;
    m_reasonHasBeenSet = true;
}

bool CheckResult::ReasonHasBeenSet() const
{
    return m_reasonHasBeenSet;
}

