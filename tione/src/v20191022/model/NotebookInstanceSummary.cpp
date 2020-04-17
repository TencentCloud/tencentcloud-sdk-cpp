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

#include <tencentcloud/tione/v20191022/model/NotebookInstanceSummary.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20191022::Model;
using namespace rapidjson;
using namespace std;

NotebookInstanceSummary::NotebookInstanceSummary() :
    m_creationTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_notebookInstanceNameHasBeenSet(false),
    m_notebookInstanceStatusHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_instanceIdHasBeenSet(false)
{
}

CoreInternalOutcome NotebookInstanceSummary::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("CreationTime") && !value["CreationTime"].IsNull())
    {
        if (!value["CreationTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `NotebookInstanceSummary.CreationTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creationTime = string(value["CreationTime"].GetString());
        m_creationTimeHasBeenSet = true;
    }

    if (value.HasMember("LastModifiedTime") && !value["LastModifiedTime"].IsNull())
    {
        if (!value["LastModifiedTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `NotebookInstanceSummary.LastModifiedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastModifiedTime = string(value["LastModifiedTime"].GetString());
        m_lastModifiedTimeHasBeenSet = true;
    }

    if (value.HasMember("NotebookInstanceName") && !value["NotebookInstanceName"].IsNull())
    {
        if (!value["NotebookInstanceName"].IsString())
        {
            return CoreInternalOutcome(Error("response `NotebookInstanceSummary.NotebookInstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_notebookInstanceName = string(value["NotebookInstanceName"].GetString());
        m_notebookInstanceNameHasBeenSet = true;
    }

    if (value.HasMember("NotebookInstanceStatus") && !value["NotebookInstanceStatus"].IsNull())
    {
        if (!value["NotebookInstanceStatus"].IsString())
        {
            return CoreInternalOutcome(Error("response `NotebookInstanceSummary.NotebookInstanceStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_notebookInstanceStatus = string(value["NotebookInstanceStatus"].GetString());
        m_notebookInstanceStatusHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Error("response `NotebookInstanceSummary.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Error("response `NotebookInstanceSummary.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NotebookInstanceSummary::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_creationTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreationTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_creationTime.c_str(), allocator).Move(), allocator);
    }

    if (m_lastModifiedTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LastModifiedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_lastModifiedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_notebookInstanceNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NotebookInstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_notebookInstanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_notebookInstanceStatusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NotebookInstanceStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_notebookInstanceStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

}


string NotebookInstanceSummary::GetCreationTime() const
{
    return m_creationTime;
}

void NotebookInstanceSummary::SetCreationTime(const string& _creationTime)
{
    m_creationTime = _creationTime;
    m_creationTimeHasBeenSet = true;
}

bool NotebookInstanceSummary::CreationTimeHasBeenSet() const
{
    return m_creationTimeHasBeenSet;
}

string NotebookInstanceSummary::GetLastModifiedTime() const
{
    return m_lastModifiedTime;
}

void NotebookInstanceSummary::SetLastModifiedTime(const string& _lastModifiedTime)
{
    m_lastModifiedTime = _lastModifiedTime;
    m_lastModifiedTimeHasBeenSet = true;
}

bool NotebookInstanceSummary::LastModifiedTimeHasBeenSet() const
{
    return m_lastModifiedTimeHasBeenSet;
}

string NotebookInstanceSummary::GetNotebookInstanceName() const
{
    return m_notebookInstanceName;
}

void NotebookInstanceSummary::SetNotebookInstanceName(const string& _notebookInstanceName)
{
    m_notebookInstanceName = _notebookInstanceName;
    m_notebookInstanceNameHasBeenSet = true;
}

bool NotebookInstanceSummary::NotebookInstanceNameHasBeenSet() const
{
    return m_notebookInstanceNameHasBeenSet;
}

string NotebookInstanceSummary::GetNotebookInstanceStatus() const
{
    return m_notebookInstanceStatus;
}

void NotebookInstanceSummary::SetNotebookInstanceStatus(const string& _notebookInstanceStatus)
{
    m_notebookInstanceStatus = _notebookInstanceStatus;
    m_notebookInstanceStatusHasBeenSet = true;
}

bool NotebookInstanceSummary::NotebookInstanceStatusHasBeenSet() const
{
    return m_notebookInstanceStatusHasBeenSet;
}

string NotebookInstanceSummary::GetInstanceType() const
{
    return m_instanceType;
}

void NotebookInstanceSummary::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool NotebookInstanceSummary::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string NotebookInstanceSummary::GetInstanceId() const
{
    return m_instanceId;
}

void NotebookInstanceSummary::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool NotebookInstanceSummary::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

