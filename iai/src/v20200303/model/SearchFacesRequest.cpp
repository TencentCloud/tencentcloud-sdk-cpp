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

#include <tencentcloud/iai/v20200303/model/SearchFacesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iai::V20200303::Model;
using namespace std;

SearchFacesRequest::SearchFacesRequest() :
    m_groupIdsHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_maxFaceNumHasBeenSet(false),
    m_minFaceSizeHasBeenSet(false),
    m_maxPersonNumHasBeenSet(false),
    m_needPersonInfoHasBeenSet(false),
    m_qualityControlHasBeenSet(false),
    m_faceMatchThresholdHasBeenSet(false),
    m_needRotateDetectionHasBeenSet(false)
{
}

string SearchFacesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_groupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_groupIds.begin(); itr != m_groupIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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

    if (m_maxFaceNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxFaceNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxFaceNum, allocator);
    }

    if (m_minFaceSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinFaceSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_minFaceSize, allocator);
    }

    if (m_maxPersonNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxPersonNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxPersonNum, allocator);
    }

    if (m_needPersonInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedPersonInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_needPersonInfo, allocator);
    }

    if (m_qualityControlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QualityControl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_qualityControl, allocator);
    }

    if (m_faceMatchThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FaceMatchThreshold";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_faceMatchThreshold, allocator);
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


vector<string> SearchFacesRequest::GetGroupIds() const
{
    return m_groupIds;
}

void SearchFacesRequest::SetGroupIds(const vector<string>& _groupIds)
{
    m_groupIds = _groupIds;
    m_groupIdsHasBeenSet = true;
}

bool SearchFacesRequest::GroupIdsHasBeenSet() const
{
    return m_groupIdsHasBeenSet;
}

string SearchFacesRequest::GetImage() const
{
    return m_image;
}

void SearchFacesRequest::SetImage(const string& _image)
{
    m_image = _image;
    m_imageHasBeenSet = true;
}

bool SearchFacesRequest::ImageHasBeenSet() const
{
    return m_imageHasBeenSet;
}

string SearchFacesRequest::GetUrl() const
{
    return m_url;
}

void SearchFacesRequest::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool SearchFacesRequest::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

uint64_t SearchFacesRequest::GetMaxFaceNum() const
{
    return m_maxFaceNum;
}

void SearchFacesRequest::SetMaxFaceNum(const uint64_t& _maxFaceNum)
{
    m_maxFaceNum = _maxFaceNum;
    m_maxFaceNumHasBeenSet = true;
}

bool SearchFacesRequest::MaxFaceNumHasBeenSet() const
{
    return m_maxFaceNumHasBeenSet;
}

uint64_t SearchFacesRequest::GetMinFaceSize() const
{
    return m_minFaceSize;
}

void SearchFacesRequest::SetMinFaceSize(const uint64_t& _minFaceSize)
{
    m_minFaceSize = _minFaceSize;
    m_minFaceSizeHasBeenSet = true;
}

bool SearchFacesRequest::MinFaceSizeHasBeenSet() const
{
    return m_minFaceSizeHasBeenSet;
}

uint64_t SearchFacesRequest::GetMaxPersonNum() const
{
    return m_maxPersonNum;
}

void SearchFacesRequest::SetMaxPersonNum(const uint64_t& _maxPersonNum)
{
    m_maxPersonNum = _maxPersonNum;
    m_maxPersonNumHasBeenSet = true;
}

bool SearchFacesRequest::MaxPersonNumHasBeenSet() const
{
    return m_maxPersonNumHasBeenSet;
}

int64_t SearchFacesRequest::GetNeedPersonInfo() const
{
    return m_needPersonInfo;
}

void SearchFacesRequest::SetNeedPersonInfo(const int64_t& _needPersonInfo)
{
    m_needPersonInfo = _needPersonInfo;
    m_needPersonInfoHasBeenSet = true;
}

bool SearchFacesRequest::NeedPersonInfoHasBeenSet() const
{
    return m_needPersonInfoHasBeenSet;
}

uint64_t SearchFacesRequest::GetQualityControl() const
{
    return m_qualityControl;
}

void SearchFacesRequest::SetQualityControl(const uint64_t& _qualityControl)
{
    m_qualityControl = _qualityControl;
    m_qualityControlHasBeenSet = true;
}

bool SearchFacesRequest::QualityControlHasBeenSet() const
{
    return m_qualityControlHasBeenSet;
}

double SearchFacesRequest::GetFaceMatchThreshold() const
{
    return m_faceMatchThreshold;
}

void SearchFacesRequest::SetFaceMatchThreshold(const double& _faceMatchThreshold)
{
    m_faceMatchThreshold = _faceMatchThreshold;
    m_faceMatchThresholdHasBeenSet = true;
}

bool SearchFacesRequest::FaceMatchThresholdHasBeenSet() const
{
    return m_faceMatchThresholdHasBeenSet;
}

uint64_t SearchFacesRequest::GetNeedRotateDetection() const
{
    return m_needRotateDetection;
}

void SearchFacesRequest::SetNeedRotateDetection(const uint64_t& _needRotateDetection)
{
    m_needRotateDetection = _needRotateDetection;
    m_needRotateDetectionHasBeenSet = true;
}

bool SearchFacesRequest::NeedRotateDetectionHasBeenSet() const
{
    return m_needRotateDetectionHasBeenSet;
}


