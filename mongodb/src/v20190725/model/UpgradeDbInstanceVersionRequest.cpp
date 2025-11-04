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

#include <tencentcloud/mongodb/v20190725/model/UpgradeDbInstanceVersionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mongodb::V20190725::Model;
using namespace std;

UpgradeDbInstanceVersionRequest::UpgradeDbInstanceVersionRequest() :
    m_instanceIdHasBeenSet(false),
    m_mongoVersionHasBeenSet(false),
    m_inMaintenanceHasBeenSet(false)
{
}

string UpgradeDbInstanceVersionRequest::ToJsonString() const
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

    if (m_mongoVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MongoVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mongoVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_inMaintenanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InMaintenance";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_inMaintenance, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpgradeDbInstanceVersionRequest::GetInstanceId() const
{
    return m_instanceId;
}

void UpgradeDbInstanceVersionRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool UpgradeDbInstanceVersionRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string UpgradeDbInstanceVersionRequest::GetMongoVersion() const
{
    return m_mongoVersion;
}

void UpgradeDbInstanceVersionRequest::SetMongoVersion(const string& _mongoVersion)
{
    m_mongoVersion = _mongoVersion;
    m_mongoVersionHasBeenSet = true;
}

bool UpgradeDbInstanceVersionRequest::MongoVersionHasBeenSet() const
{
    return m_mongoVersionHasBeenSet;
}

int64_t UpgradeDbInstanceVersionRequest::GetInMaintenance() const
{
    return m_inMaintenance;
}

void UpgradeDbInstanceVersionRequest::SetInMaintenance(const int64_t& _inMaintenance)
{
    m_inMaintenance = _inMaintenance;
    m_inMaintenanceHasBeenSet = true;
}

bool UpgradeDbInstanceVersionRequest::InMaintenanceHasBeenSet() const
{
    return m_inMaintenanceHasBeenSet;
}


