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

#include <tencentcloud/cwp/v20180228/model/VertexDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

VertexDetail::VertexDetail() :
    m_typeHasBeenSet(false),
    m_timeHasBeenSet(false),
    m_alarmInfoHasBeenSet(false),
    m_procNameHasBeenSet(false),
    m_cmdLineHasBeenSet(false),
    m_pidHasBeenSet(false),
    m_fileMd5HasBeenSet(false),
    m_fileContentHasBeenSet(false),
    m_filePathHasBeenSet(false),
    m_fileCreateTimeHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_dstPortHasBeenSet(false),
    m_srcIPHasBeenSet(false),
    m_userHasBeenSet(false),
    m_vulNameHasBeenSet(false),
    m_vulTimeHasBeenSet(false),
    m_httpContentHasBeenSet(false),
    m_vulSrcIPHasBeenSet(false),
    m_vertexIdHasBeenSet(false)
{
}

CoreInternalOutcome VertexDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VertexDetail.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Time") && !value["Time"].IsNull())
    {
        if (!value["Time"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VertexDetail.Time` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_time = string(value["Time"].GetString());
        m_timeHasBeenSet = true;
    }

    if (value.HasMember("AlarmInfo") && !value["AlarmInfo"].IsNull())
    {
        if (!value["AlarmInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VertexDetail.AlarmInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["AlarmInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AlarmInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_alarmInfo.push_back(item);
        }
        m_alarmInfoHasBeenSet = true;
    }

    if (value.HasMember("ProcName") && !value["ProcName"].IsNull())
    {
        if (!value["ProcName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VertexDetail.ProcName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_procName = string(value["ProcName"].GetString());
        m_procNameHasBeenSet = true;
    }

    if (value.HasMember("CmdLine") && !value["CmdLine"].IsNull())
    {
        if (!value["CmdLine"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VertexDetail.CmdLine` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cmdLine = string(value["CmdLine"].GetString());
        m_cmdLineHasBeenSet = true;
    }

    if (value.HasMember("Pid") && !value["Pid"].IsNull())
    {
        if (!value["Pid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VertexDetail.Pid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pid = string(value["Pid"].GetString());
        m_pidHasBeenSet = true;
    }

    if (value.HasMember("FileMd5") && !value["FileMd5"].IsNull())
    {
        if (!value["FileMd5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VertexDetail.FileMd5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileMd5 = string(value["FileMd5"].GetString());
        m_fileMd5HasBeenSet = true;
    }

    if (value.HasMember("FileContent") && !value["FileContent"].IsNull())
    {
        if (!value["FileContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VertexDetail.FileContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileContent = string(value["FileContent"].GetString());
        m_fileContentHasBeenSet = true;
    }

    if (value.HasMember("FilePath") && !value["FilePath"].IsNull())
    {
        if (!value["FilePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VertexDetail.FilePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_filePath = string(value["FilePath"].GetString());
        m_filePathHasBeenSet = true;
    }

    if (value.HasMember("FileCreateTime") && !value["FileCreateTime"].IsNull())
    {
        if (!value["FileCreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VertexDetail.FileCreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileCreateTime = string(value["FileCreateTime"].GetString());
        m_fileCreateTimeHasBeenSet = true;
    }

    if (value.HasMember("Address") && !value["Address"].IsNull())
    {
        if (!value["Address"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VertexDetail.Address` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_address = string(value["Address"].GetString());
        m_addressHasBeenSet = true;
    }

    if (value.HasMember("DstPort") && !value["DstPort"].IsNull())
    {
        if (!value["DstPort"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VertexDetail.DstPort` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dstPort = value["DstPort"].GetUint64();
        m_dstPortHasBeenSet = true;
    }

    if (value.HasMember("SrcIP") && !value["SrcIP"].IsNull())
    {
        if (!value["SrcIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VertexDetail.SrcIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcIP = string(value["SrcIP"].GetString());
        m_srcIPHasBeenSet = true;
    }

    if (value.HasMember("User") && !value["User"].IsNull())
    {
        if (!value["User"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VertexDetail.User` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_user = string(value["User"].GetString());
        m_userHasBeenSet = true;
    }

    if (value.HasMember("VulName") && !value["VulName"].IsNull())
    {
        if (!value["VulName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VertexDetail.VulName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vulName = string(value["VulName"].GetString());
        m_vulNameHasBeenSet = true;
    }

    if (value.HasMember("VulTime") && !value["VulTime"].IsNull())
    {
        if (!value["VulTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VertexDetail.VulTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vulTime = string(value["VulTime"].GetString());
        m_vulTimeHasBeenSet = true;
    }

    if (value.HasMember("HttpContent") && !value["HttpContent"].IsNull())
    {
        if (!value["HttpContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VertexDetail.HttpContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_httpContent = string(value["HttpContent"].GetString());
        m_httpContentHasBeenSet = true;
    }

    if (value.HasMember("VulSrcIP") && !value["VulSrcIP"].IsNull())
    {
        if (!value["VulSrcIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VertexDetail.VulSrcIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vulSrcIP = string(value["VulSrcIP"].GetString());
        m_vulSrcIPHasBeenSet = true;
    }

    if (value.HasMember("VertexId") && !value["VertexId"].IsNull())
    {
        if (!value["VertexId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VertexDetail.VertexId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vertexId = string(value["VertexId"].GetString());
        m_vertexIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VertexDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_timeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_time.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_alarmInfo.begin(); itr != m_alarmInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_procNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_procName.c_str(), allocator).Move(), allocator);
    }

    if (m_cmdLineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CmdLine";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cmdLine.c_str(), allocator).Move(), allocator);
    }

    if (m_pidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pid.c_str(), allocator).Move(), allocator);
    }

    if (m_fileMd5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileMd5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileMd5.c_str(), allocator).Move(), allocator);
    }

    if (m_fileContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileContent.c_str(), allocator).Move(), allocator);
    }

    if (m_filePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_filePath.c_str(), allocator).Move(), allocator);
    }

    if (m_fileCreateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileCreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileCreateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_addressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_address.c_str(), allocator).Move(), allocator);
    }

    if (m_dstPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dstPort, allocator);
    }

    if (m_srcIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcIP.c_str(), allocator).Move(), allocator);
    }

    if (m_userHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "User";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_user.c_str(), allocator).Move(), allocator);
    }

    if (m_vulNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vulName.c_str(), allocator).Move(), allocator);
    }

    if (m_vulTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vulTime.c_str(), allocator).Move(), allocator);
    }

    if (m_httpContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_httpContent.c_str(), allocator).Move(), allocator);
    }

    if (m_vulSrcIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulSrcIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vulSrcIP.c_str(), allocator).Move(), allocator);
    }

    if (m_vertexIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VertexId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vertexId.c_str(), allocator).Move(), allocator);
    }

}


int64_t VertexDetail::GetType() const
{
    return m_type;
}

void VertexDetail::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool VertexDetail::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string VertexDetail::GetTime() const
{
    return m_time;
}

void VertexDetail::SetTime(const string& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool VertexDetail::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

vector<AlarmInfo> VertexDetail::GetAlarmInfo() const
{
    return m_alarmInfo;
}

void VertexDetail::SetAlarmInfo(const vector<AlarmInfo>& _alarmInfo)
{
    m_alarmInfo = _alarmInfo;
    m_alarmInfoHasBeenSet = true;
}

bool VertexDetail::AlarmInfoHasBeenSet() const
{
    return m_alarmInfoHasBeenSet;
}

string VertexDetail::GetProcName() const
{
    return m_procName;
}

void VertexDetail::SetProcName(const string& _procName)
{
    m_procName = _procName;
    m_procNameHasBeenSet = true;
}

bool VertexDetail::ProcNameHasBeenSet() const
{
    return m_procNameHasBeenSet;
}

string VertexDetail::GetCmdLine() const
{
    return m_cmdLine;
}

void VertexDetail::SetCmdLine(const string& _cmdLine)
{
    m_cmdLine = _cmdLine;
    m_cmdLineHasBeenSet = true;
}

bool VertexDetail::CmdLineHasBeenSet() const
{
    return m_cmdLineHasBeenSet;
}

string VertexDetail::GetPid() const
{
    return m_pid;
}

void VertexDetail::SetPid(const string& _pid)
{
    m_pid = _pid;
    m_pidHasBeenSet = true;
}

bool VertexDetail::PidHasBeenSet() const
{
    return m_pidHasBeenSet;
}

string VertexDetail::GetFileMd5() const
{
    return m_fileMd5;
}

void VertexDetail::SetFileMd5(const string& _fileMd5)
{
    m_fileMd5 = _fileMd5;
    m_fileMd5HasBeenSet = true;
}

bool VertexDetail::FileMd5HasBeenSet() const
{
    return m_fileMd5HasBeenSet;
}

string VertexDetail::GetFileContent() const
{
    return m_fileContent;
}

void VertexDetail::SetFileContent(const string& _fileContent)
{
    m_fileContent = _fileContent;
    m_fileContentHasBeenSet = true;
}

bool VertexDetail::FileContentHasBeenSet() const
{
    return m_fileContentHasBeenSet;
}

string VertexDetail::GetFilePath() const
{
    return m_filePath;
}

void VertexDetail::SetFilePath(const string& _filePath)
{
    m_filePath = _filePath;
    m_filePathHasBeenSet = true;
}

bool VertexDetail::FilePathHasBeenSet() const
{
    return m_filePathHasBeenSet;
}

string VertexDetail::GetFileCreateTime() const
{
    return m_fileCreateTime;
}

void VertexDetail::SetFileCreateTime(const string& _fileCreateTime)
{
    m_fileCreateTime = _fileCreateTime;
    m_fileCreateTimeHasBeenSet = true;
}

bool VertexDetail::FileCreateTimeHasBeenSet() const
{
    return m_fileCreateTimeHasBeenSet;
}

string VertexDetail::GetAddress() const
{
    return m_address;
}

void VertexDetail::SetAddress(const string& _address)
{
    m_address = _address;
    m_addressHasBeenSet = true;
}

bool VertexDetail::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

uint64_t VertexDetail::GetDstPort() const
{
    return m_dstPort;
}

void VertexDetail::SetDstPort(const uint64_t& _dstPort)
{
    m_dstPort = _dstPort;
    m_dstPortHasBeenSet = true;
}

bool VertexDetail::DstPortHasBeenSet() const
{
    return m_dstPortHasBeenSet;
}

string VertexDetail::GetSrcIP() const
{
    return m_srcIP;
}

void VertexDetail::SetSrcIP(const string& _srcIP)
{
    m_srcIP = _srcIP;
    m_srcIPHasBeenSet = true;
}

bool VertexDetail::SrcIPHasBeenSet() const
{
    return m_srcIPHasBeenSet;
}

string VertexDetail::GetUser() const
{
    return m_user;
}

void VertexDetail::SetUser(const string& _user)
{
    m_user = _user;
    m_userHasBeenSet = true;
}

bool VertexDetail::UserHasBeenSet() const
{
    return m_userHasBeenSet;
}

string VertexDetail::GetVulName() const
{
    return m_vulName;
}

void VertexDetail::SetVulName(const string& _vulName)
{
    m_vulName = _vulName;
    m_vulNameHasBeenSet = true;
}

bool VertexDetail::VulNameHasBeenSet() const
{
    return m_vulNameHasBeenSet;
}

string VertexDetail::GetVulTime() const
{
    return m_vulTime;
}

void VertexDetail::SetVulTime(const string& _vulTime)
{
    m_vulTime = _vulTime;
    m_vulTimeHasBeenSet = true;
}

bool VertexDetail::VulTimeHasBeenSet() const
{
    return m_vulTimeHasBeenSet;
}

string VertexDetail::GetHttpContent() const
{
    return m_httpContent;
}

void VertexDetail::SetHttpContent(const string& _httpContent)
{
    m_httpContent = _httpContent;
    m_httpContentHasBeenSet = true;
}

bool VertexDetail::HttpContentHasBeenSet() const
{
    return m_httpContentHasBeenSet;
}

string VertexDetail::GetVulSrcIP() const
{
    return m_vulSrcIP;
}

void VertexDetail::SetVulSrcIP(const string& _vulSrcIP)
{
    m_vulSrcIP = _vulSrcIP;
    m_vulSrcIPHasBeenSet = true;
}

bool VertexDetail::VulSrcIPHasBeenSet() const
{
    return m_vulSrcIPHasBeenSet;
}

string VertexDetail::GetVertexId() const
{
    return m_vertexId;
}

void VertexDetail::SetVertexId(const string& _vertexId)
{
    m_vertexId = _vertexId;
    m_vertexIdHasBeenSet = true;
}

bool VertexDetail::VertexIdHasBeenSet() const
{
    return m_vertexIdHasBeenSet;
}

