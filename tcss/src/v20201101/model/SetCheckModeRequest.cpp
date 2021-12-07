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

#include <tencentcloud/tcss/v20201101/model/SetCheckModeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

SetCheckModeRequest::SetCheckModeRequest() :
    m_clusterIdsHasBeenSet(false),
    m_clusterCheckModeHasBeenSet(false),
    m_clusterAutoCheckHasBeenSet(false)
{
}

string SetCheckModeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clusterIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_clusterIds.begin(); itr != m_clusterIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_clusterCheckModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterCheckMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterCheckMode.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterAutoCheckHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterAutoCheck";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_clusterAutoCheck, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> SetCheckModeRequest::GetClusterIds() const
{
    return m_clusterIds;
}

void SetCheckModeRequest::SetClusterIds(const vector<string>& _clusterIds)
{
    m_clusterIds = _clusterIds;
    m_clusterIdsHasBeenSet = true;
}

bool SetCheckModeRequest::ClusterIdsHasBeenSet() const
{
    return m_clusterIdsHasBeenSet;
}

string SetCheckModeRequest::GetClusterCheckMode() const
{
    return m_clusterCheckMode;
}

void SetCheckModeRequest::SetClusterCheckMode(const string& _clusterCheckMode)
{
    m_clusterCheckMode = _clusterCheckMode;
    m_clusterCheckModeHasBeenSet = true;
}

bool SetCheckModeRequest::ClusterCheckModeHasBeenSet() const
{
    return m_clusterCheckModeHasBeenSet;
}

uint64_t SetCheckModeRequest::GetClusterAutoCheck() const
{
    return m_clusterAutoCheck;
}

void SetCheckModeRequest::SetClusterAutoCheck(const uint64_t& _clusterAutoCheck)
{
    m_clusterAutoCheck = _clusterAutoCheck;
    m_clusterAutoCheckHasBeenSet = true;
}

bool SetCheckModeRequest::ClusterAutoCheckHasBeenSet() const
{
    return m_clusterAutoCheckHasBeenSet;
}


