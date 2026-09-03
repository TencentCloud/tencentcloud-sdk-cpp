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

#include <tencentcloud/trro/v20220325/model/Job.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trro::V20220325::Model;
using namespace std;

Job::Job() :
    m_jobIdHasBeenSet(false),
    m_jobTypeHasBeenSet(false),
    m_annotationTypeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_ingestStatusHasBeenSet(false),
    m_inputPathHasBeenSet(false),
    m_totalNumberHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_finishTimeHasBeenSet(false)
{
}

CoreInternalOutcome Job::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("JobId") && !value["JobId"].IsNull())
    {
        if (!value["JobId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Job.JobId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobId = string(value["JobId"].GetString());
        m_jobIdHasBeenSet = true;
    }

    if (value.HasMember("JobType") && !value["JobType"].IsNull())
    {
        if (!value["JobType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Job.JobType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_jobType = value["JobType"].GetInt64();
        m_jobTypeHasBeenSet = true;
    }

    if (value.HasMember("AnnotationType") && !value["AnnotationType"].IsNull())
    {
        if (!value["AnnotationType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Job.AnnotationType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_annotationType = value["AnnotationType"].GetInt64();
        m_annotationTypeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Job.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("IngestStatus") && !value["IngestStatus"].IsNull())
    {
        if (!value["IngestStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Job.IngestStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ingestStatus = value["IngestStatus"].GetInt64();
        m_ingestStatusHasBeenSet = true;
    }

    if (value.HasMember("InputPath") && !value["InputPath"].IsNull())
    {
        if (!value["InputPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Job.InputPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inputPath = string(value["InputPath"].GetString());
        m_inputPathHasBeenSet = true;
    }

    if (value.HasMember("TotalNumber") && !value["TotalNumber"].IsNull())
    {
        if (!value["TotalNumber"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Job.TotalNumber` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalNumber = value["TotalNumber"].GetInt64();
        m_totalNumberHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Job.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("FinishTime") && !value["FinishTime"].IsNull())
    {
        if (!value["FinishTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Job.FinishTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_finishTime = string(value["FinishTime"].GetString());
        m_finishTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Job::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_jobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobId.c_str(), allocator).Move(), allocator);
    }

    if (m_jobTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_jobType, allocator);
    }

    if (m_annotationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnnotationType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_annotationType, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_ingestStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IngestStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ingestStatus, allocator);
    }

    if (m_inputPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inputPath.c_str(), allocator).Move(), allocator);
    }

    if (m_totalNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalNumber, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_finishTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FinishTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_finishTime.c_str(), allocator).Move(), allocator);
    }

}


string Job::GetJobId() const
{
    return m_jobId;
}

void Job::SetJobId(const string& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool Job::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

int64_t Job::GetJobType() const
{
    return m_jobType;
}

void Job::SetJobType(const int64_t& _jobType)
{
    m_jobType = _jobType;
    m_jobTypeHasBeenSet = true;
}

bool Job::JobTypeHasBeenSet() const
{
    return m_jobTypeHasBeenSet;
}

int64_t Job::GetAnnotationType() const
{
    return m_annotationType;
}

void Job::SetAnnotationType(const int64_t& _annotationType)
{
    m_annotationType = _annotationType;
    m_annotationTypeHasBeenSet = true;
}

bool Job::AnnotationTypeHasBeenSet() const
{
    return m_annotationTypeHasBeenSet;
}

int64_t Job::GetStatus() const
{
    return m_status;
}

void Job::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool Job::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t Job::GetIngestStatus() const
{
    return m_ingestStatus;
}

void Job::SetIngestStatus(const int64_t& _ingestStatus)
{
    m_ingestStatus = _ingestStatus;
    m_ingestStatusHasBeenSet = true;
}

bool Job::IngestStatusHasBeenSet() const
{
    return m_ingestStatusHasBeenSet;
}

string Job::GetInputPath() const
{
    return m_inputPath;
}

void Job::SetInputPath(const string& _inputPath)
{
    m_inputPath = _inputPath;
    m_inputPathHasBeenSet = true;
}

bool Job::InputPathHasBeenSet() const
{
    return m_inputPathHasBeenSet;
}

int64_t Job::GetTotalNumber() const
{
    return m_totalNumber;
}

void Job::SetTotalNumber(const int64_t& _totalNumber)
{
    m_totalNumber = _totalNumber;
    m_totalNumberHasBeenSet = true;
}

bool Job::TotalNumberHasBeenSet() const
{
    return m_totalNumberHasBeenSet;
}

string Job::GetCreateTime() const
{
    return m_createTime;
}

void Job::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool Job::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string Job::GetFinishTime() const
{
    return m_finishTime;
}

void Job::SetFinishTime(const string& _finishTime)
{
    m_finishTime = _finishTime;
    m_finishTimeHasBeenSet = true;
}

bool Job::FinishTimeHasBeenSet() const
{
    return m_finishTimeHasBeenSet;
}

