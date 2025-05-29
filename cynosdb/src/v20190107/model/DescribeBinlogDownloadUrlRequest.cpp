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

#include <tencentcloud/cynosdb/v20190107/model/DescribeBinlogDownloadUrlRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

DescribeBinlogDownloadUrlRequest::DescribeBinlogDownloadUrlRequest() :
    m_clusterIdHasBeenSet(false),
    m_binlogIdHasBeenSet(false),
    m_downloadRestrictionHasBeenSet(false)
{
}

string DescribeBinlogDownloadUrlRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_binlogIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BinlogId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_binlogId, allocator);
    }

    if (m_downloadRestrictionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DownloadRestriction";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_downloadRestriction.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeBinlogDownloadUrlRequest::GetClusterId() const
{
    return m_clusterId;
}

void DescribeBinlogDownloadUrlRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool DescribeBinlogDownloadUrlRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

int64_t DescribeBinlogDownloadUrlRequest::GetBinlogId() const
{
    return m_binlogId;
}

void DescribeBinlogDownloadUrlRequest::SetBinlogId(const int64_t& _binlogId)
{
    m_binlogId = _binlogId;
    m_binlogIdHasBeenSet = true;
}

bool DescribeBinlogDownloadUrlRequest::BinlogIdHasBeenSet() const
{
    return m_binlogIdHasBeenSet;
}

BackupLimitRestriction DescribeBinlogDownloadUrlRequest::GetDownloadRestriction() const
{
    return m_downloadRestriction;
}

void DescribeBinlogDownloadUrlRequest::SetDownloadRestriction(const BackupLimitRestriction& _downloadRestriction)
{
    m_downloadRestriction = _downloadRestriction;
    m_downloadRestrictionHasBeenSet = true;
}

bool DescribeBinlogDownloadUrlRequest::DownloadRestrictionHasBeenSet() const
{
    return m_downloadRestrictionHasBeenSet;
}


