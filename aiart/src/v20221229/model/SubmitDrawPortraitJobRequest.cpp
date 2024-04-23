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

#include <tencentcloud/aiart/v20221229/model/SubmitDrawPortraitJobRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Aiart::V20221229::Model;
using namespace std;

SubmitDrawPortraitJobRequest::SubmitDrawPortraitJobRequest() :
    m_modelIdHasBeenSet(false),
    m_styleIdHasBeenSet(false),
    m_imageNumHasBeenSet(false),
    m_logoAddHasBeenSet(false),
    m_logoParamHasBeenSet(false),
    m_definitionHasBeenSet(false)
{
}

string SubmitDrawPortraitJobRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_modelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modelId.c_str(), allocator).Move(), allocator);
    }

    if (m_styleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StyleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_styleId.c_str(), allocator).Move(), allocator);
    }

    if (m_imageNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_imageNum, allocator);
    }

    if (m_logoAddHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogoAdd";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_logoAdd, allocator);
    }

    if (m_logoParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogoParam";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_logoParam.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_definitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Definition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_definition.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SubmitDrawPortraitJobRequest::GetModelId() const
{
    return m_modelId;
}

void SubmitDrawPortraitJobRequest::SetModelId(const string& _modelId)
{
    m_modelId = _modelId;
    m_modelIdHasBeenSet = true;
}

bool SubmitDrawPortraitJobRequest::ModelIdHasBeenSet() const
{
    return m_modelIdHasBeenSet;
}

string SubmitDrawPortraitJobRequest::GetStyleId() const
{
    return m_styleId;
}

void SubmitDrawPortraitJobRequest::SetStyleId(const string& _styleId)
{
    m_styleId = _styleId;
    m_styleIdHasBeenSet = true;
}

bool SubmitDrawPortraitJobRequest::StyleIdHasBeenSet() const
{
    return m_styleIdHasBeenSet;
}

int64_t SubmitDrawPortraitJobRequest::GetImageNum() const
{
    return m_imageNum;
}

void SubmitDrawPortraitJobRequest::SetImageNum(const int64_t& _imageNum)
{
    m_imageNum = _imageNum;
    m_imageNumHasBeenSet = true;
}

bool SubmitDrawPortraitJobRequest::ImageNumHasBeenSet() const
{
    return m_imageNumHasBeenSet;
}

int64_t SubmitDrawPortraitJobRequest::GetLogoAdd() const
{
    return m_logoAdd;
}

void SubmitDrawPortraitJobRequest::SetLogoAdd(const int64_t& _logoAdd)
{
    m_logoAdd = _logoAdd;
    m_logoAddHasBeenSet = true;
}

bool SubmitDrawPortraitJobRequest::LogoAddHasBeenSet() const
{
    return m_logoAddHasBeenSet;
}

LogoParam SubmitDrawPortraitJobRequest::GetLogoParam() const
{
    return m_logoParam;
}

void SubmitDrawPortraitJobRequest::SetLogoParam(const LogoParam& _logoParam)
{
    m_logoParam = _logoParam;
    m_logoParamHasBeenSet = true;
}

bool SubmitDrawPortraitJobRequest::LogoParamHasBeenSet() const
{
    return m_logoParamHasBeenSet;
}

string SubmitDrawPortraitJobRequest::GetDefinition() const
{
    return m_definition;
}

void SubmitDrawPortraitJobRequest::SetDefinition(const string& _definition)
{
    m_definition = _definition;
    m_definitionHasBeenSet = true;
}

bool SubmitDrawPortraitJobRequest::DefinitionHasBeenSet() const
{
    return m_definitionHasBeenSet;
}


