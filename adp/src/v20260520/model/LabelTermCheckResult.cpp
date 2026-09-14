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

#include <tencentcloud/adp/v20260520/model/LabelTermCheckResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

LabelTermCheckResult::LabelTermCheckResult() :
    m_checkResultHasBeenSet(false),
    m_termHasBeenSet(false),
    m_termIdHasBeenSet(false)
{
}

CoreInternalOutcome LabelTermCheckResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CheckResult") && !value["CheckResult"].IsNull())
    {
        if (!value["CheckResult"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LabelTermCheckResult.CheckResult` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_checkResult.Deserialize(value["CheckResult"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_checkResultHasBeenSet = true;
    }

    if (value.HasMember("Term") && !value["Term"].IsNull())
    {
        if (!value["Term"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LabelTermCheckResult.Term` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_term = string(value["Term"].GetString());
        m_termHasBeenSet = true;
    }

    if (value.HasMember("TermId") && !value["TermId"].IsNull())
    {
        if (!value["TermId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LabelTermCheckResult.TermId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_termId = string(value["TermId"].GetString());
        m_termIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LabelTermCheckResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_checkResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_checkResult.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_termHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Term";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_term.c_str(), allocator).Move(), allocator);
    }

    if (m_termIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TermId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_termId.c_str(), allocator).Move(), allocator);
    }

}


CheckResult LabelTermCheckResult::GetCheckResult() const
{
    return m_checkResult;
}

void LabelTermCheckResult::SetCheckResult(const CheckResult& _checkResult)
{
    m_checkResult = _checkResult;
    m_checkResultHasBeenSet = true;
}

bool LabelTermCheckResult::CheckResultHasBeenSet() const
{
    return m_checkResultHasBeenSet;
}

string LabelTermCheckResult::GetTerm() const
{
    return m_term;
}

void LabelTermCheckResult::SetTerm(const string& _term)
{
    m_term = _term;
    m_termHasBeenSet = true;
}

bool LabelTermCheckResult::TermHasBeenSet() const
{
    return m_termHasBeenSet;
}

string LabelTermCheckResult::GetTermId() const
{
    return m_termId;
}

void LabelTermCheckResult::SetTermId(const string& _termId)
{
    m_termId = _termId;
    m_termIdHasBeenSet = true;
}

bool LabelTermCheckResult::TermIdHasBeenSet() const
{
    return m_termIdHasBeenSet;
}

