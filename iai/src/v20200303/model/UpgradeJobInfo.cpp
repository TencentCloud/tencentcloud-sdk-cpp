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

#include <tencentcloud/iai/v20200303/model/UpgradeJobInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iai::V20200303::Model;
using namespace std;

UpgradeJobInfo::UpgradeJobInfo() :
    m_jobIdHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_fromFaceModelVersionHasBeenSet(false),
    m_toFaceModelVersionHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome UpgradeJobInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("JobId") && !value["JobId"].IsNull())
    {
        if (!value["JobId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpgradeJobInfo.JobId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobId = string(value["JobId"].GetString());
        m_jobIdHasBeenSet = true;
    }

    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpgradeJobInfo.GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(value["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("FromFaceModelVersion") && !value["FromFaceModelVersion"].IsNull())
    {
        if (!value["FromFaceModelVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpgradeJobInfo.FromFaceModelVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fromFaceModelVersion = string(value["FromFaceModelVersion"].GetString());
        m_fromFaceModelVersionHasBeenSet = true;
    }

    if (value.HasMember("ToFaceModelVersion") && !value["ToFaceModelVersion"].IsNull())
    {
        if (!value["ToFaceModelVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpgradeJobInfo.ToFaceModelVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_toFaceModelVersion = string(value["ToFaceModelVersion"].GetString());
        m_toFaceModelVersionHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UpgradeJobInfo.StartTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = value["StartTime"].GetUint64();
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UpgradeJobInfo.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UpgradeJobInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_jobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_fromFaceModelVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FromFaceModelVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fromFaceModelVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_toFaceModelVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToFaceModelVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_toFaceModelVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTime, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

}


string UpgradeJobInfo::GetJobId() const
{
    return m_jobId;
}

void UpgradeJobInfo::SetJobId(const string& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool UpgradeJobInfo::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

string UpgradeJobInfo::GetGroupId() const
{
    return m_groupId;
}

void UpgradeJobInfo::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool UpgradeJobInfo::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string UpgradeJobInfo::GetFromFaceModelVersion() const
{
    return m_fromFaceModelVersion;
}

void UpgradeJobInfo::SetFromFaceModelVersion(const string& _fromFaceModelVersion)
{
    m_fromFaceModelVersion = _fromFaceModelVersion;
    m_fromFaceModelVersionHasBeenSet = true;
}

bool UpgradeJobInfo::FromFaceModelVersionHasBeenSet() const
{
    return m_fromFaceModelVersionHasBeenSet;
}

string UpgradeJobInfo::GetToFaceModelVersion() const
{
    return m_toFaceModelVersion;
}

void UpgradeJobInfo::SetToFaceModelVersion(const string& _toFaceModelVersion)
{
    m_toFaceModelVersion = _toFaceModelVersion;
    m_toFaceModelVersionHasBeenSet = true;
}

bool UpgradeJobInfo::ToFaceModelVersionHasBeenSet() const
{
    return m_toFaceModelVersionHasBeenSet;
}

uint64_t UpgradeJobInfo::GetStartTime() const
{
    return m_startTime;
}

void UpgradeJobInfo::SetStartTime(const uint64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool UpgradeJobInfo::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

uint64_t UpgradeJobInfo::GetStatus() const
{
    return m_status;
}

void UpgradeJobInfo::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool UpgradeJobInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

