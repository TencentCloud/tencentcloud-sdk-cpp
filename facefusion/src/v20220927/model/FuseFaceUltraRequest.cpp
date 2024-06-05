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

#include <tencentcloud/facefusion/v20220927/model/FuseFaceUltraRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Facefusion::V20220927::Model;
using namespace std;

FuseFaceUltraRequest::FuseFaceUltraRequest() :
    m_rspImgTypeHasBeenSet(false),
    m_mergeInfosHasBeenSet(false),
    m_modelUrlHasBeenSet(false),
    m_modelImageHasBeenSet(false),
    m_fusionUltraParamHasBeenSet(false),
    m_logoAddHasBeenSet(false),
    m_logoParamHasBeenSet(false),
    m_swapModelTypeHasBeenSet(false)
{
}

string FuseFaceUltraRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_rspImgTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RspImgType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_rspImgType.c_str(), allocator).Move(), allocator);
    }

    if (m_mergeInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MergeInfos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_mergeInfos.begin(); itr != m_mergeInfos.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_modelUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modelUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_modelImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelImage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modelImage.c_str(), allocator).Move(), allocator);
    }

    if (m_fusionUltraParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FusionUltraParam";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_fusionUltraParam.ToJsonObject(d[key.c_str()], allocator);
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

    if (m_swapModelTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SwapModelType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_swapModelType, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string FuseFaceUltraRequest::GetRspImgType() const
{
    return m_rspImgType;
}

void FuseFaceUltraRequest::SetRspImgType(const string& _rspImgType)
{
    m_rspImgType = _rspImgType;
    m_rspImgTypeHasBeenSet = true;
}

bool FuseFaceUltraRequest::RspImgTypeHasBeenSet() const
{
    return m_rspImgTypeHasBeenSet;
}

vector<MergeInfo> FuseFaceUltraRequest::GetMergeInfos() const
{
    return m_mergeInfos;
}

void FuseFaceUltraRequest::SetMergeInfos(const vector<MergeInfo>& _mergeInfos)
{
    m_mergeInfos = _mergeInfos;
    m_mergeInfosHasBeenSet = true;
}

bool FuseFaceUltraRequest::MergeInfosHasBeenSet() const
{
    return m_mergeInfosHasBeenSet;
}

string FuseFaceUltraRequest::GetModelUrl() const
{
    return m_modelUrl;
}

void FuseFaceUltraRequest::SetModelUrl(const string& _modelUrl)
{
    m_modelUrl = _modelUrl;
    m_modelUrlHasBeenSet = true;
}

bool FuseFaceUltraRequest::ModelUrlHasBeenSet() const
{
    return m_modelUrlHasBeenSet;
}

string FuseFaceUltraRequest::GetModelImage() const
{
    return m_modelImage;
}

void FuseFaceUltraRequest::SetModelImage(const string& _modelImage)
{
    m_modelImage = _modelImage;
    m_modelImageHasBeenSet = true;
}

bool FuseFaceUltraRequest::ModelImageHasBeenSet() const
{
    return m_modelImageHasBeenSet;
}

FusionUltraParam FuseFaceUltraRequest::GetFusionUltraParam() const
{
    return m_fusionUltraParam;
}

void FuseFaceUltraRequest::SetFusionUltraParam(const FusionUltraParam& _fusionUltraParam)
{
    m_fusionUltraParam = _fusionUltraParam;
    m_fusionUltraParamHasBeenSet = true;
}

bool FuseFaceUltraRequest::FusionUltraParamHasBeenSet() const
{
    return m_fusionUltraParamHasBeenSet;
}

int64_t FuseFaceUltraRequest::GetLogoAdd() const
{
    return m_logoAdd;
}

void FuseFaceUltraRequest::SetLogoAdd(const int64_t& _logoAdd)
{
    m_logoAdd = _logoAdd;
    m_logoAddHasBeenSet = true;
}

bool FuseFaceUltraRequest::LogoAddHasBeenSet() const
{
    return m_logoAddHasBeenSet;
}

LogoParam FuseFaceUltraRequest::GetLogoParam() const
{
    return m_logoParam;
}

void FuseFaceUltraRequest::SetLogoParam(const LogoParam& _logoParam)
{
    m_logoParam = _logoParam;
    m_logoParamHasBeenSet = true;
}

bool FuseFaceUltraRequest::LogoParamHasBeenSet() const
{
    return m_logoParamHasBeenSet;
}

int64_t FuseFaceUltraRequest::GetSwapModelType() const
{
    return m_swapModelType;
}

void FuseFaceUltraRequest::SetSwapModelType(const int64_t& _swapModelType)
{
    m_swapModelType = _swapModelType;
    m_swapModelTypeHasBeenSet = true;
}

bool FuseFaceUltraRequest::SwapModelTypeHasBeenSet() const
{
    return m_swapModelTypeHasBeenSet;
}


