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

#include <tencentcloud/es/v20180416/model/UpdateLogstashInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

UpdateLogstashInstanceRequest::UpdateLogstashInstanceRequest() :
    m_instanceIdHasBeenSet(false),
    m_nodeNumHasBeenSet(false),
    m_yMLConfigHasBeenSet(false),
    m_bindedESHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_extendedFilesHasBeenSet(false),
    m_nodeTypeHasBeenSet(false),
    m_diskSizeHasBeenSet(false),
    m_operationDurationHasBeenSet(false)
{
}

string UpdateLogstashInstanceRequest::ToJsonString() const
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

    if (m_nodeNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_nodeNum, allocator);
    }

    if (m_yMLConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "YMLConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_yMLConfig.c_str(), allocator).Move(), allocator);
    }

    if (m_bindedESHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindedES";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_bindedES.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_extendedFilesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtendedFiles";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_extendedFiles.begin(); itr != m_extendedFiles.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_nodeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_nodeType.c_str(), allocator).Move(), allocator);
    }

    if (m_diskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_diskSize, allocator);
    }

    if (m_operationDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperationDuration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_operationDuration.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateLogstashInstanceRequest::GetInstanceId() const
{
    return m_instanceId;
}

void UpdateLogstashInstanceRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool UpdateLogstashInstanceRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

uint64_t UpdateLogstashInstanceRequest::GetNodeNum() const
{
    return m_nodeNum;
}

void UpdateLogstashInstanceRequest::SetNodeNum(const uint64_t& _nodeNum)
{
    m_nodeNum = _nodeNum;
    m_nodeNumHasBeenSet = true;
}

bool UpdateLogstashInstanceRequest::NodeNumHasBeenSet() const
{
    return m_nodeNumHasBeenSet;
}

string UpdateLogstashInstanceRequest::GetYMLConfig() const
{
    return m_yMLConfig;
}

void UpdateLogstashInstanceRequest::SetYMLConfig(const string& _yMLConfig)
{
    m_yMLConfig = _yMLConfig;
    m_yMLConfigHasBeenSet = true;
}

bool UpdateLogstashInstanceRequest::YMLConfigHasBeenSet() const
{
    return m_yMLConfigHasBeenSet;
}

LogstashBindedES UpdateLogstashInstanceRequest::GetBindedES() const
{
    return m_bindedES;
}

void UpdateLogstashInstanceRequest::SetBindedES(const LogstashBindedES& _bindedES)
{
    m_bindedES = _bindedES;
    m_bindedESHasBeenSet = true;
}

bool UpdateLogstashInstanceRequest::BindedESHasBeenSet() const
{
    return m_bindedESHasBeenSet;
}

string UpdateLogstashInstanceRequest::GetInstanceName() const
{
    return m_instanceName;
}

void UpdateLogstashInstanceRequest::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool UpdateLogstashInstanceRequest::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

vector<LogstashExtendedFile> UpdateLogstashInstanceRequest::GetExtendedFiles() const
{
    return m_extendedFiles;
}

void UpdateLogstashInstanceRequest::SetExtendedFiles(const vector<LogstashExtendedFile>& _extendedFiles)
{
    m_extendedFiles = _extendedFiles;
    m_extendedFilesHasBeenSet = true;
}

bool UpdateLogstashInstanceRequest::ExtendedFilesHasBeenSet() const
{
    return m_extendedFilesHasBeenSet;
}

string UpdateLogstashInstanceRequest::GetNodeType() const
{
    return m_nodeType;
}

void UpdateLogstashInstanceRequest::SetNodeType(const string& _nodeType)
{
    m_nodeType = _nodeType;
    m_nodeTypeHasBeenSet = true;
}

bool UpdateLogstashInstanceRequest::NodeTypeHasBeenSet() const
{
    return m_nodeTypeHasBeenSet;
}

uint64_t UpdateLogstashInstanceRequest::GetDiskSize() const
{
    return m_diskSize;
}

void UpdateLogstashInstanceRequest::SetDiskSize(const uint64_t& _diskSize)
{
    m_diskSize = _diskSize;
    m_diskSizeHasBeenSet = true;
}

bool UpdateLogstashInstanceRequest::DiskSizeHasBeenSet() const
{
    return m_diskSizeHasBeenSet;
}

OperationDurationUpdated UpdateLogstashInstanceRequest::GetOperationDuration() const
{
    return m_operationDuration;
}

void UpdateLogstashInstanceRequest::SetOperationDuration(const OperationDurationUpdated& _operationDuration)
{
    m_operationDuration = _operationDuration;
    m_operationDurationHasBeenSet = true;
}

bool UpdateLogstashInstanceRequest::OperationDurationHasBeenSet() const
{
    return m_operationDurationHasBeenSet;
}


