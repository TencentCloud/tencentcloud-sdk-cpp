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

#include <tencentcloud/tcr/v20190924/model/ReplicationTask.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcr::V20190924::Model;
using namespace std;

ReplicationTask::ReplicationTask() :
    m_resourceTypeHasBeenSet(false),
    m_srcResourceHasBeenSet(false),
    m_dstResourceHasBeenSet(false),
    m_jobIDHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
}

CoreInternalOutcome ReplicationTask::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceType") && !value["ResourceType"].IsNull())
    {
        if (!value["ResourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReplicationTask.ResourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceType = string(value["ResourceType"].GetString());
        m_resourceTypeHasBeenSet = true;
    }

    if (value.HasMember("SrcResource") && !value["SrcResource"].IsNull())
    {
        if (!value["SrcResource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReplicationTask.SrcResource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcResource = string(value["SrcResource"].GetString());
        m_srcResourceHasBeenSet = true;
    }

    if (value.HasMember("DstResource") && !value["DstResource"].IsNull())
    {
        if (!value["DstResource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReplicationTask.DstResource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dstResource = string(value["DstResource"].GetString());
        m_dstResourceHasBeenSet = true;
    }

    if (value.HasMember("JobID") && !value["JobID"].IsNull())
    {
        if (!value["JobID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReplicationTask.JobID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobID = string(value["JobID"].GetString());
        m_jobIDHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReplicationTask.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReplicationTask.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReplicationTask.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReplicationTask::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_srcResourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcResource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcResource.c_str(), allocator).Move(), allocator);
    }

    if (m_dstResourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstResource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dstResource.c_str(), allocator).Move(), allocator);
    }

    if (m_jobIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobID.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

}


string ReplicationTask::GetResourceType() const
{
    return m_resourceType;
}

void ReplicationTask::SetResourceType(const string& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool ReplicationTask::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

string ReplicationTask::GetSrcResource() const
{
    return m_srcResource;
}

void ReplicationTask::SetSrcResource(const string& _srcResource)
{
    m_srcResource = _srcResource;
    m_srcResourceHasBeenSet = true;
}

bool ReplicationTask::SrcResourceHasBeenSet() const
{
    return m_srcResourceHasBeenSet;
}

string ReplicationTask::GetDstResource() const
{
    return m_dstResource;
}

void ReplicationTask::SetDstResource(const string& _dstResource)
{
    m_dstResource = _dstResource;
    m_dstResourceHasBeenSet = true;
}

bool ReplicationTask::DstResourceHasBeenSet() const
{
    return m_dstResourceHasBeenSet;
}

string ReplicationTask::GetJobID() const
{
    return m_jobID;
}

void ReplicationTask::SetJobID(const string& _jobID)
{
    m_jobID = _jobID;
    m_jobIDHasBeenSet = true;
}

bool ReplicationTask::JobIDHasBeenSet() const
{
    return m_jobIDHasBeenSet;
}

string ReplicationTask::GetStatus() const
{
    return m_status;
}

void ReplicationTask::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ReplicationTask::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ReplicationTask::GetStartTime() const
{
    return m_startTime;
}

void ReplicationTask::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool ReplicationTask::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string ReplicationTask::GetEndTime() const
{
    return m_endTime;
}

void ReplicationTask::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool ReplicationTask::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

