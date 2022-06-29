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

#include <tencentcloud/cvm/v20170312/model/DeleteImagesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cvm::V20170312::Model;
using namespace std;

DeleteImagesRequest::DeleteImagesRequest() :
    m_imageIdsHasBeenSet(false),
    m_deleteBindedSnapHasBeenSet(false),
    m_dryRunHasBeenSet(false)
{
}

string DeleteImagesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_deleteBindedSnapHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteBindedSnap";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_deleteBindedSnap, allocator);
    }

    if (m_dryRunHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DryRun";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dryRun, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> DeleteImagesRequest::GetImageIds() const
{
    return m_imageIds;
}

void DeleteImagesRequest::SetImageIds(const vector<string>& _imageIds)
{
    m_imageIds = _imageIds;
    m_imageIdsHasBeenSet = true;
}

bool DeleteImagesRequest::ImageIdsHasBeenSet() const
{
    return m_imageIdsHasBeenSet;
}

bool DeleteImagesRequest::GetDeleteBindedSnap() const
{
    return m_deleteBindedSnap;
}

void DeleteImagesRequest::SetDeleteBindedSnap(const bool& _deleteBindedSnap)
{
    m_deleteBindedSnap = _deleteBindedSnap;
    m_deleteBindedSnapHasBeenSet = true;
}

bool DeleteImagesRequest::DeleteBindedSnapHasBeenSet() const
{
    return m_deleteBindedSnapHasBeenSet;
}

bool DeleteImagesRequest::GetDryRun() const
{
    return m_dryRun;
}

void DeleteImagesRequest::SetDryRun(const bool& _dryRun)
{
    m_dryRun = _dryRun;
    m_dryRunHasBeenSet = true;
}

bool DeleteImagesRequest::DryRunHasBeenSet() const
{
    return m_dryRunHasBeenSet;
}


