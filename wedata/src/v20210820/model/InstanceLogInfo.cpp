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

#include <tencentcloud/wedata/v20210820/model/InstanceLogInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

InstanceLogInfo::InstanceLogInfo() :
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
    m_costTimeHasBeenSet(false),
    m_instanceStatusHasBeenSet(false),
    m_codeFileNameHasBeenSet(false),
    m_extensionInfoHasBeenSet(false),
    m_executionJobIdHasBeenSet(false)
{
}

CoreInternalOutcome InstanceLogInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLogInfo.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("CurRunDate") && !value["CurRunDate"].IsNull())
    {
        if (!value["CurRunDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLogInfo.CurRunDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_curRunDate = string(value["CurRunDate"].GetString());
        m_curRunDateHasBeenSet = true;
    }

    if (value.HasMember("Tries") && !value["Tries"].IsNull())
    {
        if (!value["Tries"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLogInfo.Tries` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tries = string(value["Tries"].GetString());
        m_triesHasBeenSet = true;
    }

    if (value.HasMember("LastUpdate") && !value["LastUpdate"].IsNull())
    {
        if (!value["LastUpdate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLogInfo.LastUpdate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastUpdate = string(value["LastUpdate"].GetString());
        m_lastUpdateHasBeenSet = true;
    }

    if (value.HasMember("BrokerIp") && !value["BrokerIp"].IsNull())
    {
        if (!value["BrokerIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLogInfo.BrokerIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_brokerIp = string(value["BrokerIp"].GetString());
        m_brokerIpHasBeenSet = true;
    }

    if (value.HasMember("FileSize") && !value["FileSize"].IsNull())
    {
        if (!value["FileSize"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLogInfo.FileSize` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileSize = string(value["FileSize"].GetString());
        m_fileSizeHasBeenSet = true;
    }

    if (value.HasMember("OriginFileName") && !value["OriginFileName"].IsNull())
    {
        if (!value["OriginFileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLogInfo.OriginFileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originFileName = string(value["OriginFileName"].GetString());
        m_originFileNameHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLogInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("InstanceLogType") && !value["InstanceLogType"].IsNull())
    {
        if (!value["InstanceLogType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLogInfo.InstanceLogType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceLogType = string(value["InstanceLogType"].GetString());
        m_instanceLogTypeHasBeenSet = true;
    }

    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLogInfo.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("CostTime") && !value["CostTime"].IsNull())
    {
        if (!value["CostTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLogInfo.CostTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_costTime = string(value["CostTime"].GetString());
        m_costTimeHasBeenSet = true;
    }

    if (value.HasMember("InstanceStatus") && !value["InstanceStatus"].IsNull())
    {
        if (!value["InstanceStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLogInfo.InstanceStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceStatus = string(value["InstanceStatus"].GetString());
        m_instanceStatusHasBeenSet = true;
    }

    if (value.HasMember("CodeFileName") && !value["CodeFileName"].IsNull())
    {
        if (!value["CodeFileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLogInfo.CodeFileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_codeFileName = string(value["CodeFileName"].GetString());
        m_codeFileNameHasBeenSet = true;
    }

    if (value.HasMember("ExtensionInfo") && !value["ExtensionInfo"].IsNull())
    {
        if (!value["ExtensionInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceLogInfo.ExtensionInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["ExtensionInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AttributeItemDTO item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_extensionInfo.push_back(item);
        }
        m_extensionInfoHasBeenSet = true;
    }

    if (value.HasMember("ExecutionJobId") && !value["ExecutionJobId"].IsNull())
    {
        if (!value["ExecutionJobId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLogInfo.ExecutionJobId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executionJobId = string(value["ExecutionJobId"].GetString());
        m_executionJobIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceLogInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_instanceStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_codeFileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeFileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_codeFileName.c_str(), allocator).Move(), allocator);
    }

    if (m_extensionInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtensionInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_extensionInfo.begin(); itr != m_extensionInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_executionJobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionJobId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executionJobId.c_str(), allocator).Move(), allocator);
    }

}


string InstanceLogInfo::GetTaskId() const
{
    return m_taskId;
}

void InstanceLogInfo::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool InstanceLogInfo::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string InstanceLogInfo::GetCurRunDate() const
{
    return m_curRunDate;
}

void InstanceLogInfo::SetCurRunDate(const string& _curRunDate)
{
    m_curRunDate = _curRunDate;
    m_curRunDateHasBeenSet = true;
}

bool InstanceLogInfo::CurRunDateHasBeenSet() const
{
    return m_curRunDateHasBeenSet;
}

string InstanceLogInfo::GetTries() const
{
    return m_tries;
}

void InstanceLogInfo::SetTries(const string& _tries)
{
    m_tries = _tries;
    m_triesHasBeenSet = true;
}

bool InstanceLogInfo::TriesHasBeenSet() const
{
    return m_triesHasBeenSet;
}

string InstanceLogInfo::GetLastUpdate() const
{
    return m_lastUpdate;
}

void InstanceLogInfo::SetLastUpdate(const string& _lastUpdate)
{
    m_lastUpdate = _lastUpdate;
    m_lastUpdateHasBeenSet = true;
}

bool InstanceLogInfo::LastUpdateHasBeenSet() const
{
    return m_lastUpdateHasBeenSet;
}

string InstanceLogInfo::GetBrokerIp() const
{
    return m_brokerIp;
}

void InstanceLogInfo::SetBrokerIp(const string& _brokerIp)
{
    m_brokerIp = _brokerIp;
    m_brokerIpHasBeenSet = true;
}

bool InstanceLogInfo::BrokerIpHasBeenSet() const
{
    return m_brokerIpHasBeenSet;
}

string InstanceLogInfo::GetFileSize() const
{
    return m_fileSize;
}

void InstanceLogInfo::SetFileSize(const string& _fileSize)
{
    m_fileSize = _fileSize;
    m_fileSizeHasBeenSet = true;
}

bool InstanceLogInfo::FileSizeHasBeenSet() const
{
    return m_fileSizeHasBeenSet;
}

string InstanceLogInfo::GetOriginFileName() const
{
    return m_originFileName;
}

void InstanceLogInfo::SetOriginFileName(const string& _originFileName)
{
    m_originFileName = _originFileName;
    m_originFileNameHasBeenSet = true;
}

bool InstanceLogInfo::OriginFileNameHasBeenSet() const
{
    return m_originFileNameHasBeenSet;
}

string InstanceLogInfo::GetCreateTime() const
{
    return m_createTime;
}

void InstanceLogInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool InstanceLogInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string InstanceLogInfo::GetInstanceLogType() const
{
    return m_instanceLogType;
}

void InstanceLogInfo::SetInstanceLogType(const string& _instanceLogType)
{
    m_instanceLogType = _instanceLogType;
    m_instanceLogTypeHasBeenSet = true;
}

bool InstanceLogInfo::InstanceLogTypeHasBeenSet() const
{
    return m_instanceLogTypeHasBeenSet;
}

string InstanceLogInfo::GetTaskName() const
{
    return m_taskName;
}

void InstanceLogInfo::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool InstanceLogInfo::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string InstanceLogInfo::GetCostTime() const
{
    return m_costTime;
}

void InstanceLogInfo::SetCostTime(const string& _costTime)
{
    m_costTime = _costTime;
    m_costTimeHasBeenSet = true;
}

bool InstanceLogInfo::CostTimeHasBeenSet() const
{
    return m_costTimeHasBeenSet;
}

string InstanceLogInfo::GetInstanceStatus() const
{
    return m_instanceStatus;
}

void InstanceLogInfo::SetInstanceStatus(const string& _instanceStatus)
{
    m_instanceStatus = _instanceStatus;
    m_instanceStatusHasBeenSet = true;
}

bool InstanceLogInfo::InstanceStatusHasBeenSet() const
{
    return m_instanceStatusHasBeenSet;
}

string InstanceLogInfo::GetCodeFileName() const
{
    return m_codeFileName;
}

void InstanceLogInfo::SetCodeFileName(const string& _codeFileName)
{
    m_codeFileName = _codeFileName;
    m_codeFileNameHasBeenSet = true;
}

bool InstanceLogInfo::CodeFileNameHasBeenSet() const
{
    return m_codeFileNameHasBeenSet;
}

vector<AttributeItemDTO> InstanceLogInfo::GetExtensionInfo() const
{
    return m_extensionInfo;
}

void InstanceLogInfo::SetExtensionInfo(const vector<AttributeItemDTO>& _extensionInfo)
{
    m_extensionInfo = _extensionInfo;
    m_extensionInfoHasBeenSet = true;
}

bool InstanceLogInfo::ExtensionInfoHasBeenSet() const
{
    return m_extensionInfoHasBeenSet;
}

string InstanceLogInfo::GetExecutionJobId() const
{
    return m_executionJobId;
}

void InstanceLogInfo::SetExecutionJobId(const string& _executionJobId)
{
    m_executionJobId = _executionJobId;
    m_executionJobIdHasBeenSet = true;
}

bool InstanceLogInfo::ExecutionJobIdHasBeenSet() const
{
    return m_executionJobIdHasBeenSet;
}

