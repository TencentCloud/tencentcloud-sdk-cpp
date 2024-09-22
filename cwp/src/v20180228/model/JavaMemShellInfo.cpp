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

#include <tencentcloud/cwp/v20180228/model/JavaMemShellInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

JavaMemShellInfo::JavaMemShellInfo() :
    m_idHasBeenSet(false),
    m_aliasHasBeenSet(false),
    m_hostIpHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_recentFoundTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_quuidHasBeenSet(false),
    m_machineExtraInfoHasBeenSet(false),
    m_uuidHasBeenSet(false),
    m_classNameHasBeenSet(false),
    m_superClassNameHasBeenSet(false),
    m_interfacesHasBeenSet(false),
    m_annotationsHasBeenSet(false),
    m_loaderClassNameHasBeenSet(false)
{
}

CoreInternalOutcome JavaMemShellInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `JavaMemShellInfo.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Alias") && !value["Alias"].IsNull())
    {
        if (!value["Alias"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JavaMemShellInfo.Alias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alias = string(value["Alias"].GetString());
        m_aliasHasBeenSet = true;
    }

    if (value.HasMember("HostIp") && !value["HostIp"].IsNull())
    {
        if (!value["HostIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JavaMemShellInfo.HostIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostIp = string(value["HostIp"].GetString());
        m_hostIpHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `JavaMemShellInfo.Type` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetUint64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JavaMemShellInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JavaMemShellInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("RecentFoundTime") && !value["RecentFoundTime"].IsNull())
    {
        if (!value["RecentFoundTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JavaMemShellInfo.RecentFoundTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recentFoundTime = string(value["RecentFoundTime"].GetString());
        m_recentFoundTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `JavaMemShellInfo.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Quuid") && !value["Quuid"].IsNull())
    {
        if (!value["Quuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JavaMemShellInfo.Quuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quuid = string(value["Quuid"].GetString());
        m_quuidHasBeenSet = true;
    }

    if (value.HasMember("MachineExtraInfo") && !value["MachineExtraInfo"].IsNull())
    {
        if (!value["MachineExtraInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `JavaMemShellInfo.MachineExtraInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_machineExtraInfo.Deserialize(value["MachineExtraInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_machineExtraInfoHasBeenSet = true;
    }

    if (value.HasMember("Uuid") && !value["Uuid"].IsNull())
    {
        if (!value["Uuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JavaMemShellInfo.Uuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uuid = string(value["Uuid"].GetString());
        m_uuidHasBeenSet = true;
    }

    if (value.HasMember("ClassName") && !value["ClassName"].IsNull())
    {
        if (!value["ClassName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JavaMemShellInfo.ClassName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_className = string(value["ClassName"].GetString());
        m_classNameHasBeenSet = true;
    }

    if (value.HasMember("SuperClassName") && !value["SuperClassName"].IsNull())
    {
        if (!value["SuperClassName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JavaMemShellInfo.SuperClassName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_superClassName = string(value["SuperClassName"].GetString());
        m_superClassNameHasBeenSet = true;
    }

    if (value.HasMember("Interfaces") && !value["Interfaces"].IsNull())
    {
        if (!value["Interfaces"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JavaMemShellInfo.Interfaces` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_interfaces = string(value["Interfaces"].GetString());
        m_interfacesHasBeenSet = true;
    }

    if (value.HasMember("Annotations") && !value["Annotations"].IsNull())
    {
        if (!value["Annotations"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JavaMemShellInfo.Annotations` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_annotations = string(value["Annotations"].GetString());
        m_annotationsHasBeenSet = true;
    }

    if (value.HasMember("LoaderClassName") && !value["LoaderClassName"].IsNull())
    {
        if (!value["LoaderClassName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JavaMemShellInfo.LoaderClassName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loaderClassName = string(value["LoaderClassName"].GetString());
        m_loaderClassNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void JavaMemShellInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_aliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Alias";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alias.c_str(), allocator).Move(), allocator);
    }

    if (m_hostIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostIp.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_recentFoundTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecentFoundTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recentFoundTime.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_quuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_quuid.c_str(), allocator).Move(), allocator);
    }

    if (m_machineExtraInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineExtraInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_machineExtraInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_uuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uuid.c_str(), allocator).Move(), allocator);
    }

    if (m_classNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClassName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_className.c_str(), allocator).Move(), allocator);
    }

    if (m_superClassNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuperClassName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_superClassName.c_str(), allocator).Move(), allocator);
    }

    if (m_interfacesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Interfaces";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_interfaces.c_str(), allocator).Move(), allocator);
    }

    if (m_annotationsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Annotations";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_annotations.c_str(), allocator).Move(), allocator);
    }

    if (m_loaderClassNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoaderClassName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_loaderClassName.c_str(), allocator).Move(), allocator);
    }

}


uint64_t JavaMemShellInfo::GetId() const
{
    return m_id;
}

void JavaMemShellInfo::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool JavaMemShellInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string JavaMemShellInfo::GetAlias() const
{
    return m_alias;
}

void JavaMemShellInfo::SetAlias(const string& _alias)
{
    m_alias = _alias;
    m_aliasHasBeenSet = true;
}

bool JavaMemShellInfo::AliasHasBeenSet() const
{
    return m_aliasHasBeenSet;
}

string JavaMemShellInfo::GetHostIp() const
{
    return m_hostIp;
}

void JavaMemShellInfo::SetHostIp(const string& _hostIp)
{
    m_hostIp = _hostIp;
    m_hostIpHasBeenSet = true;
}

bool JavaMemShellInfo::HostIpHasBeenSet() const
{
    return m_hostIpHasBeenSet;
}

uint64_t JavaMemShellInfo::GetType() const
{
    return m_type;
}

void JavaMemShellInfo::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool JavaMemShellInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string JavaMemShellInfo::GetDescription() const
{
    return m_description;
}

void JavaMemShellInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool JavaMemShellInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string JavaMemShellInfo::GetCreateTime() const
{
    return m_createTime;
}

void JavaMemShellInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool JavaMemShellInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string JavaMemShellInfo::GetRecentFoundTime() const
{
    return m_recentFoundTime;
}

void JavaMemShellInfo::SetRecentFoundTime(const string& _recentFoundTime)
{
    m_recentFoundTime = _recentFoundTime;
    m_recentFoundTimeHasBeenSet = true;
}

bool JavaMemShellInfo::RecentFoundTimeHasBeenSet() const
{
    return m_recentFoundTimeHasBeenSet;
}

uint64_t JavaMemShellInfo::GetStatus() const
{
    return m_status;
}

void JavaMemShellInfo::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool JavaMemShellInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string JavaMemShellInfo::GetQuuid() const
{
    return m_quuid;
}

void JavaMemShellInfo::SetQuuid(const string& _quuid)
{
    m_quuid = _quuid;
    m_quuidHasBeenSet = true;
}

bool JavaMemShellInfo::QuuidHasBeenSet() const
{
    return m_quuidHasBeenSet;
}

MachineExtraInfo JavaMemShellInfo::GetMachineExtraInfo() const
{
    return m_machineExtraInfo;
}

void JavaMemShellInfo::SetMachineExtraInfo(const MachineExtraInfo& _machineExtraInfo)
{
    m_machineExtraInfo = _machineExtraInfo;
    m_machineExtraInfoHasBeenSet = true;
}

bool JavaMemShellInfo::MachineExtraInfoHasBeenSet() const
{
    return m_machineExtraInfoHasBeenSet;
}

string JavaMemShellInfo::GetUuid() const
{
    return m_uuid;
}

void JavaMemShellInfo::SetUuid(const string& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool JavaMemShellInfo::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}

string JavaMemShellInfo::GetClassName() const
{
    return m_className;
}

void JavaMemShellInfo::SetClassName(const string& _className)
{
    m_className = _className;
    m_classNameHasBeenSet = true;
}

bool JavaMemShellInfo::ClassNameHasBeenSet() const
{
    return m_classNameHasBeenSet;
}

string JavaMemShellInfo::GetSuperClassName() const
{
    return m_superClassName;
}

void JavaMemShellInfo::SetSuperClassName(const string& _superClassName)
{
    m_superClassName = _superClassName;
    m_superClassNameHasBeenSet = true;
}

bool JavaMemShellInfo::SuperClassNameHasBeenSet() const
{
    return m_superClassNameHasBeenSet;
}

string JavaMemShellInfo::GetInterfaces() const
{
    return m_interfaces;
}

void JavaMemShellInfo::SetInterfaces(const string& _interfaces)
{
    m_interfaces = _interfaces;
    m_interfacesHasBeenSet = true;
}

bool JavaMemShellInfo::InterfacesHasBeenSet() const
{
    return m_interfacesHasBeenSet;
}

string JavaMemShellInfo::GetAnnotations() const
{
    return m_annotations;
}

void JavaMemShellInfo::SetAnnotations(const string& _annotations)
{
    m_annotations = _annotations;
    m_annotationsHasBeenSet = true;
}

bool JavaMemShellInfo::AnnotationsHasBeenSet() const
{
    return m_annotationsHasBeenSet;
}

string JavaMemShellInfo::GetLoaderClassName() const
{
    return m_loaderClassName;
}

void JavaMemShellInfo::SetLoaderClassName(const string& _loaderClassName)
{
    m_loaderClassName = _loaderClassName;
    m_loaderClassNameHasBeenSet = true;
}

bool JavaMemShellInfo::LoaderClassNameHasBeenSet() const
{
    return m_loaderClassNameHasBeenSet;
}

