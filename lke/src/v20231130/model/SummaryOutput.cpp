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

#include <tencentcloud/lke/v20231130/model/SummaryOutput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

SummaryOutput::SummaryOutput() :
    m_methodHasBeenSet(false),
    m_requirementHasBeenSet(false),
    m_requireCommandHasBeenSet(false)
{
}

CoreInternalOutcome SummaryOutput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Method") && !value["Method"].IsNull())
    {
        if (!value["Method"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SummaryOutput.Method` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_method = value["Method"].GetUint64();
        m_methodHasBeenSet = true;
    }

    if (value.HasMember("Requirement") && !value["Requirement"].IsNull())
    {
        if (!value["Requirement"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SummaryOutput.Requirement` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_requirement = value["Requirement"].GetUint64();
        m_requirementHasBeenSet = true;
    }

    if (value.HasMember("RequireCommand") && !value["RequireCommand"].IsNull())
    {
        if (!value["RequireCommand"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SummaryOutput.RequireCommand` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_requireCommand = string(value["RequireCommand"].GetString());
        m_requireCommandHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SummaryOutput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_methodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Method";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_method, allocator);
    }

    if (m_requirementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Requirement";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_requirement, allocator);
    }

    if (m_requireCommandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequireCommand";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_requireCommand.c_str(), allocator).Move(), allocator);
    }

}


uint64_t SummaryOutput::GetMethod() const
{
    return m_method;
}

void SummaryOutput::SetMethod(const uint64_t& _method)
{
    m_method = _method;
    m_methodHasBeenSet = true;
}

bool SummaryOutput::MethodHasBeenSet() const
{
    return m_methodHasBeenSet;
}

uint64_t SummaryOutput::GetRequirement() const
{
    return m_requirement;
}

void SummaryOutput::SetRequirement(const uint64_t& _requirement)
{
    m_requirement = _requirement;
    m_requirementHasBeenSet = true;
}

bool SummaryOutput::RequirementHasBeenSet() const
{
    return m_requirementHasBeenSet;
}

string SummaryOutput::GetRequireCommand() const
{
    return m_requireCommand;
}

void SummaryOutput::SetRequireCommand(const string& _requireCommand)
{
    m_requireCommand = _requireCommand;
    m_requireCommandHasBeenSet = true;
}

bool SummaryOutput::RequireCommandHasBeenSet() const
{
    return m_requireCommandHasBeenSet;
}

