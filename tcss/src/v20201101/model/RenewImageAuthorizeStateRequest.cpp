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

#include <tencentcloud/tcss/v20201101/model/RenewImageAuthorizeStateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

RenewImageAuthorizeStateRequest::RenewImageAuthorizeStateRequest() :
    m_allImagesHasBeenSet(false),
    m_imageIdsHasBeenSet(false),
    m_needScanHasBeenSet(false),
    m_scanTypeHasBeenSet(false)
{
}

string RenewImageAuthorizeStateRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_allImagesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllImages";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_allImages, allocator);
    }

    if (m_imageIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_imageIds.begin(); itr != m_imageIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_needScanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedScan";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_needScan, allocator);
    }

    if (m_scanTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_scanType.begin(); itr != m_scanType.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


bool RenewImageAuthorizeStateRequest::GetAllImages() const
{
    return m_allImages;
}

void RenewImageAuthorizeStateRequest::SetAllImages(const bool& _allImages)
{
    m_allImages = _allImages;
    m_allImagesHasBeenSet = true;
}

bool RenewImageAuthorizeStateRequest::AllImagesHasBeenSet() const
{
    return m_allImagesHasBeenSet;
}

vector<string> RenewImageAuthorizeStateRequest::GetImageIds() const
{
    return m_imageIds;
}

void RenewImageAuthorizeStateRequest::SetImageIds(const vector<string>& _imageIds)
{
    m_imageIds = _imageIds;
    m_imageIdsHasBeenSet = true;
}

bool RenewImageAuthorizeStateRequest::ImageIdsHasBeenSet() const
{
    return m_imageIdsHasBeenSet;
}

bool RenewImageAuthorizeStateRequest::GetNeedScan() const
{
    return m_needScan;
}

void RenewImageAuthorizeStateRequest::SetNeedScan(const bool& _needScan)
{
    m_needScan = _needScan;
    m_needScanHasBeenSet = true;
}

bool RenewImageAuthorizeStateRequest::NeedScanHasBeenSet() const
{
    return m_needScanHasBeenSet;
}

vector<string> RenewImageAuthorizeStateRequest::GetScanType() const
{
    return m_scanType;
}

void RenewImageAuthorizeStateRequest::SetScanType(const vector<string>& _scanType)
{
    m_scanType = _scanType;
    m_scanTypeHasBeenSet = true;
}

bool RenewImageAuthorizeStateRequest::ScanTypeHasBeenSet() const
{
    return m_scanTypeHasBeenSet;
}


