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

#include <tencentcloud/tke/v20180525/model/ModifyOpenPolicyListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

ModifyOpenPolicyListRequest::ModifyOpenPolicyListRequest() :
    m_clusterIdHasBeenSet(false),
    m_openPolicyInfoListHasBeenSet(false),
    m_categoryHasBeenSet(false)
{
}

string ModifyOpenPolicyListRequest::ToJsonString() const
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

    if (m_openPolicyInfoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenPolicyInfoList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_openPolicyInfoList.begin(); itr != m_openPolicyInfoList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_categoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Category";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_category.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyOpenPolicyListRequest::GetClusterId() const
{
    return m_clusterId;
}

void ModifyOpenPolicyListRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ModifyOpenPolicyListRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

vector<OpenPolicySwitch> ModifyOpenPolicyListRequest::GetOpenPolicyInfoList() const
{
    return m_openPolicyInfoList;
}

void ModifyOpenPolicyListRequest::SetOpenPolicyInfoList(const vector<OpenPolicySwitch>& _openPolicyInfoList)
{
    m_openPolicyInfoList = _openPolicyInfoList;
    m_openPolicyInfoListHasBeenSet = true;
}

bool ModifyOpenPolicyListRequest::OpenPolicyInfoListHasBeenSet() const
{
    return m_openPolicyInfoListHasBeenSet;
}

string ModifyOpenPolicyListRequest::GetCategory() const
{
    return m_category;
}

void ModifyOpenPolicyListRequest::SetCategory(const string& _category)
{
    m_category = _category;
    m_categoryHasBeenSet = true;
}

bool ModifyOpenPolicyListRequest::CategoryHasBeenSet() const
{
    return m_categoryHasBeenSet;
}


