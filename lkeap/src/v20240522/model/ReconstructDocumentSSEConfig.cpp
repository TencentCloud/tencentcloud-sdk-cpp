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

#include <tencentcloud/lkeap/v20240522/model/ReconstructDocumentSSEConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lkeap::V20240522::Model;
using namespace std;

ReconstructDocumentSSEConfig::ReconstructDocumentSSEConfig() :
    m_tableResultTypeHasBeenSet(false),
    m_markdownImageResponseTypeHasBeenSet(false),
    m_returnPageFormatHasBeenSet(false),
    m_pageFormatHasBeenSet(false)
{
}

CoreInternalOutcome ReconstructDocumentSSEConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TableResultType") && !value["TableResultType"].IsNull())
    {
        if (!value["TableResultType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReconstructDocumentSSEConfig.TableResultType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableResultType = string(value["TableResultType"].GetString());
        m_tableResultTypeHasBeenSet = true;
    }

    if (value.HasMember("MarkdownImageResponseType") && !value["MarkdownImageResponseType"].IsNull())
    {
        if (!value["MarkdownImageResponseType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReconstructDocumentSSEConfig.MarkdownImageResponseType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_markdownImageResponseType = string(value["MarkdownImageResponseType"].GetString());
        m_markdownImageResponseTypeHasBeenSet = true;
    }

    if (value.HasMember("ReturnPageFormat") && !value["ReturnPageFormat"].IsNull())
    {
        if (!value["ReturnPageFormat"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ReconstructDocumentSSEConfig.ReturnPageFormat` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_returnPageFormat = value["ReturnPageFormat"].GetBool();
        m_returnPageFormatHasBeenSet = true;
    }

    if (value.HasMember("PageFormat") && !value["PageFormat"].IsNull())
    {
        if (!value["PageFormat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReconstructDocumentSSEConfig.PageFormat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pageFormat = string(value["PageFormat"].GetString());
        m_pageFormatHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReconstructDocumentSSEConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tableResultTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableResultType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableResultType.c_str(), allocator).Move(), allocator);
    }

    if (m_markdownImageResponseTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MarkdownImageResponseType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_markdownImageResponseType.c_str(), allocator).Move(), allocator);
    }

    if (m_returnPageFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReturnPageFormat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_returnPageFormat, allocator);
    }

    if (m_pageFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageFormat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pageFormat.c_str(), allocator).Move(), allocator);
    }

}


string ReconstructDocumentSSEConfig::GetTableResultType() const
{
    return m_tableResultType;
}

void ReconstructDocumentSSEConfig::SetTableResultType(const string& _tableResultType)
{
    m_tableResultType = _tableResultType;
    m_tableResultTypeHasBeenSet = true;
}

bool ReconstructDocumentSSEConfig::TableResultTypeHasBeenSet() const
{
    return m_tableResultTypeHasBeenSet;
}

string ReconstructDocumentSSEConfig::GetMarkdownImageResponseType() const
{
    return m_markdownImageResponseType;
}

void ReconstructDocumentSSEConfig::SetMarkdownImageResponseType(const string& _markdownImageResponseType)
{
    m_markdownImageResponseType = _markdownImageResponseType;
    m_markdownImageResponseTypeHasBeenSet = true;
}

bool ReconstructDocumentSSEConfig::MarkdownImageResponseTypeHasBeenSet() const
{
    return m_markdownImageResponseTypeHasBeenSet;
}

bool ReconstructDocumentSSEConfig::GetReturnPageFormat() const
{
    return m_returnPageFormat;
}

void ReconstructDocumentSSEConfig::SetReturnPageFormat(const bool& _returnPageFormat)
{
    m_returnPageFormat = _returnPageFormat;
    m_returnPageFormatHasBeenSet = true;
}

bool ReconstructDocumentSSEConfig::ReturnPageFormatHasBeenSet() const
{
    return m_returnPageFormatHasBeenSet;
}

string ReconstructDocumentSSEConfig::GetPageFormat() const
{
    return m_pageFormat;
}

void ReconstructDocumentSSEConfig::SetPageFormat(const string& _pageFormat)
{
    m_pageFormat = _pageFormat;
    m_pageFormatHasBeenSet = true;
}

bool ReconstructDocumentSSEConfig::PageFormatHasBeenSet() const
{
    return m_pageFormatHasBeenSet;
}

