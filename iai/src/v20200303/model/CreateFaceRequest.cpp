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

#include <tencentcloud/iai/v20200303/model/CreateFaceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iai::V20200303::Model;
using namespace std;

CreateFaceRequest::CreateFaceRequest() :
    m_personIdHasBeenSet(false),
    m_imagesHasBeenSet(false),
    m_urlsHasBeenSet(false),
    m_faceMatchThresholdHasBeenSet(false),
    m_qualityControlHasBeenSet(false),
    m_needRotateDetectionHasBeenSet(false)
{
}

string CreateFaceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_personIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PersonId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_personId.c_str(), allocator).Move(), allocator);
    }

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

    if (m_faceMatchThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FaceMatchThreshold";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_faceMatchThreshold, allocator);
    }

    if (m_qualityControlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QualityControl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_qualityControl, allocator);
    }

    if (m_needRotateDetectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedRotateDetection";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_needRotateDetection, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateFaceRequest::GetPersonId() const
{
    return m_personId;
}

void CreateFaceRequest::SetPersonId(const string& _personId)
{
    m_personId = _personId;
    m_personIdHasBeenSet = true;
}

bool CreateFaceRequest::PersonIdHasBeenSet() const
{
    return m_personIdHasBeenSet;
}

vector<string> CreateFaceRequest::GetImages() const
{
    return m_images;
}

void CreateFaceRequest::SetImages(const vector<string>& _images)
{
    m_images = _images;
    m_imagesHasBeenSet = true;
}

bool CreateFaceRequest::ImagesHasBeenSet() const
{
    return m_imagesHasBeenSet;
}

vector<string> CreateFaceRequest::GetUrls() const
{
    return m_urls;
}

void CreateFaceRequest::SetUrls(const vector<string>& _urls)
{
    m_urls = _urls;
    m_urlsHasBeenSet = true;
}

bool CreateFaceRequest::UrlsHasBeenSet() const
{
    return m_urlsHasBeenSet;
}

double CreateFaceRequest::GetFaceMatchThreshold() const
{
    return m_faceMatchThreshold;
}

void CreateFaceRequest::SetFaceMatchThreshold(const double& _faceMatchThreshold)
{
    m_faceMatchThreshold = _faceMatchThreshold;
    m_faceMatchThresholdHasBeenSet = true;
}

bool CreateFaceRequest::FaceMatchThresholdHasBeenSet() const
{
    return m_faceMatchThresholdHasBeenSet;
}

uint64_t CreateFaceRequest::GetQualityControl() const
{
    return m_qualityControl;
}

void CreateFaceRequest::SetQualityControl(const uint64_t& _qualityControl)
{
    m_qualityControl = _qualityControl;
    m_qualityControlHasBeenSet = true;
}

bool CreateFaceRequest::QualityControlHasBeenSet() const
{
    return m_qualityControlHasBeenSet;
}

uint64_t CreateFaceRequest::GetNeedRotateDetection() const
{
    return m_needRotateDetection;
}

void CreateFaceRequest::SetNeedRotateDetection(const uint64_t& _needRotateDetection)
{
    m_needRotateDetection = _needRotateDetection;
    m_needRotateDetectionHasBeenSet = true;
}

bool CreateFaceRequest::NeedRotateDetectionHasBeenSet() const
{
    return m_needRotateDetectionHasBeenSet;
}


