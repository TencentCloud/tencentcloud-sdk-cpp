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

#include <tencentcloud/tione/v20211111/model/DescribeModelServiceHotUpdatedRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

DescribeModelServiceHotUpdatedRequest::DescribeModelServiceHotUpdatedRequest() :
    m_imageInfoHasBeenSet(false),
    m_modelInfoHasBeenSet(false),
    m_volumeMountHasBeenSet(false)
{
}

string DescribeModelServiceHotUpdatedRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_imageInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_imageInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_modelInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_modelInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_volumeMountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VolumeMount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_volumeMount.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


ImageInfo DescribeModelServiceHotUpdatedRequest::GetImageInfo() const
{
    return m_imageInfo;
}

void DescribeModelServiceHotUpdatedRequest::SetImageInfo(const ImageInfo& _imageInfo)
{
    m_imageInfo = _imageInfo;
    m_imageInfoHasBeenSet = true;
}

bool DescribeModelServiceHotUpdatedRequest::ImageInfoHasBeenSet() const
{
    return m_imageInfoHasBeenSet;
}

ModelInfo DescribeModelServiceHotUpdatedRequest::GetModelInfo() const
{
    return m_modelInfo;
}

void DescribeModelServiceHotUpdatedRequest::SetModelInfo(const ModelInfo& _modelInfo)
{
    m_modelInfo = _modelInfo;
    m_modelInfoHasBeenSet = true;
}

bool DescribeModelServiceHotUpdatedRequest::ModelInfoHasBeenSet() const
{
    return m_modelInfoHasBeenSet;
}

VolumeMount DescribeModelServiceHotUpdatedRequest::GetVolumeMount() const
{
    return m_volumeMount;
}

void DescribeModelServiceHotUpdatedRequest::SetVolumeMount(const VolumeMount& _volumeMount)
{
    m_volumeMount = _volumeMount;
    m_volumeMountHasBeenSet = true;
}

bool DescribeModelServiceHotUpdatedRequest::VolumeMountHasBeenSet() const
{
    return m_volumeMountHasBeenSet;
}


