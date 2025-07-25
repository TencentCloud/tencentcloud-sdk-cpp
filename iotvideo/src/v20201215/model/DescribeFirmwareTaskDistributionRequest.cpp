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

#include <tencentcloud/iotvideo/v20201215/model/DescribeFirmwareTaskDistributionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotvideo::V20201215::Model;
using namespace std;

DescribeFirmwareTaskDistributionRequest::DescribeFirmwareTaskDistributionRequest() :
    m_productIDHasBeenSet(false),
    m_firmwareVersionHasBeenSet(false),
    m_taskIdHasBeenSet(false)
{
}

string DescribeFirmwareTaskDistributionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_productIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_productID.c_str(), allocator).Move(), allocator);
    }

    if (m_firmwareVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirmwareVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_firmwareVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_taskId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeFirmwareTaskDistributionRequest::GetProductID() const
{
    return m_productID;
}

void DescribeFirmwareTaskDistributionRequest::SetProductID(const string& _productID)
{
    m_productID = _productID;
    m_productIDHasBeenSet = true;
}

bool DescribeFirmwareTaskDistributionRequest::ProductIDHasBeenSet() const
{
    return m_productIDHasBeenSet;
}

string DescribeFirmwareTaskDistributionRequest::GetFirmwareVersion() const
{
    return m_firmwareVersion;
}

void DescribeFirmwareTaskDistributionRequest::SetFirmwareVersion(const string& _firmwareVersion)
{
    m_firmwareVersion = _firmwareVersion;
    m_firmwareVersionHasBeenSet = true;
}

bool DescribeFirmwareTaskDistributionRequest::FirmwareVersionHasBeenSet() const
{
    return m_firmwareVersionHasBeenSet;
}

uint64_t DescribeFirmwareTaskDistributionRequest::GetTaskId() const
{
    return m_taskId;
}

void DescribeFirmwareTaskDistributionRequest::SetTaskId(const uint64_t& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool DescribeFirmwareTaskDistributionRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}


