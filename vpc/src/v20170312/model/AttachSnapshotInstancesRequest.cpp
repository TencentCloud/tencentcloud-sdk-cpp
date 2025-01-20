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

#include <tencentcloud/vpc/v20170312/model/AttachSnapshotInstancesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

AttachSnapshotInstancesRequest::AttachSnapshotInstancesRequest() :
    m_snapshotPolicyIdHasBeenSet(false),
    m_instancesHasBeenSet(false)
{
}

string AttachSnapshotInstancesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_snapshotPolicyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotPolicyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_snapshotPolicyId.c_str(), allocator).Move(), allocator);
    }

    if (m_instancesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Instances";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_instances.begin(); itr != m_instances.end(); ++itr, ++i)
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


string AttachSnapshotInstancesRequest::GetSnapshotPolicyId() const
{
    return m_snapshotPolicyId;
}

void AttachSnapshotInstancesRequest::SetSnapshotPolicyId(const string& _snapshotPolicyId)
{
    m_snapshotPolicyId = _snapshotPolicyId;
    m_snapshotPolicyIdHasBeenSet = true;
}

bool AttachSnapshotInstancesRequest::SnapshotPolicyIdHasBeenSet() const
{
    return m_snapshotPolicyIdHasBeenSet;
}

vector<SnapshotInstance> AttachSnapshotInstancesRequest::GetInstances() const
{
    return m_instances;
}

void AttachSnapshotInstancesRequest::SetInstances(const vector<SnapshotInstance>& _instances)
{
    m_instances = _instances;
    m_instancesHasBeenSet = true;
}

bool AttachSnapshotInstancesRequest::InstancesHasBeenSet() const
{
    return m_instancesHasBeenSet;
}


