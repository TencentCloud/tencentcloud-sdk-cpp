/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/tione/v20211111/model/CreateNotebookImageRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

CreateNotebookImageRequest::CreateNotebookImageRequest() :
    m_imageInfoHasBeenSet(false),
    m_notebookIdHasBeenSet(false),
    m_tiProjectIdHasBeenSet(false),
    m_kernelsHasBeenSet(false),
    m_registerToImageCenterHasBeenSet(false)
{
}

string CreateNotebookImageRequest::ToJsonString() const
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

    if (m_notebookIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotebookId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_notebookId.c_str(), allocator).Move(), allocator);
    }

    if (m_tiProjectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TiProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tiProjectId.c_str(), allocator).Move(), allocator);
    }

    if (m_kernelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Kernels";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_kernels.begin(); itr != m_kernels.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_registerToImageCenterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegisterToImageCenter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_registerToImageCenter, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


ImageInfo CreateNotebookImageRequest::GetImageInfo() const
{
    return m_imageInfo;
}

void CreateNotebookImageRequest::SetImageInfo(const ImageInfo& _imageInfo)
{
    m_imageInfo = _imageInfo;
    m_imageInfoHasBeenSet = true;
}

bool CreateNotebookImageRequest::ImageInfoHasBeenSet() const
{
    return m_imageInfoHasBeenSet;
}

string CreateNotebookImageRequest::GetNotebookId() const
{
    return m_notebookId;
}

void CreateNotebookImageRequest::SetNotebookId(const string& _notebookId)
{
    m_notebookId = _notebookId;
    m_notebookIdHasBeenSet = true;
}

bool CreateNotebookImageRequest::NotebookIdHasBeenSet() const
{
    return m_notebookIdHasBeenSet;
}

string CreateNotebookImageRequest::GetTiProjectId() const
{
    return m_tiProjectId;
}

void CreateNotebookImageRequest::SetTiProjectId(const string& _tiProjectId)
{
    m_tiProjectId = _tiProjectId;
    m_tiProjectIdHasBeenSet = true;
}

bool CreateNotebookImageRequest::TiProjectIdHasBeenSet() const
{
    return m_tiProjectIdHasBeenSet;
}

vector<string> CreateNotebookImageRequest::GetKernels() const
{
    return m_kernels;
}

void CreateNotebookImageRequest::SetKernels(const vector<string>& _kernels)
{
    m_kernels = _kernels;
    m_kernelsHasBeenSet = true;
}

bool CreateNotebookImageRequest::KernelsHasBeenSet() const
{
    return m_kernelsHasBeenSet;
}

bool CreateNotebookImageRequest::GetRegisterToImageCenter() const
{
    return m_registerToImageCenter;
}

void CreateNotebookImageRequest::SetRegisterToImageCenter(const bool& _registerToImageCenter)
{
    m_registerToImageCenter = _registerToImageCenter;
    m_registerToImageCenterHasBeenSet = true;
}

bool CreateNotebookImageRequest::RegisterToImageCenterHasBeenSet() const
{
    return m_registerToImageCenterHasBeenSet;
}


