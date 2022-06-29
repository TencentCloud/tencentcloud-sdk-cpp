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

#include <tencentcloud/iecp/v20210914/model/BuildMessageRouteRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

BuildMessageRouteRequest::BuildMessageRouteRequest() :
    m_routeNameHasBeenSet(false),
    m_sourceProductIDHasBeenSet(false),
    m_sourceDeviceNameListHasBeenSet(false),
    m_topicFilterHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_sourceUnitIDListHasBeenSet(false),
    m_descriptHasBeenSet(false),
    m_targetOptionsHasBeenSet(false)
{
}

string BuildMessageRouteRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_routeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouteName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_routeName.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceProductIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceProductID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sourceProductID.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceDeviceNameListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceDeviceNameList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_sourceDeviceNameList.begin(); itr != m_sourceDeviceNameList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_topicFilterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicFilter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_topicFilter.c_str(), allocator).Move(), allocator);
    }

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mode.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceUnitIDListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceUnitIDList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_sourceUnitIDList.begin(); itr != m_sourceUnitIDList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_descriptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Descript";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_descript.c_str(), allocator).Move(), allocator);
    }

    if (m_targetOptionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetOptions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetOptions.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string BuildMessageRouteRequest::GetRouteName() const
{
    return m_routeName;
}

void BuildMessageRouteRequest::SetRouteName(const string& _routeName)
{
    m_routeName = _routeName;
    m_routeNameHasBeenSet = true;
}

bool BuildMessageRouteRequest::RouteNameHasBeenSet() const
{
    return m_routeNameHasBeenSet;
}

string BuildMessageRouteRequest::GetSourceProductID() const
{
    return m_sourceProductID;
}

void BuildMessageRouteRequest::SetSourceProductID(const string& _sourceProductID)
{
    m_sourceProductID = _sourceProductID;
    m_sourceProductIDHasBeenSet = true;
}

bool BuildMessageRouteRequest::SourceProductIDHasBeenSet() const
{
    return m_sourceProductIDHasBeenSet;
}

vector<string> BuildMessageRouteRequest::GetSourceDeviceNameList() const
{
    return m_sourceDeviceNameList;
}

void BuildMessageRouteRequest::SetSourceDeviceNameList(const vector<string>& _sourceDeviceNameList)
{
    m_sourceDeviceNameList = _sourceDeviceNameList;
    m_sourceDeviceNameListHasBeenSet = true;
}

bool BuildMessageRouteRequest::SourceDeviceNameListHasBeenSet() const
{
    return m_sourceDeviceNameListHasBeenSet;
}

string BuildMessageRouteRequest::GetTopicFilter() const
{
    return m_topicFilter;
}

void BuildMessageRouteRequest::SetTopicFilter(const string& _topicFilter)
{
    m_topicFilter = _topicFilter;
    m_topicFilterHasBeenSet = true;
}

bool BuildMessageRouteRequest::TopicFilterHasBeenSet() const
{
    return m_topicFilterHasBeenSet;
}

string BuildMessageRouteRequest::GetMode() const
{
    return m_mode;
}

void BuildMessageRouteRequest::SetMode(const string& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool BuildMessageRouteRequest::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

vector<string> BuildMessageRouteRequest::GetSourceUnitIDList() const
{
    return m_sourceUnitIDList;
}

void BuildMessageRouteRequest::SetSourceUnitIDList(const vector<string>& _sourceUnitIDList)
{
    m_sourceUnitIDList = _sourceUnitIDList;
    m_sourceUnitIDListHasBeenSet = true;
}

bool BuildMessageRouteRequest::SourceUnitIDListHasBeenSet() const
{
    return m_sourceUnitIDListHasBeenSet;
}

string BuildMessageRouteRequest::GetDescript() const
{
    return m_descript;
}

void BuildMessageRouteRequest::SetDescript(const string& _descript)
{
    m_descript = _descript;
    m_descriptHasBeenSet = true;
}

bool BuildMessageRouteRequest::DescriptHasBeenSet() const
{
    return m_descriptHasBeenSet;
}

string BuildMessageRouteRequest::GetTargetOptions() const
{
    return m_targetOptions;
}

void BuildMessageRouteRequest::SetTargetOptions(const string& _targetOptions)
{
    m_targetOptions = _targetOptions;
    m_targetOptionsHasBeenSet = true;
}

bool BuildMessageRouteRequest::TargetOptionsHasBeenSet() const
{
    return m_targetOptionsHasBeenSet;
}


