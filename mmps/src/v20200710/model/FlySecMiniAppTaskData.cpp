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

#include <tencentcloud/mmps/v20200710/model/FlySecMiniAppTaskData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mmps::V20200710::Model;
using namespace std;

FlySecMiniAppTaskData::FlySecMiniAppTaskData() :
    m_taskIDHasBeenSet(false),
    m_miniAppIDHasBeenSet(false),
    m_miniAppNameHasBeenSet(false),
    m_miniAppVersionHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_errorHasBeenSet(false)
{
}

CoreInternalOutcome FlySecMiniAppTaskData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskID") && !value["TaskID"].IsNull())
    {
        if (!value["TaskID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlySecMiniAppTaskData.TaskID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskID = string(value["TaskID"].GetString());
        m_taskIDHasBeenSet = true;
    }

    if (value.HasMember("MiniAppID") && !value["MiniAppID"].IsNull())
    {
        if (!value["MiniAppID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlySecMiniAppTaskData.MiniAppID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_miniAppID = string(value["MiniAppID"].GetString());
        m_miniAppIDHasBeenSet = true;
    }

    if (value.HasMember("MiniAppName") && !value["MiniAppName"].IsNull())
    {
        if (!value["MiniAppName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlySecMiniAppTaskData.MiniAppName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_miniAppName = string(value["MiniAppName"].GetString());
        m_miniAppNameHasBeenSet = true;
    }

    if (value.HasMember("MiniAppVersion") && !value["MiniAppVersion"].IsNull())
    {
        if (!value["MiniAppVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlySecMiniAppTaskData.MiniAppVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_miniAppVersion = string(value["MiniAppVersion"].GetString());
        m_miniAppVersionHasBeenSet = true;
    }

    if (value.HasMember("Mode") && !value["Mode"].IsNull())
    {
        if (!value["Mode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlySecMiniAppTaskData.Mode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_mode = value["Mode"].GetInt64();
        m_modeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlySecMiniAppTaskData.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlySecMiniAppTaskData.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Error") && !value["Error"].IsNull())
    {
        if (!value["Error"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlySecMiniAppTaskData.Error` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_error = value["Error"].GetInt64();
        m_errorHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FlySecMiniAppTaskData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskID.c_str(), allocator).Move(), allocator);
    }

    if (m_miniAppIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MiniAppID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_miniAppID.c_str(), allocator).Move(), allocator);
    }

    if (m_miniAppNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MiniAppName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_miniAppName.c_str(), allocator).Move(), allocator);
    }

    if (m_miniAppVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MiniAppVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_miniAppVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mode, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_errorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Error";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_error, allocator);
    }

}


string FlySecMiniAppTaskData::GetTaskID() const
{
    return m_taskID;
}

void FlySecMiniAppTaskData::SetTaskID(const string& _taskID)
{
    m_taskID = _taskID;
    m_taskIDHasBeenSet = true;
}

bool FlySecMiniAppTaskData::TaskIDHasBeenSet() const
{
    return m_taskIDHasBeenSet;
}

string FlySecMiniAppTaskData::GetMiniAppID() const
{
    return m_miniAppID;
}

void FlySecMiniAppTaskData::SetMiniAppID(const string& _miniAppID)
{
    m_miniAppID = _miniAppID;
    m_miniAppIDHasBeenSet = true;
}

bool FlySecMiniAppTaskData::MiniAppIDHasBeenSet() const
{
    return m_miniAppIDHasBeenSet;
}

string FlySecMiniAppTaskData::GetMiniAppName() const
{
    return m_miniAppName;
}

void FlySecMiniAppTaskData::SetMiniAppName(const string& _miniAppName)
{
    m_miniAppName = _miniAppName;
    m_miniAppNameHasBeenSet = true;
}

bool FlySecMiniAppTaskData::MiniAppNameHasBeenSet() const
{
    return m_miniAppNameHasBeenSet;
}

string FlySecMiniAppTaskData::GetMiniAppVersion() const
{
    return m_miniAppVersion;
}

void FlySecMiniAppTaskData::SetMiniAppVersion(const string& _miniAppVersion)
{
    m_miniAppVersion = _miniAppVersion;
    m_miniAppVersionHasBeenSet = true;
}

bool FlySecMiniAppTaskData::MiniAppVersionHasBeenSet() const
{
    return m_miniAppVersionHasBeenSet;
}

int64_t FlySecMiniAppTaskData::GetMode() const
{
    return m_mode;
}

void FlySecMiniAppTaskData::SetMode(const int64_t& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool FlySecMiniAppTaskData::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

int64_t FlySecMiniAppTaskData::GetCreateTime() const
{
    return m_createTime;
}

void FlySecMiniAppTaskData::SetCreateTime(const int64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool FlySecMiniAppTaskData::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t FlySecMiniAppTaskData::GetStatus() const
{
    return m_status;
}

void FlySecMiniAppTaskData::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool FlySecMiniAppTaskData::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t FlySecMiniAppTaskData::GetError() const
{
    return m_error;
}

void FlySecMiniAppTaskData::SetError(const int64_t& _error)
{
    m_error = _error;
    m_errorHasBeenSet = true;
}

bool FlySecMiniAppTaskData::ErrorHasBeenSet() const
{
    return m_errorHasBeenSet;
}

