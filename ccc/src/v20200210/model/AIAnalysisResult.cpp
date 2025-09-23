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

#include <tencentcloud/ccc/v20200210/model/AIAnalysisResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

AIAnalysisResult::AIAnalysisResult() :
    m_typeHasBeenSet(false),
    m_resultHasBeenSet(false)
{
}

CoreInternalOutcome AIAnalysisResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIAnalysisResult.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Result") && !value["Result"].IsNull())
    {
        if (!value["Result"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIAnalysisResult.Result` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_result = string(value["Result"].GetString());
        m_resultHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AIAnalysisResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_result.c_str(), allocator).Move(), allocator);
    }

}


string AIAnalysisResult::GetType() const
{
    return m_type;
}

void AIAnalysisResult::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool AIAnalysisResult::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string AIAnalysisResult::GetResult() const
{
    return m_result;
}

void AIAnalysisResult::SetResult(const string& _result)
{
    m_result = _result;
    m_resultHasBeenSet = true;
}

bool AIAnalysisResult::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

