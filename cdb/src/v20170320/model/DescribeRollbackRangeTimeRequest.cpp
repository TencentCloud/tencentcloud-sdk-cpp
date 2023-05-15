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

#include <tencentcloud/cdb/v20170320/model/DescribeRollbackRangeTimeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

DescribeRollbackRangeTimeRequest::DescribeRollbackRangeTimeRequest() :
    m_instanceIdsHasBeenSet(false),
    m_isRemoteZoneHasBeenSet(false),
    m_backupRegionHasBeenSet(false)
{
}

string DescribeRollbackRangeTimeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceIds.begin(); itr != m_instanceIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_isRemoteZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsRemoteZone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_isRemoteZone.c_str(), allocator).Move(), allocator);
    }

    if (m_backupRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_backupRegion.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> DescribeRollbackRangeTimeRequest::GetInstanceIds() const
{
    return m_instanceIds;
}

void DescribeRollbackRangeTimeRequest::SetInstanceIds(const vector<string>& _instanceIds)
{
    m_instanceIds = _instanceIds;
    m_instanceIdsHasBeenSet = true;
}

bool DescribeRollbackRangeTimeRequest::InstanceIdsHasBeenSet() const
{
    return m_instanceIdsHasBeenSet;
}

string DescribeRollbackRangeTimeRequest::GetIsRemoteZone() const
{
    return m_isRemoteZone;
}

void DescribeRollbackRangeTimeRequest::SetIsRemoteZone(const string& _isRemoteZone)
{
    m_isRemoteZone = _isRemoteZone;
    m_isRemoteZoneHasBeenSet = true;
}

bool DescribeRollbackRangeTimeRequest::IsRemoteZoneHasBeenSet() const
{
    return m_isRemoteZoneHasBeenSet;
}

string DescribeRollbackRangeTimeRequest::GetBackupRegion() const
{
    return m_backupRegion;
}

void DescribeRollbackRangeTimeRequest::SetBackupRegion(const string& _backupRegion)
{
    m_backupRegion = _backupRegion;
    m_backupRegionHasBeenSet = true;
}

bool DescribeRollbackRangeTimeRequest::BackupRegionHasBeenSet() const
{
    return m_backupRegionHasBeenSet;
}


