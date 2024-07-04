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

#include <tencentcloud/hunyuan/v20230901/model/Tool.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Hunyuan::V20230901::Model;
using namespace std;

Tool::Tool() :
    m_typeHasBeenSet(false),
    m_functionHasBeenSet(false)
{
}

CoreInternalOutcome Tool::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Tool.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Function") && !value["Function"].IsNull())
    {
        if (!value["Function"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Tool.Function` is not object type").SetRequestId(requestId));
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

void Tool::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_functionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Function";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_function.ToJsonObject(value[key.c_str()], allocator);
    }

}


string Tool::GetType() const
{
    return m_type;
}

void Tool::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool Tool::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

ToolFunction Tool::GetFunction() const
{
    return m_function;
}

void Tool::SetFunction(const ToolFunction& _function)
{
    m_function = _function;
    m_functionHasBeenSet = true;
}

bool Tool::FunctionHasBeenSet() const
{
    return m_functionHasBeenSet;
}

