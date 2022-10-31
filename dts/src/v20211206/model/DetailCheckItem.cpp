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

#include <tencentcloud/dts/v20211206/model/DetailCheckItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

DetailCheckItem::DetailCheckItem() :
    m_checkItemNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_checkResultHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_solutionHasBeenSet(false),
    m_errorLogHasBeenSet(false),
    m_helpDocHasBeenSet(false),
    m_skipInfoHasBeenSet(false)
{
}

CoreInternalOutcome DetailCheckItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CheckItemName") && !value["CheckItemName"].IsNull())
    {
        if (!value["CheckItemName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetailCheckItem.CheckItemName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checkItemName = string(value["CheckItemName"].GetString());
        m_checkItemNameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetailCheckItem.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("CheckResult") && !value["CheckResult"].IsNull())
    {
        if (!value["CheckResult"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetailCheckItem.CheckResult` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checkResult = string(value["CheckResult"].GetString());
        m_checkResultHasBeenSet = true;
    }

    if (value.HasMember("FailureReason") && !value["FailureReason"].IsNull())
    {
        if (!value["FailureReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetailCheckItem.FailureReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failureReason = string(value["FailureReason"].GetString());
        m_failureReasonHasBeenSet = true;
    }

    if (value.HasMember("Solution") && !value["Solution"].IsNull())
    {
        if (!value["Solution"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetailCheckItem.Solution` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_solution = string(value["Solution"].GetString());
        m_solutionHasBeenSet = true;
    }

    if (value.HasMember("ErrorLog") && !value["ErrorLog"].IsNull())
    {
        if (!value["ErrorLog"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DetailCheckItem.ErrorLog` is not array type"));

        const rapidjson::Value &tmpValue = value["ErrorLog"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_errorLog.push_back((*itr).GetString());
        }
        m_errorLogHasBeenSet = true;
    }

    if (value.HasMember("HelpDoc") && !value["HelpDoc"].IsNull())
    {
        if (!value["HelpDoc"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DetailCheckItem.HelpDoc` is not array type"));

        const rapidjson::Value &tmpValue = value["HelpDoc"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_helpDoc.push_back((*itr).GetString());
        }
        m_helpDocHasBeenSet = true;
    }

    if (value.HasMember("SkipInfo") && !value["SkipInfo"].IsNull())
    {
        if (!value["SkipInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetailCheckItem.SkipInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_skipInfo = string(value["SkipInfo"].GetString());
        m_skipInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DetailCheckItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_checkItemNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckItemName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_checkItemName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_checkResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_checkResult.c_str(), allocator).Move(), allocator);
    }

    if (m_failureReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailureReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_failureReason.c_str(), allocator).Move(), allocator);
    }

    if (m_solutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Solution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_solution.c_str(), allocator).Move(), allocator);
    }

    if (m_errorLogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorLog";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_errorLog.begin(); itr != m_errorLog.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_helpDocHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HelpDoc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_helpDoc.begin(); itr != m_helpDoc.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_skipInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkipInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_skipInfo.c_str(), allocator).Move(), allocator);
    }

}


string DetailCheckItem::GetCheckItemName() const
{
    return m_checkItemName;
}

void DetailCheckItem::SetCheckItemName(const string& _checkItemName)
{
    m_checkItemName = _checkItemName;
    m_checkItemNameHasBeenSet = true;
}

bool DetailCheckItem::CheckItemNameHasBeenSet() const
{
    return m_checkItemNameHasBeenSet;
}

string DetailCheckItem::GetDescription() const
{
    return m_description;
}

void DetailCheckItem::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool DetailCheckItem::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string DetailCheckItem::GetCheckResult() const
{
    return m_checkResult;
}

void DetailCheckItem::SetCheckResult(const string& _checkResult)
{
    m_checkResult = _checkResult;
    m_checkResultHasBeenSet = true;
}

bool DetailCheckItem::CheckResultHasBeenSet() const
{
    return m_checkResultHasBeenSet;
}

string DetailCheckItem::GetFailureReason() const
{
    return m_failureReason;
}

void DetailCheckItem::SetFailureReason(const string& _failureReason)
{
    m_failureReason = _failureReason;
    m_failureReasonHasBeenSet = true;
}

bool DetailCheckItem::FailureReasonHasBeenSet() const
{
    return m_failureReasonHasBeenSet;
}

string DetailCheckItem::GetSolution() const
{
    return m_solution;
}

void DetailCheckItem::SetSolution(const string& _solution)
{
    m_solution = _solution;
    m_solutionHasBeenSet = true;
}

bool DetailCheckItem::SolutionHasBeenSet() const
{
    return m_solutionHasBeenSet;
}

vector<string> DetailCheckItem::GetErrorLog() const
{
    return m_errorLog;
}

void DetailCheckItem::SetErrorLog(const vector<string>& _errorLog)
{
    m_errorLog = _errorLog;
    m_errorLogHasBeenSet = true;
}

bool DetailCheckItem::ErrorLogHasBeenSet() const
{
    return m_errorLogHasBeenSet;
}

vector<string> DetailCheckItem::GetHelpDoc() const
{
    return m_helpDoc;
}

void DetailCheckItem::SetHelpDoc(const vector<string>& _helpDoc)
{
    m_helpDoc = _helpDoc;
    m_helpDocHasBeenSet = true;
}

bool DetailCheckItem::HelpDocHasBeenSet() const
{
    return m_helpDocHasBeenSet;
}

string DetailCheckItem::GetSkipInfo() const
{
    return m_skipInfo;
}

void DetailCheckItem::SetSkipInfo(const string& _skipInfo)
{
    m_skipInfo = _skipInfo;
    m_skipInfoHasBeenSet = true;
}

bool DetailCheckItem::SkipInfoHasBeenSet() const
{
    return m_skipInfoHasBeenSet;
}

