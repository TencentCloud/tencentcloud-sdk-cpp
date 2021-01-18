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

#include <tencentcloud/tke/v20180525/model/UpdateClusterVersionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tke::V20180525::Model;
using namespace rapidjson;
using namespace std;

UpdateClusterVersionRequest::UpdateClusterVersionRequest() :
    m_clusterIdHasBeenSet(false),
    m_dstVersionHasBeenSet(false),
    m_maxNotReadyPercentHasBeenSet(false),
    m_skipPreCheckHasBeenSet(false)
{
}

string UpdateClusterVersionRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clusterIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_dstVersionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DstVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_dstVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_maxNotReadyPercentHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MaxNotReadyPercent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxNotReadyPercent, allocator);
    }

    if (m_skipPreCheckHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SkipPreCheck";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_skipPreCheck, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateClusterVersionRequest::GetClusterId() const
{
    return m_clusterId;
}

void UpdateClusterVersionRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool UpdateClusterVersionRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string UpdateClusterVersionRequest::GetDstVersion() const
{
    return m_dstVersion;
}

void UpdateClusterVersionRequest::SetDstVersion(const string& _dstVersion)
{
    m_dstVersion = _dstVersion;
    m_dstVersionHasBeenSet = true;
}

bool UpdateClusterVersionRequest::DstVersionHasBeenSet() const
{
    return m_dstVersionHasBeenSet;
}

double UpdateClusterVersionRequest::GetMaxNotReadyPercent() const
{
    return m_maxNotReadyPercent;
}

void UpdateClusterVersionRequest::SetMaxNotReadyPercent(const double& _maxNotReadyPercent)
{
    m_maxNotReadyPercent = _maxNotReadyPercent;
    m_maxNotReadyPercentHasBeenSet = true;
}

bool UpdateClusterVersionRequest::MaxNotReadyPercentHasBeenSet() const
{
    return m_maxNotReadyPercentHasBeenSet;
}

bool UpdateClusterVersionRequest::GetSkipPreCheck() const
{
    return m_skipPreCheck;
}

void UpdateClusterVersionRequest::SetSkipPreCheck(const bool& _skipPreCheck)
{
    m_skipPreCheck = _skipPreCheck;
    m_skipPreCheckHasBeenSet = true;
}

bool UpdateClusterVersionRequest::SkipPreCheckHasBeenSet() const
{
    return m_skipPreCheckHasBeenSet;
}


