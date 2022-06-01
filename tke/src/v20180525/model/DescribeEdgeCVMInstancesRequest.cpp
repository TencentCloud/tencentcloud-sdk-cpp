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

#include <tencentcloud/tke/v20180525/model/DescribeEdgeCVMInstancesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

DescribeEdgeCVMInstancesRequest::DescribeEdgeCVMInstancesRequest() :
    m_clusterIDHasBeenSet(false),
    m_filtersHasBeenSet(false)
{
}

string DescribeEdgeCVMInstancesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clusterIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterID.c_str(), allocator).Move(), allocator);
    }

    if (m_filtersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_filters.begin(); itr != m_filters.end(); ++itr, ++i)
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


string DescribeEdgeCVMInstancesRequest::GetClusterID() const
{
    return m_clusterID;
}

void DescribeEdgeCVMInstancesRequest::SetClusterID(const string& _clusterID)
{
    m_clusterID = _clusterID;
    m_clusterIDHasBeenSet = true;
}

bool DescribeEdgeCVMInstancesRequest::ClusterIDHasBeenSet() const
{
    return m_clusterIDHasBeenSet;
}

vector<Filter> DescribeEdgeCVMInstancesRequest::GetFilters() const
{
    return m_filters;
}

void DescribeEdgeCVMInstancesRequest::SetFilters(const vector<Filter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeEdgeCVMInstancesRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}


