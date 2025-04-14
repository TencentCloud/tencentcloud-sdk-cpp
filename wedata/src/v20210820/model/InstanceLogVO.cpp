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

#include <tencentcloud/wedata/v20210820/model/InstanceLogVO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

InstanceLogVO::InstanceLogVO() :
    m_instanceKeyHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_instanceStateHasBeenSet(false),
    m_runTypeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_codeInfoHasBeenSet(false),
    m_codeFileSizeHasBeenSet(false),
    m_brokerIpHasBeenSet(false),
    m_logInfoHasBeenSet(false),
    m_logFileSizeHasBeenSet(false),
    m_lineCountHasBeenSet(false),
    m_extInfoHasBeenSet(false),
    m_isEndHasBeenSet(false)
{
}

CoreInternalOutcome InstanceLogVO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceKey") && !value["InstanceKey"].IsNull())
    {
        if (!value["InstanceKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLogVO.InstanceKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceKey = string(value["InstanceKey"].GetString());
        m_instanceKeyHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLogVO.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceState") && !value["InstanceState"].IsNull())
    {
        if (!value["InstanceState"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLogVO.InstanceState` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceState = value["InstanceState"].GetUint64();
        m_instanceStateHasBeenSet = true;
    }

    if (value.HasMember("RunType") && !value["RunType"].IsNull())
    {
        if (!value["RunType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLogVO.RunType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runType = string(value["RunType"].GetString());
        m_runTypeHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLogVO.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLogVO.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("CodeInfo") && !value["CodeInfo"].IsNull())
    {
        if (!value["CodeInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLogVO.CodeInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_codeInfo = string(value["CodeInfo"].GetString());
        m_codeInfoHasBeenSet = true;
    }

    if (value.HasMember("CodeFileSize") && !value["CodeFileSize"].IsNull())
    {
        if (!value["CodeFileSize"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLogVO.CodeFileSize` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_codeFileSize = string(value["CodeFileSize"].GetString());
        m_codeFileSizeHasBeenSet = true;
    }

    if (value.HasMember("BrokerIp") && !value["BrokerIp"].IsNull())
    {
        if (!value["BrokerIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLogVO.BrokerIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_brokerIp = string(value["BrokerIp"].GetString());
        m_brokerIpHasBeenSet = true;
    }

    if (value.HasMember("LogInfo") && !value["LogInfo"].IsNull())
    {
        if (!value["LogInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLogVO.LogInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logInfo = string(value["LogInfo"].GetString());
        m_logInfoHasBeenSet = true;
    }

    if (value.HasMember("LogFileSize") && !value["LogFileSize"].IsNull())
    {
        if (!value["LogFileSize"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLogVO.LogFileSize` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logFileSize = string(value["LogFileSize"].GetString());
        m_logFileSizeHasBeenSet = true;
    }

    if (value.HasMember("LineCount") && !value["LineCount"].IsNull())
    {
        if (!value["LineCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLogVO.LineCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_lineCount = value["LineCount"].GetUint64();
        m_lineCountHasBeenSet = true;
    }

    if (value.HasMember("ExtInfo") && !value["ExtInfo"].IsNull())
    {
        if (!value["ExtInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLogVO.ExtInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extInfo = string(value["ExtInfo"].GetString());
        m_extInfoHasBeenSet = true;
    }

    if (value.HasMember("IsEnd") && !value["IsEnd"].IsNull())
    {
        if (!value["IsEnd"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLogVO.IsEnd` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isEnd = value["IsEnd"].GetBool();
        m_isEndHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceLogVO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceKey.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceState, allocator);
    }

    if (m_runTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runType.c_str(), allocator).Move(), allocator);
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

    if (m_codeInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_codeInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_codeFileSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeFileSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_codeFileSize.c_str(), allocator).Move(), allocator);
    }

    if (m_brokerIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BrokerIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_brokerIp.c_str(), allocator).Move(), allocator);
    }

    if (m_logInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_logFileSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogFileSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logFileSize.c_str(), allocator).Move(), allocator);
    }

    if (m_lineCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LineCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lineCount, allocator);
    }

    if (m_extInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_isEndHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsEnd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isEnd, allocator);
    }

}


string InstanceLogVO::GetInstanceKey() const
{
    return m_instanceKey;
}

void InstanceLogVO::SetInstanceKey(const string& _instanceKey)
{
    m_instanceKey = _instanceKey;
    m_instanceKeyHasBeenSet = true;
}

