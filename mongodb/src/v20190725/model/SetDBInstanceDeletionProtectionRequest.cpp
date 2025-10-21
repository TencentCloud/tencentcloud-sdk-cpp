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

#include <tencentcloud/mongodb/v20190725/model/SetDBInstanceDeletionProtectionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mongodb::V20190725::Model;
using namespace std;

SetDBInstanceDeletionProtectionRequest::SetDBInstanceDeletionProtectionRequest() :
    m_instanceIdsHasBeenSet(false),
    m_enableDeletionProtectionHasBeenSet(false)
{
}

string SetDBInstanceDeletionProtectionRequest::ToJsonString() const
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

    if (m_enableDeletionProtectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableDeletionProtection";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableDeletionProtection, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> SetDBInstanceDeletionProtectionRequest::GetInstanceIds() const
{
    return m_instanceIds;
}

void SetDBInstanceDeletionProtectionRequest::SetInstanceIds(const vector<string>& _instanceIds)
{
    m_instanceIds = _instanceIds;
    m_instanceIdsHasBeenSet = true;
}

bool SetDBInstanceDeletionProtectionRequest::InstanceIdsHasBeenSet() const
{
    return m_instanceIdsHasBeenSet;
}

uint64_t SetDBInstanceDeletionProtectionRequest::GetEnableDeletionProtection() const
{
    return m_enableDeletionProtection;
}

void SetDBInstanceDeletionProtectionRequest::SetEnableDeletionProtection(const uint64_t& _enableDeletionProtection)
{
    m_enableDeletionProtection = _enableDeletionProtection;
    m_enableDeletionProtectionHasBeenSet = true;
}

bool SetDBInstanceDeletionProtectionRequest::EnableDeletionProtectionHasBeenSet() const
{
    return m_enableDeletionProtectionHasBeenSet;
}


