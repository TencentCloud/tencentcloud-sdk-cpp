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

#include <tencentcloud/portal/v20230413/model/SearchDocumentItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Portal::V20230413::Model;
using namespace std;

SearchDocumentItem::SearchDocumentItem() :
    m_urlHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_productNameHasBeenSet(false),
    m_snippetHasBeenSet(false)
{
}

CoreInternalOutcome SearchDocumentItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchDocumentItem.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("Title") && !value["Title"].IsNull())
    {
        if (!value["Title"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchDocumentItem.Title` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_title = string(value["Title"].GetString());
        m_titleHasBeenSet = true;
    }

    if (value.HasMember("ProductName") && !value["ProductName"].IsNull())
    {
        if (!value["ProductName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchDocumentItem.ProductName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productName = string(value["ProductName"].GetString());
        m_productNameHasBeenSet = true;
    }

    if (value.HasMember("Snippet") && !value["Snippet"].IsNull())
    {
        if (!value["Snippet"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchDocumentItem.Snippet` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_snippet = string(value["Snippet"].GetString());
        m_snippetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SearchDocumentItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_titleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Title";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_title.c_str(), allocator).Move(), allocator);
    }

    if (m_productNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productName.c_str(), allocator).Move(), allocator);
    }

    if (m_snippetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Snippet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_snippet.c_str(), allocator).Move(), allocator);
    }

}


string SearchDocumentItem::GetUrl() const
{
    return m_url;
}

void SearchDocumentItem::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool SearchDocumentItem::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string SearchDocumentItem::GetTitle() const
{
    return m_title;
}

void SearchDocumentItem::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool SearchDocumentItem::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

string SearchDocumentItem::GetProductName() const
{
    return m_productName;
}

void SearchDocumentItem::SetProductName(const string& _productName)
{
    m_productName = _productName;
    m_productNameHasBeenSet = true;
}

bool SearchDocumentItem::ProductNameHasBeenSet() const
{
    return m_productNameHasBeenSet;
}

string SearchDocumentItem::GetSnippet() const
{
    return m_snippet;
}

void SearchDocumentItem::SetSnippet(const string& _snippet)
{
    m_snippet = _snippet;
    m_snippetHasBeenSet = true;
}

bool SearchDocumentItem::SnippetHasBeenSet() const
{
    return m_snippetHasBeenSet;
}

