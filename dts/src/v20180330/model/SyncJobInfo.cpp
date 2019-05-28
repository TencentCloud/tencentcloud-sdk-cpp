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

#include <tencentcloud/dts/v20180330/model/SyncJobInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dts::V20180330::Model;
using namespace rapidjson;
using namespace std;

SyncJobInfo::SyncJobInfo() :
    m_jobIdHasBeenSet(false),
    m_jobNameHasBeenSet(false),
    m_syncOptionHasBeenSet(false),
    m_srcAccessTypeHasBeenSet(false),
    m_srcDatabaseTypeHasBeenSet(false),
    m_srcInfoHasBeenSet(false),
    m_dstAccessTypeHasBeenSet(false),
    m_dstDatabaseTypeHasBeenSet(false),
    m_dstInfoHasBeenSet(false),
    m_detailHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_databaseInfoHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
}

CoreInternalOutcome SyncJobInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("JobId") && !value["JobId"].IsNull())
    {
        if (!value["JobId"].IsString())
        {
            return CoreInternalOutcome(Error("response `SyncJobInfo.JobId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobId = string(value["JobId"].GetString());
        m_jobIdHasBeenSet = true;
    }

    if (value.HasMember("JobName") && !value["JobName"].IsNull())
    {
        if (!value["JobName"].IsString())
        {
            return CoreInternalOutcome(Error("response `SyncJobInfo.JobName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobName = string(value["JobName"].GetString());
        m_jobNameHasBeenSet = true;
    }

    if (value.HasMember("SyncOption") && !value["SyncOption"].IsNull())
    {
        if (!value["SyncOption"].IsObject())
        {
            return CoreInternalOutcome(Error("response `SyncJobInfo.SyncOption` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_syncOption.Deserialize(value["SyncOption"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_syncOptionHasBeenSet = true;
    }

    if (value.HasMember("SrcAccessType") && !value["SrcAccessType"].IsNull())
    {
        if (!value["SrcAccessType"].IsString())
        {
            return CoreInternalOutcome(Error("response `SyncJobInfo.SrcAccessType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcAccessType = string(value["SrcAccessType"].GetString());
        m_srcAccessTypeHasBeenSet = true;
    }

    if (value.HasMember("SrcDatabaseType") && !value["SrcDatabaseType"].IsNull())
    {
        if (!value["SrcDatabaseType"].IsString())
        {
            return CoreInternalOutcome(Error("response `SyncJobInfo.SrcDatabaseType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcDatabaseType = string(value["SrcDatabaseType"].GetString());
        m_srcDatabaseTypeHasBeenSet = true;
    }

    if (value.HasMember("SrcInfo") && !value["SrcInfo"].IsNull())
    {
        if (!value["SrcInfo"].IsObject())
        {
            return CoreInternalOutcome(Error("response `SyncJobInfo.SrcInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_srcInfo.Deserialize(value["SrcInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_srcInfoHasBeenSet = true;
    }

    if (value.HasMember("DstAccessType") && !value["DstAccessType"].IsNull())
    {
        if (!value["DstAccessType"].IsString())
        {
            return CoreInternalOutcome(Error("response `SyncJobInfo.DstAccessType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dstAccessType = string(value["DstAccessType"].GetString());
        m_dstAccessTypeHasBeenSet = true;
    }

    if (value.HasMember("DstDatabaseType") && !value["DstDatabaseType"].IsNull())
    {
        if (!value["DstDatabaseType"].IsString())
        {
            return CoreInternalOutcome(Error("response `SyncJobInfo.DstDatabaseType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dstDatabaseType = string(value["DstDatabaseType"].GetString());
        m_dstDatabaseTypeHasBeenSet = true;
    }

    if (value.HasMember("DstInfo") && !value["DstInfo"].IsNull())
    {
        if (!value["DstInfo"].IsObject())
        {
            return CoreInternalOutcome(Error("response `SyncJobInfo.DstInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_dstInfo.Deserialize(value["DstInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dstInfoHasBeenSet = true;
    }

    if (value.HasMember("Detail") && !value["Detail"].IsNull())
    {
        if (!value["Detail"].IsObject())
        {
            return CoreInternalOutcome(Error("response `SyncJobInfo.Detail` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_detail.Deserialize(value["Detail"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_detailHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `SyncJobInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("DatabaseInfo") && !value["DatabaseInfo"].IsNull())
    {
        if (!value["DatabaseInfo"].IsString())
        {
            return CoreInternalOutcome(Error("response `SyncJobInfo.DatabaseInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_databaseInfo = string(value["DatabaseInfo"].GetString());
        m_databaseInfoHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `SyncJobInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `SyncJobInfo.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `SyncJobInfo.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SyncJobInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_jobIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "JobId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_jobId.c_str(), allocator).Move(), allocator);
    }

    if (m_jobNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "JobName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_jobName.c_str(), allocator).Move(), allocator);
    }

    if (m_syncOptionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SyncOption";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_syncOption.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_srcAccessTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SrcAccessType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_srcAccessType.c_str(), allocator).Move(), allocator);
    }

    if (m_srcDatabaseTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SrcDatabaseType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_srcDatabaseType.c_str(), allocator).Move(), allocator);
    }

    if (m_srcInfoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SrcInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_srcInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_dstAccessTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DstAccessType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_dstAccessType.c_str(), allocator).Move(), allocator);
    }

    if (m_dstDatabaseTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DstDatabaseType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_dstDatabaseType.c_str(), allocator).Move(), allocator);
    }

    if (m_dstInfoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DstInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_dstInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_detailHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Detail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_detail.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_statusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_databaseInfoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DatabaseInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_databaseInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

}


string SyncJobInfo::GetJobId() const
{
    return m_jobId;
}

void SyncJobInfo::SetJobId(const string& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool SyncJobInfo::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

string SyncJobInfo::GetJobName() const
{
    return m_jobName;
}

void SyncJobInfo::SetJobName(const string& _jobName)
{
    m_jobName = _jobName;
    m_jobNameHasBeenSet = true;
}

bool SyncJobInfo::JobNameHasBeenSet() const
{
    return m_jobNameHasBeenSet;
}

SyncOption SyncJobInfo::GetSyncOption() const
{
    return m_syncOption;
}

void SyncJobInfo::SetSyncOption(const SyncOption& _syncOption)
{
    m_syncOption = _syncOption;
    m_syncOptionHasBeenSet = true;
}

bool SyncJobInfo::SyncOptionHasBeenSet() const
{
    return m_syncOptionHasBeenSet;
}

string SyncJobInfo::GetSrcAccessType() const
{
    return m_srcAccessType;
}

void SyncJobInfo::SetSrcAccessType(const string& _srcAccessType)
{
    m_srcAccessType = _srcAccessType;
    m_srcAccessTypeHasBeenSet = true;
}

bool SyncJobInfo::SrcAccessTypeHasBeenSet() const
{
    return m_srcAccessTypeHasBeenSet;
}

string SyncJobInfo::GetSrcDatabaseType() const
{
    return m_srcDatabaseType;
}

void SyncJobInfo::SetSrcDatabaseType(const string& _srcDatabaseType)
{
    m_srcDatabaseType = _srcDatabaseType;
    m_srcDatabaseTypeHasBeenSet = true;
}

bool SyncJobInfo::SrcDatabaseTypeHasBeenSet() const
{
    return m_srcDatabaseTypeHasBeenSet;
}

SyncInstanceInfo SyncJobInfo::GetSrcInfo() const
{
    return m_srcInfo;
}

void SyncJobInfo::SetSrcInfo(const SyncInstanceInfo& _srcInfo)
{
    m_srcInfo = _srcInfo;
    m_srcInfoHasBeenSet = true;
}

bool SyncJobInfo::SrcInfoHasBeenSet() const
{
    return m_srcInfoHasBeenSet;
}

string SyncJobInfo::GetDstAccessType() const
{
    return m_dstAccessType;
}

void SyncJobInfo::SetDstAccessType(const string& _dstAccessType)
{
    m_dstAccessType = _dstAccessType;
    m_dstAccessTypeHasBeenSet = true;
}

bool SyncJobInfo::DstAccessTypeHasBeenSet() const
{
    return m_dstAccessTypeHasBeenSet;
}

string SyncJobInfo::GetDstDatabaseType() const
{
    return m_dstDatabaseType;
}

void SyncJobInfo::SetDstDatabaseType(const string& _dstDatabaseType)
{
    m_dstDatabaseType = _dstDatabaseType;
    m_dstDatabaseTypeHasBeenSet = true;
}

bool SyncJobInfo::DstDatabaseTypeHasBeenSet() const
{
    return m_dstDatabaseTypeHasBeenSet;
}

SyncInstanceInfo SyncJobInfo::GetDstInfo() const
{
    return m_dstInfo;
}

void SyncJobInfo::SetDstInfo(const SyncInstanceInfo& _dstInfo)
{
    m_dstInfo = _dstInfo;
    m_dstInfoHasBeenSet = true;
}

bool SyncJobInfo::DstInfoHasBeenSet() const
{
    return m_dstInfoHasBeenSet;
}

SyncDetailInfo SyncJobInfo::GetDetail() const
{
    return m_detail;
}

void SyncJobInfo::SetDetail(const SyncDetailInfo& _detail)
{
    m_detail = _detail;
    m_detailHasBeenSet = true;
}

bool SyncJobInfo::DetailHasBeenSet() const
{
    return m_detailHasBeenSet;
}

int64_t SyncJobInfo::GetStatus() const
{
    return m_status;
}

void SyncJobInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool SyncJobInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string SyncJobInfo::GetDatabaseInfo() const
{
    return m_databaseInfo;
}

void SyncJobInfo::SetDatabaseInfo(const string& _databaseInfo)
{
    m_databaseInfo = _databaseInfo;
    m_databaseInfoHasBeenSet = true;
}

bool SyncJobInfo::DatabaseInfoHasBeenSet() const
{
    return m_databaseInfoHasBeenSet;
}

string SyncJobInfo::GetCreateTime() const
{
    return m_createTime;
}

void SyncJobInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool SyncJobInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string SyncJobInfo::GetStartTime() const
{
    return m_startTime;
}

void SyncJobInfo::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool SyncJobInfo::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string SyncJobInfo::GetEndTime() const
{
    return m_endTime;
}

void SyncJobInfo::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool SyncJobInfo::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

