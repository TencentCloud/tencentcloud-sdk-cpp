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

#include <tencentcloud/hunyuan/v20230901/model/ChatTranslationsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Hunyuan::V20230901::Model;
using namespace std;

ChatTranslationsRequest::ChatTranslationsRequest() :
    m_modelHasBeenSet(false),
    m_streamHasBeenSet(false),
    m_textHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_targetHasBeenSet(false),
    m_fieldHasBeenSet(false),
    m_referencesHasBeenSet(false)
{
}

string ChatTranslationsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_modelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Model";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_model.c_str(), allocator).Move(), allocator);
    }

    if (m_streamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Stream";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_stream, allocator);
    }

    if (m_textHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_text.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
    }

    if (m_targetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Target";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_target.c_str(), allocator).Move(), allocator);
    }

    if (m_fieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Field";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_field.c_str(), allocator).Move(), allocator);
    }

    if (m_referencesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "References";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_references.begin(); itr != m_references.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ChatTranslationsRequest::GetModel() const
{
    return m_model;
}

void ChatTranslationsRequest::SetModel(const string& _model)
{
    m_model = _model;
    m_modelHasBeenSet = true;
}

bool ChatTranslationsRequest::ModelHasBeenSet() const
{
    return m_modelHasBeenSet;
}

bool ChatTranslationsRequest::GetStream() const
{
    return m_stream;
}

void ChatTranslationsRequest::SetStream(const bool& _stream)
{
    m_stream = _stream;
    m_streamHasBeenSet = true;
}

bool ChatTranslationsRequest::StreamHasBeenSet() const
{
    return m_streamHasBeenSet;
}

string ChatTranslationsRequest::GetText() const
{
    return m_text;
}

void ChatTranslationsRequest::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool ChatTranslationsRequest::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

string ChatTranslationsRequest::GetSource() const
{
    return m_source;
}

void ChatTranslationsRequest::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool ChatTranslationsRequest::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string ChatTranslationsRequest::GetTarget() const
{
    return m_target;
}

void ChatTranslationsRequest::SetTarget(const string& _target)
{
    m_target = _target;
    m_targetHasBeenSet = true;
}

bool ChatTranslationsRequest::TargetHasBeenSet() const
{
    return m_targetHasBeenSet;
}

string ChatTranslationsRequest::GetField() const
{
    return m_field;
}

void ChatTranslationsRequest::SetField(const string& _field)
{
    m_field = _field;
    m_fieldHasBeenSet = true;
}

bool ChatTranslationsRequest::FieldHasBeenSet() const
{
    return m_fieldHasBeenSet;
}

vector<Reference> ChatTranslationsRequest::GetReferences() const
{
    return m_references;
}

void ChatTranslationsRequest::SetReferences(const vector<Reference>& _references)
{
    m_references = _references;
    m_referencesHasBeenSet = true;
}

bool ChatTranslationsRequest::ReferencesHasBeenSet() const
{
    return m_referencesHasBeenSet;
}


