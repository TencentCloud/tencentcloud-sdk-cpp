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

#include <tencentcloud/facefusion/v20181201/model/FaceFusionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Facefusion::V20181201::Model;
using namespace std;

FaceFusionRequest::FaceFusionRequest() :
    m_projectIdHasBeenSet(false),
    m_modelIdHasBeenSet(false),
    m_rspImgTypeHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_pornDetectHasBeenSet(false),
    m_celebrityIdentifyHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_fuseParamHasBeenSet(false)
{
}

string FaceFusionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_modelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modelId.c_str(), allocator).Move(), allocator);
    }

    if (m_rspImgTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RspImgType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_rspImgType.c_str(), allocator).Move(), allocator);
    }

    if (m_imageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Image";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_image.c_str(), allocator).Move(), allocator);
    }

    if (m_pornDetectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PornDetect";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pornDetect, allocator);
    }

    if (m_celebrityIdentifyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CelebrityIdentify";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_celebrityIdentify, allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_fuseParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FuseParam";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_fuseParam.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string FaceFusionRequest::GetProjectId() const
{
    return m_projectId;
}

void FaceFusionRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool FaceFusionRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string FaceFusionRequest::GetModelId() const
{
    return m_modelId;
}

void FaceFusionRequest::SetModelId(const string& _modelId)
{
    m_modelId = _modelId;
    m_modelIdHasBeenSet = true;
}

bool FaceFusionRequest::ModelIdHasBeenSet() const
{
    return m_modelIdHasBeenSet;
}

string FaceFusionRequest::GetRspImgType() const
{
    return m_rspImgType;
}

void FaceFusionRequest::SetRspImgType(const string& _rspImgType)
{
    m_rspImgType = _rspImgType;
    m_rspImgTypeHasBeenSet = true;
}

bool FaceFusionRequest::RspImgTypeHasBeenSet() const
{
    return m_rspImgTypeHasBeenSet;
}

string FaceFusionRequest::GetImage() const
{
    return m_image;
}

void FaceFusionRequest::SetImage(const string& _image)
{
    m_image = _image;
    m_imageHasBeenSet = true;
}

bool FaceFusionRequest::ImageHasBeenSet() const
{
    return m_imageHasBeenSet;
}

int64_t FaceFusionRequest::GetPornDetect() const
{
    return m_pornDetect;
}

void FaceFusionRequest::SetPornDetect(const int64_t& _pornDetect)
{
    m_pornDetect = _pornDetect;
    m_pornDetectHasBeenSet = true;
}

bool FaceFusionRequest::PornDetectHasBeenSet() const
{
    return m_pornDetectHasBeenSet;
}

int64_t FaceFusionRequest::GetCelebrityIdentify() const
{
    return m_celebrityIdentify;
}

void FaceFusionRequest::SetCelebrityIdentify(const int64_t& _celebrityIdentify)
{
    m_celebrityIdentify = _celebrityIdentify;
    m_celebrityIdentifyHasBeenSet = true;
}

bool FaceFusionRequest::CelebrityIdentifyHasBeenSet() const
{
    return m_celebrityIdentifyHasBeenSet;
}

string FaceFusionRequest::GetUrl() const
{
    return m_url;
}

void FaceFusionRequest::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool FaceFusionRequest::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

FuseParam FaceFusionRequest::GetFuseParam() const
{
    return m_fuseParam;
}

void FaceFusionRequest::SetFuseParam(const FuseParam& _fuseParam)
{
    m_fuseParam = _fuseParam;
    m_fuseParamHasBeenSet = true;
}

bool FaceFusionRequest::FuseParamHasBeenSet() const
{
    return m_fuseParamHasBeenSet;
}


