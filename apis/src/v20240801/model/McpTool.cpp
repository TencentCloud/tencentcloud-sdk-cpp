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

#include <tencentcloud/apis/v20240801/model/McpTool.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apis::V20240801::Model;
using namespace std;

McpTool::McpTool() :
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_inputSchemaHasBeenSet(false),
    m_annotationsHasBeenSet(false),
    m_outputSchemaHasBeenSet(false)
{
}

CoreInternalOutcome McpTool::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `McpTool.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `McpTool.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("InputSchema") && !value["InputSchema"].IsNull())
    {
        if (!value["InputSchema"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `McpTool.InputSchema` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_inputSchema.Deserialize(value["InputSchema"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_inputSchemaHasBeenSet = true;
    }

    if (value.HasMember("Annotations") && !value["Annotations"].IsNull())
    {
        if (!value["Annotations"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `McpTool.Annotations` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_annotations.Deserialize(value["Annotations"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_annotationsHasBeenSet = true;
    }

    if (value.HasMember("OutputSchema") && !value["OutputSchema"].IsNull())
    {
        if (!value["OutputSchema"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `McpTool.OutputSchema` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_outputSchema.Deserialize(value["OutputSchema"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_outputSchemaHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void McpTool::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_inputSchemaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputSchema";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_inputSchema.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_annotationsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Annotations";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_annotations.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_outputSchemaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputSchema";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_outputSchema.ToJsonObject(value[key.c_str()], allocator);
    }

}


string McpTool::GetName() const
{
    return m_name;
}

void McpTool::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool McpTool::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string McpTool::GetDescription() const
{
    return m_description;
}

void McpTool::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool McpTool::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

McpInputOutSchema McpTool::GetInputSchema() const
{
    return m_inputSchema;
}

void McpTool::SetInputSchema(const McpInputOutSchema& _inputSchema)
{
    m_inputSchema = _inputSchema;
    m_inputSchemaHasBeenSet = true;
}

bool McpTool::InputSchemaHasBeenSet() const
{
    return m_inputSchemaHasBeenSet;
}

McpToolAnnotation McpTool::GetAnnotations() const
{
    return m_annotations;
}

void McpTool::SetAnnotations(const McpToolAnnotation& _annotations)
{
    m_annotations = _annotations;
    m_annotationsHasBeenSet = true;
}

bool McpTool::AnnotationsHasBeenSet() const
{
    return m_annotationsHasBeenSet;
}

McpInputOutSchema McpTool::GetOutputSchema() const
{
    return m_outputSchema;
}

void McpTool::SetOutputSchema(const McpInputOutSchema& _outputSchema)
{
    m_outputSchema = _outputSchema;
    m_outputSchemaHasBeenSet = true;
}

bool McpTool::OutputSchemaHasBeenSet() const
{
    return m_outputSchemaHasBeenSet;
}

