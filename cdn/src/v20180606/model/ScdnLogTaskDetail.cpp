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

#include <tencentcloud/cdn/v20180606/model/ScdnLogTaskDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

ScdnLogTaskDetail::ScdnLogTaskDetail() :
    m_domainHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_downloadUrlHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_taskIDHasBeenSet(false),
    m_attackTypeHasBeenSet(false),
    m_defenceModeHasBeenSet(false),
    m_conditionsHasBeenSet(false),
    m_areaHasBeenSet(false)
{
}

CoreInternalOutcome ScdnLogTaskDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScdnLogTaskDetail.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("Mode") && !value["Mode"].IsNull())
    {
        if (!value["Mode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScdnLogTaskDetail.Mode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mode = string(value["Mode"].GetString());
        m_modeHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScdnLogTaskDetail.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScdnLogTaskDetail.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScdnLogTaskDetail.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("DownloadUrl") && !value["DownloadUrl"].IsNull())
    {
        if (!value["DownloadUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScdnLogTaskDetail.DownloadUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_downloadUrl = string(value["DownloadUrl"].GetString());
        m_downloadUrlHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScdnLogTaskDetail.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("TaskID") && !value["TaskID"].IsNull())
    {
        if (!value["TaskID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScdnLogTaskDetail.TaskID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskID = string(value["TaskID"].GetString());
        m_taskIDHasBeenSet = true;
    }

    if (value.HasMember("AttackType") && !value["AttackType"].IsNull())
    {
        if (!value["AttackType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScdnLogTaskDetail.AttackType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attackType = string(value["AttackType"].GetString());
        m_attackTypeHasBeenSet = true;
    }

    if (value.HasMember("DefenceMode") && !value["DefenceMode"].IsNull())
    {
        if (!value["DefenceMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScdnLogTaskDetail.DefenceMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defenceMode = string(value["DefenceMode"].GetString());
        m_defenceModeHasBeenSet = true;
    }

    if (value.HasMember("Conditions") && !value["Conditions"].IsNull())
    {
        if (!value["Conditions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ScdnLogTaskDetail.Conditions` is not array type"));

        const rapidjson::Value &tmpValue = value["Conditions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ScdnEventLogConditions item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_conditions.push_back(item);
        }
        m_conditionsHasBeenSet = true;
    }

    if (value.HasMember("Area") && !value["Area"].IsNull())
    {
        if (!value["Area"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScdnLogTaskDetail.Area` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_area = string(value["Area"].GetString());
        m_areaHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ScdnLogTaskDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mode.c_str(), allocator).Move(), allocator);
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

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_downloadUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DownloadUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_downloadUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskID.c_str(), allocator).Move(), allocator);
    }

    if (m_attackTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attackType.c_str(), allocator).Move(), allocator);
    }

    if (m_defenceModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefenceMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_defenceMode.c_str(), allocator).Move(), allocator);
    }

    if (m_conditionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Conditions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_conditions.begin(); itr != m_conditions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_areaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Area";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_area.c_str(), allocator).Move(), allocator);
    }

}


string ScdnLogTaskDetail::GetDomain() const
{
    return m_domain;
}

void ScdnLogTaskDetail::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool ScdnLogTaskDetail::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string ScdnLogTaskDetail::GetMode() const
{
    return m_mode;
}

void ScdnLogTaskDetail::SetMode(const string& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool ScdnLogTaskDetail::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

string ScdnLogTaskDetail::GetStartTime() const
{
    return m_startTime;
}

void ScdnLogTaskDetail::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool ScdnLogTaskDetail::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string ScdnLogTaskDetail::GetEndTime() const
{
    return m_endTime;
}

void ScdnLogTaskDetail::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool ScdnLogTaskDetail::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string ScdnLogTaskDetail::GetCreateTime() const
{
    return m_createTime;
}

void ScdnLogTaskDetail::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ScdnLogTaskDetail::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string ScdnLogTaskDetail::GetDownloadUrl() const
{
    return m_downloadUrl;
}

void ScdnLogTaskDetail::SetDownloadUrl(const string& _downloadUrl)
{
    m_downloadUrl = _downloadUrl;
    m_downloadUrlHasBeenSet = true;
}

bool ScdnLogTaskDetail::DownloadUrlHasBeenSet() const
{
    return m_downloadUrlHasBeenSet;
}

string ScdnLogTaskDetail::GetStatus() const
{
    return m_status;
}

void ScdnLogTaskDetail::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ScdnLogTaskDetail::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ScdnLogTaskDetail::GetTaskID() const
{
    return m_taskID;
}

void ScdnLogTaskDetail::SetTaskID(const string& _taskID)
{
    m_taskID = _taskID;
    m_taskIDHasBeenSet = true;
}

bool ScdnLogTaskDetail::TaskIDHasBeenSet() const
{
    return m_taskIDHasBeenSet;
}

string ScdnLogTaskDetail::GetAttackType() const
{
    return m_attackType;
}

void ScdnLogTaskDetail::SetAttackType(const string& _attackType)
{
    m_attackType = _attackType;
    m_attackTypeHasBeenSet = true;
}

bool ScdnLogTaskDetail::AttackTypeHasBeenSet() const
{
    return m_attackTypeHasBeenSet;
}

string ScdnLogTaskDetail::GetDefenceMode() const
{
    return m_defenceMode;
}

void ScdnLogTaskDetail::SetDefenceMode(const string& _defenceMode)
{
    m_defenceMode = _defenceMode;
    m_defenceModeHasBeenSet = true;
}

bool ScdnLogTaskDetail::DefenceModeHasBeenSet() const
{
    return m_defenceModeHasBeenSet;
}

vector<ScdnEventLogConditions> ScdnLogTaskDetail::GetConditions() const
{
    return m_conditions;
}

void ScdnLogTaskDetail::SetConditions(const vector<ScdnEventLogConditions>& _conditions)
{
    m_conditions = _conditions;
    m_conditionsHasBeenSet = true;
}

bool ScdnLogTaskDetail::ConditionsHasBeenSet() const
{
    return m_conditionsHasBeenSet;
}

string ScdnLogTaskDetail::GetArea() const
{
    return m_area;
}

void ScdnLogTaskDetail::SetArea(const string& _area)
{
    m_area = _area;
    m_areaHasBeenSet = true;
}

bool ScdnLogTaskDetail::AreaHasBeenSet() const
{
    return m_areaHasBeenSet;
}

