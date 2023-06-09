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

#include <tencentcloud/mps/v20190612/model/ModifyAIRecognitionTemplateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

ModifyAIRecognitionTemplateRequest::ModifyAIRecognitionTemplateRequest() :
    m_definitionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_faceConfigureHasBeenSet(false),
    m_ocrFullTextConfigureHasBeenSet(false),
    m_ocrWordsConfigureHasBeenSet(false),
    m_asrFullTextConfigureHasBeenSet(false),
    m_asrWordsConfigureHasBeenSet(false),
    m_translateConfigureHasBeenSet(false)
{
}

string ModifyAIRecognitionTemplateRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_definitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Definition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_definition, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_commentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_comment.c_str(), allocator).Move(), allocator);
    }

    if (m_faceConfigureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FaceConfigure";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_faceConfigure.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_ocrFullTextConfigureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OcrFullTextConfigure";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ocrFullTextConfigure.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_ocrWordsConfigureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OcrWordsConfigure";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ocrWordsConfigure.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_asrFullTextConfigureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AsrFullTextConfigure";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_asrFullTextConfigure.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_asrWordsConfigureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AsrWordsConfigure";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_asrWordsConfigure.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_translateConfigureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TranslateConfigure";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_translateConfigure.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t ModifyAIRecognitionTemplateRequest::GetDefinition() const
{
    return m_definition;
}

void ModifyAIRecognitionTemplateRequest::SetDefinition(const int64_t& _definition)
{
    m_definition = _definition;
    m_definitionHasBeenSet = true;
}

bool ModifyAIRecognitionTemplateRequest::DefinitionHasBeenSet() const
{
    return m_definitionHasBeenSet;
}

string ModifyAIRecognitionTemplateRequest::GetName() const
{
    return m_name;
}

void ModifyAIRecognitionTemplateRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyAIRecognitionTemplateRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ModifyAIRecognitionTemplateRequest::GetComment() const
{
    return m_comment;
}

void ModifyAIRecognitionTemplateRequest::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool ModifyAIRecognitionTemplateRequest::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

FaceConfigureInfoForUpdate ModifyAIRecognitionTemplateRequest::GetFaceConfigure() const
{
    return m_faceConfigure;
}

void ModifyAIRecognitionTemplateRequest::SetFaceConfigure(const FaceConfigureInfoForUpdate& _faceConfigure)
{
    m_faceConfigure = _faceConfigure;
    m_faceConfigureHasBeenSet = true;
}

bool ModifyAIRecognitionTemplateRequest::FaceConfigureHasBeenSet() const
{
    return m_faceConfigureHasBeenSet;
}

OcrFullTextConfigureInfoForUpdate ModifyAIRecognitionTemplateRequest::GetOcrFullTextConfigure() const
{
    return m_ocrFullTextConfigure;
}

void ModifyAIRecognitionTemplateRequest::SetOcrFullTextConfigure(const OcrFullTextConfigureInfoForUpdate& _ocrFullTextConfigure)
{
    m_ocrFullTextConfigure = _ocrFullTextConfigure;
    m_ocrFullTextConfigureHasBeenSet = true;
}

bool ModifyAIRecognitionTemplateRequest::OcrFullTextConfigureHasBeenSet() const
{
    return m_ocrFullTextConfigureHasBeenSet;
}

OcrWordsConfigureInfoForUpdate ModifyAIRecognitionTemplateRequest::GetOcrWordsConfigure() const
{
    return m_ocrWordsConfigure;
}

void ModifyAIRecognitionTemplateRequest::SetOcrWordsConfigure(const OcrWordsConfigureInfoForUpdate& _ocrWordsConfigure)
{
    m_ocrWordsConfigure = _ocrWordsConfigure;
    m_ocrWordsConfigureHasBeenSet = true;
}

bool ModifyAIRecognitionTemplateRequest::OcrWordsConfigureHasBeenSet() const
{
    return m_ocrWordsConfigureHasBeenSet;
}

AsrFullTextConfigureInfoForUpdate ModifyAIRecognitionTemplateRequest::GetAsrFullTextConfigure() const
{
    return m_asrFullTextConfigure;
}

void ModifyAIRecognitionTemplateRequest::SetAsrFullTextConfigure(const AsrFullTextConfigureInfoForUpdate& _asrFullTextConfigure)
{
    m_asrFullTextConfigure = _asrFullTextConfigure;
    m_asrFullTextConfigureHasBeenSet = true;
}

bool ModifyAIRecognitionTemplateRequest::AsrFullTextConfigureHasBeenSet() const
{
    return m_asrFullTextConfigureHasBeenSet;
}

AsrWordsConfigureInfoForUpdate ModifyAIRecognitionTemplateRequest::GetAsrWordsConfigure() const
{
    return m_asrWordsConfigure;
}

void ModifyAIRecognitionTemplateRequest::SetAsrWordsConfigure(const AsrWordsConfigureInfoForUpdate& _asrWordsConfigure)
{
    m_asrWordsConfigure = _asrWordsConfigure;
    m_asrWordsConfigureHasBeenSet = true;
}

bool ModifyAIRecognitionTemplateRequest::AsrWordsConfigureHasBeenSet() const
{
    return m_asrWordsConfigureHasBeenSet;
}

TranslateConfigureInfoForUpdate ModifyAIRecognitionTemplateRequest::GetTranslateConfigure() const
{
    return m_translateConfigure;
}

void ModifyAIRecognitionTemplateRequest::SetTranslateConfigure(const TranslateConfigureInfoForUpdate& _translateConfigure)
{
    m_translateConfigure = _translateConfigure;
    m_translateConfigureHasBeenSet = true;
}

bool ModifyAIRecognitionTemplateRequest::TranslateConfigureHasBeenSet() const
{
    return m_translateConfigureHasBeenSet;
}


