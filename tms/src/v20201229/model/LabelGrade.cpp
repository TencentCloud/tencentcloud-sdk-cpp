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

#include <tencentcloud/tms/v20201229/model/LabelGrade.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tms::V20201229::Model;
using namespace std;

LabelGrade::LabelGrade() :
    m_codeHasBeenSet(false),
    m_grade1HasBeenSet(false),
    m_grade2HasBeenSet(false),
    m_grade3HasBeenSet(false)
{
}

CoreInternalOutcome LabelGrade::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LabelGrade.Code` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_code = string(value["Code"].GetString());
        m_codeHasBeenSet = true;
    }

    if (value.HasMember("Grade1") && !value["Grade1"].IsNull())
    {
        if (!value["Grade1"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LabelGrade.Grade1` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_grade1 = string(value["Grade1"].GetString());
        m_grade1HasBeenSet = true;
    }

    if (value.HasMember("Grade2") && !value["Grade2"].IsNull())
    {
        if (!value["Grade2"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LabelGrade.Grade2` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_grade2 = string(value["Grade2"].GetString());
        m_grade2HasBeenSet = true;
    }

    if (value.HasMember("Grade3") && !value["Grade3"].IsNull())
    {
        if (!value["Grade3"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LabelGrade.Grade3` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_grade3 = string(value["Grade3"].GetString());
        m_grade3HasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LabelGrade::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_codeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Code";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_code.c_str(), allocator).Move(), allocator);
    }

    if (m_grade1HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Grade1";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_grade1.c_str(), allocator).Move(), allocator);
    }

    if (m_grade2HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Grade2";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_grade2.c_str(), allocator).Move(), allocator);
    }

    if (m_grade3HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Grade3";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_grade3.c_str(), allocator).Move(), allocator);
    }

}


string LabelGrade::GetCode() const
{
    return m_code;
}

void LabelGrade::SetCode(const string& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool LabelGrade::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

string LabelGrade::GetGrade1() const
{
    return m_grade1;
}

void LabelGrade::SetGrade1(const string& _grade1)
{
    m_grade1 = _grade1;
    m_grade1HasBeenSet = true;
}

bool LabelGrade::Grade1HasBeenSet() const
{
    return m_grade1HasBeenSet;
}

string LabelGrade::GetGrade2() const
{
    return m_grade2;
}

void LabelGrade::SetGrade2(const string& _grade2)
{
    m_grade2 = _grade2;
    m_grade2HasBeenSet = true;
}

bool LabelGrade::Grade2HasBeenSet() const
{
    return m_grade2HasBeenSet;
}

string LabelGrade::GetGrade3() const
{
    return m_grade3;
}

void LabelGrade::SetGrade3(const string& _grade3)
{
    m_grade3 = _grade3;
    m_grade3HasBeenSet = true;
}

bool LabelGrade::Grade3HasBeenSet() const
{
    return m_grade3HasBeenSet;
}

