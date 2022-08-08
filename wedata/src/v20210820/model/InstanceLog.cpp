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

#include <tencentcloud/wedata/v20210820/model/InstanceLog.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

InstanceLog::InstanceLog() :
    m_taskIdHasBeenSet(false),
    m_curRunDateHasBeenSet(false),
    m_triesHasBeenSet(false),
    m_lastUpdateHasBeenSet(false),
    m_brokerIpHasBeenSet(false),
    m_originFileNameHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_instanceLogTypeHasBeenSet(false),
    m_costTimeHasBeenSet(false)
{
}

CoreInternalOutcome InstanceLog::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLog.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("CurRunDate") && !value["CurRunDate"].IsNull())
    {
        if (!value["CurRunDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLog.CurRunDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_curRunDate = string(value["CurRunDate"].GetString());
        m_curRunDateHasBeenSet = true;
    }

    if (value.HasMember("Tries") && !value["Tries"].IsNull())
    {
        if (!value["Tries"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLog.Tries` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tries = string(value["Tries"].GetString());
        m_triesHasBeenSet = true;
    }

    if (value.HasMember("LastUpdate") && !value["LastUpdate"].IsNull())
    {
        if (!value["LastUpdate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLog.LastUpdate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastUpdate = string(value["LastUpdate"].GetString());
        m_lastUpdateHasBeenSet = true;
    }

    if (value.HasMember("BrokerIp") && !value["BrokerIp"].IsNull())
    {
        if (!value["BrokerIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLog.BrokerIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_brokerIp = string(value["BrokerIp"].GetString());
        m_brokerIpHasBeenSet = true;
    }

    if (value.HasMember("OriginFileName") && !value["OriginFileName"].IsNull())
    {
        if (!value["OriginFileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLog.OriginFileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originFileName = string(value["OriginFileName"].GetString());
        m_originFileNameHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLog.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("InstanceLogType") && !value["InstanceLogType"].IsNull())
    {
        if (!value["InstanceLogType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLog.InstanceLogType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceLogType = string(value["InstanceLogType"].GetString());
        m_instanceLogTypeHasBeenSet = true;
    }

    if (value.HasMember("CostTime") && !value["CostTime"].IsNull())
    {
        if (!value["CostTime"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLog.CostTime` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_costTime = value["CostTime"].GetDouble();
        m_costTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceLog::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_curRunDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurRunDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_curRunDate.c_str(), allocator).Move(), allocator);
    }

    if (m_triesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tries";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tries.c_str(), allocator).Move(), allocator);
    }

    if (m_lastUpdateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastUpdate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastUpdate.c_str(), allocator).Move(), allocator);
    }

    if (m_brokerIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BrokerIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_brokerIp.c_str(), allocator).Move(), allocator);
    }

    if (m_originFileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginFileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originFileName.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceLogTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceLogType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceLogType.c_str(), allocator).Move(), allocator);
    }

    if (m_costTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CostTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_costTime, allocator);
    }

}


string InstanceLog::GetTaskId() const
{
    return m_taskId;
}

void InstanceLog::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool InstanceLog::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string InstanceLog::GetCurRunDate() const
{
    return m_curRunDate;
}

void InstanceLog::SetCurRunDate(const string& _curRunDate)
{
    m_curRunDate = _curRunDate;
    m_curRunDateHasBeenSet = true;
}

bool InstanceLog::CurRunDateHasBeenSet() const
{
    return m_curRunDateHasBeenSet;
}

string InstanceLog::GetTries() const
{
    return m_tries;
}

void InstanceLog::SetTries(const string& _tries)
{
    m_tries = _tries;
    m_triesHasBeenSet = true;
}

bool InstanceLog::TriesHasBeenSet() const
{
    return m_triesHasBeenSet;
}

string InstanceLog::GetLastUpdate() const
{
    return m_lastUpdate;
}

void InstanceLog::SetLastUpdate(const string& _lastUpdate)
{
    m_lastUpdate = _lastUpdate;
    m_lastUpdateHasBeenSet = true;
}

bool InstanceLog::LastUpdateHasBeenSet() const
{
    return m_lastUpdateHasBeenSet;
}

string InstanceLog::GetBrokerIp() const
{
    return m_brokerIp;
}

void InstanceLog::SetBrokerIp(const string& _brokerIp)
{
    m_brokerIp = _brokerIp;
    m_brokerIpHasBeenSet = true;
}

bool InstanceLog::BrokerIpHasBeenSet() const
{
    return m_brokerIpHasBeenSet;
}

string InstanceLog::GetOriginFileName() const
{
    return m_originFileName;
}

void InstanceLog::SetOriginFileName(const string& _originFileName)
{
    m_originFileName = _originFileName;
    m_originFileNameHasBeenSet = true;
}

bool InstanceLog::OriginFileNameHasBeenSet() const
{
    return m_originFileNameHasBeenSet;
}

string InstanceLog::GetCreateTime() const
{
    return m_createTime;
}

void InstanceLog::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool InstanceLog::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string InstanceLog::GetInstanceLogType() const
{
    return m_instanceLogType;
}

void InstanceLog::SetInstanceLogType(const string& _instanceLogType)
{
    m_instanceLogType = _instanceLogType;
    m_instanceLogTypeHasBeenSet = true;
}

bool InstanceLog::InstanceLogTypeHasBeenSet() const
{
    return m_instanceLogTypeHasBeenSet;
}

double InstanceLog::GetCostTime() const
{
    return m_costTime;
}

void InstanceLog::SetCostTime(const double& _costTime)
{
    m_costTime = _costTime;
    m_costTimeHasBeenSet = true;
}

bool InstanceLog::CostTimeHasBeenSet() const
{
    return m_costTimeHasBeenSet;
}

