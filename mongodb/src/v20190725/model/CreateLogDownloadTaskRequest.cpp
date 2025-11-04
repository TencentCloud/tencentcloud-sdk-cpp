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

#include <tencentcloud/mongodb/v20190725/model/CreateLogDownloadTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mongodb::V20190725::Model;
using namespace std;

CreateLogDownloadTaskRequest::CreateLogDownloadTaskRequest() :
    m_instanceIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_nodeNamesHasBeenSet(false),
    m_logComponentsHasBeenSet(false),
    m_logLevelsHasBeenSet(false),
    m_logIdsHasBeenSet(false),
    m_logConnectionsHasBeenSet(false),
    m_logDetailParamsHasBeenSet(false)
{
}

string CreateLogDownloadTaskRequest::ToJsonString() const
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
        d.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_nodeNames.begin(); itr != m_nodeNames.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_logComponentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogComponents";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_logComponents.begin(); itr != m_logComponents.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_logLevelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogLevels";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_logLevels.begin(); itr != m_logLevels.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_logIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_logIds.begin(); itr != m_logIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_logConnectionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogConnections";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_logConnections.begin(); itr != m_logConnections.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_logDetailParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogDetailParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_logDetailParams.begin(); itr != m_logDetailParams.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateLogDownloadTaskRequest::GetInstanceId() const
{
    return m_instanceId;
}

void CreateLogDownloadTaskRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CreateLogDownloadTaskRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string CreateLogDownloadTaskRequest::GetStartTime() const
{
    return m_startTime;
}

void CreateLogDownloadTaskRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool CreateLogDownloadTaskRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string CreateLogDownloadTaskRequest::GetEndTime() const
{
    return m_endTime;
}

void CreateLogDownloadTaskRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool CreateLogDownloadTaskRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

vector<string> CreateLogDownloadTaskRequest::GetNodeNames() const
{
    return m_nodeNames;
}

void CreateLogDownloadTaskRequest::SetNodeNames(const vector<string>& _nodeNames)
{
    m_nodeNames = _nodeNames;
    m_nodeNamesHasBeenSet = true;
}

bool CreateLogDownloadTaskRequest::NodeNamesHasBeenSet() const
{
    return m_nodeNamesHasBeenSet;
}

vector<string> CreateLogDownloadTaskRequest::GetLogComponents() const
{
    return m_logComponents;
}

void CreateLogDownloadTaskRequest::SetLogComponents(const vector<string>& _logComponents)
{
    m_logComponents = _logComponents;
    m_logComponentsHasBeenSet = true;
}

bool CreateLogDownloadTaskRequest::LogComponentsHasBeenSet() const
{
    return m_logComponentsHasBeenSet;
}

vector<string> CreateLogDownloadTaskRequest::GetLogLevels() const
{
    return m_logLevels;
}

void CreateLogDownloadTaskRequest::SetLogLevels(const vector<string>& _logLevels)
{
    m_logLevels = _logLevels;
    m_logLevelsHasBeenSet = true;
}

bool CreateLogDownloadTaskRequest::LogLevelsHasBeenSet() const
{
    return m_logLevelsHasBeenSet;
}

vector<string> CreateLogDownloadTaskRequest::GetLogIds() const
{
    return m_logIds;
}

void CreateLogDownloadTaskRequest::SetLogIds(const vector<string>& _logIds)
{
    m_logIds = _logIds;
    m_logIdsHasBeenSet = true;
}

bool CreateLogDownloadTaskRequest::LogIdsHasBeenSet() const
{
    return m_logIdsHasBeenSet;
}

vector<string> CreateLogDownloadTaskRequest::GetLogConnections() const
{
    return m_logConnections;
}

void CreateLogDownloadTaskRequest::SetLogConnections(const vector<string>& _logConnections)
{
    m_logConnections = _logConnections;
    m_logConnectionsHasBeenSet = true;
}

bool CreateLogDownloadTaskRequest::LogConnectionsHasBeenSet() const
{
    return m_logConnectionsHasBeenSet;
}

vector<string> CreateLogDownloadTaskRequest::GetLogDetailParams() const
{
    return m_logDetailParams;
}

void CreateLogDownloadTaskRequest::SetLogDetailParams(const vector<string>& _logDetailParams)
{
    m_logDetailParams = _logDetailParams;
    m_logDetailParamsHasBeenSet = true;
}

bool CreateLogDownloadTaskRequest::LogDetailParamsHasBeenSet() const
{
    return m_logDetailParamsHasBeenSet;
}


