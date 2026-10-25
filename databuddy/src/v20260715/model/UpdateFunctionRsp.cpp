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

#include <tencentcloud/databuddy/v20260715/model/UpdateFunctionRsp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

UpdateFunctionRsp::UpdateFunctionRsp() :
    m_functionHasBeenSet(false)
{
}

CoreInternalOutcome UpdateFunctionRsp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Function") && !value["Function"].IsNull())
    {
        if (!value["Function"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateFunctionRsp.Function` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_function.Deserialize(value["Function"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_functionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UpdateFunctionRsp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_functionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Function";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_function.ToJsonObject(value[key.c_str()], allocator);
    }

}


FunctionInfo UpdateFunctionRsp::GetFunction() const
{
    return m_function;
}

void UpdateFunctionRsp::SetFunction(const FunctionInfo& _function)
{
    m_function = _function;
    m_functionHasBeenSet = true;
}

bool UpdateFunctionRsp::FunctionHasBeenSet() const
{
    return m_functionHasBeenSet;
}

