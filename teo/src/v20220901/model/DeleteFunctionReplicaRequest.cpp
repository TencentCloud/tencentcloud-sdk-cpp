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

#include <tencentcloud/teo/v20220901/model/DeleteFunctionReplicaRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

DeleteFunctionReplicaRequest::DeleteFunctionReplicaRequest() :
    m_zoneIdHasBeenSet(false),
    m_functionIdHasBeenSet(false),
    m_replicaNamesHasBeenSet(false)
{
}

string DeleteFunctionReplicaRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_functionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FunctionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_functionId.c_str(), allocator).Move(), allocator);
    }

    if (m_replicaNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplicaNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_replicaNames.begin(); itr != m_replicaNames.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteFunctionReplicaRequest::GetZoneId() const
{
    return m_zoneId;
}

void DeleteFunctionReplicaRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool DeleteFunctionReplicaRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string DeleteFunctionReplicaRequest::GetFunctionId() const
{
    return m_functionId;
}

void DeleteFunctionReplicaRequest::SetFunctionId(const string& _functionId)
{
    m_functionId = _functionId;
    m_functionIdHasBeenSet = true;
}

bool DeleteFunctionReplicaRequest::FunctionIdHasBeenSet() const
{
    return m_functionIdHasBeenSet;
}

vector<string> DeleteFunctionReplicaRequest::GetReplicaNames() const
{
    return m_replicaNames;
}

void DeleteFunctionReplicaRequest::SetReplicaNames(const vector<string>& _replicaNames)
{
    m_replicaNames = _replicaNames;
    m_replicaNamesHasBeenSet = true;
}

bool DeleteFunctionReplicaRequest::ReplicaNamesHasBeenSet() const
{
    return m_replicaNamesHasBeenSet;
}


