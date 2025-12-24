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

#include <tencentcloud/apm/v20210622/model/DescribeTopologyNewRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Apm::V20210622::Model;
using namespace std;

DescribeTopologyNewRequest::DescribeTopologyNewRequest() :
    m_instanceIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_upLevelHasBeenSet(false),
    m_serviceInstanceHasBeenSet(false),
    m_downLevelHasBeenSet(false),
    m_viewHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_topicHasBeenSet(false),
    m_selectorsHasBeenSet(false),
    m_idHasBeenSet(false),
    m_traceIDHasBeenSet(false),
    m_isSlowTopFiveHasBeenSet(false),
    m_getResourceHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_hiddenHasBeenSet(false)
{
}

string DescribeTopologyNewRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_startTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endTime, allocator);
    }

    if (m_serviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_upLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpLevel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_upLevel, allocator);
    }

    if (m_serviceInstanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceInstance";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceInstance.c_str(), allocator).Move(), allocator);
    }

    if (m_downLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DownLevel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_downLevel, allocator);
    }

    if (m_viewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "View";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_view.c_str(), allocator).Move(), allocator);
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

    if (m_topicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Topic";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_topic.c_str(), allocator).Move(), allocator);
    }

    if (m_selectorsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Selectors";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_selectors.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_traceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TraceID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_traceID.c_str(), allocator).Move(), allocator);
    }

    if (m_isSlowTopFiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSlowTopFive";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isSlowTopFive, allocator);
    }

    if (m_getResourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GetResource";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_getResource, allocator);
    }

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

    if (m_hiddenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Hidden";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_hidden.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeTopologyNewRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeTopologyNewRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeTopologyNewRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t DescribeTopologyNewRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeTopologyNewRequest::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeTopologyNewRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t DescribeTopologyNewRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeTopologyNewRequest::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeTopologyNewRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribeTopologyNewRequest::GetServiceName() const
{
    return m_serviceName;
}

void DescribeTopologyNewRequest::SetServiceName(const string& _serviceName)
{
    m_serviceName = _serviceName;
    m_serviceNameHasBeenSet = true;
}

bool DescribeTopologyNewRequest::ServiceNameHasBeenSet() const
{
    return m_serviceNameHasBeenSet;
}

int64_t DescribeTopologyNewRequest::GetUpLevel() const
{
    return m_upLevel;
}

void DescribeTopologyNewRequest::SetUpLevel(const int64_t& _upLevel)
{
    m_upLevel = _upLevel;
    m_upLevelHasBeenSet = true;
}

bool DescribeTopologyNewRequest::UpLevelHasBeenSet() const
{
    return m_upLevelHasBeenSet;
}

string DescribeTopologyNewRequest::GetServiceInstance() const
{
    return m_serviceInstance;
}

void DescribeTopologyNewRequest::SetServiceInstance(const string& _serviceInstance)
{
    m_serviceInstance = _serviceInstance;
    m_serviceInstanceHasBeenSet = true;
}

bool DescribeTopologyNewRequest::ServiceInstanceHasBeenSet() const
{
    return m_serviceInstanceHasBeenSet;
}

int64_t DescribeTopologyNewRequest::GetDownLevel() const
{
    return m_downLevel;
}

void DescribeTopologyNewRequest::SetDownLevel(const int64_t& _downLevel)
{
    m_downLevel = _downLevel;
    m_downLevelHasBeenSet = true;
}

bool DescribeTopologyNewRequest::DownLevelHasBeenSet() const
{
    return m_downLevelHasBeenSet;
}

string DescribeTopologyNewRequest::GetView() const
{
    return m_view;
}

void DescribeTopologyNewRequest::SetView(const string& _view)
{
    m_view = _view;
    m_viewHasBeenSet = true;
}

bool DescribeTopologyNewRequest::ViewHasBeenSet() const
{
    return m_viewHasBeenSet;
}

vector<Filter> DescribeTopologyNewRequest::GetFilters() const
{
    return m_filters;
}

void DescribeTopologyNewRequest::SetFilters(const vector<Filter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeTopologyNewRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

string DescribeTopologyNewRequest::GetTopic() const
{
    return m_topic;
}

void DescribeTopologyNewRequest::SetTopic(const string& _topic)
{
    m_topic = _topic;
    m_topicHasBeenSet = true;
}

bool DescribeTopologyNewRequest::TopicHasBeenSet() const
{
    return m_topicHasBeenSet;
}

Selectors DescribeTopologyNewRequest::GetSelectors() const
{
    return m_selectors;
}

void DescribeTopologyNewRequest::SetSelectors(const Selectors& _selectors)
{
    m_selectors = _selectors;
    m_selectorsHasBeenSet = true;
}

bool DescribeTopologyNewRequest::SelectorsHasBeenSet() const
{
    return m_selectorsHasBeenSet;
}

string DescribeTopologyNewRequest::GetId() const
{
    return m_id;
}

void DescribeTopologyNewRequest::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DescribeTopologyNewRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string DescribeTopologyNewRequest::GetTraceID() const
{
    return m_traceID;
}

void DescribeTopologyNewRequest::SetTraceID(const string& _traceID)
{
    m_traceID = _traceID;
    m_traceIDHasBeenSet = true;
}

bool DescribeTopologyNewRequest::TraceIDHasBeenSet() const
{
    return m_traceIDHasBeenSet;
}

bool DescribeTopologyNewRequest::GetIsSlowTopFive() const
{
    return m_isSlowTopFive;
}

void DescribeTopologyNewRequest::SetIsSlowTopFive(const bool& _isSlowTopFive)
{
    m_isSlowTopFive = _isSlowTopFive;
    m_isSlowTopFiveHasBeenSet = true;
}

bool DescribeTopologyNewRequest::IsSlowTopFiveHasBeenSet() const
{
    return m_isSlowTopFiveHasBeenSet;
}

bool DescribeTopologyNewRequest::GetGetResource() const
{
    return m_getResource;
}

void DescribeTopologyNewRequest::SetGetResource(const bool& _getResource)
{
    m_getResource = _getResource;
    m_getResourceHasBeenSet = true;
}

bool DescribeTopologyNewRequest::GetResourceHasBeenSet() const
{
    return m_getResourceHasBeenSet;
}

vector<ApmTag> DescribeTopologyNewRequest::GetTags() const
{
    return m_tags;
}

void DescribeTopologyNewRequest::SetTags(const vector<ApmTag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool DescribeTopologyNewRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

Selectors DescribeTopologyNewRequest::GetHidden() const
{
    return m_hidden;
}

void DescribeTopologyNewRequest::SetHidden(const Selectors& _hidden)
{
    m_hidden = _hidden;
    m_hiddenHasBeenSet = true;
}

bool DescribeTopologyNewRequest::HiddenHasBeenSet() const
{
    return m_hiddenHasBeenSet;
}


