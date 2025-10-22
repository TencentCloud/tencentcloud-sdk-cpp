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

#include <tencentcloud/mps/v20190612/model/CreateSmartEraseTemplateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

CreateSmartEraseTemplateRequest::CreateSmartEraseTemplateRequest() :
    m_nameHasBeenSet(false),
    m_eraseTypeHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_eraseSubtitleConfigHasBeenSet(false),
    m_eraseWatermarkConfigHasBeenSet(false),
    m_erasePrivacyConfigHasBeenSet(false)
{
}

string CreateSmartEraseTemplateRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_eraseTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EraseType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_eraseType.c_str(), allocator).Move(), allocator);
    }

    if (m_commentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_comment.c_str(), allocator).Move(), allocator);
    }

    if (m_eraseSubtitleConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EraseSubtitleConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_eraseSubtitleConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_eraseWatermarkConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EraseWatermarkConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_eraseWatermarkConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_erasePrivacyConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErasePrivacyConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_erasePrivacyConfig.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateSmartEraseTemplateRequest::GetName() const
{
    return m_name;
}

void CreateSmartEraseTemplateRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateSmartEraseTemplateRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateSmartEraseTemplateRequest::GetEraseType() const
{
    return m_eraseType;
}

void CreateSmartEraseTemplateRequest::SetEraseType(const string& _eraseType)
{
    m_eraseType = _eraseType;
    m_eraseTypeHasBeenSet = true;
}

bool CreateSmartEraseTemplateRequest::EraseTypeHasBeenSet() const
{
    return m_eraseTypeHasBeenSet;
}

string CreateSmartEraseTemplateRequest::GetComment() const
{
    return m_comment;
}

void CreateSmartEraseTemplateRequest::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool CreateSmartEraseTemplateRequest::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

SmartEraseSubtitleConfig CreateSmartEraseTemplateRequest::GetEraseSubtitleConfig() const
{
    return m_eraseSubtitleConfig;
}

void CreateSmartEraseTemplateRequest::SetEraseSubtitleConfig(const SmartEraseSubtitleConfig& _eraseSubtitleConfig)
{
    m_eraseSubtitleConfig = _eraseSubtitleConfig;
    m_eraseSubtitleConfigHasBeenSet = true;
}

bool CreateSmartEraseTemplateRequest::EraseSubtitleConfigHasBeenSet() const
{
    return m_eraseSubtitleConfigHasBeenSet;
}

SmartEraseWatermarkConfig CreateSmartEraseTemplateRequest::GetEraseWatermarkConfig() const
{
    return m_eraseWatermarkConfig;
}

void CreateSmartEraseTemplateRequest::SetEraseWatermarkConfig(const SmartEraseWatermarkConfig& _eraseWatermarkConfig)
{
    m_eraseWatermarkConfig = _eraseWatermarkConfig;
    m_eraseWatermarkConfigHasBeenSet = true;
}

bool CreateSmartEraseTemplateRequest::EraseWatermarkConfigHasBeenSet() const
{
    return m_eraseWatermarkConfigHasBeenSet;
}

SmartErasePrivacyConfig CreateSmartEraseTemplateRequest::GetErasePrivacyConfig() const
{
    return m_erasePrivacyConfig;
}

void CreateSmartEraseTemplateRequest::SetErasePrivacyConfig(const SmartErasePrivacyConfig& _erasePrivacyConfig)
{
    m_erasePrivacyConfig = _erasePrivacyConfig;
    m_erasePrivacyConfigHasBeenSet = true;
}

bool CreateSmartEraseTemplateRequest::ErasePrivacyConfigHasBeenSet() const
{
    return m_erasePrivacyConfigHasBeenSet;
}


