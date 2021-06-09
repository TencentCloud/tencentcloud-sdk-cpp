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

#include <tencentcloud/mps/v20190612/model/ModifyAIAnalysisTemplateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

ModifyAIAnalysisTemplateRequest::ModifyAIAnalysisTemplateRequest() :
    m_definitionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_classificationConfigureHasBeenSet(false),
    m_tagConfigureHasBeenSet(false),
    m_coverConfigureHasBeenSet(false),
    m_frameTagConfigureHasBeenSet(false)
{
}

string ModifyAIAnalysisTemplateRequest::ToJsonString() const
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

    if (m_classificationConfigureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClassificationConfigure";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_classificationConfigure.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_tagConfigureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagConfigure";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tagConfigure.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_coverConfigureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CoverConfigure";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_coverConfigure.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_frameTagConfigureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FrameTagConfigure";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_frameTagConfigure.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t ModifyAIAnalysisTemplateRequest::GetDefinition() const
{
    return m_definition;
}

void ModifyAIAnalysisTemplateRequest::SetDefinition(const int64_t& _definition)
{
    m_definition = _definition;
    m_definitionHasBeenSet = true;
}

bool ModifyAIAnalysisTemplateRequest::DefinitionHasBeenSet() const
{
    return m_definitionHasBeenSet;
}

string ModifyAIAnalysisTemplateRequest::GetName() const
{
    return m_name;
}

void ModifyAIAnalysisTemplateRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyAIAnalysisTemplateRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ModifyAIAnalysisTemplateRequest::GetComment() const
{
    return m_comment;
}

void ModifyAIAnalysisTemplateRequest::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool ModifyAIAnalysisTemplateRequest::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

ClassificationConfigureInfoForUpdate ModifyAIAnalysisTemplateRequest::GetClassificationConfigure() const
{
    return m_classificationConfigure;
}

void ModifyAIAnalysisTemplateRequest::SetClassificationConfigure(const ClassificationConfigureInfoForUpdate& _classificationConfigure)
{
    m_classificationConfigure = _classificationConfigure;
    m_classificationConfigureHasBeenSet = true;
}

bool ModifyAIAnalysisTemplateRequest::ClassificationConfigureHasBeenSet() const
{
    return m_classificationConfigureHasBeenSet;
}

TagConfigureInfoForUpdate ModifyAIAnalysisTemplateRequest::GetTagConfigure() const
{
    return m_tagConfigure;
}

void ModifyAIAnalysisTemplateRequest::SetTagConfigure(const TagConfigureInfoForUpdate& _tagConfigure)
{
    m_tagConfigure = _tagConfigure;
    m_tagConfigureHasBeenSet = true;
}

bool ModifyAIAnalysisTemplateRequest::TagConfigureHasBeenSet() const
{
    return m_tagConfigureHasBeenSet;
}

CoverConfigureInfoForUpdate ModifyAIAnalysisTemplateRequest::GetCoverConfigure() const
{
    return m_coverConfigure;
}

void ModifyAIAnalysisTemplateRequest::SetCoverConfigure(const CoverConfigureInfoForUpdate& _coverConfigure)
{
    m_coverConfigure = _coverConfigure;
    m_coverConfigureHasBeenSet = true;
}

bool ModifyAIAnalysisTemplateRequest::CoverConfigureHasBeenSet() const
{
    return m_coverConfigureHasBeenSet;
}

FrameTagConfigureInfoForUpdate ModifyAIAnalysisTemplateRequest::GetFrameTagConfigure() const
{
    return m_frameTagConfigure;
}

void ModifyAIAnalysisTemplateRequest::SetFrameTagConfigure(const FrameTagConfigureInfoForUpdate& _frameTagConfigure)
{
    m_frameTagConfigure = _frameTagConfigure;
    m_frameTagConfigureHasBeenSet = true;
}

bool ModifyAIAnalysisTemplateRequest::FrameTagConfigureHasBeenSet() const
{
    return m_frameTagConfigureHasBeenSet;
}