bool InstanceLogVO::InstanceKeyHasBeenSet() const
{
    return m_instanceKeyHasBeenSet;
}

string InstanceLogVO::GetProjectId() const
{
    return m_projectId;
}

void InstanceLogVO::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool InstanceLogVO::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

uint64_t InstanceLogVO::GetInstanceState() const
{
    return m_instanceState;
}

void InstanceLogVO::SetInstanceState(const uint64_t& _instanceState)
{
    m_instanceState = _instanceState;
    m_instanceStateHasBeenSet = true;
}

bool InstanceLogVO::InstanceStateHasBeenSet() const
{
    return m_instanceStateHasBeenSet;
}

string InstanceLogVO::GetRunType() const
{
    return m_runType;
}

void InstanceLogVO::SetRunType(const string& _runType)
{
    m_runType = _runType;
    m_runTypeHasBeenSet = true;
}

bool InstanceLogVO::RunTypeHasBeenSet() const
{
    return m_runTypeHasBeenSet;
}

string InstanceLogVO::GetStartTime() const
{
    return m_startTime;
}

void InstanceLogVO::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool InstanceLogVO::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string InstanceLogVO::GetEndTime() const
{
    return m_endTime;
}

void InstanceLogVO::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool InstanceLogVO::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string InstanceLogVO::GetCodeInfo() const
{
    return m_codeInfo;
}

void InstanceLogVO::SetCodeInfo(const string& _codeInfo)
{
    m_codeInfo = _codeInfo;
    m_codeInfoHasBeenSet = true;
}

bool InstanceLogVO::CodeInfoHasBeenSet() const
{
    return m_codeInfoHasBeenSet;
}

string InstanceLogVO::GetCodeFileSize() const
{
    return m_codeFileSize;
}

void InstanceLogVO::SetCodeFileSize(const string& _codeFileSize)
{
    m_codeFileSize = _codeFileSize;
    m_codeFileSizeHasBeenSet = true;
}

bool InstanceLogVO::CodeFileSizeHasBeenSet() const
{
    return m_codeFileSizeHasBeenSet;
}

string InstanceLogVO::GetBrokerIp() const
{
    return m_brokerIp;
}

void InstanceLogVO::SetBrokerIp(const string& _brokerIp)
{
    m_brokerIp = _brokerIp;
    m_brokerIpHasBeenSet = true;
}

bool InstanceLogVO::BrokerIpHasBeenSet() const
{
    return m_brokerIpHasBeenSet;
}

string InstanceLogVO::GetLogInfo() const
{
    return m_logInfo;
}

void InstanceLogVO::SetLogInfo(const string& _logInfo)
{
    m_logInfo = _logInfo;
    m_logInfoHasBeenSet = true;
}

bool InstanceLogVO::LogInfoHasBeenSet() const
{
    return m_logInfoHasBeenSet;
}

string InstanceLogVO::GetLogFileSize() const
{
    return m_logFileSize;
}

void InstanceLogVO::SetLogFileSize(const string& _logFileSize)
{
    m_logFileSize = _logFileSize;
    m_logFileSizeHasBeenSet = true;
}

bool InstanceLogVO::LogFileSizeHasBeenSet() const
{
    return m_logFileSizeHasBeenSet;
}

uint64_t InstanceLogVO::GetLineCount() const
{
    return m_lineCount;
}

void InstanceLogVO::SetLineCount(const uint64_t& _lineCount)
{
    m_lineCount = _lineCount;
    m_lineCountHasBeenSet = true;
}

bool InstanceLogVO::LineCountHasBeenSet() const
{
    return m_lineCountHasBeenSet;
}

string InstanceLogVO::GetExtInfo() const
{
    return m_extInfo;
}

void InstanceLogVO::SetExtInfo(const string& _extInfo)
{
    m_extInfo = _extInfo;
    m_extInfoHasBeenSet = true;
}

bool InstanceLogVO::ExtInfoHasBeenSet() const
{
    return m_extInfoHasBeenSet;
}

bool InstanceLogVO::GetIsEnd() const
{
    return m_isEnd;
}

void InstanceLogVO::SetIsEnd(const bool& _isEnd)
{
    m_isEnd = _isEnd;
    m_isEndHasBeenSet = true;
}

bool InstanceLogVO::IsEndHasBeenSet() const
{
    return m_isEndHasBeenSet;
}

