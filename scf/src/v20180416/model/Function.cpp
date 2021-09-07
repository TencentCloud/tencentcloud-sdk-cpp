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

#include <tencentcloud/scf/v20180416/model/Function.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Scf::V20180416::Model;
using namespace std;

Function::Function() :
    m_modTimeHasBeenSet(false),
    m_addTimeHasBeenSet(false),
    m_runtimeHasBeenSet(false),
    m_functionNameHasBeenSet(false),
    m_functionIdHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statusDescHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_statusReasonsHasBeenSet(false),
    m_totalProvisionedConcurrencyMemHasBeenSet(false),
    m_reservedConcurrencyMemHasBeenSet(false),
    m_asyncRunEnableHasBeenSet(false),
    m_traceEnableHasBeenSet(false)
{
}

CoreInternalOutcome Function::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ModTime") && !value["ModTime"].IsNull())
    {
        if (!value["ModTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Function.ModTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modTime = string(value["ModTime"].GetString());
        m_modTimeHasBeenSet = true;
    }

    if (value.HasMember("AddTime") && !value["AddTime"].IsNull())
    {
        if (!value["AddTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Function.AddTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addTime = string(value["AddTime"].GetString());
        m_addTimeHasBeenSet = true;
    }

    if (value.HasMember("Runtime") && !value["Runtime"].IsNull())
    {
        if (!value["Runtime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Function.Runtime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runtime = string(value["Runtime"].GetString());
        m_runtimeHasBeenSet = true;
    }

    if (value.HasMember("FunctionName") && !value["FunctionName"].IsNull())
    {
        if (!value["FunctionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Function.FunctionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_functionName = string(value["FunctionName"].GetString());
        m_functionNameHasBeenSet = true;
    }

    if (value.HasMember("FunctionId") && !value["FunctionId"].IsNull())
    {
        if (!value["FunctionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Function.FunctionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_functionId = string(value["FunctionId"].GetString());
        m_functionIdHasBeenSet = true;
    }

    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Function.Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(value["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Function.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("StatusDesc") && !value["StatusDesc"].IsNull())
    {
        if (!value["StatusDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Function.StatusDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusDesc = string(value["StatusDesc"].GetString());
        m_statusDescHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Function.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Function.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Function.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("StatusReasons") && !value["StatusReasons"].IsNull())
    {
        if (!value["StatusReasons"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Function.StatusReasons` is not array type"));

        const rapidjson::Value &tmpValue = value["StatusReasons"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            StatusReason item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_statusReasons.push_back(item);
        }
        m_statusReasonsHasBeenSet = true;
    }

    if (value.HasMember("TotalProvisionedConcurrencyMem") && !value["TotalProvisionedConcurrencyMem"].IsNull())
    {
        if (!value["TotalProvisionedConcurrencyMem"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Function.TotalProvisionedConcurrencyMem` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalProvisionedConcurrencyMem = value["TotalProvisionedConcurrencyMem"].GetUint64();
        m_totalProvisionedConcurrencyMemHasBeenSet = true;
    }

    if (value.HasMember("ReservedConcurrencyMem") && !value["ReservedConcurrencyMem"].IsNull())
    {
        if (!value["ReservedConcurrencyMem"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Function.ReservedConcurrencyMem` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_reservedConcurrencyMem = value["ReservedConcurrencyMem"].GetUint64();
        m_reservedConcurrencyMemHasBeenSet = true;
    }

    if (value.HasMember("AsyncRunEnable") && !value["AsyncRunEnable"].IsNull())
    {
        if (!value["AsyncRunEnable"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Function.AsyncRunEnable` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_asyncRunEnable = string(value["AsyncRunEnable"].GetString());
        m_asyncRunEnableHasBeenSet = true;
    }

    if (value.HasMember("TraceEnable") && !value["TraceEnable"].IsNull())
    {
        if (!value["TraceEnable"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Function.TraceEnable` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_traceEnable = string(value["TraceEnable"].GetString());
        m_traceEnableHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Function::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_modTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modTime.c_str(), allocator).Move(), allocator);
    }

    if (m_addTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_addTime.c_str(), allocator).Move(), allocator);
    }

    if (m_runtimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Runtime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runtime.c_str(), allocator).Move(), allocator);
    }

    if (m_functionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FunctionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_functionName.c_str(), allocator).Move(), allocator);
    }

    if (m_functionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FunctionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_functionId.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_statusDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_statusDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_statusReasonsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusReasons";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_statusReasons.begin(); itr != m_statusReasons.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_totalProvisionedConcurrencyMemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalProvisionedConcurrencyMem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalProvisionedConcurrencyMem, allocator);
    }

    if (m_reservedConcurrencyMemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReservedConcurrencyMem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_reservedConcurrencyMem, allocator);
    }

    if (m_asyncRunEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AsyncRunEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_asyncRunEnable.c_str(), allocator).Move(), allocator);
    }

    if (m_traceEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TraceEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_traceEnable.c_str(), allocator).Move(), allocator);
    }

}


string Function::GetModTime() const
{
    return m_modTime;
}

void Function::SetModTime(const string& _modTime)
{
    m_modTime = _modTime;
    m_modTimeHasBeenSet = true;
}

bool Function::ModTimeHasBeenSet() const
{
    return m_modTimeHasBeenSet;
}

string Function::GetAddTime() const
{
    return m_addTime;
}

void Function::SetAddTime(const string& _addTime)
{
    m_addTime = _addTime;
    m_addTimeHasBeenSet = true;
}

bool Function::AddTimeHasBeenSet() const
{
    return m_addTimeHasBeenSet;
}

string Function::GetRuntime() const
{
    return m_runtime;
}

void Function::SetRuntime(const string& _runtime)
{
    m_runtime = _runtime;
    m_runtimeHasBeenSet = true;
}

bool Function::RuntimeHasBeenSet() const
{
    return m_runtimeHasBeenSet;
}

string Function::GetFunctionName() const
{
    return m_functionName;
}

void Function::SetFunctionName(const string& _functionName)
{
    m_functionName = _functionName;
    m_functionNameHasBeenSet = true;
}

bool Function::FunctionNameHasBeenSet() const
{
    return m_functionNameHasBeenSet;
}

string Function::GetFunctionId() const
{
    return m_functionId;
}

void Function::SetFunctionId(const string& _functionId)
{
    m_functionId = _functionId;
    m_functionIdHasBeenSet = true;
}

bool Function::FunctionIdHasBeenSet() const
{
    return m_functionIdHasBeenSet;
}

string Function::GetNamespace() const
{
    return m_namespace;
}

void Function::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool Function::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string Function::GetStatus() const
{
    return m_status;
}

void Function::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool Function::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string Function::GetStatusDesc() const
{
    return m_statusDesc;
}

void Function::SetStatusDesc(const string& _statusDesc)
{
    m_statusDesc = _statusDesc;
    m_statusDescHasBeenSet = true;
}

bool Function::StatusDescHasBeenSet() const
{
    return m_statusDescHasBeenSet;
}

string Function::GetDescription() const
{
    return m_description;
}

void Function::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool Function::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

vector<Tag> Function::GetTags() const
{
    return m_tags;
}

void Function::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool Function::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string Function::GetType() const
{
    return m_type;
}

void Function::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool Function::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

vector<StatusReason> Function::GetStatusReasons() const
{
    return m_statusReasons;
}

void Function::SetStatusReasons(const vector<StatusReason>& _statusReasons)
{
    m_statusReasons = _statusReasons;
    m_statusReasonsHasBeenSet = true;
}

bool Function::StatusReasonsHasBeenSet() const
{
    return m_statusReasonsHasBeenSet;
}

uint64_t Function::GetTotalProvisionedConcurrencyMem() const
{
    return m_totalProvisionedConcurrencyMem;
}

void Function::SetTotalProvisionedConcurrencyMem(const uint64_t& _totalProvisionedConcurrencyMem)
{
    m_totalProvisionedConcurrencyMem = _totalProvisionedConcurrencyMem;
    m_totalProvisionedConcurrencyMemHasBeenSet = true;
}

bool Function::TotalProvisionedConcurrencyMemHasBeenSet() const
{
    return m_totalProvisionedConcurrencyMemHasBeenSet;
}

uint64_t Function::GetReservedConcurrencyMem() const
{
    return m_reservedConcurrencyMem;
}

void Function::SetReservedConcurrencyMem(const uint64_t& _reservedConcurrencyMem)
{
    m_reservedConcurrencyMem = _reservedConcurrencyMem;
    m_reservedConcurrencyMemHasBeenSet = true;
}

bool Function::ReservedConcurrencyMemHasBeenSet() const
{
    return m_reservedConcurrencyMemHasBeenSet;
}

string Function::GetAsyncRunEnable() const
{
    return m_asyncRunEnable;
}

void Function::SetAsyncRunEnable(const string& _asyncRunEnable)
{
    m_asyncRunEnable = _asyncRunEnable;
    m_asyncRunEnableHasBeenSet = true;
}

bool Function::AsyncRunEnableHasBeenSet() const
{
    return m_asyncRunEnableHasBeenSet;
}

string Function::GetTraceEnable() const
{
    return m_traceEnable;
}

void Function::SetTraceEnable(const string& _traceEnable)
{
    m_traceEnable = _traceEnable;
    m_traceEnableHasBeenSet = true;
}

bool Function::TraceEnableHasBeenSet() const
{
    return m_traceEnableHasBeenSet;
}

