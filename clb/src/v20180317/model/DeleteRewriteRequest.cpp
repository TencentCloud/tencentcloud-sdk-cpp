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

#include <tencentcloud/clb/v20180317/model/DeleteRewriteRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

DeleteRewriteRequest::DeleteRewriteRequest() :
    m_loadBalancerIdHasBeenSet(false),
    m_sourceListenerIdHasBeenSet(false),
    m_targetListenerIdHasBeenSet(false),
    m_rewriteInfosHasBeenSet(false)
{
}

string DeleteRewriteRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_loadBalancerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_loadBalancerId.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceListenerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceListenerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sourceListenerId.c_str(), allocator).Move(), allocator);
    }

    if (m_targetListenerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetListenerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetListenerId.c_str(), allocator).Move(), allocator);
    }

    if (m_rewriteInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RewriteInfos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_rewriteInfos.begin(); itr != m_rewriteInfos.end(); ++itr, ++i)
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


string DeleteRewriteRequest::GetLoadBalancerId() const
{
    return m_loadBalancerId;
}

void DeleteRewriteRequest::SetLoadBalancerId(const string& _loadBalancerId)
{
    m_loadBalancerId = _loadBalancerId;
    m_loadBalancerIdHasBeenSet = true;
}

bool DeleteRewriteRequest::LoadBalancerIdHasBeenSet() const
{
    return m_loadBalancerIdHasBeenSet;
}

string DeleteRewriteRequest::GetSourceListenerId() const
{
    return m_sourceListenerId;
}

void DeleteRewriteRequest::SetSourceListenerId(const string& _sourceListenerId)
{
    m_sourceListenerId = _sourceListenerId;
    m_sourceListenerIdHasBeenSet = true;
}

bool DeleteRewriteRequest::SourceListenerIdHasBeenSet() const
{
    return m_sourceListenerIdHasBeenSet;
}

string DeleteRewriteRequest::GetTargetListenerId() const
{
    return m_targetListenerId;
}

void DeleteRewriteRequest::SetTargetListenerId(const string& _targetListenerId)
{
    m_targetListenerId = _targetListenerId;
    m_targetListenerIdHasBeenSet = true;
}

bool DeleteRewriteRequest::TargetListenerIdHasBeenSet() const
{
    return m_targetListenerIdHasBeenSet;
}

vector<RewriteLocationMap> DeleteRewriteRequest::GetRewriteInfos() const
{
    return m_rewriteInfos;
}

void DeleteRewriteRequest::SetRewriteInfos(const vector<RewriteLocationMap>& _rewriteInfos)
{
    m_rewriteInfos = _rewriteInfos;
    m_rewriteInfosHasBeenSet = true;
}

bool DeleteRewriteRequest::RewriteInfosHasBeenSet() const
{
    return m_rewriteInfosHasBeenSet;
}


