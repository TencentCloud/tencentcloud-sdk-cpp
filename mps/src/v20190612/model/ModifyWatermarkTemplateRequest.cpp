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

#include <tencentcloud/mps/v20190612/model/ModifyWatermarkTemplateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

ModifyWatermarkTemplateRequest::ModifyWatermarkTemplateRequest() :
    m_definitionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_coordinateOriginHasBeenSet(false),
    m_xPosHasBeenSet(false),
    m_yPosHasBeenSet(false),
    m_imageTemplateHasBeenSet(false),
    m_textTemplateHasBeenSet(false),
    m_svgTemplateHasBeenSet(false)
{
}

string ModifyWatermarkTemplateRequest::ToJsonString() const
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

    if (m_coordinateOriginHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CoordinateOrigin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_coordinateOrigin.c_str(), allocator).Move(), allocator);
    }

    if (m_xPosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "XPos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_xPos.c_str(), allocator).Move(), allocator);
    }

    if (m_yPosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "YPos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_yPos.c_str(), allocator).Move(), allocator);
    }

    if (m_imageTemplateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageTemplate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_imageTemplate.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_textTemplateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TextTemplate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_textTemplate.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_svgTemplateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SvgTemplate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_svgTemplate.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t ModifyWatermarkTemplateRequest::GetDefinition() const
{
    return m_definition;
}

void ModifyWatermarkTemplateRequest::SetDefinition(const int64_t& _definition)
{
    m_definition = _definition;
    m_definitionHasBeenSet = true;
}

bool ModifyWatermarkTemplateRequest::DefinitionHasBeenSet() const
{
    return m_definitionHasBeenSet;
}

string ModifyWatermarkTemplateRequest::GetName() const
{
    return m_name;
}

void ModifyWatermarkTemplateRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyWatermarkTemplateRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ModifyWatermarkTemplateRequest::GetComment() const
{
    return m_comment;
}

void ModifyWatermarkTemplateRequest::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool ModifyWatermarkTemplateRequest::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

string ModifyWatermarkTemplateRequest::GetCoordinateOrigin() const
{
    return m_coordinateOrigin;
}

void ModifyWatermarkTemplateRequest::SetCoordinateOrigin(const string& _coordinateOrigin)
{
    m_coordinateOrigin = _coordinateOrigin;
    m_coordinateOriginHasBeenSet = true;
}

bool ModifyWatermarkTemplateRequest::CoordinateOriginHasBeenSet() const
{
    return m_coordinateOriginHasBeenSet;
}

string ModifyWatermarkTemplateRequest::GetXPos() const
{
    return m_xPos;
}

void ModifyWatermarkTemplateRequest::SetXPos(const string& _xPos)
{
    m_xPos = _xPos;
    m_xPosHasBeenSet = true;
}

bool ModifyWatermarkTemplateRequest::XPosHasBeenSet() const
{
    return m_xPosHasBeenSet;
}

string ModifyWatermarkTemplateRequest::GetYPos() const
{
    return m_yPos;
}

void ModifyWatermarkTemplateRequest::SetYPos(const string& _yPos)
{
    m_yPos = _yPos;
    m_yPosHasBeenSet = true;
}

bool ModifyWatermarkTemplateRequest::YPosHasBeenSet() const
{
    return m_yPosHasBeenSet;
}

ImageWatermarkInputForUpdate ModifyWatermarkTemplateRequest::GetImageTemplate() const
{
    return m_imageTemplate;
}

void ModifyWatermarkTemplateRequest::SetImageTemplate(const ImageWatermarkInputForUpdate& _imageTemplate)
{
    m_imageTemplate = _imageTemplate;
    m_imageTemplateHasBeenSet = true;
}

bool ModifyWatermarkTemplateRequest::ImageTemplateHasBeenSet() const
{
    return m_imageTemplateHasBeenSet;
}

TextWatermarkTemplateInputForUpdate ModifyWatermarkTemplateRequest::GetTextTemplate() const
{
    return m_textTemplate;
}

void ModifyWatermarkTemplateRequest::SetTextTemplate(const TextWatermarkTemplateInputForUpdate& _textTemplate)
{
    m_textTemplate = _textTemplate;
    m_textTemplateHasBeenSet = true;
}

bool ModifyWatermarkTemplateRequest::TextTemplateHasBeenSet() const
{
    return m_textTemplateHasBeenSet;
}

SvgWatermarkInputForUpdate ModifyWatermarkTemplateRequest::GetSvgTemplate() const
{
    return m_svgTemplate;
}

void ModifyWatermarkTemplateRequest::SetSvgTemplate(const SvgWatermarkInputForUpdate& _svgTemplate)
{
    m_svgTemplate = _svgTemplate;
    m_svgTemplateHasBeenSet = true;
}

bool ModifyWatermarkTemplateRequest::SvgTemplateHasBeenSet() const
{
    return m_svgTemplateHasBeenSet;
}


