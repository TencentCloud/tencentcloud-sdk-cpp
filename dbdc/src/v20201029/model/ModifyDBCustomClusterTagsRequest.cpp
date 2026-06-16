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

#include <tencentcloud/dbdc/v20201029/model/ModifyDBCustomClusterTagsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dbdc::V20201029::Model;
using namespace std;

ModifyDBCustomClusterTagsRequest::ModifyDBCustomClusterTagsRequest() :
    m_clusterIdHasBeenSet(false),
    m_addTagsHasBeenSet(false),
    m_deleteTagKeysHasBeenSet(false)
{
}

string ModifyDBCustomClusterTagsRequest::ToJsonString() const
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

    if (m_addTagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddTags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_addTags.begin(); itr != m_addTags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_deleteTagKeysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteTagKeys";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_deleteTagKeys.begin(); itr != m_deleteTagKeys.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyDBCustomClusterTagsRequest::GetClusterId() const
{
    return m_clusterId;
}

void ModifyDBCustomClusterTagsRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ModifyDBCustomClusterTagsRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

vector<Tag> ModifyDBCustomClusterTagsRequest::GetAddTags() const
{
    return m_addTags;
}

void ModifyDBCustomClusterTagsRequest::SetAddTags(const vector<Tag>& _addTags)
{
    m_addTags = _addTags;
    m_addTagsHasBeenSet = true;
}

bool ModifyDBCustomClusterTagsRequest::AddTagsHasBeenSet() const
{
    return m_addTagsHasBeenSet;
}

vector<string> ModifyDBCustomClusterTagsRequest::GetDeleteTagKeys() const
{
    return m_deleteTagKeys;
}

void ModifyDBCustomClusterTagsRequest::SetDeleteTagKeys(const vector<string>& _deleteTagKeys)
{
    m_deleteTagKeys = _deleteTagKeys;
    m_deleteTagKeysHasBeenSet = true;
}

bool ModifyDBCustomClusterTagsRequest::DeleteTagKeysHasBeenSet() const
{
    return m_deleteTagKeysHasBeenSet;
}


