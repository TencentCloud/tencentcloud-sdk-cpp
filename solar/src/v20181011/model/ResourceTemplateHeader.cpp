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

#include <tencentcloud/solar/v20181011/model/ResourceTemplateHeader.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Solar::V20181011::Model;
using namespace std;

ResourceTemplateHeader::ResourceTemplateHeader() :
    m_contentHasBeenSet(false),
    m_exampleHasBeenSet(false),
    m_keyArrayHasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_titleHasBeenSet(false)
{
}

CoreInternalOutcome ResourceTemplateHeader::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceTemplateHeader.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("Example") && !value["Example"].IsNull())
    {
        if (!value["Example"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceTemplateHeader.Example` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_example = string(value["Example"].GetString());
        m_exampleHasBeenSet = true;
    }

    if (value.HasMember("KeyArray") && !value["KeyArray"].IsNull())
    {
        if (!value["KeyArray"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceTemplateHeader.KeyArray` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyArray = string(value["KeyArray"].GetString());
        m_keyArrayHasBeenSet = true;
    }

    if (value.HasMember("TemplateId") && !value["TemplateId"].IsNull())
    {
        if (!value["TemplateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceTemplateHeader.TemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateId = string(value["TemplateId"].GetString());
        m_templateIdHasBeenSet = true;
    }

    if (value.HasMember("Title") && !value["Title"].IsNull())
    {
        if (!value["Title"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceTemplateHeader.Title` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_title = string(value["Title"].GetString());
        m_titleHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResourceTemplateHeader::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_exampleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Example";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_example.c_str(), allocator).Move(), allocator);
    }

    if (m_keyArrayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyArray";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyArray.c_str(), allocator).Move(), allocator);
    }

    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateId.c_str(), allocator).Move(), allocator);
    }

    if (m_titleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Title";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_title.c_str(), allocator).Move(), allocator);
    }

}


string ResourceTemplateHeader::GetContent() const
{
    return m_content;
}

void ResourceTemplateHeader::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool ResourceTemplateHeader::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

string ResourceTemplateHeader::GetExample() const
{
    return m_example;
}

void ResourceTemplateHeader::SetExample(const string& _example)
{
    m_example = _example;
    m_exampleHasBeenSet = true;
}

bool ResourceTemplateHeader::ExampleHasBeenSet() const
{
    return m_exampleHasBeenSet;
}

string ResourceTemplateHeader::GetKeyArray() const
{
    return m_keyArray;
}

void ResourceTemplateHeader::SetKeyArray(const string& _keyArray)
{
    m_keyArray = _keyArray;
    m_keyArrayHasBeenSet = true;
}

bool ResourceTemplateHeader::KeyArrayHasBeenSet() const
{
    return m_keyArrayHasBeenSet;
}

string ResourceTemplateHeader::GetTemplateId() const
{
    return m_templateId;
}

void ResourceTemplateHeader::SetTemplateId(const string& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool ResourceTemplateHeader::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

string ResourceTemplateHeader::GetTitle() const
{
    return m_title;
}

void ResourceTemplateHeader::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool ResourceTemplateHeader::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

