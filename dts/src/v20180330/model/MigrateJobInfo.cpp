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

#include <tencentcloud/dts/v20180330/model/MigrateJobInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dts::V20180330::Model;
using namespace std;

MigrateJobInfo::MigrateJobInfo() :
    m_jobIdHasBeenSet(false),
    m_jobNameHasBeenSet(false),
    m_migrateOptionHasBeenSet(false),
    m_srcDatabaseTypeHasBeenSet(false),
    m_srcAccessTypeHasBeenSet(false),
    m_srcInfoHasBeenSet(false),
    m_dstDatabaseTypeHasBeenSet(false),
    m_dstAccessTypeHasBeenSet(false),
    m_dstInfoHasBeenSet(false),
    m_databaseInfoHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_detailHasBeenSet(false),
    m_errorInfoHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_srcInfoMultiHasBeenSet(false)
{
}

CoreInternalOutcome MigrateJobInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("JobId") && !value["JobId"].IsNull())
    {
        if (!value["JobId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MigrateJobInfo.JobId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobId = string(value["JobId"].GetString());
        m_jobIdHasBeenSet = true;
    }

    if (value.HasMember("JobName") && !value["JobName"].IsNull())
    {
        if (!value["JobName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MigrateJobInfo.JobName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobName = string(value["JobName"].GetString());
        m_jobNameHasBeenSet = true;
    }

    if (value.HasMember("MigrateOption") && !value["MigrateOption"].IsNull())
    {
        if (!value["MigrateOption"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MigrateJobInfo.MigrateOption` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_migrateOption.Deserialize(value["MigrateOption"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_migrateOptionHasBeenSet = true;
    }

    if (value.HasMember("SrcDatabaseType") && !value["SrcDatabaseType"].IsNull())
    {
        if (!value["SrcDatabaseType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MigrateJobInfo.SrcDatabaseType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcDatabaseType = string(value["SrcDatabaseType"].GetString());
        m_srcDatabaseTypeHasBeenSet = true;
    }

    if (value.HasMember("SrcAccessType") && !value["SrcAccessType"].IsNull())
    {
        if (!value["SrcAccessType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MigrateJobInfo.SrcAccessType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcAccessType = string(value["SrcAccessType"].GetString());
        m_srcAccessTypeHasBeenSet = true;
    }

    if (value.HasMember("SrcInfo") && !value["SrcInfo"].IsNull())
    {
        if (!value["SrcInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MigrateJobInfo.SrcInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_srcInfo.Deserialize(value["SrcInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_srcInfoHasBeenSet = true;
    }

    if (value.HasMember("DstDatabaseType") && !value["DstDatabaseType"].IsNull())
    {
        if (!value["DstDatabaseType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MigrateJobInfo.DstDatabaseType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dstDatabaseType = string(value["DstDatabaseType"].GetString());
        m_dstDatabaseTypeHasBeenSet = true;
    }

    if (value.HasMember("DstAccessType") && !value["DstAccessType"].IsNull())
    {
        if (!value["DstAccessType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MigrateJobInfo.DstAccessType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dstAccessType = string(value["DstAccessType"].GetString());
        m_dstAccessTypeHasBeenSet = true;
    }

    if (value.HasMember("DstInfo") && !value["DstInfo"].IsNull())
    {
        if (!value["DstInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MigrateJobInfo.DstInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_dstInfo.Deserialize(value["DstInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dstInfoHasBeenSet = true;
    }

    if (value.HasMember("DatabaseInfo") && !value["DatabaseInfo"].IsNull())
    {
        if (!value["DatabaseInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MigrateJobInfo.DatabaseInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_databaseInfo = string(value["DatabaseInfo"].GetString());
        m_databaseInfoHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MigrateJobInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MigrateJobInfo.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MigrateJobInfo.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MigrateJobInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Detail") && !value["Detail"].IsNull())
    {
        if (!value["Detail"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MigrateJobInfo.Detail` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_detail.Deserialize(value["Detail"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_detailHasBeenSet = true;
    }

    if (value.HasMember("ErrorInfo") && !value["ErrorInfo"].IsNull())
    {
        if (!value["ErrorInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MigrateJobInfo.ErrorInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["ErrorInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ErrorInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_errorInfo.push_back(item);
        }
        m_errorInfoHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MigrateJobInfo.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TagItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("SrcInfoMulti") && !value["SrcInfoMulti"].IsNull())
    {
        if (!value["SrcInfoMulti"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MigrateJobInfo.SrcInfoMulti` is not array type"));

        const rapidjson::Value &tmpValue = value["SrcInfoMulti"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SrcInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_srcInfoMulti.push_back(item);
        }
        m_srcInfoMultiHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MigrateJobInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_jobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobId.c_str(), allocator).Move(), allocator);
    }

    if (m_jobNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobName.c_str(), allocator).Move(), allocator);
    }

    if (m_migrateOptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MigrateOption";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_migrateOption.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_srcDatabaseTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcDatabaseType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcDatabaseType.c_str(), allocator).Move(), allocator);
    }

    if (m_srcAccessTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcAccessType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcAccessType.c_str(), allocator).Move(), allocator);
    }

    if (m_srcInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_srcInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_dstDatabaseTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstDatabaseType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dstDatabaseType.c_str(), allocator).Move(), allocator);
    }

    if (m_dstAccessTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstAccessType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dstAccessType.c_str(), allocator).Move(), allocator);
    }

    if (m_dstInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dstInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_databaseInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_databaseInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
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

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_detailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Detail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_detail.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_errorInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_errorInfo.begin(); itr != m_errorInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_srcInfoMultiHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcInfoMulti";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_srcInfoMulti.begin(); itr != m_srcInfoMulti.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string MigrateJobInfo::GetJobId() const
{
    return m_jobId;
}

void MigrateJobInfo::SetJobId(const string& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool MigrateJobInfo::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

string MigrateJobInfo::GetJobName() const
{
    return m_jobName;
}

void MigrateJobInfo::SetJobName(const string& _jobName)
{
    m_jobName = _jobName;
    m_jobNameHasBeenSet = true;
}

bool MigrateJobInfo::JobNameHasBeenSet() const
{
    return m_jobNameHasBeenSet;
}

MigrateOption MigrateJobInfo::GetMigrateOption() const
{
    return m_migrateOption;
}

void MigrateJobInfo::SetMigrateOption(const MigrateOption& _migrateOption)
{
    m_migrateOption = _migrateOption;
    m_migrateOptionHasBeenSet = true;
}

bool MigrateJobInfo::MigrateOptionHasBeenSet() const
{
    return m_migrateOptionHasBeenSet;
}

string MigrateJobInfo::GetSrcDatabaseType() const
{
    return m_srcDatabaseType;
}

void MigrateJobInfo::SetSrcDatabaseType(const string& _srcDatabaseType)
{
    m_srcDatabaseType = _srcDatabaseType;
    m_srcDatabaseTypeHasBeenSet = true;
}

bool MigrateJobInfo::SrcDatabaseTypeHasBeenSet() const
{
    return m_srcDatabaseTypeHasBeenSet;
}

string MigrateJobInfo::GetSrcAccessType() const
{
    return m_srcAccessType;
}

void MigrateJobInfo::SetSrcAccessType(const string& _srcAccessType)
{
    m_srcAccessType = _srcAccessType;
    m_srcAccessTypeHasBeenSet = true;
}

bool MigrateJobInfo::SrcAccessTypeHasBeenSet() const
{
    return m_srcAccessTypeHasBeenSet;
}

SrcInfo MigrateJobInfo::GetSrcInfo() const
{
    return m_srcInfo;
}

void MigrateJobInfo::SetSrcInfo(const SrcInfo& _srcInfo)
{
    m_srcInfo = _srcInfo;
    m_srcInfoHasBeenSet = true;
}

bool MigrateJobInfo::SrcInfoHasBeenSet() const
{
    return m_srcInfoHasBeenSet;
}

string MigrateJobInfo::GetDstDatabaseType() const
{
    return m_dstDatabaseType;
}

void MigrateJobInfo::SetDstDatabaseType(const string& _dstDatabaseType)
{
    m_dstDatabaseType = _dstDatabaseType;
    m_dstDatabaseTypeHasBeenSet = true;
}

bool MigrateJobInfo::DstDatabaseTypeHasBeenSet() const
{
    return m_dstDatabaseTypeHasBeenSet;
}

string MigrateJobInfo::GetDstAccessType() const
{
    return m_dstAccessType;
}

void MigrateJobInfo::SetDstAccessType(const string& _dstAccessType)
{
    m_dstAccessType = _dstAccessType;
    m_dstAccessTypeHasBeenSet = true;
}

bool MigrateJobInfo::DstAccessTypeHasBeenSet() const
{
    return m_dstAccessTypeHasBeenSet;
}

DstInfo MigrateJobInfo::GetDstInfo() const
{
    return m_dstInfo;
}

void MigrateJobInfo::SetDstInfo(const DstInfo& _dstInfo)
{
    m_dstInfo = _dstInfo;
    m_dstInfoHasBeenSet = true;
}

bool MigrateJobInfo::DstInfoHasBeenSet() const
{
    return m_dstInfoHasBeenSet;
}

string MigrateJobInfo::GetDatabaseInfo() const
{
    return m_databaseInfo;
}

void MigrateJobInfo::SetDatabaseInfo(const string& _databaseInfo)
{
    m_databaseInfo = _databaseInfo;
    m_databaseInfoHasBeenSet = true;
}

bool MigrateJobInfo::DatabaseInfoHasBeenSet() const
{
    return m_databaseInfoHasBeenSet;
}

string MigrateJobInfo::GetCreateTime() const
{
    return m_createTime;
}

void MigrateJobInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool MigrateJobInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string MigrateJobInfo::GetStartTime() const
{
    return m_startTime;
}

void MigrateJobInfo::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool MigrateJobInfo::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string MigrateJobInfo::GetEndTime() const
{
    return m_endTime;
}

void MigrateJobInfo::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool MigrateJobInfo::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t MigrateJobInfo::GetStatus() const
{
    return m_status;
}

void MigrateJobInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool MigrateJobInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

MigrateDetailInfo MigrateJobInfo::GetDetail() const
{
    return m_detail;
}

void MigrateJobInfo::SetDetail(const MigrateDetailInfo& _detail)
{
    m_detail = _detail;
    m_detailHasBeenSet = true;
}

bool MigrateJobInfo::DetailHasBeenSet() const
{
    return m_detailHasBeenSet;
}

vector<ErrorInfo> MigrateJobInfo::GetErrorInfo() const
{
    return m_errorInfo;
}

void MigrateJobInfo::SetErrorInfo(const vector<ErrorInfo>& _errorInfo)
{
    m_errorInfo = _errorInfo;
    m_errorInfoHasBeenSet = true;
}

bool MigrateJobInfo::ErrorInfoHasBeenSet() const
{
    return m_errorInfoHasBeenSet;
}

vector<TagItem> MigrateJobInfo::GetTags() const
{
    return m_tags;
}

void MigrateJobInfo::SetTags(const vector<TagItem>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool MigrateJobInfo::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

vector<SrcInfo> MigrateJobInfo::GetSrcInfoMulti() const
{
    return m_srcInfoMulti;
}

void MigrateJobInfo::SetSrcInfoMulti(const vector<SrcInfo>& _srcInfoMulti)
{
    m_srcInfoMulti = _srcInfoMulti;
    m_srcInfoMultiHasBeenSet = true;
}

bool MigrateJobInfo::SrcInfoMultiHasBeenSet() const
{
    return m_srcInfoMultiHasBeenSet;
}

