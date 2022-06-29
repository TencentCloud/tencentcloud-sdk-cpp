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

#include <tencentcloud/cbs/v20170312/model/CopySnapshotCrossRegionsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cbs::V20170312::Model;
using namespace std;

CopySnapshotCrossRegionsRequest::CopySnapshotCrossRegionsRequest() :
    m_destinationRegionsHasBeenSet(false),
    m_snapshotIdHasBeenSet(false),
    m_snapshotNameHasBeenSet(false)
{
}

string CopySnapshotCrossRegionsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_destinationRegionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestinationRegions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_destinationRegions.begin(); itr != m_destinationRegions.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_snapshotIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_snapshotId.c_str(), allocator).Move(), allocator);
    }

    if (m_snapshotNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_snapshotName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> CopySnapshotCrossRegionsRequest::GetDestinationRegions() const
{
    return m_destinationRegions;
}

void CopySnapshotCrossRegionsRequest::SetDestinationRegions(const vector<string>& _destinationRegions)
{
    m_destinationRegions = _destinationRegions;
    m_destinationRegionsHasBeenSet = true;
}

bool CopySnapshotCrossRegionsRequest::DestinationRegionsHasBeenSet() const
{
    return m_destinationRegionsHasBeenSet;
}

string CopySnapshotCrossRegionsRequest::GetSnapshotId() const
{
    return m_snapshotId;
}

void CopySnapshotCrossRegionsRequest::SetSnapshotId(const string& _snapshotId)
{
    m_snapshotId = _snapshotId;
    m_snapshotIdHasBeenSet = true;
}

bool CopySnapshotCrossRegionsRequest::SnapshotIdHasBeenSet() const
{
    return m_snapshotIdHasBeenSet;
}

string CopySnapshotCrossRegionsRequest::GetSnapshotName() const
{
    return m_snapshotName;
}

void CopySnapshotCrossRegionsRequest::SetSnapshotName(const string& _snapshotName)
{
    m_snapshotName = _snapshotName;
    m_snapshotNameHasBeenSet = true;
}

bool CopySnapshotCrossRegionsRequest::SnapshotNameHasBeenSet() const
{
    return m_snapshotNameHasBeenSet;
}


