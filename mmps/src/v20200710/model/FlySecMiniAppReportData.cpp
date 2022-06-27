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

#include <tencentcloud/mmps/v20200710/model/FlySecMiniAppReportData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mmps::V20200710::Model;
using namespace std;

FlySecMiniAppReportData::FlySecMiniAppReportData() :
    m_taskIDHasBeenSet(false),
    m_miniAppIDHasBeenSet(false),
    m_miniAppNameHasBeenSet(false),
    m_miniAppVersionHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_riskScoreHasBeenSet(false),
    m_riskLevelHasBeenSet(false),
    m_riskItemsHasBeenSet(false)
{
}

CoreInternalOutcome FlySecMiniAppReportData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskID") && !value["TaskID"].IsNull())
    {
        if (!value["TaskID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlySecMiniAppReportData.TaskID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskID = string(value["TaskID"].GetString());
        m_taskIDHasBeenSet = true;
    }

    if (value.HasMember("MiniAppID") && !value["MiniAppID"].IsNull())
    {
        if (!value["MiniAppID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlySecMiniAppReportData.MiniAppID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_miniAppID = string(value["MiniAppID"].GetString());
        m_miniAppIDHasBeenSet = true;
    }

    if (value.HasMember("MiniAppName") && !value["MiniAppName"].IsNull())
    {
        if (!value["MiniAppName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlySecMiniAppReportData.MiniAppName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_miniAppName = string(value["MiniAppName"].GetString());
        m_miniAppNameHasBeenSet = true;
    }

    if (value.HasMember("MiniAppVersion") && !value["MiniAppVersion"].IsNull())
    {
        if (!value["MiniAppVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlySecMiniAppReportData.MiniAppVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_miniAppVersion = string(value["MiniAppVersion"].GetString());
        m_miniAppVersionHasBeenSet = true;
    }

    if (value.HasMember("Mode") && !value["Mode"].IsNull())
    {
        if (!value["Mode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlySecMiniAppReportData.Mode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_mode = value["Mode"].GetInt64();
        m_modeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlySecMiniAppReportData.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlySecMiniAppReportData.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("RiskScore") && !value["RiskScore"].IsNull())
    {
        if (!value["RiskScore"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlySecMiniAppReportData.RiskScore` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskScore = string(value["RiskScore"].GetString());
        m_riskScoreHasBeenSet = true;
    }

    if (value.HasMember("RiskLevel") && !value["RiskLevel"].IsNull())
    {
        if (!value["RiskLevel"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlySecMiniAppReportData.RiskLevel` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_riskLevel = value["RiskLevel"].GetInt64();
        m_riskLevelHasBeenSet = true;
    }

    if (value.HasMember("RiskItems") && !value["RiskItems"].IsNull())
    {
        if (!value["RiskItems"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FlySecMiniAppReportData.RiskItems` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_riskItems.Deserialize(value["RiskItems"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_riskItemsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FlySecMiniAppReportData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_riskScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskScore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskScore.c_str(), allocator).Move(), allocator);
    }

    if (m_riskLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskLevel, allocator);
    }

    if (m_riskItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskItems";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_riskItems.ToJsonObject(value[key.c_str()], allocator);
    }

}


string FlySecMiniAppReportData::GetTaskID() const
{
    return m_taskID;
}

void FlySecMiniAppReportData::SetTaskID(const string& _taskID)
{
    m_taskID = _taskID;
    m_taskIDHasBeenSet = true;
}

bool FlySecMiniAppReportData::TaskIDHasBeenSet() const
{
    return m_taskIDHasBeenSet;
}

string FlySecMiniAppReportData::GetMiniAppID() const
{
    return m_miniAppID;
}

void FlySecMiniAppReportData::SetMiniAppID(const string& _miniAppID)
{
    m_miniAppID = _miniAppID;
    m_miniAppIDHasBeenSet = true;
}

bool FlySecMiniAppReportData::MiniAppIDHasBeenSet() const
{
    return m_miniAppIDHasBeenSet;
}

string FlySecMiniAppReportData::GetMiniAppName() const
{
    return m_miniAppName;
}

void FlySecMiniAppReportData::SetMiniAppName(const string& _miniAppName)
{
    m_miniAppName = _miniAppName;
    m_miniAppNameHasBeenSet = true;
}

bool FlySecMiniAppReportData::MiniAppNameHasBeenSet() const
{
    return m_miniAppNameHasBeenSet;
}

string FlySecMiniAppReportData::GetMiniAppVersion() const
{
    return m_miniAppVersion;
}

void FlySecMiniAppReportData::SetMiniAppVersion(const string& _miniAppVersion)
{
    m_miniAppVersion = _miniAppVersion;
    m_miniAppVersionHasBeenSet = true;
}

bool FlySecMiniAppReportData::MiniAppVersionHasBeenSet() const
{
    return m_miniAppVersionHasBeenSet;
}

int64_t FlySecMiniAppReportData::GetMode() const
{
    return m_mode;
}

void FlySecMiniAppReportData::SetMode(const int64_t& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool FlySecMiniAppReportData::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

int64_t FlySecMiniAppReportData::GetStatus() const
{
    return m_status;
}

void FlySecMiniAppReportData::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool FlySecMiniAppReportData::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t FlySecMiniAppReportData::GetCreateTime() const
{
    return m_createTime;
}

void FlySecMiniAppReportData::SetCreateTime(const int64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool FlySecMiniAppReportData::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string FlySecMiniAppReportData::GetRiskScore() const
{
    return m_riskScore;
}

void FlySecMiniAppReportData::SetRiskScore(const string& _riskScore)
{
    m_riskScore = _riskScore;
    m_riskScoreHasBeenSet = true;
}

bool FlySecMiniAppReportData::RiskScoreHasBeenSet() const
{
    return m_riskScoreHasBeenSet;
}

int64_t FlySecMiniAppReportData::GetRiskLevel() const
{
    return m_riskLevel;
}

void FlySecMiniAppReportData::SetRiskLevel(const int64_t& _riskLevel)
{
    m_riskLevel = _riskLevel;
    m_riskLevelHasBeenSet = true;
}

bool FlySecMiniAppReportData::RiskLevelHasBeenSet() const
{
    return m_riskLevelHasBeenSet;
}

FlySecMiniAppRiskItems FlySecMiniAppReportData::GetRiskItems() const
{
    return m_riskItems;
}

void FlySecMiniAppReportData::SetRiskItems(const FlySecMiniAppRiskItems& _riskItems)
{
    m_riskItems = _riskItems;
    m_riskItemsHasBeenSet = true;
}

bool FlySecMiniAppReportData::RiskItemsHasBeenSet() const
{
    return m_riskItemsHasBeenSet;
}

