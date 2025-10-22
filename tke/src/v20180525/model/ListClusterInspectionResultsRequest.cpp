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

#include <tencentcloud/tke/v20180525/model/ListClusterInspectionResultsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

ListClusterInspectionResultsRequest::ListClusterInspectionResultsRequest() :
    m_clusterIdsHasBeenSet(false),
    m_hideHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

string ListClusterInspectionResultsRequest::ToJsonString() const
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

    if (m_hideHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Hide";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_hide.begin(); itr != m_hide.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> ListClusterInspectionResultsRequest::GetClusterIds() const
{
    return m_clusterIds;
}

void ListClusterInspectionResultsRequest::SetClusterIds(const vector<string>& _clusterIds)
{
    m_clusterIds = _clusterIds;
    m_clusterIdsHasBeenSet = true;
}

bool ListClusterInspectionResultsRequest::ClusterIdsHasBeenSet() const
{
    return m_clusterIdsHasBeenSet;
}

vector<string> ListClusterInspectionResultsRequest::GetHide() const
{
    return m_hide;
}

void ListClusterInspectionResultsRequest::SetHide(const vector<string>& _hide)
{
    m_hide = _hide;
    m_hideHasBeenSet = true;
}

bool ListClusterInspectionResultsRequest::HideHasBeenSet() const
{
    return m_hideHasBeenSet;
}

string ListClusterInspectionResultsRequest::GetName() const
{
    return m_name;
}

void ListClusterInspectionResultsRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ListClusterInspectionResultsRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}


