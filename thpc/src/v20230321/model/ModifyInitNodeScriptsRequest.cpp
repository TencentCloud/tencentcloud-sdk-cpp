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

#include <tencentcloud/thpc/v20230321/model/ModifyInitNodeScriptsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Thpc::V20230321::Model;
using namespace std;

ModifyInitNodeScriptsRequest::ModifyInitNodeScriptsRequest() :
    m_clusterIdHasBeenSet(false),
    m_initNodeScriptsHasBeenSet(false)
{
}

string ModifyInitNodeScriptsRequest::ToJsonString() const
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

    if (m_initNodeScriptsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InitNodeScripts";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_initNodeScripts.begin(); itr != m_initNodeScripts.end(); ++itr, ++i)
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


string ModifyInitNodeScriptsRequest::GetClusterId() const
{
    return m_clusterId;
}

void ModifyInitNodeScriptsRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ModifyInitNodeScriptsRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

vector<NodeScript> ModifyInitNodeScriptsRequest::GetInitNodeScripts() const
{
    return m_initNodeScripts;
}

void ModifyInitNodeScriptsRequest::SetInitNodeScripts(const vector<NodeScript>& _initNodeScripts)
{
    m_initNodeScripts = _initNodeScripts;
    m_initNodeScriptsHasBeenSet = true;
}

bool ModifyInitNodeScriptsRequest::InitNodeScriptsHasBeenSet() const
{
    return m_initNodeScriptsHasBeenSet;
}


