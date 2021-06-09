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

#include <tencentcloud/ft/v20200304/model/MorphFaceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ft::V20200304::Model;
using namespace std;

MorphFaceRequest::MorphFaceRequest() :
    m_imagesHasBeenSet(false),
    m_urlsHasBeenSet(false),
    m_gradientInfosHasBeenSet(false),
    m_fpsHasBeenSet(false),
    m_outputTypeHasBeenSet(false),
    m_outputWidthHasBeenSet(false),
    m_outputHeightHasBeenSet(false)
{
}

string MorphFaceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_imagesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Images";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_images.begin(); itr != m_images.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_urlsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Urls";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_urls.begin(); itr != m_urls.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_gradientInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GradientInfos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_gradientInfos.begin(); itr != m_gradientInfos.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_fpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Fps";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_fps, allocator);
    }

    if (m_outputTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_outputType, allocator);
    }

    if (m_outputWidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputWidth";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_outputWidth, allocator);
    }

    if (m_outputHeightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputHeight";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_outputHeight, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> MorphFaceRequest::GetImages() const
{
    return m_images;
}

void MorphFaceRequest::SetImages(const vector<string>& _images)
{
    m_images = _images;
    m_imagesHasBeenSet = true;
}

bool MorphFaceRequest::ImagesHasBeenSet() const
{
    return m_imagesHasBeenSet;
}

vector<string> MorphFaceRequest::GetUrls() const
{
    return m_urls;
}

void MorphFaceRequest::SetUrls(const vector<string>& _urls)
{
    m_urls = _urls;
    m_urlsHasBeenSet = true;
}

bool MorphFaceRequest::UrlsHasBeenSet() const
{
    return m_urlsHasBeenSet;
}

vector<GradientInfo> MorphFaceRequest::GetGradientInfos() const
{
    return m_gradientInfos;
}

void MorphFaceRequest::SetGradientInfos(const vector<GradientInfo>& _gradientInfos)
{
    m_gradientInfos = _gradientInfos;
    m_gradientInfosHasBeenSet = true;
}

bool MorphFaceRequest::GradientInfosHasBeenSet() const
{
    return m_gradientInfosHasBeenSet;
}

int64_t MorphFaceRequest::GetFps() const
{
    return m_fps;
}

void MorphFaceRequest::SetFps(const int64_t& _fps)
{
    m_fps = _fps;
    m_fpsHasBeenSet = true;
}

bool MorphFaceRequest::FpsHasBeenSet() const
{
    return m_fpsHasBeenSet;
}

int64_t MorphFaceRequest::GetOutputType() const
{
    return m_outputType;
}

void MorphFaceRequest::SetOutputType(const int64_t& _outputType)
{
    m_outputType = _outputType;
    m_outputTypeHasBeenSet = true;
}

bool MorphFaceRequest::OutputTypeHasBeenSet() const
{
    return m_outputTypeHasBeenSet;
}

int64_t MorphFaceRequest::GetOutputWidth() const
{
    return m_outputWidth;
}

void MorphFaceRequest::SetOutputWidth(const int64_t& _outputWidth)
{
    m_outputWidth = _outputWidth;
    m_outputWidthHasBeenSet = true;
}

bool MorphFaceRequest::OutputWidthHasBeenSet() const
{
    return m_outputWidthHasBeenSet;
}

int64_t MorphFaceRequest::GetOutputHeight() const
{
    return m_outputHeight;
}

void MorphFaceRequest::SetOutputHeight(const int64_t& _outputHeight)
{
    m_outputHeight = _outputHeight;
    m_outputHeightHasBeenSet = true;
}

bool MorphFaceRequest::OutputHeightHasBeenSet() const
{
    return m_outputHeightHasBeenSet;
}


