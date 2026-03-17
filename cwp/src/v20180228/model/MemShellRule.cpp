/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/cwp/v20180228/model/MemShellRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

MemShellRule::MemShellRule() :
    m_idHasBeenSet(false),
    m_uuidHostipsHasBeenSet(false),
    m_logicalSymbolHasBeenSet(false),
    m_classNameRegexpHasBeenSet(false),
    m_superClassNameRegexpHasBeenSet(false),
    m_interfacesRegexpHasBeenSet(false),
    m_annotationsRegexpHasBeenSet(false),
    m_loaderClassNameRegexpHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_isGlobalHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_handleHistoryHasBeenSet(false),
    m_groupIDHasBeenSet(false),
    m_machinesNumsHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_codeSourceRegexpHasBeenSet(false),
    m_callStackRegexpHasBeenSet(false),
    m_fileExistHasBeenSet(false)
{
}

CoreInternalOutcome MemShellRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MemShellRule.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("UuidHostips") && !value["UuidHostips"].IsNull())
    {
        if (!value["UuidHostips"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MemShellRule.UuidHostips` is not array type"));

        const rapidjson::Value &tmpValue = value["UuidHostips"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            UuidHostip item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_uuidHostips.push_back(item);
        }
        m_uuidHostipsHasBeenSet = true;
    }

    if (value.HasMember("LogicalSymbol") && !value["LogicalSymbol"].IsNull())
    {
        if (!value["LogicalSymbol"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MemShellRule.LogicalSymbol` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_logicalSymbol = value["LogicalSymbol"].GetUint64();
        m_logicalSymbolHasBeenSet = true;
    }

    if (value.HasMember("ClassNameRegexp") && !value["ClassNameRegexp"].IsNull())
    {
        if (!value["ClassNameRegexp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MemShellRule.ClassNameRegexp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_classNameRegexp = string(value["ClassNameRegexp"].GetString());
        m_classNameRegexpHasBeenSet = true;
    }

    if (value.HasMember("SuperClassNameRegexp") && !value["SuperClassNameRegexp"].IsNull())
    {
        if (!value["SuperClassNameRegexp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MemShellRule.SuperClassNameRegexp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_superClassNameRegexp = string(value["SuperClassNameRegexp"].GetString());
        m_superClassNameRegexpHasBeenSet = true;
    }

    if (value.HasMember("InterfacesRegexp") && !value["InterfacesRegexp"].IsNull())
    {
        if (!value["InterfacesRegexp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MemShellRule.InterfacesRegexp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_interfacesRegexp = string(value["InterfacesRegexp"].GetString());
        m_interfacesRegexpHasBeenSet = true;
    }

    if (value.HasMember("AnnotationsRegexp") && !value["AnnotationsRegexp"].IsNull())
    {
        if (!value["AnnotationsRegexp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MemShellRule.AnnotationsRegexp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_annotationsRegexp = string(value["AnnotationsRegexp"].GetString());
        m_annotationsRegexpHasBeenSet = true;
    }

    if (value.HasMember("LoaderClassNameRegexp") && !value["LoaderClassNameRegexp"].IsNull())
    {
        if (!value["LoaderClassNameRegexp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MemShellRule.LoaderClassNameRegexp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loaderClassNameRegexp = string(value["LoaderClassNameRegexp"].GetString());
        m_loaderClassNameRegexpHasBeenSet = true;
    }

    if (value.HasMember("Operator") && !value["Operator"].IsNull())
    {
        if (!value["Operator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MemShellRule.Operator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operator = string(value["Operator"].GetString());
        m_operatorHasBeenSet = true;
    }

    if (value.HasMember("IsGlobal") && !value["IsGlobal"].IsNull())
    {
        if (!value["IsGlobal"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MemShellRule.IsGlobal` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isGlobal = value["IsGlobal"].GetUint64();
        m_isGlobalHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MemShellRule.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MemShellRule.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MemShellRule.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("HandleHistory") && !value["HandleHistory"].IsNull())
    {
        if (!value["HandleHistory"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MemShellRule.HandleHistory` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_handleHistory = value["HandleHistory"].GetUint64();
        m_handleHistoryHasBeenSet = true;
    }

    if (value.HasMember("GroupID") && !value["GroupID"].IsNull())
    {
        if (!value["GroupID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MemShellRule.GroupID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupID = string(value["GroupID"].GetString());
        m_groupIDHasBeenSet = true;
    }

    if (value.HasMember("MachinesNums") && !value["MachinesNums"].IsNull())
    {
        if (!value["MachinesNums"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MemShellRule.MachinesNums` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machinesNums = string(value["MachinesNums"].GetString());
        m_machinesNumsHasBeenSet = true;
    }

    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MemShellRule.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("CodeSourceRegexp") && !value["CodeSourceRegexp"].IsNull())
    {
        if (!value["CodeSourceRegexp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MemShellRule.CodeSourceRegexp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_codeSourceRegexp = string(value["CodeSourceRegexp"].GetString());
        m_codeSourceRegexpHasBeenSet = true;
    }

    if (value.HasMember("CallStackRegexp") && !value["CallStackRegexp"].IsNull())
    {
        if (!value["CallStackRegexp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MemShellRule.CallStackRegexp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_callStackRegexp = string(value["CallStackRegexp"].GetString());
        m_callStackRegexpHasBeenSet = true;
    }

    if (value.HasMember("FileExist") && !value["FileExist"].IsNull())
    {
        if (!value["FileExist"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MemShellRule.FileExist` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_fileExist = value["FileExist"].GetUint64();
        m_fileExistHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MemShellRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_uuidHostipsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UuidHostips";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_uuidHostips.begin(); itr != m_uuidHostips.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_logicalSymbolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogicalSymbol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_logicalSymbol, allocator);
    }

    if (m_classNameRegexpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClassNameRegexp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_classNameRegexp.c_str(), allocator).Move(), allocator);
    }

    if (m_superClassNameRegexpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuperClassNameRegexp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_superClassNameRegexp.c_str(), allocator).Move(), allocator);
    }

    if (m_interfacesRegexpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InterfacesRegexp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_interfacesRegexp.c_str(), allocator).Move(), allocator);
    }

    if (m_annotationsRegexpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnnotationsRegexp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_annotationsRegexp.c_str(), allocator).Move(), allocator);
    }

    if (m_loaderClassNameRegexpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoaderClassNameRegexp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_loaderClassNameRegexp.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operator.c_str(), allocator).Move(), allocator);
    }

    if (m_isGlobalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsGlobal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isGlobal, allocator);
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
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_handleHistoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HandleHistory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_handleHistory, allocator);
    }

    if (m_groupIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupID.c_str(), allocator).Move(), allocator);
    }

    if (m_machinesNumsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachinesNums";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machinesNums.c_str(), allocator).Move(), allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_codeSourceRegexpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeSourceRegexp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_codeSourceRegexp.c_str(), allocator).Move(), allocator);
    }

    if (m_callStackRegexpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallStackRegexp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_callStackRegexp.c_str(), allocator).Move(), allocator);
    }

    if (m_fileExistHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileExist";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fileExist, allocator);
    }

}


uint64_t MemShellRule::GetId() const
{
    return m_id;
}

void MemShellRule::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool MemShellRule::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

vector<UuidHostip> MemShellRule::GetUuidHostips() const
{
    return m_uuidHostips;
}

void MemShellRule::SetUuidHostips(const vector<UuidHostip>& _uuidHostips)
{
    m_uuidHostips = _uuidHostips;
    m_uuidHostipsHasBeenSet = true;
}

bool MemShellRule::UuidHostipsHasBeenSet() const
{
    return m_uuidHostipsHasBeenSet;
}

uint64_t MemShellRule::GetLogicalSymbol() const
{
    return m_logicalSymbol;
}

void MemShellRule::SetLogicalSymbol(const uint64_t& _logicalSymbol)
{
    m_logicalSymbol = _logicalSymbol;
    m_logicalSymbolHasBeenSet = true;
}

bool MemShellRule::LogicalSymbolHasBeenSet() const
{
    return m_logicalSymbolHasBeenSet;
}

string MemShellRule::GetClassNameRegexp() const
{
    return m_classNameRegexp;
}

void MemShellRule::SetClassNameRegexp(const string& _classNameRegexp)
{
    m_classNameRegexp = _classNameRegexp;
    m_classNameRegexpHasBeenSet = true;
}

bool MemShellRule::ClassNameRegexpHasBeenSet() const
{
    return m_classNameRegexpHasBeenSet;
}

string MemShellRule::GetSuperClassNameRegexp() const
{
    return m_superClassNameRegexp;
}

void MemShellRule::SetSuperClassNameRegexp(const string& _superClassNameRegexp)
{
    m_superClassNameRegexp = _superClassNameRegexp;
    m_superClassNameRegexpHasBeenSet = true;
}

bool MemShellRule::SuperClassNameRegexpHasBeenSet() const
{
    return m_superClassNameRegexpHasBeenSet;
}

string MemShellRule::GetInterfacesRegexp() const
{
    return m_interfacesRegexp;
}

void MemShellRule::SetInterfacesRegexp(const string& _interfacesRegexp)
{
    m_interfacesRegexp = _interfacesRegexp;
    m_interfacesRegexpHasBeenSet = true;
}

bool MemShellRule::InterfacesRegexpHasBeenSet() const
{
    return m_interfacesRegexpHasBeenSet;
}

string MemShellRule::GetAnnotationsRegexp() const
{
    return m_annotationsRegexp;
}

void MemShellRule::SetAnnotationsRegexp(const string& _annotationsRegexp)
{
    m_annotationsRegexp = _annotationsRegexp;
    m_annotationsRegexpHasBeenSet = true;
}

bool MemShellRule::AnnotationsRegexpHasBeenSet() const
{
    return m_annotationsRegexpHasBeenSet;
}

string MemShellRule::GetLoaderClassNameRegexp() const
{
    return m_loaderClassNameRegexp;
}

void MemShellRule::SetLoaderClassNameRegexp(const string& _loaderClassNameRegexp)
{
    m_loaderClassNameRegexp = _loaderClassNameRegexp;
    m_loaderClassNameRegexpHasBeenSet = true;
}

bool MemShellRule::LoaderClassNameRegexpHasBeenSet() const
{
    return m_loaderClassNameRegexpHasBeenSet;
}

string MemShellRule::GetOperator() const
{
    return m_operator;
}

void MemShellRule::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool MemShellRule::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

uint64_t MemShellRule::GetIsGlobal() const
{
    return m_isGlobal;
}

void MemShellRule::SetIsGlobal(const uint64_t& _isGlobal)
{
    m_isGlobal = _isGlobal;
    m_isGlobalHasBeenSet = true;
}

bool MemShellRule::IsGlobalHasBeenSet() const
{
    return m_isGlobalHasBeenSet;
}

uint64_t MemShellRule::GetStatus() const
{
    return m_status;
}

void MemShellRule::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool MemShellRule::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string MemShellRule::GetCreateTime() const
{
    return m_createTime;
}

void MemShellRule::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool MemShellRule::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string MemShellRule::GetModifyTime() const
{
    return m_modifyTime;
}

void MemShellRule::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool MemShellRule::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

uint64_t MemShellRule::GetHandleHistory() const
{
    return m_handleHistory;
}

void MemShellRule::SetHandleHistory(const uint64_t& _handleHistory)
{
    m_handleHistory = _handleHistory;
    m_handleHistoryHasBeenSet = true;
}

bool MemShellRule::HandleHistoryHasBeenSet() const
{
    return m_handleHistoryHasBeenSet;
}

string MemShellRule::GetGroupID() const
{
    return m_groupID;
}

void MemShellRule::SetGroupID(const string& _groupID)
{
    m_groupID = _groupID;
    m_groupIDHasBeenSet = true;
}

bool MemShellRule::GroupIDHasBeenSet() const
{
    return m_groupIDHasBeenSet;
}

string MemShellRule::GetMachinesNums() const
{
    return m_machinesNums;
}

void MemShellRule::SetMachinesNums(const string& _machinesNums)
{
    m_machinesNums = _machinesNums;
    m_machinesNumsHasBeenSet = true;
}

bool MemShellRule::MachinesNumsHasBeenSet() const
{
    return m_machinesNumsHasBeenSet;
}

string MemShellRule::GetGroupName() const
{
    return m_groupName;
}

void MemShellRule::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool MemShellRule::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

string MemShellRule::GetCodeSourceRegexp() const
{
    return m_codeSourceRegexp;
}

void MemShellRule::SetCodeSourceRegexp(const string& _codeSourceRegexp)
{
    m_codeSourceRegexp = _codeSourceRegexp;
    m_codeSourceRegexpHasBeenSet = true;
}

bool MemShellRule::CodeSourceRegexpHasBeenSet() const
{
    return m_codeSourceRegexpHasBeenSet;
}

string MemShellRule::GetCallStackRegexp() const
{
    return m_callStackRegexp;
}

void MemShellRule::SetCallStackRegexp(const string& _callStackRegexp)
{
    m_callStackRegexp = _callStackRegexp;
    m_callStackRegexpHasBeenSet = true;
}

bool MemShellRule::CallStackRegexpHasBeenSet() const
{
    return m_callStackRegexpHasBeenSet;
}

uint64_t MemShellRule::GetFileExist() const
{
    return m_fileExist;
}

void MemShellRule::SetFileExist(const uint64_t& _fileExist)
{
    m_fileExist = _fileExist;
    m_fileExistHasBeenSet = true;
}

bool MemShellRule::FileExistHasBeenSet() const
{
    return m_fileExistHasBeenSet;
}

