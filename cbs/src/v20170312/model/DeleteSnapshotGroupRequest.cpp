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

#include <tencentcloud/cbs/v20170312/model/DeleteSnapshotGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cbs::V20170312::Model;
using namespace std;

DeleteSnapshotGroupRequest::DeleteSnapshotGroupRequest() :
    m_snapshotGroupIdHasBeenSet(false),
    m_snapshotGroupIdsHasBeenSet(false),
    m_deleteBindImagesHasBeenSet(false)
{
}

string DeleteSnapshotGroupRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_snapshotGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_snapshotGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_snapshotGroupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotGroupIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_snapshotGroupIds.begin(); itr != m_snapshotGroupIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_deleteBindImagesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteBindImages";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_deleteBindImages, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteSnapshotGroupRequest::GetSnapshotGroupId() const
{
    return m_snapshotGroupId;
}

void DeleteSnapshotGroupRequest::SetSnapshotGroupId(const string& _snapshotGroupId)
{
    m_snapshotGroupId = _snapshotGroupId;
    m_snapshotGroupIdHasBeenSet = true;
}

bool DeleteSnapshotGroupRequest::SnapshotGroupIdHasBeenSet() const
{
    return m_snapshotGroupIdHasBeenSet;
}

vector<string> DeleteSnapshotGroupRequest::GetSnapshotGroupIds() const
{
    return m_snapshotGroupIds;
}

void DeleteSnapshotGroupRequest::SetSnapshotGroupIds(const vector<string>& _snapshotGroupIds)
{
    m_snapshotGroupIds = _snapshotGroupIds;
    m_snapshotGroupIdsHasBeenSet = true;
}

bool DeleteSnapshotGroupRequest::SnapshotGroupIdsHasBeenSet() const
{
    return m_snapshotGroupIdsHasBeenSet;
}

bool DeleteSnapshotGroupRequest::GetDeleteBindImages() const
{
    return m_deleteBindImages;
}

void DeleteSnapshotGroupRequest::SetDeleteBindImages(const bool& _deleteBindImages)
{
    m_deleteBindImages = _deleteBindImages;
    m_deleteBindImagesHasBeenSet = true;
}

bool DeleteSnapshotGroupRequest::DeleteBindImagesHasBeenSet() const
{
    return m_deleteBindImagesHasBeenSet;
}


