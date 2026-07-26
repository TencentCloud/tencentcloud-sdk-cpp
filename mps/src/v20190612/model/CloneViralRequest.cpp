/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/mps/v20190612/model/CloneViralRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

CloneViralRequest::CloneViralRequest() :
    m_videoUrlHasBeenSet(false),
    m_productHasBeenSet(false),
    m_aIGCParamHasBeenSet(false),
    m_contentParamHasBeenSet(false),
    m_personaHasBeenSet(false)
{
}

string CloneViralRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_videoUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_videoUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_productHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Product";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_product.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_aIGCParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AIGCParam";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_aIGCParam.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_contentParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentParam";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_contentParam.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_personaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Persona";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_persona.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CloneViralRequest::GetVideoUrl() const
{
    return m_videoUrl;
}

void CloneViralRequest::SetVideoUrl(const string& _videoUrl)
{
    m_videoUrl = _videoUrl;
    m_videoUrlHasBeenSet = true;
}

bool CloneViralRequest::VideoUrlHasBeenSet() const
{
    return m_videoUrlHasBeenSet;
}

CloneViralProduct CloneViralRequest::GetProduct() const
{
    return m_product;
}

void CloneViralRequest::SetProduct(const CloneViralProduct& _product)
{
    m_product = _product;
    m_productHasBeenSet = true;
}

bool CloneViralRequest::ProductHasBeenSet() const
{
    return m_productHasBeenSet;
}

CloneViralAIGC CloneViralRequest::GetAIGCParam() const
{
    return m_aIGCParam;
}

void CloneViralRequest::SetAIGCParam(const CloneViralAIGC& _aIGCParam)
{
    m_aIGCParam = _aIGCParam;
    m_aIGCParamHasBeenSet = true;
}

bool CloneViralRequest::AIGCParamHasBeenSet() const
{
    return m_aIGCParamHasBeenSet;
}

CloneViralContent CloneViralRequest::GetContentParam() const
{
    return m_contentParam;
}

void CloneViralRequest::SetContentParam(const CloneViralContent& _contentParam)
{
    m_contentParam = _contentParam;
    m_contentParamHasBeenSet = true;
}

bool CloneViralRequest::ContentParamHasBeenSet() const
{
    return m_contentParamHasBeenSet;
}

CloneViralPersona CloneViralRequest::GetPersona() const
{
    return m_persona;
}

void CloneViralRequest::SetPersona(const CloneViralPersona& _persona)
{
    m_persona = _persona;
    m_personaHasBeenSet = true;
}

bool CloneViralRequest::PersonaHasBeenSet() const
{
    return m_personaHasBeenSet;
}


