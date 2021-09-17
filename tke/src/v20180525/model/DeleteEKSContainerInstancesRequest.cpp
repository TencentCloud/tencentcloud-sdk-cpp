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

#include <tencentcloud/tke/v20180525/model/DeleteEKSContainerInstancesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

DeleteEKSContainerInstancesRequest::DeleteEKSContainerInstancesRequest() :
    m_eksCiIdsHasBeenSet(false),
    m_releaseAutoCreatedEipHasBeenSet(false)
{
}

string DeleteEKSContainerInstancesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_eksCiIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EksCiIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_eksCiIds.begin(); itr != m_eksCiIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_releaseAutoCreatedEipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReleaseAutoCreatedEip";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_releaseAutoCreatedEip, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> DeleteEKSContainerInstancesRequest::GetEksCiIds() const
{
    return m_eksCiIds;
}

void DeleteEKSContainerInstancesRequest::SetEksCiIds(const vector<string>& _eksCiIds)
{
    m_eksCiIds = _eksCiIds;
    m_eksCiIdsHasBeenSet = true;
}

bool DeleteEKSContainerInstancesRequest::EksCiIdsHasBeenSet() const
{
    return m_eksCiIdsHasBeenSet;
}

bool DeleteEKSContainerInstancesRequest::GetReleaseAutoCreatedEip() const
{
    return m_releaseAutoCreatedEip;
}

void DeleteEKSContainerInstancesRequest::SetReleaseAutoCreatedEip(const bool& _releaseAutoCreatedEip)
{
    m_releaseAutoCreatedEip = _releaseAutoCreatedEip;
    m_releaseAutoCreatedEipHasBeenSet = true;
}

bool DeleteEKSContainerInstancesRequest::ReleaseAutoCreatedEipHasBeenSet() const
{
    return m_releaseAutoCreatedEipHasBeenSet;
}


