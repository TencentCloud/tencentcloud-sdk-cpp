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

#include <tencentcloud/wedata/v20210820/model/AlarmDsVO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

AlarmDsVO::AlarmDsVO() :
    m_alarmIdHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_alarmTypeHasBeenSet(false),
    m_alarmWayHasBeenSet(false),
    m_creatorHasBeenSet(false),
    m_alarmRecipientHasBeenSet(false),
    m_alarmRecipientIdHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_lastFailTimeHasBeenSet(false),
    m_lastOverTimeHasBeenSet(false),
    m_lastAlarmTimeHasBeenSet(false),
    m_alarmExtHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

CoreInternalOutcome AlarmDsVO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AlarmId") && !value["AlarmId"].IsNull())
    {
        if (!value["AlarmId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmDsVO.AlarmId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmId = string(value["AlarmId"].GetString());
        m_alarmIdHasBeenSet = true;
    }

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmDsVO.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmDsVO.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("AlarmType") && !value["AlarmType"].IsNull())
    {
        if (!value["AlarmType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmDsVO.AlarmType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmType = string(value["AlarmType"].GetString());
        m_alarmTypeHasBeenSet = true;
    }

    if (value.HasMember("AlarmWay") && !value["AlarmWay"].IsNull())
    {
        if (!value["AlarmWay"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmDsVO.AlarmWay` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmWay = string(value["AlarmWay"].GetString());
        m_alarmWayHasBeenSet = true;
    }

    if (value.HasMember("Creator") && !value["Creator"].IsNull())
    {
        if (!value["Creator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmDsVO.Creator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creator = string(value["Creator"].GetString());
        m_creatorHasBeenSet = true;
    }

    if (value.HasMember("AlarmRecipient") && !value["AlarmRecipient"].IsNull())
    {
        if (!value["AlarmRecipient"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmDsVO.AlarmRecipient` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmRecipient = string(value["AlarmRecipient"].GetString());
        m_alarmRecipientHasBeenSet = true;
    }

    if (value.HasMember("AlarmRecipientId") && !value["AlarmRecipientId"].IsNull())
    {
        if (!value["AlarmRecipientId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmDsVO.AlarmRecipientId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmRecipientId = string(value["AlarmRecipientId"].GetString());
        m_alarmRecipientIdHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmDsVO.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("LastFailTime") && !value["LastFailTime"].IsNull())
    {
        if (!value["LastFailTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmDsVO.LastFailTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastFailTime = string(value["LastFailTime"].GetString());
        m_lastFailTimeHasBeenSet = true;
    }

    if (value.HasMember("LastOverTime") && !value["LastOverTime"].IsNull())
    {
        if (!value["LastOverTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmDsVO.LastOverTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastOverTime = string(value["LastOverTime"].GetString());
        m_lastOverTimeHasBeenSet = true;
    }

    if (value.HasMember("LastAlarmTime") && !value["LastAlarmTime"].IsNull())
    {
        if (!value["LastAlarmTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmDsVO.LastAlarmTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastAlarmTime = string(value["LastAlarmTime"].GetString());
        m_lastAlarmTimeHasBeenSet = true;
    }

    if (value.HasMember("AlarmExt") && !value["AlarmExt"].IsNull())
    {
        if (!value["AlarmExt"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AlarmDsVO.AlarmExt` is not array type"));

        const rapidjson::Value &tmpValue = value["AlarmExt"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AlarmExtDsVO item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_alarmExt.push_back(item);
        }
        m_alarmExtHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmDsVO.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AlarmDsVO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_alarmIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alarmId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_alarmTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alarmType.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmWayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmWay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alarmWay.c_str(), allocator).Move(), allocator);
    }

    if (m_creatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Creator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creator.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmRecipientHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmRecipient";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alarmRecipient.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmRecipientIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmRecipientId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alarmRecipientId.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_lastFailTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastFailTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastFailTime.c_str(), allocator).Move(), allocator);
    }

    if (m_lastOverTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastOverTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastOverTime.c_str(), allocator).Move(), allocator);
    }

    if (m_lastAlarmTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastAlarmTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastAlarmTime.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmExtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmExt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_alarmExt.begin(); itr != m_alarmExt.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

}


string AlarmDsVO::GetAlarmId() const
{
    return m_alarmId;
}

void AlarmDsVO::SetAlarmId(const string& _alarmId)
{
    m_alarmId = _alarmId;
    m_alarmIdHasBeenSet = true;
}

bool AlarmDsVO::AlarmIdHasBeenSet() const
{
    return m_alarmIdHasBeenSet;
}

string AlarmDsVO::GetTaskId() const
{
    return m_taskId;
}

void AlarmDsVO::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool AlarmDsVO::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

int64_t AlarmDsVO::GetStatus() const
{
    return m_status;
}

void AlarmDsVO::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AlarmDsVO::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string AlarmDsVO::GetAlarmType() const
{
    return m_alarmType;
}

void AlarmDsVO::SetAlarmType(const string& _alarmType)
{
    m_alarmType = _alarmType;
    m_alarmTypeHasBeenSet = true;
}

bool AlarmDsVO::AlarmTypeHasBeenSet() const
{
    return m_alarmTypeHasBeenSet;
}

string AlarmDsVO::GetAlarmWay() const
{
    return m_alarmWay;
}

void AlarmDsVO::SetAlarmWay(const string& _alarmWay)
{
    m_alarmWay = _alarmWay;
    m_alarmWayHasBeenSet = true;
}

bool AlarmDsVO::AlarmWayHasBeenSet() const
{
    return m_alarmWayHasBeenSet;
}

string AlarmDsVO::GetCreator() const
{
    return m_creator;
}

void AlarmDsVO::SetCreator(const string& _creator)
{
    m_creator = _creator;
    m_creatorHasBeenSet = true;
}

bool AlarmDsVO::CreatorHasBeenSet() const
{
    return m_creatorHasBeenSet;
}

string AlarmDsVO::GetAlarmRecipient() const
{
    return m_alarmRecipient;
}

void AlarmDsVO::SetAlarmRecipient(const string& _alarmRecipient)
{
    m_alarmRecipient = _alarmRecipient;
    m_alarmRecipientHasBeenSet = true;
}

bool AlarmDsVO::AlarmRecipientHasBeenSet() const
{
    return m_alarmRecipientHasBeenSet;
}

string AlarmDsVO::GetAlarmRecipientId() const
{
    return m_alarmRecipientId;
}

void AlarmDsVO::SetAlarmRecipientId(const string& _alarmRecipientId)
{
    m_alarmRecipientId = _alarmRecipientId;
    m_alarmRecipientIdHasBeenSet = true;
}

bool AlarmDsVO::AlarmRecipientIdHasBeenSet() const
{
    return m_alarmRecipientIdHasBeenSet;
}

string AlarmDsVO::GetModifyTime() const
{
    return m_modifyTime;
}

void AlarmDsVO::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool AlarmDsVO::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

string AlarmDsVO::GetLastFailTime() const
{
    return m_lastFailTime;
}

void AlarmDsVO::SetLastFailTime(const string& _lastFailTime)
{
    m_lastFailTime = _lastFailTime;
    m_lastFailTimeHasBeenSet = true;
}

bool AlarmDsVO::LastFailTimeHasBeenSet() const
{
    return m_lastFailTimeHasBeenSet;
}

string AlarmDsVO::GetLastOverTime() const
{
    return m_lastOverTime;
}

void AlarmDsVO::SetLastOverTime(const string& _lastOverTime)
{
    m_lastOverTime = _lastOverTime;
    m_lastOverTimeHasBeenSet = true;
}

bool AlarmDsVO::LastOverTimeHasBeenSet() const
{
    return m_lastOverTimeHasBeenSet;
}

string AlarmDsVO::GetLastAlarmTime() const
{
    return m_lastAlarmTime;
}

void AlarmDsVO::SetLastAlarmTime(const string& _lastAlarmTime)
{
    m_lastAlarmTime = _lastAlarmTime;
    m_lastAlarmTimeHasBeenSet = true;
}

bool AlarmDsVO::LastAlarmTimeHasBeenSet() const
{
    return m_lastAlarmTimeHasBeenSet;
}

vector<AlarmExtDsVO> AlarmDsVO::GetAlarmExt() const
{
    return m_alarmExt;
}

void AlarmDsVO::SetAlarmExt(const vector<AlarmExtDsVO>& _alarmExt)
{
    m_alarmExt = _alarmExt;
    m_alarmExtHasBeenSet = true;
}

bool AlarmDsVO::AlarmExtHasBeenSet() const
{
    return m_alarmExtHasBeenSet;
}

string AlarmDsVO::GetCreateTime() const
{
    return m_createTime;
}

void AlarmDsVO::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool AlarmDsVO::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

