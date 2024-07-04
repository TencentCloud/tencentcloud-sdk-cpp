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

#include <tencentcloud/hunyuan/v20230901/model/ToolCallFunction.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Hunyuan::V20230901::Model;
using namespace std;

ToolCallFunction::ToolCallFunction() :
    m_nameHasBeenSet(false),
    m_argumentsHasBeenSet(false)
{
}

CoreInternalOutcome ToolCallFunction::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ToolCallFunction.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Arguments") && !value["Arguments"].IsNull())
    {
        if (!value["Arguments"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ToolCallFunction.Arguments` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_arguments = string(value["Arguments"].GetString());
        m_argumentsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ToolCallFunction::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_argumentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Arguments";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_arguments.c_str(), allocator).Move(), allocator);
    }

}


string ToolCallFunction::GetName() const
{
    return m_name;
}

void ToolCallFunction::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ToolCallFunction::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ToolCallFunction::GetArguments() const
{
    return m_arguments;
}

void ToolCallFunction::SetArguments(const string& _arguments)
{
    m_arguments = _arguments;
    m_argumentsHasBeenSet = true;
}

bool ToolCallFunction::ArgumentsHasBeenSet() const
{
    return m_argumentsHasBeenSet;
}

