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

#include <tencentcloud/dts/v20211206/model/ErrorInfoItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

ErrorInfoItem::ErrorInfoItem() :
    m_codeHasBeenSet(false),
    m_solutionHasBeenSet(false),
    m_errorLogHasBeenSet(false),
    m_helpDocHasBeenSet(false)
{
}

CoreInternalOutcome ErrorInfoItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ErrorInfoItem.Code` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_code = string(value["Code"].GetString());
        m_codeHasBeenSet = true;
    }

    if (value.HasMember("Solution") && !value["Solution"].IsNull())
    {
        if (!value["Solution"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ErrorInfoItem.Solution` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_solution = string(value["Solution"].GetString());
        m_solutionHasBeenSet = true;
    }

    if (value.HasMember("ErrorLog") && !value["ErrorLog"].IsNull())
    {
        if (!value["ErrorLog"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ErrorInfoItem.ErrorLog` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorLog = string(value["ErrorLog"].GetString());
        m_errorLogHasBeenSet = true;
    }

    if (value.HasMember("HelpDoc") && !value["HelpDoc"].IsNull())
    {
        if (!value["HelpDoc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ErrorInfoItem.HelpDoc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_helpDoc = string(value["HelpDoc"].GetString());
        m_helpDocHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ErrorInfoItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_codeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Code";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_code.c_str(), allocator).Move(), allocator);
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
        value.AddMember(iKey, rapidjson::Value(m_errorLog.c_str(), allocator).Move(), allocator);
    }

    if (m_helpDocHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HelpDoc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_helpDoc.c_str(), allocator).Move(), allocator);
    }

}


string ErrorInfoItem::GetCode() const
{
    return m_code;
}

void ErrorInfoItem::SetCode(const string& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool ErrorInfoItem::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

string ErrorInfoItem::GetSolution() const
{
    return m_solution;
}

void ErrorInfoItem::SetSolution(const string& _solution)
{
    m_solution = _solution;
    m_solutionHasBeenSet = true;
}

bool ErrorInfoItem::SolutionHasBeenSet() const
{
    return m_solutionHasBeenSet;
}

string ErrorInfoItem::GetErrorLog() const
{
    return m_errorLog;
}

void ErrorInfoItem::SetErrorLog(const string& _errorLog)
{
    m_errorLog = _errorLog;
    m_errorLogHasBeenSet = true;
}

bool ErrorInfoItem::ErrorLogHasBeenSet() const
{
    return m_errorLogHasBeenSet;
}

string ErrorInfoItem::GetHelpDoc() const
{
    return m_helpDoc;
}

void ErrorInfoItem::SetHelpDoc(const string& _helpDoc)
{
    m_helpDoc = _helpDoc;
    m_helpDocHasBeenSet = true;
}

bool ErrorInfoItem::HelpDocHasBeenSet() const
{
    return m_helpDocHasBeenSet;
}

