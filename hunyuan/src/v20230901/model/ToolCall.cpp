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

#include <tencentcloud/hunyuan/v20230901/model/ToolCall.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Hunyuan::V20230901::Model;
using namespace std;

ToolCall::ToolCall() :
    m_idHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_functionHasBeenSet(false),
    m_indexHasBeenSet(false)
{
}

CoreInternalOutcome ToolCall::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ToolCall.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ToolCall.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Function") && !value["Function"].IsNull())
    {
        if (!value["Function"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ToolCall.Function` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_function.Deserialize(value["Function"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_functionHasBeenSet = true;
    }

    if (value.HasMember("Index") && !value["Index"].IsNull())
    {
        if (!value["Index"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ToolCall.Index` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_index = value["Index"].GetInt64();
        m_indexHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ToolCall::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

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

    if (m_indexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Index";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_index, allocator);
    }

}


string ToolCall::GetId() const
{
    return m_id;
}

void ToolCall::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ToolCall::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ToolCall::GetType() const
{
    return m_type;
}

void ToolCall::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ToolCall::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

ToolCallFunction ToolCall::GetFunction() const
{
    return m_function;
}

void ToolCall::SetFunction(const ToolCallFunction& _function)
{
    m_function = _function;
    m_functionHasBeenSet = true;
}

bool ToolCall::FunctionHasBeenSet() const
{
    return m_functionHasBeenSet;
}

int64_t ToolCall::GetIndex() const
{
    return m_index;
}

void ToolCall::SetIndex(const int64_t& _index)
{
    m_index = _index;
    m_indexHasBeenSet = true;
}

bool ToolCall::IndexHasBeenSet() const
{
    return m_indexHasBeenSet;
}

