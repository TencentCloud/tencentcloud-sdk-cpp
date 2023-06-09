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

#include <tencentcloud/mps/v20190612/model/CreateAIRecognitionTemplateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

CreateAIRecognitionTemplateRequest::CreateAIRecognitionTemplateRequest() :
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

string CreateAIRecognitionTemplateRequest::ToJsonString() const
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


string CreateAIRecognitionTemplateRequest::GetName() const
{
    return m_name;
}

void CreateAIRecognitionTemplateRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateAIRecognitionTemplateRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateAIRecognitionTemplateRequest::GetComment() const
{
    return m_comment;
}

void CreateAIRecognitionTemplateRequest::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool CreateAIRecognitionTemplateRequest::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

FaceConfigureInfo CreateAIRecognitionTemplateRequest::GetFaceConfigure() const
{
    return m_faceConfigure;
}

void CreateAIRecognitionTemplateRequest::SetFaceConfigure(const FaceConfigureInfo& _faceConfigure)
{
    m_faceConfigure = _faceConfigure;
    m_faceConfigureHasBeenSet = true;
}

bool CreateAIRecognitionTemplateRequest::FaceConfigureHasBeenSet() const
{
    return m_faceConfigureHasBeenSet;
}

OcrFullTextConfigureInfo CreateAIRecognitionTemplateRequest::GetOcrFullTextConfigure() const
{
    return m_ocrFullTextConfigure;
}

void CreateAIRecognitionTemplateRequest::SetOcrFullTextConfigure(const OcrFullTextConfigureInfo& _ocrFullTextConfigure)
{
    m_ocrFullTextConfigure = _ocrFullTextConfigure;
    m_ocrFullTextConfigureHasBeenSet = true;
}

bool CreateAIRecognitionTemplateRequest::OcrFullTextConfigureHasBeenSet() const
{
    return m_ocrFullTextConfigureHasBeenSet;
}

OcrWordsConfigureInfo CreateAIRecognitionTemplateRequest::GetOcrWordsConfigure() const
{
    return m_ocrWordsConfigure;
}

void CreateAIRecognitionTemplateRequest::SetOcrWordsConfigure(const OcrWordsConfigureInfo& _ocrWordsConfigure)
{
    m_ocrWordsConfigure = _ocrWordsConfigure;
    m_ocrWordsConfigureHasBeenSet = true;
}

bool CreateAIRecognitionTemplateRequest::OcrWordsConfigureHasBeenSet() const
{
    return m_ocrWordsConfigureHasBeenSet;
}

AsrFullTextConfigureInfo CreateAIRecognitionTemplateRequest::GetAsrFullTextConfigure() const
{
    return m_asrFullTextConfigure;
}

void CreateAIRecognitionTemplateRequest::SetAsrFullTextConfigure(const AsrFullTextConfigureInfo& _asrFullTextConfigure)
{
    m_asrFullTextConfigure = _asrFullTextConfigure;
    m_asrFullTextConfigureHasBeenSet = true;
}

bool CreateAIRecognitionTemplateRequest::AsrFullTextConfigureHasBeenSet() const
{
    return m_asrFullTextConfigureHasBeenSet;
}

AsrWordsConfigureInfo CreateAIRecognitionTemplateRequest::GetAsrWordsConfigure() const
{
    return m_asrWordsConfigure;
}

void CreateAIRecognitionTemplateRequest::SetAsrWordsConfigure(const AsrWordsConfigureInfo& _asrWordsConfigure)
{
    m_asrWordsConfigure = _asrWordsConfigure;
    m_asrWordsConfigureHasBeenSet = true;
}

bool CreateAIRecognitionTemplateRequest::AsrWordsConfigureHasBeenSet() const
{
    return m_asrWordsConfigureHasBeenSet;
}

TranslateConfigureInfo CreateAIRecognitionTemplateRequest::GetTranslateConfigure() const
{
    return m_translateConfigure;
}

void CreateAIRecognitionTemplateRequest::SetTranslateConfigure(const TranslateConfigureInfo& _translateConfigure)
{
    m_translateConfigure = _translateConfigure;
    m_translateConfigureHasBeenSet = true;
}

bool CreateAIRecognitionTemplateRequest::TranslateConfigureHasBeenSet() const
{
    return m_translateConfigureHasBeenSet;
}


