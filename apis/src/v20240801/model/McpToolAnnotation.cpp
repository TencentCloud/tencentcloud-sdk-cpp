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

#include <tencentcloud/apis/v20240801/model/McpToolAnnotation.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apis::V20240801::Model;
using namespace std;

McpToolAnnotation::McpToolAnnotation() :
    m_titleHasBeenSet(false),
    m_readOnlyHintHasBeenSet(false),
    m_destructiveHintHasBeenSet(false),
    m_idempotentHintHasBeenSet(false),
    m_openWorldHintHasBeenSet(false)
{
}

CoreInternalOutcome McpToolAnnotation::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Title") && !value["Title"].IsNull())
    {
        if (!value["Title"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `McpToolAnnotation.Title` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_title = string(value["Title"].GetString());
        m_titleHasBeenSet = true;
    }

    if (value.HasMember("ReadOnlyHint") && !value["ReadOnlyHint"].IsNull())
    {
        if (!value["ReadOnlyHint"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `McpToolAnnotation.ReadOnlyHint` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_readOnlyHint = value["ReadOnlyHint"].GetBool();
        m_readOnlyHintHasBeenSet = true;
    }

    if (value.HasMember("DestructiveHint") && !value["DestructiveHint"].IsNull())
    {
        if (!value["DestructiveHint"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `McpToolAnnotation.DestructiveHint` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_destructiveHint = value["DestructiveHint"].GetBool();
        m_destructiveHintHasBeenSet = true;
    }

    if (value.HasMember("IdempotentHint") && !value["IdempotentHint"].IsNull())
    {
        if (!value["IdempotentHint"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `McpToolAnnotation.IdempotentHint` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_idempotentHint = value["IdempotentHint"].GetBool();
        m_idempotentHintHasBeenSet = true;
    }

    if (value.HasMember("OpenWorldHint") && !value["OpenWorldHint"].IsNull())
    {
        if (!value["OpenWorldHint"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `McpToolAnnotation.OpenWorldHint` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_openWorldHint = value["OpenWorldHint"].GetBool();
        m_openWorldHintHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void McpToolAnnotation::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_titleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Title";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_title.c_str(), allocator).Move(), allocator);
    }

    if (m_readOnlyHintHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadOnlyHint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_readOnlyHint, allocator);
    }

    if (m_destructiveHintHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestructiveHint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_destructiveHint, allocator);
    }

    if (m_idempotentHintHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdempotentHint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_idempotentHint, allocator);
    }

    if (m_openWorldHintHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenWorldHint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_openWorldHint, allocator);
    }

}


string McpToolAnnotation::GetTitle() const
{
    return m_title;
}

void McpToolAnnotation::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool McpToolAnnotation::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

bool McpToolAnnotation::GetReadOnlyHint() const
{
    return m_readOnlyHint;
}

void McpToolAnnotation::SetReadOnlyHint(const bool& _readOnlyHint)
{
    m_readOnlyHint = _readOnlyHint;
    m_readOnlyHintHasBeenSet = true;
}

bool McpToolAnnotation::ReadOnlyHintHasBeenSet() const
{
    return m_readOnlyHintHasBeenSet;
}

bool McpToolAnnotation::GetDestructiveHint() const
{
    return m_destructiveHint;
}

void McpToolAnnotation::SetDestructiveHint(const bool& _destructiveHint)
{
    m_destructiveHint = _destructiveHint;
    m_destructiveHintHasBeenSet = true;
}

bool McpToolAnnotation::DestructiveHintHasBeenSet() const
{
    return m_destructiveHintHasBeenSet;
}

bool McpToolAnnotation::GetIdempotentHint() const
{
    return m_idempotentHint;
}

void McpToolAnnotation::SetIdempotentHint(const bool& _idempotentHint)
{
    m_idempotentHint = _idempotentHint;
    m_idempotentHintHasBeenSet = true;
}

bool McpToolAnnotation::IdempotentHintHasBeenSet() const
{
    return m_idempotentHintHasBeenSet;
}

bool McpToolAnnotation::GetOpenWorldHint() const
{
    return m_openWorldHint;
}

void McpToolAnnotation::SetOpenWorldHint(const bool& _openWorldHint)
{
    m_openWorldHint = _openWorldHint;
    m_openWorldHintHasBeenSet = true;
}

bool McpToolAnnotation::OpenWorldHintHasBeenSet() const
{
    return m_openWorldHintHasBeenSet;
}

