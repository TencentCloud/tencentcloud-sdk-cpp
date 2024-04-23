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

#include <tencentcloud/aiart/v20221229/model/UploadTrainPortraitImagesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Aiart::V20221229::Model;
using namespace std;

UploadTrainPortraitImagesRequest::UploadTrainPortraitImagesRequest() :
    m_modelIdHasBeenSet(false),
    m_baseUrlHasBeenSet(false),
    m_urlsHasBeenSet(false),
    m_filterHasBeenSet(false),
    m_trainModeHasBeenSet(false)
{
}

string UploadTrainPortraitImagesRequest::ToJsonString() const
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

    if (m_baseUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaseUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_baseUrl.c_str(), allocator).Move(), allocator);
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

    if (m_filterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_filter.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_trainModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrainMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_trainMode, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UploadTrainPortraitImagesRequest::GetModelId() const
{
    return m_modelId;
}

void UploadTrainPortraitImagesRequest::SetModelId(const string& _modelId)
{
    m_modelId = _modelId;
    m_modelIdHasBeenSet = true;
}

bool UploadTrainPortraitImagesRequest::ModelIdHasBeenSet() const
{
    return m_modelIdHasBeenSet;
}

string UploadTrainPortraitImagesRequest::GetBaseUrl() const
{
    return m_baseUrl;
}

void UploadTrainPortraitImagesRequest::SetBaseUrl(const string& _baseUrl)
{
    m_baseUrl = _baseUrl;
    m_baseUrlHasBeenSet = true;
}

bool UploadTrainPortraitImagesRequest::BaseUrlHasBeenSet() const
{
    return m_baseUrlHasBeenSet;
}

vector<string> UploadTrainPortraitImagesRequest::GetUrls() const
{
    return m_urls;
}

void UploadTrainPortraitImagesRequest::SetUrls(const vector<string>& _urls)
{
    m_urls = _urls;
    m_urlsHasBeenSet = true;
}

bool UploadTrainPortraitImagesRequest::UrlsHasBeenSet() const
{
    return m_urlsHasBeenSet;
}

Filter UploadTrainPortraitImagesRequest::GetFilter() const
{
    return m_filter;
}

void UploadTrainPortraitImagesRequest::SetFilter(const Filter& _filter)
{
    m_filter = _filter;
    m_filterHasBeenSet = true;
}

bool UploadTrainPortraitImagesRequest::FilterHasBeenSet() const
{
    return m_filterHasBeenSet;
}

int64_t UploadTrainPortraitImagesRequest::GetTrainMode() const
{
    return m_trainMode;
}

void UploadTrainPortraitImagesRequest::SetTrainMode(const int64_t& _trainMode)
{
    m_trainMode = _trainMode;
    m_trainModeHasBeenSet = true;
}

bool UploadTrainPortraitImagesRequest::TrainModeHasBeenSet() const
{
    return m_trainModeHasBeenSet;
}


