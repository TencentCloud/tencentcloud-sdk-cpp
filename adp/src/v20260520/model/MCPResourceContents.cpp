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

#include <tencentcloud/adp/v20260520/model/MCPResourceContents.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

MCPResourceContents::MCPResourceContents() :
    m_blobHasBeenSet(false),
    m_metaHasBeenSet(false),
    m_mimeTypeHasBeenSet(false),
    m_textHasBeenSet(false),
    m_uriHasBeenSet(false)
{
}

CoreInternalOutcome MCPResourceContents::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Blob") && !value["Blob"].IsNull())
    {
        if (!value["Blob"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MCPResourceContents.Blob` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_blob = string(value["Blob"].GetString());
        m_blobHasBeenSet = true;
    }

    if (value.HasMember("Meta") && !value["Meta"].IsNull())
    {
        if (!value["Meta"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MCPResourceContents.Meta` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_meta = string(value["Meta"].GetString());
        m_metaHasBeenSet = true;
    }

    if (value.HasMember("MimeType") && !value["MimeType"].IsNull())
    {
        if (!value["MimeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MCPResourceContents.MimeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mimeType = string(value["MimeType"].GetString());
        m_mimeTypeHasBeenSet = true;
    }

    if (value.HasMember("Text") && !value["Text"].IsNull())
    {
        if (!value["Text"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MCPResourceContents.Text` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_text = string(value["Text"].GetString());
        m_textHasBeenSet = true;
    }

    if (value.HasMember("Uri") && !value["Uri"].IsNull())
    {
        if (!value["Uri"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MCPResourceContents.Uri` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uri = string(value["Uri"].GetString());
        m_uriHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MCPResourceContents::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_blobHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Blob";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_blob.c_str(), allocator).Move(), allocator);
    }

    if (m_metaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Meta";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_meta.c_str(), allocator).Move(), allocator);
    }

    if (m_mimeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MimeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mimeType.c_str(), allocator).Move(), allocator);
    }

    if (m_textHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_text.c_str(), allocator).Move(), allocator);
    }

    if (m_uriHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uri";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uri.c_str(), allocator).Move(), allocator);
    }

}


string MCPResourceContents::GetBlob() const
{
    return m_blob;
}

void MCPResourceContents::SetBlob(const string& _blob)
{
    m_blob = _blob;
    m_blobHasBeenSet = true;
}

bool MCPResourceContents::BlobHasBeenSet() const
{
    return m_blobHasBeenSet;
}

string MCPResourceContents::GetMeta() const
{
    return m_meta;
}

void MCPResourceContents::SetMeta(const string& _meta)
{
    m_meta = _meta;
    m_metaHasBeenSet = true;
}

bool MCPResourceContents::MetaHasBeenSet() const
{
    return m_metaHasBeenSet;
}

string MCPResourceContents::GetMimeType() const
{
    return m_mimeType;
}

void MCPResourceContents::SetMimeType(const string& _mimeType)
{
    m_mimeType = _mimeType;
    m_mimeTypeHasBeenSet = true;
}

bool MCPResourceContents::MimeTypeHasBeenSet() const
{
    return m_mimeTypeHasBeenSet;
}

string MCPResourceContents::GetText() const
{
    return m_text;
}

void MCPResourceContents::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool MCPResourceContents::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

string MCPResourceContents::GetUri() const
{
    return m_uri;
}

void MCPResourceContents::SetUri(const string& _uri)
{
    m_uri = _uri;
    m_uriHasBeenSet = true;
}

bool MCPResourceContents::UriHasBeenSet() const
{
    return m_uriHasBeenSet;
}

