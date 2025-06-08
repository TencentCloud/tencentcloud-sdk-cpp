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

#include <tencentcloud/apm/v20210622/model/DescribeApmInstancesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Apm::V20210622::Model;
using namespace std;

DescribeApmInstancesRequest::DescribeApmInstancesRequest() :
    m_tagsHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceIdsHasBeenSet(false),
    m_demoInstanceFlagHasBeenSet(false),
    m_allRegionsFlagHasBeenSet(false)
{
}

string DescribeApmInstancesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceIds.begin(); itr != m_instanceIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_demoInstanceFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DemoInstanceFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_demoInstanceFlag, allocator);
    }

    if (m_allRegionsFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllRegionsFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_allRegionsFlag, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<ApmTag> DescribeApmInstancesRequest::GetTags() const
{
    return m_tags;
}

void DescribeApmInstancesRequest::SetTags(const vector<ApmTag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool DescribeApmInstancesRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string DescribeApmInstancesRequest::GetInstanceName() const
{
    return m_instanceName;
}

void DescribeApmInstancesRequest::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool DescribeApmInstancesRequest::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string DescribeApmInstancesRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeApmInstancesRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeApmInstancesRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

vector<string> DescribeApmInstancesRequest::GetInstanceIds() const
{
    return m_instanceIds;
}

void DescribeApmInstancesRequest::SetInstanceIds(const vector<string>& _instanceIds)
{
    m_instanceIds = _instanceIds;
    m_instanceIdsHasBeenSet = true;
}

bool DescribeApmInstancesRequest::InstanceIdsHasBeenSet() const
{
    return m_instanceIdsHasBeenSet;
}

int64_t DescribeApmInstancesRequest::GetDemoInstanceFlag() const
{
    return m_demoInstanceFlag;
}

void DescribeApmInstancesRequest::SetDemoInstanceFlag(const int64_t& _demoInstanceFlag)
{
    m_demoInstanceFlag = _demoInstanceFlag;
    m_demoInstanceFlagHasBeenSet = true;
}

bool DescribeApmInstancesRequest::DemoInstanceFlagHasBeenSet() const
{
    return m_demoInstanceFlagHasBeenSet;
}

int64_t DescribeApmInstancesRequest::GetAllRegionsFlag() const
{
    return m_allRegionsFlag;
}

void DescribeApmInstancesRequest::SetAllRegionsFlag(const int64_t& _allRegionsFlag)
{
    m_allRegionsFlag = _allRegionsFlag;
    m_allRegionsFlagHasBeenSet = true;
}

bool DescribeApmInstancesRequest::AllRegionsFlagHasBeenSet() const
{
    return m_allRegionsFlagHasBeenSet;
}


