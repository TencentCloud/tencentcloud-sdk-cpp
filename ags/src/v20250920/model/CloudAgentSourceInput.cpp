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

#include <tencentcloud/ags/v20250920/model/CloudAgentSourceInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ags::V20250920::Model;
using namespace std;

CloudAgentSourceInput::CloudAgentSourceInput() :
    m_typeHasBeenSet(false),
    m_descriptorsHasBeenSet(false),
    m_endpointURLHasBeenSet(false)
{
}

CoreInternalOutcome CloudAgentSourceInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudAgentSourceInput.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Descriptors") && !value["Descriptors"].IsNull())
    {
        if (!value["Descriptors"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudAgentSourceInput.Descriptors` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_descriptors = string(value["Descriptors"].GetString());
        m_descriptorsHasBeenSet = true;
    }

    if (value.HasMember("EndpointURL") && !value["EndpointURL"].IsNull())
    {
        if (!value["EndpointURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudAgentSourceInput.EndpointURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endpointURL = string(value["EndpointURL"].GetString());
        m_endpointURLHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudAgentSourceInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptorsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Descriptors";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_descriptors.c_str(), allocator).Move(), allocator);
    }

    if (m_endpointURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndpointURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endpointURL.c_str(), allocator).Move(), allocator);
    }

}


string CloudAgentSourceInput::GetType() const
{
    return m_type;
}

void CloudAgentSourceInput::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CloudAgentSourceInput::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string CloudAgentSourceInput::GetDescriptors() const
{
    return m_descriptors;
}

void CloudAgentSourceInput::SetDescriptors(const string& _descriptors)
{
    m_descriptors = _descriptors;
    m_descriptorsHasBeenSet = true;
}

bool CloudAgentSourceInput::DescriptorsHasBeenSet() const
{
    return m_descriptorsHasBeenSet;
}

string CloudAgentSourceInput::GetEndpointURL() const
{
    return m_endpointURL;
}

void CloudAgentSourceInput::SetEndpointURL(const string& _endpointURL)
{
    m_endpointURL = _endpointURL;
    m_endpointURLHasBeenSet = true;
}

bool CloudAgentSourceInput::EndpointURLHasBeenSet() const
{
    return m_endpointURLHasBeenSet;
}

