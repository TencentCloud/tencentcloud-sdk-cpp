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

#include <tencentcloud/wedata/v20210820/model/InstanceLogList.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

InstanceLogList::InstanceLogList() :
    m_taskIdHasBeenSet(false),
    m_curRunDateHasBeenSet(false),
    m_triesHasBeenSet(false),
    m_lastUpdateHasBeenSet(false),
    m_brokerIpHasBeenSet(false),
    m_fileSizeHasBeenSet(false),
    m_originFileNameHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_instanceLogTypeHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_costTimeHasBeenSet(false)
{
}

CoreInternalOutcome InstanceLogList::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLogList.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("CurRunDate") && !value["CurRunDate"].IsNull())
    {
        if (!value["CurRunDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLogList.CurRunDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_curRunDate = string(value["CurRunDate"].GetString());
        m_curRunDateHasBeenSet = true;
    }

    if (value.HasMember("Tries") && !value["Tries"].IsNull())
    {
        if (!value["Tries"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLogList.Tries` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tries = string(value["Tries"].GetString());
        m_triesHasBeenSet = true;
    }

    if (value.HasMember("LastUpdate") && !value["LastUpdate"].IsNull())
    {
        if (!value["LastUpdate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLogList.LastUpdate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastUpdate = string(value["LastUpdate"].GetString());
        m_lastUpdateHasBeenSet = true;
    }

    if (value.HasMember("BrokerIp") && !value["BrokerIp"].IsNull())
    {
        if (!value["BrokerIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLogList.BrokerIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_brokerIp = string(value["BrokerIp"].GetString());
        m_brokerIpHasBeenSet = true;
    }

    if (value.HasMember("FileSize") && !value["FileSize"].IsNull())
    {
        if (!value["FileSize"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLogList.FileSize` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileSize = string(value["FileSize"].GetString());
        m_fileSizeHasBeenSet = true;
    }

    if (value.HasMember("OriginFileName") && !value["OriginFileName"].IsNull())
    {
        if (!value["OriginFileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLogList.OriginFileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originFileName = string(value["OriginFileName"].GetString());
        m_originFileNameHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLogList.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("InstanceLogType") && !value["InstanceLogType"].IsNull())
    {
        if (!value["InstanceLogType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLogList.InstanceLogType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceLogType = string(value["InstanceLogType"].GetString());
        m_instanceLogTypeHasBeenSet = true;
    }

    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLogList.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("CostTime") && !value["CostTime"].IsNull())
    {
        if (!value["CostTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLogList.CostTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_costTime = string(value["CostTime"].GetString());
        m_costTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceLogList::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_fileSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileSize.c_str(), allocator).Move(), allocator);
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

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_costTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CostTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_costTime.c_str(), allocator).Move(), allocator);
    }

}


string InstanceLogList::GetTaskId() const
{
    return m_taskId;
}

void InstanceLogList::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool InstanceLogList::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string InstanceLogList::GetCurRunDate() const
{
    return m_curRunDate;
}

void InstanceLogList::SetCurRunDate(const string& _curRunDate)
{
    m_curRunDate = _curRunDate;
    m_curRunDateHasBeenSet = true;
}

bool InstanceLogList::CurRunDateHasBeenSet() const
{
    return m_curRunDateHasBeenSet;
}

string InstanceLogList::GetTries() const
{
    return m_tries;
}

void InstanceLogList::SetTries(const string& _tries)
{
    m_tries = _tries;
    m_triesHasBeenSet = true;
}

bool InstanceLogList::TriesHasBeenSet() const
{
    return m_triesHasBeenSet;
}

string InstanceLogList::GetLastUpdate() const
{
    return m_lastUpdate;
}

void InstanceLogList::SetLastUpdate(const string& _lastUpdate)
{
    m_lastUpdate = _lastUpdate;
    m_lastUpdateHasBeenSet = true;
}

bool InstanceLogList::LastUpdateHasBeenSet() const
{
    return m_lastUpdateHasBeenSet;
}

string InstanceLogList::GetBrokerIp() const
{
    return m_brokerIp;
}

void InstanceLogList::SetBrokerIp(const string& _brokerIp)
{
    m_brokerIp = _brokerIp;
    m_brokerIpHasBeenSet = true;
}

bool InstanceLogList::BrokerIpHasBeenSet() const
{
    return m_brokerIpHasBeenSet;
}

string InstanceLogList::GetFileSize() const
{
    return m_fileSize;
}

void InstanceLogList::SetFileSize(const string& _fileSize)
{
    m_fileSize = _fileSize;
    m_fileSizeHasBeenSet = true;
}

bool InstanceLogList::FileSizeHasBeenSet() const
{
    return m_fileSizeHasBeenSet;
}

string InstanceLogList::GetOriginFileName() const
{
    return m_originFileName;
}

void InstanceLogList::SetOriginFileName(const string& _originFileName)
{
    m_originFileName = _originFileName;
    m_originFileNameHasBeenSet = true;
}

bool InstanceLogList::OriginFileNameHasBeenSet() const
{
    return m_originFileNameHasBeenSet;
}

string InstanceLogList::GetCreateTime() const
{
    return m_createTime;
}

void InstanceLogList::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool InstanceLogList::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string InstanceLogList::GetInstanceLogType() const
{
    return m_instanceLogType;
}

void InstanceLogList::SetInstanceLogType(const string& _instanceLogType)
{
    m_instanceLogType = _instanceLogType;
    m_instanceLogTypeHasBeenSet = true;
}

bool InstanceLogList::InstanceLogTypeHasBeenSet() const
{
    return m_instanceLogTypeHasBeenSet;
}

string InstanceLogList::GetTaskName() const
{
    return m_taskName;
}

void InstanceLogList::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool InstanceLogList::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string InstanceLogList::GetCostTime() const
{
    return m_costTime;
}

void InstanceLogList::SetCostTime(const string& _costTime)
{
    m_costTime = _costTime;
    m_costTimeHasBeenSet = true;
}

bool InstanceLogList::CostTimeHasBeenSet() const
{
    return m_costTimeHasBeenSet;
}

