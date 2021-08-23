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

#include <tencentcloud/mps/v20190612/model/WatermarkTemplate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

WatermarkTemplate::WatermarkTemplate() :
    m_definitionHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_xPosHasBeenSet(false),
    m_yPosHasBeenSet(false),
    m_imageTemplateHasBeenSet(false),
    m_textTemplateHasBeenSet(false),
    m_svgTemplateHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_coordinateOriginHasBeenSet(false)
{
}

CoreInternalOutcome WatermarkTemplate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Definition") && !value["Definition"].IsNull())
    {
        if (!value["Definition"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WatermarkTemplate.Definition` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_definition = value["Definition"].GetInt64();
        m_definitionHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WatermarkTemplate.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WatermarkTemplate.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Comment") && !value["Comment"].IsNull())
    {
        if (!value["Comment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WatermarkTemplate.Comment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comment = string(value["Comment"].GetString());
        m_commentHasBeenSet = true;
    }

    if (value.HasMember("XPos") && !value["XPos"].IsNull())
    {
        if (!value["XPos"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WatermarkTemplate.XPos` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_xPos = string(value["XPos"].GetString());
        m_xPosHasBeenSet = true;
    }

    if (value.HasMember("YPos") && !value["YPos"].IsNull())
    {
        if (!value["YPos"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WatermarkTemplate.YPos` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_yPos = string(value["YPos"].GetString());
        m_yPosHasBeenSet = true;
    }

    if (value.HasMember("ImageTemplate") && !value["ImageTemplate"].IsNull())
    {
        if (!value["ImageTemplate"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `WatermarkTemplate.ImageTemplate` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_imageTemplate.Deserialize(value["ImageTemplate"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_imageTemplateHasBeenSet = true;
    }

    if (value.HasMember("TextTemplate") && !value["TextTemplate"].IsNull())
    {
        if (!value["TextTemplate"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `WatermarkTemplate.TextTemplate` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_textTemplate.Deserialize(value["TextTemplate"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_textTemplateHasBeenSet = true;
    }

    if (value.HasMember("SvgTemplate") && !value["SvgTemplate"].IsNull())
    {
        if (!value["SvgTemplate"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `WatermarkTemplate.SvgTemplate` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_svgTemplate.Deserialize(value["SvgTemplate"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_svgTemplateHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WatermarkTemplate.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WatermarkTemplate.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("CoordinateOrigin") && !value["CoordinateOrigin"].IsNull())
    {
        if (!value["CoordinateOrigin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WatermarkTemplate.CoordinateOrigin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_coordinateOrigin = string(value["CoordinateOrigin"].GetString());
        m_coordinateOriginHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WatermarkTemplate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_definitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Definition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_definition, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_commentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_comment.c_str(), allocator).Move(), allocator);
    }

    if (m_xPosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "XPos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_xPos.c_str(), allocator).Move(), allocator);
    }

    if (m_yPosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "YPos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_yPos.c_str(), allocator).Move(), allocator);
    }

    if (m_imageTemplateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageTemplate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_imageTemplate.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_textTemplateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TextTemplate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_textTemplate.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_svgTemplateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SvgTemplate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_svgTemplate.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_coordinateOriginHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CoordinateOrigin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_coordinateOrigin.c_str(), allocator).Move(), allocator);
    }

}


int64_t WatermarkTemplate::GetDefinition() const
{
    return m_definition;
}

void WatermarkTemplate::SetDefinition(const int64_t& _definition)
{
    m_definition = _definition;
    m_definitionHasBeenSet = true;
}

bool WatermarkTemplate::DefinitionHasBeenSet() const
{
    return m_definitionHasBeenSet;
}

string WatermarkTemplate::GetType() const
{
    return m_type;
}

void WatermarkTemplate::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool WatermarkTemplate::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string WatermarkTemplate::GetName() const
{
    return m_name;
}

void WatermarkTemplate::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool WatermarkTemplate::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string WatermarkTemplate::GetComment() const
{
    return m_comment;
}

void WatermarkTemplate::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool WatermarkTemplate::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

string WatermarkTemplate::GetXPos() const
{
    return m_xPos;
}

void WatermarkTemplate::SetXPos(const string& _xPos)
{
    m_xPos = _xPos;
    m_xPosHasBeenSet = true;
}

bool WatermarkTemplate::XPosHasBeenSet() const
{
    return m_xPosHasBeenSet;
}

string WatermarkTemplate::GetYPos() const
{
    return m_yPos;
}

void WatermarkTemplate::SetYPos(const string& _yPos)
{
    m_yPos = _yPos;
    m_yPosHasBeenSet = true;
}

bool WatermarkTemplate::YPosHasBeenSet() const
{
    return m_yPosHasBeenSet;
}

ImageWatermarkTemplate WatermarkTemplate::GetImageTemplate() const
{
    return m_imageTemplate;
}

void WatermarkTemplate::SetImageTemplate(const ImageWatermarkTemplate& _imageTemplate)
{
    m_imageTemplate = _imageTemplate;
    m_imageTemplateHasBeenSet = true;
}

bool WatermarkTemplate::ImageTemplateHasBeenSet() const
{
    return m_imageTemplateHasBeenSet;
}

TextWatermarkTemplateInput WatermarkTemplate::GetTextTemplate() const
{
    return m_textTemplate;
}

void WatermarkTemplate::SetTextTemplate(const TextWatermarkTemplateInput& _textTemplate)
{
    m_textTemplate = _textTemplate;
    m_textTemplateHasBeenSet = true;
}

bool WatermarkTemplate::TextTemplateHasBeenSet() const
{
    return m_textTemplateHasBeenSet;
}

SvgWatermarkInput WatermarkTemplate::GetSvgTemplate() const
{
    return m_svgTemplate;
}

void WatermarkTemplate::SetSvgTemplate(const SvgWatermarkInput& _svgTemplate)
{
    m_svgTemplate = _svgTemplate;
    m_svgTemplateHasBeenSet = true;
}

bool WatermarkTemplate::SvgTemplateHasBeenSet() const
{
    return m_svgTemplateHasBeenSet;
}

string WatermarkTemplate::GetCreateTime() const
{
    return m_createTime;
}

void WatermarkTemplate::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool WatermarkTemplate::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string WatermarkTemplate::GetUpdateTime() const
{
    return m_updateTime;
}

void WatermarkTemplate::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool WatermarkTemplate::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string WatermarkTemplate::GetCoordinateOrigin() const
{
    return m_coordinateOrigin;
}

void WatermarkTemplate::SetCoordinateOrigin(const string& _coordinateOrigin)
{
    m_coordinateOrigin = _coordinateOrigin;
    m_coordinateOriginHasBeenSet = true;
}

bool WatermarkTemplate::CoordinateOriginHasBeenSet() const
{
    return m_coordinateOriginHasBeenSet;
}

