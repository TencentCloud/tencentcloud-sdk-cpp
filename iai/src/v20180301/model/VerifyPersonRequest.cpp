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

#include <tencentcloud/iai/v20180301/model/VerifyPersonRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iai::V20180301::Model;
using namespace std;

VerifyPersonRequest::VerifyPersonRequest() :
    m_personIdHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_qualityControlHasBeenSet(false),
    m_needRotateDetectionHasBeenSet(false)
{
}

string VerifyPersonRequest::ToJsonString() const
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

    if (m_imageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Image";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_image.c_str(), allocator).Move(), allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
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


string VerifyPersonRequest::GetPersonId() const
{
    return m_personId;
}

void VerifyPersonRequest::SetPersonId(const string& _personId)
{
    m_personId = _personId;
    m_personIdHasBeenSet = true;
}

bool VerifyPersonRequest::PersonIdHasBeenSet() const
{
    return m_personIdHasBeenSet;
}

string VerifyPersonRequest::GetImage() const
{
    return m_image;
}

void VerifyPersonRequest::SetImage(const string& _image)
{
    m_image = _image;
    m_imageHasBeenSet = true;
}

bool VerifyPersonRequest::ImageHasBeenSet() const
{
    return m_imageHasBeenSet;
}

string VerifyPersonRequest::GetUrl() const
{
    return m_url;
}

void VerifyPersonRequest::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool VerifyPersonRequest::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

uint64_t VerifyPersonRequest::GetQualityControl() const
{
    return m_qualityControl;
}

void VerifyPersonRequest::SetQualityControl(const uint64_t& _qualityControl)
{
    m_qualityControl = _qualityControl;
    m_qualityControlHasBeenSet = true;
}

bool VerifyPersonRequest::QualityControlHasBeenSet() const
{
    return m_qualityControlHasBeenSet;
}

uint64_t VerifyPersonRequest::GetNeedRotateDetection() const
{
    return m_needRotateDetection;
}

void VerifyPersonRequest::SetNeedRotateDetection(const uint64_t& _needRotateDetection)
{
    m_needRotateDetection = _needRotateDetection;
    m_needRotateDetectionHasBeenSet = true;
}

bool VerifyPersonRequest::NeedRotateDetectionHasBeenSet() const
{
    return m_needRotateDetectionHasBeenSet;
}


