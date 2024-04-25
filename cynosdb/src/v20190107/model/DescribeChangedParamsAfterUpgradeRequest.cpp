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

#include <tencentcloud/cynosdb/v20190107/model/DescribeChangedParamsAfterUpgradeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

DescribeChangedParamsAfterUpgradeRequest::DescribeChangedParamsAfterUpgradeRequest() :
    m_instanceIdHasBeenSet(false),
    m_dstCpuHasBeenSet(false),
    m_dstMemHasBeenSet(false)
{
}

string DescribeChangedParamsAfterUpgradeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_dstCpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstCpu";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dstCpu, allocator);
    }

    if (m_dstMemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstMem";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dstMem, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeChangedParamsAfterUpgradeRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeChangedParamsAfterUpgradeRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeChangedParamsAfterUpgradeRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t DescribeChangedParamsAfterUpgradeRequest::GetDstCpu() const
{
    return m_dstCpu;
}

void DescribeChangedParamsAfterUpgradeRequest::SetDstCpu(const int64_t& _dstCpu)
{
    m_dstCpu = _dstCpu;
    m_dstCpuHasBeenSet = true;
}

bool DescribeChangedParamsAfterUpgradeRequest::DstCpuHasBeenSet() const
{
    return m_dstCpuHasBeenSet;
}

int64_t DescribeChangedParamsAfterUpgradeRequest::GetDstMem() const
{
    return m_dstMem;
}

void DescribeChangedParamsAfterUpgradeRequest::SetDstMem(const int64_t& _dstMem)
{
    m_dstMem = _dstMem;
    m_dstMemHasBeenSet = true;
}

bool DescribeChangedParamsAfterUpgradeRequest::DstMemHasBeenSet() const
{
    return m_dstMemHasBeenSet;
}


