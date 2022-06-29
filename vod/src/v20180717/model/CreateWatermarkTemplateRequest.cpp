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

#include <tencentcloud/vod/v20180717/model/CreateWatermarkTemplateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

CreateWatermarkTemplateRequest::CreateWatermarkTemplateRequest() :
    m_typeHasBeenSet(false),
    m_subAppIdHasBeenSet(false),
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

string CreateWatermarkTemplateRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_subAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_subAppId, allocator);
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


string CreateWatermarkTemplateRequest::GetType() const
{
    return m_type;
}

void CreateWatermarkTemplateRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CreateWatermarkTemplateRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

uint64_t CreateWatermarkTemplateRequest::GetSubAppId() const
{
    return m_subAppId;
}

void CreateWatermarkTemplateRequest::SetSubAppId(const uint64_t& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool CreateWatermarkTemplateRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

string CreateWatermarkTemplateRequest::GetName() const
{
    return m_name;
}

void CreateWatermarkTemplateRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateWatermarkTemplateRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateWatermarkTemplateRequest::GetComment() const
{
    return m_comment;
}

void CreateWatermarkTemplateRequest::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool CreateWatermarkTemplateRequest::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

string CreateWatermarkTemplateRequest::GetCoordinateOrigin() const
{
    return m_coordinateOrigin;
}

void CreateWatermarkTemplateRequest::SetCoordinateOrigin(const string& _coordinateOrigin)
{
    m_coordinateOrigin = _coordinateOrigin;
    m_coordinateOriginHasBeenSet = true;
}

bool CreateWatermarkTemplateRequest::CoordinateOriginHasBeenSet() const
{
    return m_coordinateOriginHasBeenSet;
}

string CreateWatermarkTemplateRequest::GetXPos() const
{
    return m_xPos;
}

void CreateWatermarkTemplateRequest::SetXPos(const string& _xPos)
{
    m_xPos = _xPos;
    m_xPosHasBeenSet = true;
}

bool CreateWatermarkTemplateRequest::XPosHasBeenSet() const
{
    return m_xPosHasBeenSet;
}

string CreateWatermarkTemplateRequest::GetYPos() const
{
    return m_yPos;
}

void CreateWatermarkTemplateRequest::SetYPos(const string& _yPos)
{
    m_yPos = _yPos;
    m_yPosHasBeenSet = true;
}

bool CreateWatermarkTemplateRequest::YPosHasBeenSet() const
{
    return m_yPosHasBeenSet;
}

ImageWatermarkInput CreateWatermarkTemplateRequest::GetImageTemplate() const
{
    return m_imageTemplate;
}

void CreateWatermarkTemplateRequest::SetImageTemplate(const ImageWatermarkInput& _imageTemplate)
{
    m_imageTemplate = _imageTemplate;
    m_imageTemplateHasBeenSet = true;
}

bool CreateWatermarkTemplateRequest::ImageTemplateHasBeenSet() const
{
    return m_imageTemplateHasBeenSet;
}

TextWatermarkTemplateInput CreateWatermarkTemplateRequest::GetTextTemplate() const
{
    return m_textTemplate;
}

void CreateWatermarkTemplateRequest::SetTextTemplate(const TextWatermarkTemplateInput& _textTemplate)
{
    m_textTemplate = _textTemplate;
    m_textTemplateHasBeenSet = true;
}

bool CreateWatermarkTemplateRequest::TextTemplateHasBeenSet() const
{
    return m_textTemplateHasBeenSet;
}

SvgWatermarkInput CreateWatermarkTemplateRequest::GetSvgTemplate() const
{
    return m_svgTemplate;
}

void CreateWatermarkTemplateRequest::SetSvgTemplate(const SvgWatermarkInput& _svgTemplate)
{
    m_svgTemplate = _svgTemplate;
    m_svgTemplateHasBeenSet = true;
}

bool CreateWatermarkTemplateRequest::SvgTemplateHasBeenSet() const
{
    return m_svgTemplateHasBeenSet;
}


