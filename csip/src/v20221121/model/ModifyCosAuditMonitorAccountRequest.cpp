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

#include <tencentcloud/csip/v20221121/model/ModifyCosAuditMonitorAccountRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ModifyCosAuditMonitorAccountRequest::ModifyCosAuditMonitorAccountRequest() :
    m_resourceIdHasBeenSet(false),
    m_monitorAppIdSetHasBeenSet(false),
    m_bindBucketHasBeenSet(false)
{
}

string ModifyCosAuditMonitorAccountRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_monitorAppIdSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorAppIdSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_monitorAppIdSet.begin(); itr != m_monitorAppIdSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_bindBucketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindBucket";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_bindBucket.begin(); itr != m_bindBucket.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyCosAuditMonitorAccountRequest::GetResourceId() const
{
    return m_resourceId;
}

void ModifyCosAuditMonitorAccountRequest::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool ModifyCosAuditMonitorAccountRequest::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

vector<uint64_t> ModifyCosAuditMonitorAccountRequest::GetMonitorAppIdSet() const
{
    return m_monitorAppIdSet;
}

void ModifyCosAuditMonitorAccountRequest::SetMonitorAppIdSet(const vector<uint64_t>& _monitorAppIdSet)
{
    m_monitorAppIdSet = _monitorAppIdSet;
    m_monitorAppIdSetHasBeenSet = true;
}

bool ModifyCosAuditMonitorAccountRequest::MonitorAppIdSetHasBeenSet() const
{
    return m_monitorAppIdSetHasBeenSet;
}

vector<CosBucketId> ModifyCosAuditMonitorAccountRequest::GetBindBucket() const
{
    return m_bindBucket;
}

void ModifyCosAuditMonitorAccountRequest::SetBindBucket(const vector<CosBucketId>& _bindBucket)
{
    m_bindBucket = _bindBucket;
    m_bindBucketHasBeenSet = true;
}

bool ModifyCosAuditMonitorAccountRequest::BindBucketHasBeenSet() const
{
    return m_bindBucketHasBeenSet;
}


