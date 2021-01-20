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

#include <tencentcloud/tdmq/v20200217/model/CreateClusterRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace rapidjson;
using namespace std;

CreateClusterRequest::CreateClusterRequest() :
    m_clusterNameHasBeenSet(false),
    m_bindClusterIdHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

string CreateClusterRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clusterNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_bindClusterIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BindClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_bindClusterId, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateClusterRequest::GetClusterName() const
{
    return m_clusterName;
}

void CreateClusterRequest::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool CreateClusterRequest::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

uint64_t CreateClusterRequest::GetBindClusterId() const
{
    return m_bindClusterId;
}

void CreateClusterRequest::SetBindClusterId(const uint64_t& _bindClusterId)
{
    m_bindClusterId = _bindClusterId;
    m_bindClusterIdHasBeenSet = true;
}

bool CreateClusterRequest::BindClusterIdHasBeenSet() const
{
    return m_bindClusterIdHasBeenSet;
}

string CreateClusterRequest::GetRemark() const
{
    return m_remark;
}

void CreateClusterRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool CreateClusterRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

vector<Tag> CreateClusterRequest::GetTags() const
{
    return m_tags;
}

void CreateClusterRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateClusterRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}


