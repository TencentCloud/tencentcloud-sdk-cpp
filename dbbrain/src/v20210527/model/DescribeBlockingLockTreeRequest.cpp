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

#include <tencentcloud/dbbrain/v20210527/model/DescribeBlockingLockTreeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

DescribeBlockingLockTreeRequest::DescribeBlockingLockTreeRequest() :
    m_instanceIdHasBeenSet(false),
    m_productHasBeenSet(false),
    m_monitorLoopHasBeenSet(false),
    m_blockingTimeHasBeenSet(false)
{
}

string DescribeBlockingLockTreeRequest::ToJsonString() const
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

    if (m_productHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Product";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_product.c_str(), allocator).Move(), allocator);
    }

    if (m_monitorLoopHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorLoop";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_monitorLoop.c_str(), allocator).Move(), allocator);
    }

    if (m_blockingTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockingTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_blockingTime.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeBlockingLockTreeRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeBlockingLockTreeRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeBlockingLockTreeRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeBlockingLockTreeRequest::GetProduct() const
{
    return m_product;
}

void DescribeBlockingLockTreeRequest::SetProduct(const string& _product)
{
    m_product = _product;
    m_productHasBeenSet = true;
}

bool DescribeBlockingLockTreeRequest::ProductHasBeenSet() const
{
    return m_productHasBeenSet;
}

string DescribeBlockingLockTreeRequest::GetMonitorLoop() const
{
    return m_monitorLoop;
}

void DescribeBlockingLockTreeRequest::SetMonitorLoop(const string& _monitorLoop)
{
    m_monitorLoop = _monitorLoop;
    m_monitorLoopHasBeenSet = true;
}

bool DescribeBlockingLockTreeRequest::MonitorLoopHasBeenSet() const
{
    return m_monitorLoopHasBeenSet;
}

string DescribeBlockingLockTreeRequest::GetBlockingTime() const
{
    return m_blockingTime;
}

void DescribeBlockingLockTreeRequest::SetBlockingTime(const string& _blockingTime)
{
    m_blockingTime = _blockingTime;
    m_blockingTimeHasBeenSet = true;
}

bool DescribeBlockingLockTreeRequest::BlockingTimeHasBeenSet() const
{
    return m_blockingTimeHasBeenSet;
}


