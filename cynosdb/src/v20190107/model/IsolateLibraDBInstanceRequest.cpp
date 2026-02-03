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

#include <tencentcloud/cynosdb/v20190107/model/IsolateLibraDBInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

IsolateLibraDBInstanceRequest::IsolateLibraDBInstanceRequest() :
    m_clusterIdHasBeenSet(false),
    m_instanceIdListHasBeenSet(false),
    m_forceIsolateHasBeenSet(false),
    m_isolateReasonTypesHasBeenSet(false),
    m_isolateReasonHasBeenSet(false)
{
}

string IsolateLibraDBInstanceRequest::ToJsonString() const
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

    if (m_instanceIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceIdList.begin(); itr != m_instanceIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_forceIsolateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForceIsolate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_forceIsolate, allocator);
    }

    if (m_isolateReasonTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsolateReasonTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_isolateReasonTypes.begin(); itr != m_isolateReasonTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_isolateReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsolateReason";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_isolateReason.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string IsolateLibraDBInstanceRequest::GetClusterId() const
{
    return m_clusterId;
}

void IsolateLibraDBInstanceRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool IsolateLibraDBInstanceRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

vector<string> IsolateLibraDBInstanceRequest::GetInstanceIdList() const
{
    return m_instanceIdList;
}

void IsolateLibraDBInstanceRequest::SetInstanceIdList(const vector<string>& _instanceIdList)
{
    m_instanceIdList = _instanceIdList;
    m_instanceIdListHasBeenSet = true;
}

bool IsolateLibraDBInstanceRequest::InstanceIdListHasBeenSet() const
{
    return m_instanceIdListHasBeenSet;
}

bool IsolateLibraDBInstanceRequest::GetForceIsolate() const
{
    return m_forceIsolate;
}

void IsolateLibraDBInstanceRequest::SetForceIsolate(const bool& _forceIsolate)
{
    m_forceIsolate = _forceIsolate;
    m_forceIsolateHasBeenSet = true;
}

bool IsolateLibraDBInstanceRequest::ForceIsolateHasBeenSet() const
{
    return m_forceIsolateHasBeenSet;
}

vector<int64_t> IsolateLibraDBInstanceRequest::GetIsolateReasonTypes() const
{
    return m_isolateReasonTypes;
}

void IsolateLibraDBInstanceRequest::SetIsolateReasonTypes(const vector<int64_t>& _isolateReasonTypes)
{
    m_isolateReasonTypes = _isolateReasonTypes;
    m_isolateReasonTypesHasBeenSet = true;
}

bool IsolateLibraDBInstanceRequest::IsolateReasonTypesHasBeenSet() const
{
    return m_isolateReasonTypesHasBeenSet;
}

string IsolateLibraDBInstanceRequest::GetIsolateReason() const
{
    return m_isolateReason;
}

void IsolateLibraDBInstanceRequest::SetIsolateReason(const string& _isolateReason)
{
    m_isolateReason = _isolateReason;
    m_isolateReasonHasBeenSet = true;
}

bool IsolateLibraDBInstanceRequest::IsolateReasonHasBeenSet() const
{
    return m_isolateReasonHasBeenSet;
}


