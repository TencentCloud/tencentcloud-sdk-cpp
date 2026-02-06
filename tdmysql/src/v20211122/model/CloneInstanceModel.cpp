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

#include <tencentcloud/tdmysql/v20211122/model/CloneInstanceModel.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmysql::V20211122::Model;
using namespace std;

CloneInstanceModel::CloneInstanceModel() :
    m_cloneEndTimeHasBeenSet(false),
    m_cloneIdHasBeenSet(false),
    m_cloneInsTypeHasBeenSet(false),
    m_cloneInstanceIdHasBeenSet(false),
    m_cloneInstanceIsDeletedHasBeenSet(false),
    m_cloneProgressHasBeenSet(false),
    m_cloneStartTimeHasBeenSet(false),
    m_cloneStatusHasBeenSet(false),
    m_cloneTimeHasBeenSet(false),
    m_cloneTypeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_dBTypeHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_sourceInstanceIdHasBeenSet(false)
{
}

CoreInternalOutcome CloneInstanceModel::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CloneEndTime") && !value["CloneEndTime"].IsNull())
    {
        if (!value["CloneEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloneInstanceModel.CloneEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cloneEndTime = string(value["CloneEndTime"].GetString());
        m_cloneEndTimeHasBeenSet = true;
    }

    if (value.HasMember("CloneId") && !value["CloneId"].IsNull())
    {
        if (!value["CloneId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloneInstanceModel.CloneId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cloneId = value["CloneId"].GetInt64();
        m_cloneIdHasBeenSet = true;
    }

    if (value.HasMember("CloneInsType") && !value["CloneInsType"].IsNull())
    {
        if (!value["CloneInsType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloneInstanceModel.CloneInsType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cloneInsType = string(value["CloneInsType"].GetString());
        m_cloneInsTypeHasBeenSet = true;
    }

    if (value.HasMember("CloneInstanceId") && !value["CloneInstanceId"].IsNull())
    {
        if (!value["CloneInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloneInstanceModel.CloneInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cloneInstanceId = string(value["CloneInstanceId"].GetString());
        m_cloneInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("CloneInstanceIsDeleted") && !value["CloneInstanceIsDeleted"].IsNull())
    {
        if (!value["CloneInstanceIsDeleted"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CloneInstanceModel.CloneInstanceIsDeleted` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_cloneInstanceIsDeleted = value["CloneInstanceIsDeleted"].GetBool();
        m_cloneInstanceIsDeletedHasBeenSet = true;
    }

    if (value.HasMember("CloneProgress") && !value["CloneProgress"].IsNull())
    {
        if (!value["CloneProgress"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CloneInstanceModel.CloneProgress` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_cloneProgress = value["CloneProgress"].GetDouble();
        m_cloneProgressHasBeenSet = true;
    }

    if (value.HasMember("CloneStartTime") && !value["CloneStartTime"].IsNull())
    {
        if (!value["CloneStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloneInstanceModel.CloneStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cloneStartTime = string(value["CloneStartTime"].GetString());
        m_cloneStartTimeHasBeenSet = true;
    }

    if (value.HasMember("CloneStatus") && !value["CloneStatus"].IsNull())
    {
        if (!value["CloneStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloneInstanceModel.CloneStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cloneStatus = string(value["CloneStatus"].GetString());
        m_cloneStatusHasBeenSet = true;
    }

    if (value.HasMember("CloneTime") && !value["CloneTime"].IsNull())
    {
        if (!value["CloneTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloneInstanceModel.CloneTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cloneTime = string(value["CloneTime"].GetString());
        m_cloneTimeHasBeenSet = true;
    }

    if (value.HasMember("CloneType") && !value["CloneType"].IsNull())
    {
        if (!value["CloneType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloneInstanceModel.CloneType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cloneType = string(value["CloneType"].GetString());
        m_cloneTypeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloneInstanceModel.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("DBType") && !value["DBType"].IsNull())
    {
        if (!value["DBType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloneInstanceModel.DBType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dBType = string(value["DBType"].GetString());
        m_dBTypeHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloneInstanceModel.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("SourceInstanceId") && !value["SourceInstanceId"].IsNull())
    {
        if (!value["SourceInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloneInstanceModel.SourceInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceInstanceId = string(value["SourceInstanceId"].GetString());
        m_sourceInstanceIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloneInstanceModel::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cloneEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloneEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cloneEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_cloneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cloneId, allocator);
    }

    if (m_cloneInsTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloneInsType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cloneInsType.c_str(), allocator).Move(), allocator);
    }

    if (m_cloneInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloneInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cloneInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_cloneInstanceIsDeletedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloneInstanceIsDeleted";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cloneInstanceIsDeleted, allocator);
    }

    if (m_cloneProgressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloneProgress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cloneProgress, allocator);
    }

    if (m_cloneStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloneStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cloneStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_cloneStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloneStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cloneStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_cloneTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloneTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cloneTime.c_str(), allocator).Move(), allocator);
    }

    if (m_cloneTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloneType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cloneType.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_dBTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dBType.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceInstanceId.c_str(), allocator).Move(), allocator);
    }

}


string CloneInstanceModel::GetCloneEndTime() const
{
    return m_cloneEndTime;
}

void CloneInstanceModel::SetCloneEndTime(const string& _cloneEndTime)
{
    m_cloneEndTime = _cloneEndTime;
    m_cloneEndTimeHasBeenSet = true;
}

bool CloneInstanceModel::CloneEndTimeHasBeenSet() const
{
    return m_cloneEndTimeHasBeenSet;
}

int64_t CloneInstanceModel::GetCloneId() const
{
    return m_cloneId;
}

void CloneInstanceModel::SetCloneId(const int64_t& _cloneId)
{
    m_cloneId = _cloneId;
    m_cloneIdHasBeenSet = true;
}

bool CloneInstanceModel::CloneIdHasBeenSet() const
{
    return m_cloneIdHasBeenSet;
}

string CloneInstanceModel::GetCloneInsType() const
{
    return m_cloneInsType;
}

void CloneInstanceModel::SetCloneInsType(const string& _cloneInsType)
{
    m_cloneInsType = _cloneInsType;
    m_cloneInsTypeHasBeenSet = true;
}

bool CloneInstanceModel::CloneInsTypeHasBeenSet() const
{
    return m_cloneInsTypeHasBeenSet;
}

string CloneInstanceModel::GetCloneInstanceId() const
{
    return m_cloneInstanceId;
}

void CloneInstanceModel::SetCloneInstanceId(const string& _cloneInstanceId)
{
    m_cloneInstanceId = _cloneInstanceId;
    m_cloneInstanceIdHasBeenSet = true;
}

bool CloneInstanceModel::CloneInstanceIdHasBeenSet() const
{
    return m_cloneInstanceIdHasBeenSet;
}

bool CloneInstanceModel::GetCloneInstanceIsDeleted() const
{
    return m_cloneInstanceIsDeleted;
}

void CloneInstanceModel::SetCloneInstanceIsDeleted(const bool& _cloneInstanceIsDeleted)
{
    m_cloneInstanceIsDeleted = _cloneInstanceIsDeleted;
    m_cloneInstanceIsDeletedHasBeenSet = true;
}

bool CloneInstanceModel::CloneInstanceIsDeletedHasBeenSet() const
{
    return m_cloneInstanceIsDeletedHasBeenSet;
}

double CloneInstanceModel::GetCloneProgress() const
{
    return m_cloneProgress;
}

void CloneInstanceModel::SetCloneProgress(const double& _cloneProgress)
{
    m_cloneProgress = _cloneProgress;
    m_cloneProgressHasBeenSet = true;
}

bool CloneInstanceModel::CloneProgressHasBeenSet() const
{
    return m_cloneProgressHasBeenSet;
}

string CloneInstanceModel::GetCloneStartTime() const
{
    return m_cloneStartTime;
}

void CloneInstanceModel::SetCloneStartTime(const string& _cloneStartTime)
{
    m_cloneStartTime = _cloneStartTime;
    m_cloneStartTimeHasBeenSet = true;
}

bool CloneInstanceModel::CloneStartTimeHasBeenSet() const
{
    return m_cloneStartTimeHasBeenSet;
}

string CloneInstanceModel::GetCloneStatus() const
{
    return m_cloneStatus;
}

void CloneInstanceModel::SetCloneStatus(const string& _cloneStatus)
{
    m_cloneStatus = _cloneStatus;
    m_cloneStatusHasBeenSet = true;
}

bool CloneInstanceModel::CloneStatusHasBeenSet() const
{
    return m_cloneStatusHasBeenSet;
}

string CloneInstanceModel::GetCloneTime() const
{
    return m_cloneTime;
}

void CloneInstanceModel::SetCloneTime(const string& _cloneTime)
{
    m_cloneTime = _cloneTime;
    m_cloneTimeHasBeenSet = true;
}

bool CloneInstanceModel::CloneTimeHasBeenSet() const
{
    return m_cloneTimeHasBeenSet;
}

string CloneInstanceModel::GetCloneType() const
{
    return m_cloneType;
}

void CloneInstanceModel::SetCloneType(const string& _cloneType)
{
    m_cloneType = _cloneType;
    m_cloneTypeHasBeenSet = true;
}

bool CloneInstanceModel::CloneTypeHasBeenSet() const
{
    return m_cloneTypeHasBeenSet;
}

string CloneInstanceModel::GetCreateTime() const
{
    return m_createTime;
}

void CloneInstanceModel::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool CloneInstanceModel::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string CloneInstanceModel::GetDBType() const
{
    return m_dBType;
}

void CloneInstanceModel::SetDBType(const string& _dBType)
{
    m_dBType = _dBType;
    m_dBTypeHasBeenSet = true;
}

bool CloneInstanceModel::DBTypeHasBeenSet() const
{
    return m_dBTypeHasBeenSet;
}

string CloneInstanceModel::GetRegion() const
{
    return m_region;
}

void CloneInstanceModel::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool CloneInstanceModel::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string CloneInstanceModel::GetSourceInstanceId() const
{
    return m_sourceInstanceId;
}

void CloneInstanceModel::SetSourceInstanceId(const string& _sourceInstanceId)
{
    m_sourceInstanceId = _sourceInstanceId;
    m_sourceInstanceIdHasBeenSet = true;
}

bool CloneInstanceModel::SourceInstanceIdHasBeenSet() const
{
    return m_sourceInstanceIdHasBeenSet;
}

