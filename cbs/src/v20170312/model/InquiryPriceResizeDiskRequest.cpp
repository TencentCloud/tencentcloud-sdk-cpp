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

#include <tencentcloud/cbs/v20170312/model/InquiryPriceResizeDiskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cbs::V20170312::Model;
using namespace std;

InquiryPriceResizeDiskRequest::InquiryPriceResizeDiskRequest() :
    m_diskSizeHasBeenSet(false),
    m_diskIdHasBeenSet(false),
    m_projectIdHasBeenSet(false)
{
}

string InquiryPriceResizeDiskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_diskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_diskSize, allocator);
    }

    if (m_diskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_diskId.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_projectId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t InquiryPriceResizeDiskRequest::GetDiskSize() const
{
    return m_diskSize;
}

void InquiryPriceResizeDiskRequest::SetDiskSize(const uint64_t& _diskSize)
{
    m_diskSize = _diskSize;
    m_diskSizeHasBeenSet = true;
}

bool InquiryPriceResizeDiskRequest::DiskSizeHasBeenSet() const
{
    return m_diskSizeHasBeenSet;
}

string InquiryPriceResizeDiskRequest::GetDiskId() const
{
    return m_diskId;
}

void InquiryPriceResizeDiskRequest::SetDiskId(const string& _diskId)
{
    m_diskId = _diskId;
    m_diskIdHasBeenSet = true;
}

bool InquiryPriceResizeDiskRequest::DiskIdHasBeenSet() const
{
    return m_diskIdHasBeenSet;
}

uint64_t InquiryPriceResizeDiskRequest::GetProjectId() const
{
    return m_projectId;
}

void InquiryPriceResizeDiskRequest::SetProjectId(const uint64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool InquiryPriceResizeDiskRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}


