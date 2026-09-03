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

#include <tencentcloud/adp/v20260520/model/MCPToolUIMeta.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

MCPToolUIMeta::MCPToolUIMeta() :
    m_resourceUriHasBeenSet(false),
    m_visibilityHasBeenSet(false)
{
}

CoreInternalOutcome MCPToolUIMeta::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceUri") && !value["ResourceUri"].IsNull())
    {
        if (!value["ResourceUri"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MCPToolUIMeta.ResourceUri` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceUri = string(value["ResourceUri"].GetString());
        m_resourceUriHasBeenSet = true;
    }

    if (value.HasMember("Visibility") && !value["Visibility"].IsNull())
    {
        if (!value["Visibility"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MCPToolUIMeta.Visibility` is not array type"));

        const rapidjson::Value &tmpValue = value["Visibility"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_visibility.push_back((*itr).GetString());
        }
        m_visibilityHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MCPToolUIMeta::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceUriHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceUri";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceUri.c_str(), allocator).Move(), allocator);
    }

    if (m_visibilityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Visibility";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_visibility.begin(); itr != m_visibility.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string MCPToolUIMeta::GetResourceUri() const
{
    return m_resourceUri;
}

void MCPToolUIMeta::SetResourceUri(const string& _resourceUri)
{
    m_resourceUri = _resourceUri;
    m_resourceUriHasBeenSet = true;
}

bool MCPToolUIMeta::ResourceUriHasBeenSet() const
{
    return m_resourceUriHasBeenSet;
}

vector<string> MCPToolUIMeta::GetVisibility() const
{
    return m_visibility;
}

void MCPToolUIMeta::SetVisibility(const vector<string>& _visibility)
{
    m_visibility = _visibility;
    m_visibilityHasBeenSet = true;
}

bool MCPToolUIMeta::VisibilityHasBeenSet() const
{
    return m_visibilityHasBeenSet;
}

