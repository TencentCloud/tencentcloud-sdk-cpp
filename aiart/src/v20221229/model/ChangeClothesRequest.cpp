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

#include <tencentcloud/aiart/v20221229/model/ChangeClothesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Aiart::V20221229::Model;
using namespace std;

ChangeClothesRequest::ChangeClothesRequest() :
    m_modelUrlHasBeenSet(false),
    m_clothesUrlHasBeenSet(false),
    m_clothesTypeHasBeenSet(false),
    m_logoAddHasBeenSet(false),
    m_logoParamHasBeenSet(false),
    m_rspImgTypeHasBeenSet(false)
{
}

string ChangeClothesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_modelUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modelUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_clothesUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClothesUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clothesUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_clothesTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClothesType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clothesType.c_str(), allocator).Move(), allocator);
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

    if (m_rspImgTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RspImgType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_rspImgType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ChangeClothesRequest::GetModelUrl() const
{
    return m_modelUrl;
}

void ChangeClothesRequest::SetModelUrl(const string& _modelUrl)
{
    m_modelUrl = _modelUrl;
    m_modelUrlHasBeenSet = true;
}

bool ChangeClothesRequest::ModelUrlHasBeenSet() const
{
    return m_modelUrlHasBeenSet;
}

string ChangeClothesRequest::GetClothesUrl() const
{
    return m_clothesUrl;
}

void ChangeClothesRequest::SetClothesUrl(const string& _clothesUrl)
{
    m_clothesUrl = _clothesUrl;
    m_clothesUrlHasBeenSet = true;
}

bool ChangeClothesRequest::ClothesUrlHasBeenSet() const
{
    return m_clothesUrlHasBeenSet;
}

string ChangeClothesRequest::GetClothesType() const
{
    return m_clothesType;
}

void ChangeClothesRequest::SetClothesType(const string& _clothesType)
{
    m_clothesType = _clothesType;
    m_clothesTypeHasBeenSet = true;
}

bool ChangeClothesRequest::ClothesTypeHasBeenSet() const
{
    return m_clothesTypeHasBeenSet;
}

int64_t ChangeClothesRequest::GetLogoAdd() const
{
    return m_logoAdd;
}

void ChangeClothesRequest::SetLogoAdd(const int64_t& _logoAdd)
{
    m_logoAdd = _logoAdd;
    m_logoAddHasBeenSet = true;
}

bool ChangeClothesRequest::LogoAddHasBeenSet() const
{
    return m_logoAddHasBeenSet;
}

LogoParam ChangeClothesRequest::GetLogoParam() const
{
    return m_logoParam;
}

void ChangeClothesRequest::SetLogoParam(const LogoParam& _logoParam)
{
    m_logoParam = _logoParam;
    m_logoParamHasBeenSet = true;
}

bool ChangeClothesRequest::LogoParamHasBeenSet() const
{
    return m_logoParamHasBeenSet;
}

string ChangeClothesRequest::GetRspImgType() const
{
    return m_rspImgType;
}

void ChangeClothesRequest::SetRspImgType(const string& _rspImgType)
{
    m_rspImgType = _rspImgType;
    m_rspImgTypeHasBeenSet = true;
}

bool ChangeClothesRequest::RspImgTypeHasBeenSet() const
{
    return m_rspImgTypeHasBeenSet;
}


