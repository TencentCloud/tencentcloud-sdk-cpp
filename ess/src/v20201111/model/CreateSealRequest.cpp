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

#include <tencentcloud/ess/v20201111/model/CreateSealRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

CreateSealRequest::CreateSealRequest() :
    m_operatorHasBeenSet(false),
    m_sealNameHasBeenSet(false),
    m_agentHasBeenSet(false),
    m_generateSourceHasBeenSet(false),
    m_sealTypeHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_widthHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_colorHasBeenSet(false),
    m_sealHorizontalTextHasBeenSet(false),
    m_sealChordTextHasBeenSet(false),
    m_sealCentralTypeHasBeenSet(false),
    m_fileTokenHasBeenSet(false),
    m_sealStyleHasBeenSet(false),
    m_sealSizeHasBeenSet(false),
    m_taxIdentifyCodeHasBeenSet(false)
{
}

string CreateSealRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_operator.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_sealNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SealName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sealName.c_str(), allocator).Move(), allocator);
    }

    if (m_agentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Agent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_agent.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_generateSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GenerateSource";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_generateSource.c_str(), allocator).Move(), allocator);
    }

    if (m_sealTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SealType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sealType.c_str(), allocator).Move(), allocator);
    }

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_imageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Image";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_image.c_str(), allocator).Move(), allocator);
    }

    if (m_widthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Width";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_width, allocator);
    }

    if (m_heightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Height";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_height, allocator);
    }

    if (m_colorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Color";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_color.c_str(), allocator).Move(), allocator);
    }

    if (m_sealHorizontalTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SealHorizontalText";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sealHorizontalText.c_str(), allocator).Move(), allocator);
    }

    if (m_sealChordTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SealChordText";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sealChordText.c_str(), allocator).Move(), allocator);
    }

    if (m_sealCentralTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SealCentralType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sealCentralType.c_str(), allocator).Move(), allocator);
    }

    if (m_fileTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileToken.c_str(), allocator).Move(), allocator);
    }

    if (m_sealStyleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SealStyle";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sealStyle.c_str(), allocator).Move(), allocator);
    }

    if (m_sealSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SealSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sealSize.c_str(), allocator).Move(), allocator);
    }

    if (m_taxIdentifyCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaxIdentifyCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taxIdentifyCode.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


UserInfo CreateSealRequest::GetOperator() const
{
    return m_operator;
}

void CreateSealRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool CreateSealRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

string CreateSealRequest::GetSealName() const
{
    return m_sealName;
}

void CreateSealRequest::SetSealName(const string& _sealName)
{
    m_sealName = _sealName;
    m_sealNameHasBeenSet = true;
}

bool CreateSealRequest::SealNameHasBeenSet() const
{
    return m_sealNameHasBeenSet;
}

Agent CreateSealRequest::GetAgent() const
{
    return m_agent;
}

void CreateSealRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool CreateSealRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

string CreateSealRequest::GetGenerateSource() const
{
    return m_generateSource;
}

void CreateSealRequest::SetGenerateSource(const string& _generateSource)
{
    m_generateSource = _generateSource;
    m_generateSourceHasBeenSet = true;
}

bool CreateSealRequest::GenerateSourceHasBeenSet() const
{
    return m_generateSourceHasBeenSet;
}

string CreateSealRequest::GetSealType() const
{
    return m_sealType;
}

void CreateSealRequest::SetSealType(const string& _sealType)
{
    m_sealType = _sealType;
    m_sealTypeHasBeenSet = true;
}

bool CreateSealRequest::SealTypeHasBeenSet() const
{
    return m_sealTypeHasBeenSet;
}

string CreateSealRequest::GetFileName() const
{
    return m_fileName;
}

void CreateSealRequest::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool CreateSealRequest::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

string CreateSealRequest::GetImage() const
{
    return m_image;
}

void CreateSealRequest::SetImage(const string& _image)
{
    m_image = _image;
    m_imageHasBeenSet = true;
}

bool CreateSealRequest::ImageHasBeenSet() const
{
    return m_imageHasBeenSet;
}

int64_t CreateSealRequest::GetWidth() const
{
    return m_width;
}

void CreateSealRequest::SetWidth(const int64_t& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool CreateSealRequest::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

int64_t CreateSealRequest::GetHeight() const
{
    return m_height;
}

void CreateSealRequest::SetHeight(const int64_t& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool CreateSealRequest::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

string CreateSealRequest::GetColor() const
{
    return m_color;
}

void CreateSealRequest::SetColor(const string& _color)
{
    m_color = _color;
    m_colorHasBeenSet = true;
}

bool CreateSealRequest::ColorHasBeenSet() const
{
    return m_colorHasBeenSet;
}

string CreateSealRequest::GetSealHorizontalText() const
{
    return m_sealHorizontalText;
}

void CreateSealRequest::SetSealHorizontalText(const string& _sealHorizontalText)
{
    m_sealHorizontalText = _sealHorizontalText;
    m_sealHorizontalTextHasBeenSet = true;
}

bool CreateSealRequest::SealHorizontalTextHasBeenSet() const
{
    return m_sealHorizontalTextHasBeenSet;
}

string CreateSealRequest::GetSealChordText() const
{
    return m_sealChordText;
}

void CreateSealRequest::SetSealChordText(const string& _sealChordText)
{
    m_sealChordText = _sealChordText;
    m_sealChordTextHasBeenSet = true;
}

bool CreateSealRequest::SealChordTextHasBeenSet() const
{
    return m_sealChordTextHasBeenSet;
}

string CreateSealRequest::GetSealCentralType() const
{
    return m_sealCentralType;
}

void CreateSealRequest::SetSealCentralType(const string& _sealCentralType)
{
    m_sealCentralType = _sealCentralType;
    m_sealCentralTypeHasBeenSet = true;
}

bool CreateSealRequest::SealCentralTypeHasBeenSet() const
{
    return m_sealCentralTypeHasBeenSet;
}

string CreateSealRequest::GetFileToken() const
{
    return m_fileToken;
}

void CreateSealRequest::SetFileToken(const string& _fileToken)
{
    m_fileToken = _fileToken;
    m_fileTokenHasBeenSet = true;
}

bool CreateSealRequest::FileTokenHasBeenSet() const
{
    return m_fileTokenHasBeenSet;
}

string CreateSealRequest::GetSealStyle() const
{
    return m_sealStyle;
}

void CreateSealRequest::SetSealStyle(const string& _sealStyle)
{
    m_sealStyle = _sealStyle;
    m_sealStyleHasBeenSet = true;
}

bool CreateSealRequest::SealStyleHasBeenSet() const
{
    return m_sealStyleHasBeenSet;
}

string CreateSealRequest::GetSealSize() const
{
    return m_sealSize;
}

void CreateSealRequest::SetSealSize(const string& _sealSize)
{
    m_sealSize = _sealSize;
    m_sealSizeHasBeenSet = true;
}

bool CreateSealRequest::SealSizeHasBeenSet() const
{
    return m_sealSizeHasBeenSet;
}

string CreateSealRequest::GetTaxIdentifyCode() const
{
    return m_taxIdentifyCode;
}

void CreateSealRequest::SetTaxIdentifyCode(const string& _taxIdentifyCode)
{
    m_taxIdentifyCode = _taxIdentifyCode;
    m_taxIdentifyCodeHasBeenSet = true;
}

bool CreateSealRequest::TaxIdentifyCodeHasBeenSet() const
{
    return m_taxIdentifyCodeHasBeenSet;
}


