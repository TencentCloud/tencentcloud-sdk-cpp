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

#include <tencentcloud/cwp/v20180228/model/VertexInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

VertexInfo::VertexInfo() :
    m_typeHasBeenSet(false),
    m_vidHasBeenSet(false),
    m_parentVidHasBeenSet(false),
    m_isLeafHasBeenSet(false),
    m_procNamePrefixHasBeenSet(false),
    m_procNameMd5HasBeenSet(false),
    m_cmdLinePrefixHasBeenSet(false),
    m_cmdLineMd5HasBeenSet(false),
    m_filePathPrefixHasBeenSet(false),
    m_addressPrefixHasBeenSet(false),
    m_isWeDetectHasBeenSet(false),
    m_isAlarmHasBeenSet(false),
    m_filePathMd5HasBeenSet(false),
    m_addressMd5HasBeenSet(false)
{
}

CoreInternalOutcome VertexInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VertexInfo.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Vid") && !value["Vid"].IsNull())
    {
        if (!value["Vid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VertexInfo.Vid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vid = string(value["Vid"].GetString());
        m_vidHasBeenSet = true;
    }

    if (value.HasMember("ParentVid") && !value["ParentVid"].IsNull())
    {
        if (!value["ParentVid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VertexInfo.ParentVid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parentVid = string(value["ParentVid"].GetString());
        m_parentVidHasBeenSet = true;
    }

    if (value.HasMember("IsLeaf") && !value["IsLeaf"].IsNull())
    {
        if (!value["IsLeaf"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `VertexInfo.IsLeaf` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isLeaf = value["IsLeaf"].GetBool();
        m_isLeafHasBeenSet = true;
    }

    if (value.HasMember("ProcNamePrefix") && !value["ProcNamePrefix"].IsNull())
    {
        if (!value["ProcNamePrefix"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VertexInfo.ProcNamePrefix` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_procNamePrefix = string(value["ProcNamePrefix"].GetString());
        m_procNamePrefixHasBeenSet = true;
    }

    if (value.HasMember("ProcNameMd5") && !value["ProcNameMd5"].IsNull())
    {
        if (!value["ProcNameMd5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VertexInfo.ProcNameMd5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_procNameMd5 = string(value["ProcNameMd5"].GetString());
        m_procNameMd5HasBeenSet = true;
    }

    if (value.HasMember("CmdLinePrefix") && !value["CmdLinePrefix"].IsNull())
    {
        if (!value["CmdLinePrefix"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VertexInfo.CmdLinePrefix` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cmdLinePrefix = string(value["CmdLinePrefix"].GetString());
        m_cmdLinePrefixHasBeenSet = true;
    }

    if (value.HasMember("CmdLineMd5") && !value["CmdLineMd5"].IsNull())
    {
        if (!value["CmdLineMd5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VertexInfo.CmdLineMd5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cmdLineMd5 = string(value["CmdLineMd5"].GetString());
        m_cmdLineMd5HasBeenSet = true;
    }

    if (value.HasMember("FilePathPrefix") && !value["FilePathPrefix"].IsNull())
    {
        if (!value["FilePathPrefix"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VertexInfo.FilePathPrefix` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_filePathPrefix = string(value["FilePathPrefix"].GetString());
        m_filePathPrefixHasBeenSet = true;
    }

    if (value.HasMember("AddressPrefix") && !value["AddressPrefix"].IsNull())
    {
        if (!value["AddressPrefix"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VertexInfo.AddressPrefix` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addressPrefix = string(value["AddressPrefix"].GetString());
        m_addressPrefixHasBeenSet = true;
    }

    if (value.HasMember("IsWeDetect") && !value["IsWeDetect"].IsNull())
    {
        if (!value["IsWeDetect"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `VertexInfo.IsWeDetect` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isWeDetect = value["IsWeDetect"].GetBool();
        m_isWeDetectHasBeenSet = true;
    }

    if (value.HasMember("IsAlarm") && !value["IsAlarm"].IsNull())
    {
        if (!value["IsAlarm"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `VertexInfo.IsAlarm` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isAlarm = value["IsAlarm"].GetBool();
        m_isAlarmHasBeenSet = true;
    }

    if (value.HasMember("FilePathMd5") && !value["FilePathMd5"].IsNull())
    {
        if (!value["FilePathMd5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VertexInfo.FilePathMd5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_filePathMd5 = string(value["FilePathMd5"].GetString());
        m_filePathMd5HasBeenSet = true;
    }

    if (value.HasMember("AddressMd5") && !value["AddressMd5"].IsNull())
    {
        if (!value["AddressMd5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VertexInfo.AddressMd5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addressMd5 = string(value["AddressMd5"].GetString());
        m_addressMd5HasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VertexInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_vidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vid.c_str(), allocator).Move(), allocator);
    }

    if (m_parentVidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentVid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parentVid.c_str(), allocator).Move(), allocator);
    }

    if (m_isLeafHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsLeaf";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isLeaf, allocator);
    }

    if (m_procNamePrefixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcNamePrefix";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_procNamePrefix.c_str(), allocator).Move(), allocator);
    }

    if (m_procNameMd5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcNameMd5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_procNameMd5.c_str(), allocator).Move(), allocator);
    }

    if (m_cmdLinePrefixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CmdLinePrefix";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cmdLinePrefix.c_str(), allocator).Move(), allocator);
    }

    if (m_cmdLineMd5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CmdLineMd5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cmdLineMd5.c_str(), allocator).Move(), allocator);
    }

    if (m_filePathPrefixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilePathPrefix";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_filePathPrefix.c_str(), allocator).Move(), allocator);
    }

    if (m_addressPrefixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddressPrefix";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_addressPrefix.c_str(), allocator).Move(), allocator);
    }

    if (m_isWeDetectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsWeDetect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isWeDetect, allocator);
    }

    if (m_isAlarmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAlarm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAlarm, allocator);
    }

    if (m_filePathMd5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilePathMd5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_filePathMd5.c_str(), allocator).Move(), allocator);
    }

    if (m_addressMd5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddressMd5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_addressMd5.c_str(), allocator).Move(), allocator);
    }

}


int64_t VertexInfo::GetType() const
{
    return m_type;
}

void VertexInfo::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool VertexInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string VertexInfo::GetVid() const
{
    return m_vid;
}

void VertexInfo::SetVid(const string& _vid)
{
    m_vid = _vid;
    m_vidHasBeenSet = true;
}

bool VertexInfo::VidHasBeenSet() const
{
    return m_vidHasBeenSet;
}

string VertexInfo::GetParentVid() const
{
    return m_parentVid;
}

void VertexInfo::SetParentVid(const string& _parentVid)
{
    m_parentVid = _parentVid;
    m_parentVidHasBeenSet = true;
}

bool VertexInfo::ParentVidHasBeenSet() const
{
    return m_parentVidHasBeenSet;
}

bool VertexInfo::GetIsLeaf() const
{
    return m_isLeaf;
}

void VertexInfo::SetIsLeaf(const bool& _isLeaf)
{
    m_isLeaf = _isLeaf;
    m_isLeafHasBeenSet = true;
}

bool VertexInfo::IsLeafHasBeenSet() const
{
    return m_isLeafHasBeenSet;
}

string VertexInfo::GetProcNamePrefix() const
{
    return m_procNamePrefix;
}

void VertexInfo::SetProcNamePrefix(const string& _procNamePrefix)
{
    m_procNamePrefix = _procNamePrefix;
    m_procNamePrefixHasBeenSet = true;
}

bool VertexInfo::ProcNamePrefixHasBeenSet() const
{
    return m_procNamePrefixHasBeenSet;
}

string VertexInfo::GetProcNameMd5() const
{
    return m_procNameMd5;
}

void VertexInfo::SetProcNameMd5(const string& _procNameMd5)
{
    m_procNameMd5 = _procNameMd5;
    m_procNameMd5HasBeenSet = true;
}

bool VertexInfo::ProcNameMd5HasBeenSet() const
{
    return m_procNameMd5HasBeenSet;
}

string VertexInfo::GetCmdLinePrefix() const
{
    return m_cmdLinePrefix;
}

void VertexInfo::SetCmdLinePrefix(const string& _cmdLinePrefix)
{
    m_cmdLinePrefix = _cmdLinePrefix;
    m_cmdLinePrefixHasBeenSet = true;
}

bool VertexInfo::CmdLinePrefixHasBeenSet() const
{
    return m_cmdLinePrefixHasBeenSet;
}

string VertexInfo::GetCmdLineMd5() const
{
    return m_cmdLineMd5;
}

void VertexInfo::SetCmdLineMd5(const string& _cmdLineMd5)
{
    m_cmdLineMd5 = _cmdLineMd5;
    m_cmdLineMd5HasBeenSet = true;
}

bool VertexInfo::CmdLineMd5HasBeenSet() const
{
    return m_cmdLineMd5HasBeenSet;
}

string VertexInfo::GetFilePathPrefix() const
{
    return m_filePathPrefix;
}

void VertexInfo::SetFilePathPrefix(const string& _filePathPrefix)
{
    m_filePathPrefix = _filePathPrefix;
    m_filePathPrefixHasBeenSet = true;
}

bool VertexInfo::FilePathPrefixHasBeenSet() const
{
    return m_filePathPrefixHasBeenSet;
}

string VertexInfo::GetAddressPrefix() const
{
    return m_addressPrefix;
}

void VertexInfo::SetAddressPrefix(const string& _addressPrefix)
{
    m_addressPrefix = _addressPrefix;
    m_addressPrefixHasBeenSet = true;
}

bool VertexInfo::AddressPrefixHasBeenSet() const
{
    return m_addressPrefixHasBeenSet;
}

bool VertexInfo::GetIsWeDetect() const
{
    return m_isWeDetect;
}

void VertexInfo::SetIsWeDetect(const bool& _isWeDetect)
{
    m_isWeDetect = _isWeDetect;
    m_isWeDetectHasBeenSet = true;
}

bool VertexInfo::IsWeDetectHasBeenSet() const
{
    return m_isWeDetectHasBeenSet;
}

bool VertexInfo::GetIsAlarm() const
{
    return m_isAlarm;
}

void VertexInfo::SetIsAlarm(const bool& _isAlarm)
{
    m_isAlarm = _isAlarm;
    m_isAlarmHasBeenSet = true;
}

bool VertexInfo::IsAlarmHasBeenSet() const
{
    return m_isAlarmHasBeenSet;
}

string VertexInfo::GetFilePathMd5() const
{
    return m_filePathMd5;
}

void VertexInfo::SetFilePathMd5(const string& _filePathMd5)
{
    m_filePathMd5 = _filePathMd5;
    m_filePathMd5HasBeenSet = true;
}

bool VertexInfo::FilePathMd5HasBeenSet() const
{
    return m_filePathMd5HasBeenSet;
}

string VertexInfo::GetAddressMd5() const
{
    return m_addressMd5;
}

void VertexInfo::SetAddressMd5(const string& _addressMd5)
{
    m_addressMd5 = _addressMd5;
    m_addressMd5HasBeenSet = true;
}

bool VertexInfo::AddressMd5HasBeenSet() const
{
    return m_addressMd5HasBeenSet;
}

