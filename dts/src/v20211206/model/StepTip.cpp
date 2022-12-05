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

#include <tencentcloud/dts/v20211206/model/StepTip.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

StepTip::StepTip() :
    m_codeHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_solutionHasBeenSet(false),
    m_helpDocHasBeenSet(false),
    m_skipInfoHasBeenSet(false)
{
}

CoreInternalOutcome StepTip::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StepTip.Code` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_code = string(value["Code"].GetString());
        m_codeHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StepTip.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("Solution") && !value["Solution"].IsNull())
    {
        if (!value["Solution"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StepTip.Solution` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_solution = string(value["Solution"].GetString());
        m_solutionHasBeenSet = true;
    }

    if (value.HasMember("HelpDoc") && !value["HelpDoc"].IsNull())
    {
        if (!value["HelpDoc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StepTip.HelpDoc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_helpDoc = string(value["HelpDoc"].GetString());
        m_helpDocHasBeenSet = true;
    }

    if (value.HasMember("SkipInfo") && !value["SkipInfo"].IsNull())
    {
        if (!value["SkipInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StepTip.SkipInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_skipInfo = string(value["SkipInfo"].GetString());
        m_skipInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StepTip::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_codeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Code";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_code.c_str(), allocator).Move(), allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_solutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Solution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_solution.c_str(), allocator).Move(), allocator);
    }

    if (m_helpDocHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HelpDoc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_helpDoc.c_str(), allocator).Move(), allocator);
    }

    if (m_skipInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkipInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_skipInfo.c_str(), allocator).Move(), allocator);
    }

}


string StepTip::GetCode() const
{
    return m_code;
}

void StepTip::SetCode(const string& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool StepTip::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

string StepTip::GetMessage() const
{
    return m_message;
}

void StepTip::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool StepTip::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

string StepTip::GetSolution() const
{
    return m_solution;
}

void StepTip::SetSolution(const string& _solution)
{
    m_solution = _solution;
    m_solutionHasBeenSet = true;
}

bool StepTip::SolutionHasBeenSet() const
{
    return m_solutionHasBeenSet;
}

string StepTip::GetHelpDoc() const
{
    return m_helpDoc;
}

void StepTip::SetHelpDoc(const string& _helpDoc)
{
    m_helpDoc = _helpDoc;
    m_helpDocHasBeenSet = true;
}

bool StepTip::HelpDocHasBeenSet() const
{
    return m_helpDocHasBeenSet;
}

string StepTip::GetSkipInfo() const
{
    return m_skipInfo;
}

void StepTip::SetSkipInfo(const string& _skipInfo)
{
    m_skipInfo = _skipInfo;
    m_skipInfoHasBeenSet = true;
}

bool StepTip::SkipInfoHasBeenSet() const
{
    return m_skipInfoHasBeenSet;
}

