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

#include <tencentcloud/cwp/v20180228/model/JavaMemShellDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

JavaMemShellDetail::JavaMemShellDetail() :
    m_instanceNameHasBeenSet(false),
    m_instanceStateHasBeenSet(false),
    m_privateIpHasBeenSet(false),
    m_publicIpHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_recentFoundTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_classLoaderNameHasBeenSet(false),
    m_superClassNameHasBeenSet(false),
    m_md5HasBeenSet(false),
    m_interfacesHasBeenSet(false),
    m_annotationsHasBeenSet(false),
    m_pidHasBeenSet(false),
    m_exeHasBeenSet(false),
    m_argsHasBeenSet(false),
    m_classNameHasBeenSet(false),
    m_classContentHasBeenSet(false),
    m_classContentPrettyHasBeenSet(false),
    m_eventDescriptionHasBeenSet(false),
    m_securityAdviceHasBeenSet(false),
    m_machineExtraInfoHasBeenSet(false),
    m_machineStateHasBeenSet(false)
{
}

CoreInternalOutcome JavaMemShellDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JavaMemShellDetail.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceState") && !value["InstanceState"].IsNull())
    {
        if (!value["InstanceState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JavaMemShellDetail.InstanceState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceState = string(value["InstanceState"].GetString());
        m_instanceStateHasBeenSet = true;
    }

    if (value.HasMember("PrivateIp") && !value["PrivateIp"].IsNull())
    {
        if (!value["PrivateIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JavaMemShellDetail.PrivateIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privateIp = string(value["PrivateIp"].GetString());
        m_privateIpHasBeenSet = true;
    }

    if (value.HasMember("PublicIp") && !value["PublicIp"].IsNull())
    {
        if (!value["PublicIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JavaMemShellDetail.PublicIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicIp = string(value["PublicIp"].GetString());
        m_publicIpHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `JavaMemShellDetail.Type` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetUint64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JavaMemShellDetail.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JavaMemShellDetail.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("RecentFoundTime") && !value["RecentFoundTime"].IsNull())
    {
        if (!value["RecentFoundTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JavaMemShellDetail.RecentFoundTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recentFoundTime = string(value["RecentFoundTime"].GetString());
        m_recentFoundTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `JavaMemShellDetail.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ClassLoaderName") && !value["ClassLoaderName"].IsNull())
    {
        if (!value["ClassLoaderName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JavaMemShellDetail.ClassLoaderName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_classLoaderName = string(value["ClassLoaderName"].GetString());
        m_classLoaderNameHasBeenSet = true;
    }

    if (value.HasMember("SuperClassName") && !value["SuperClassName"].IsNull())
    {
        if (!value["SuperClassName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JavaMemShellDetail.SuperClassName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_superClassName = string(value["SuperClassName"].GetString());
        m_superClassNameHasBeenSet = true;
    }

    if (value.HasMember("Md5") && !value["Md5"].IsNull())
    {
        if (!value["Md5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JavaMemShellDetail.Md5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_md5 = string(value["Md5"].GetString());
        m_md5HasBeenSet = true;
    }

    if (value.HasMember("Interfaces") && !value["Interfaces"].IsNull())
    {
        if (!value["Interfaces"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JavaMemShellDetail.Interfaces` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_interfaces = string(value["Interfaces"].GetString());
        m_interfacesHasBeenSet = true;
    }

    if (value.HasMember("Annotations") && !value["Annotations"].IsNull())
    {
        if (!value["Annotations"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JavaMemShellDetail.Annotations` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_annotations = string(value["Annotations"].GetString());
        m_annotationsHasBeenSet = true;
    }

    if (value.HasMember("Pid") && !value["Pid"].IsNull())
    {
        if (!value["Pid"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `JavaMemShellDetail.Pid` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_pid = value["Pid"].GetUint64();
        m_pidHasBeenSet = true;
    }

    if (value.HasMember("Exe") && !value["Exe"].IsNull())
    {
        if (!value["Exe"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JavaMemShellDetail.Exe` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_exe = string(value["Exe"].GetString());
        m_exeHasBeenSet = true;
    }

    if (value.HasMember("Args") && !value["Args"].IsNull())
    {
        if (!value["Args"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JavaMemShellDetail.Args` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_args = string(value["Args"].GetString());
        m_argsHasBeenSet = true;
    }

    if (value.HasMember("ClassName") && !value["ClassName"].IsNull())
    {
        if (!value["ClassName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JavaMemShellDetail.ClassName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_className = string(value["ClassName"].GetString());
        m_classNameHasBeenSet = true;
    }

    if (value.HasMember("ClassContent") && !value["ClassContent"].IsNull())
    {
        if (!value["ClassContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JavaMemShellDetail.ClassContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_classContent = string(value["ClassContent"].GetString());
        m_classContentHasBeenSet = true;
    }

    if (value.HasMember("ClassContentPretty") && !value["ClassContentPretty"].IsNull())
    {
        if (!value["ClassContentPretty"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JavaMemShellDetail.ClassContentPretty` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_classContentPretty = string(value["ClassContentPretty"].GetString());
        m_classContentPrettyHasBeenSet = true;
    }

    if (value.HasMember("EventDescription") && !value["EventDescription"].IsNull())
    {
        if (!value["EventDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JavaMemShellDetail.EventDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventDescription = string(value["EventDescription"].GetString());
        m_eventDescriptionHasBeenSet = true;
    }

    if (value.HasMember("SecurityAdvice") && !value["SecurityAdvice"].IsNull())
    {
        if (!value["SecurityAdvice"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JavaMemShellDetail.SecurityAdvice` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_securityAdvice = string(value["SecurityAdvice"].GetString());
        m_securityAdviceHasBeenSet = true;
    }

    if (value.HasMember("MachineExtraInfo") && !value["MachineExtraInfo"].IsNull())
    {
        if (!value["MachineExtraInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `JavaMemShellDetail.MachineExtraInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_machineExtraInfo.Deserialize(value["MachineExtraInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_machineExtraInfoHasBeenSet = true;
    }

    if (value.HasMember("MachineState") && !value["MachineState"].IsNull())
    {
        if (!value["MachineState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JavaMemShellDetail.MachineState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineState = string(value["MachineState"].GetString());
        m_machineStateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void JavaMemShellDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceState.c_str(), allocator).Move(), allocator);
    }

    if (m_privateIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_privateIp.c_str(), allocator).Move(), allocator);
    }

    if (m_publicIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicIp.c_str(), allocator).Move(), allocator);
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

    if (m_classLoaderNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClassLoaderName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_classLoaderName.c_str(), allocator).Move(), allocator);
    }

    if (m_superClassNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuperClassName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_superClassName.c_str(), allocator).Move(), allocator);
    }

    if (m_md5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Md5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_md5.c_str(), allocator).Move(), allocator);
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

    if (m_pidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pid, allocator);
    }

    if (m_exeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Exe";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_exe.c_str(), allocator).Move(), allocator);
    }

    if (m_argsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Args";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_args.c_str(), allocator).Move(), allocator);
    }

    if (m_classNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClassName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_className.c_str(), allocator).Move(), allocator);
    }

    if (m_classContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClassContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_classContent.c_str(), allocator).Move(), allocator);
    }

    if (m_classContentPrettyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClassContentPretty";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_classContentPretty.c_str(), allocator).Move(), allocator);
    }

    if (m_eventDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_securityAdviceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityAdvice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_securityAdvice.c_str(), allocator).Move(), allocator);
    }

    if (m_machineExtraInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineExtraInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_machineExtraInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_machineStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineState.c_str(), allocator).Move(), allocator);
    }

}


string JavaMemShellDetail::GetInstanceName() const
{
    return m_instanceName;
}

void JavaMemShellDetail::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool JavaMemShellDetail::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string JavaMemShellDetail::GetInstanceState() const
{
    return m_instanceState;
}

void JavaMemShellDetail::SetInstanceState(const string& _instanceState)
{
    m_instanceState = _instanceState;
    m_instanceStateHasBeenSet = true;
}

bool JavaMemShellDetail::InstanceStateHasBeenSet() const
{
    return m_instanceStateHasBeenSet;
}

string JavaMemShellDetail::GetPrivateIp() const
{
    return m_privateIp;
}

void JavaMemShellDetail::SetPrivateIp(const string& _privateIp)
{
    m_privateIp = _privateIp;
    m_privateIpHasBeenSet = true;
}

bool JavaMemShellDetail::PrivateIpHasBeenSet() const
{
    return m_privateIpHasBeenSet;
}

string JavaMemShellDetail::GetPublicIp() const
{
    return m_publicIp;
}

void JavaMemShellDetail::SetPublicIp(const string& _publicIp)
{
    m_publicIp = _publicIp;
    m_publicIpHasBeenSet = true;
}

bool JavaMemShellDetail::PublicIpHasBeenSet() const
{
    return m_publicIpHasBeenSet;
}

uint64_t JavaMemShellDetail::GetType() const
{
    return m_type;
}

void JavaMemShellDetail::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool JavaMemShellDetail::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string JavaMemShellDetail::GetDescription() const
{
    return m_description;
}

void JavaMemShellDetail::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool JavaMemShellDetail::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string JavaMemShellDetail::GetCreateTime() const
{
    return m_createTime;
}

void JavaMemShellDetail::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool JavaMemShellDetail::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string JavaMemShellDetail::GetRecentFoundTime() const
{
    return m_recentFoundTime;
}

void JavaMemShellDetail::SetRecentFoundTime(const string& _recentFoundTime)
{
    m_recentFoundTime = _recentFoundTime;
    m_recentFoundTimeHasBeenSet = true;
}

bool JavaMemShellDetail::RecentFoundTimeHasBeenSet() const
{
    return m_recentFoundTimeHasBeenSet;
}

uint64_t JavaMemShellDetail::GetStatus() const
{
    return m_status;
}

void JavaMemShellDetail::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool JavaMemShellDetail::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string JavaMemShellDetail::GetClassLoaderName() const
{
    return m_classLoaderName;
}

void JavaMemShellDetail::SetClassLoaderName(const string& _classLoaderName)
{
    m_classLoaderName = _classLoaderName;
    m_classLoaderNameHasBeenSet = true;
}

bool JavaMemShellDetail::ClassLoaderNameHasBeenSet() const
{
    return m_classLoaderNameHasBeenSet;
}

string JavaMemShellDetail::GetSuperClassName() const
{
    return m_superClassName;
}

void JavaMemShellDetail::SetSuperClassName(const string& _superClassName)
{
    m_superClassName = _superClassName;
    m_superClassNameHasBeenSet = true;
}

bool JavaMemShellDetail::SuperClassNameHasBeenSet() const
{
    return m_superClassNameHasBeenSet;
}

string JavaMemShellDetail::GetMd5() const
{
    return m_md5;
}

void JavaMemShellDetail::SetMd5(const string& _md5)
{
    m_md5 = _md5;
    m_md5HasBeenSet = true;
}

bool JavaMemShellDetail::Md5HasBeenSet() const
{
    return m_md5HasBeenSet;
}

string JavaMemShellDetail::GetInterfaces() const
{
    return m_interfaces;
}

void JavaMemShellDetail::SetInterfaces(const string& _interfaces)
{
    m_interfaces = _interfaces;
    m_interfacesHasBeenSet = true;
}

bool JavaMemShellDetail::InterfacesHasBeenSet() const
{
    return m_interfacesHasBeenSet;
}

string JavaMemShellDetail::GetAnnotations() const
{
    return m_annotations;
}

void JavaMemShellDetail::SetAnnotations(const string& _annotations)
{
    m_annotations = _annotations;
    m_annotationsHasBeenSet = true;
}

bool JavaMemShellDetail::AnnotationsHasBeenSet() const
{
    return m_annotationsHasBeenSet;
}

uint64_t JavaMemShellDetail::GetPid() const
{
    return m_pid;
}

void JavaMemShellDetail::SetPid(const uint64_t& _pid)
{
    m_pid = _pid;
    m_pidHasBeenSet = true;
}

bool JavaMemShellDetail::PidHasBeenSet() const
{
    return m_pidHasBeenSet;
}

string JavaMemShellDetail::GetExe() const
{
    return m_exe;
}

void JavaMemShellDetail::SetExe(const string& _exe)
{
    m_exe = _exe;
    m_exeHasBeenSet = true;
}

bool JavaMemShellDetail::ExeHasBeenSet() const
{
    return m_exeHasBeenSet;
}

string JavaMemShellDetail::GetArgs() const
{
    return m_args;
}

void JavaMemShellDetail::SetArgs(const string& _args)
{
    m_args = _args;
    m_argsHasBeenSet = true;
}

bool JavaMemShellDetail::ArgsHasBeenSet() const
{
    return m_argsHasBeenSet;
}

string JavaMemShellDetail::GetClassName() const
{
    return m_className;
}

void JavaMemShellDetail::SetClassName(const string& _className)
{
    m_className = _className;
    m_classNameHasBeenSet = true;
}

bool JavaMemShellDetail::ClassNameHasBeenSet() const
{
    return m_classNameHasBeenSet;
}

string JavaMemShellDetail::GetClassContent() const
{
    return m_classContent;
}

void JavaMemShellDetail::SetClassContent(const string& _classContent)
{
    m_classContent = _classContent;
    m_classContentHasBeenSet = true;
}

bool JavaMemShellDetail::ClassContentHasBeenSet() const
{
    return m_classContentHasBeenSet;
}

string JavaMemShellDetail::GetClassContentPretty() const
{
    return m_classContentPretty;
}

void JavaMemShellDetail::SetClassContentPretty(const string& _classContentPretty)
{
    m_classContentPretty = _classContentPretty;
    m_classContentPrettyHasBeenSet = true;
}

bool JavaMemShellDetail::ClassContentPrettyHasBeenSet() const
{
    return m_classContentPrettyHasBeenSet;
}

string JavaMemShellDetail::GetEventDescription() const
{
    return m_eventDescription;
}

void JavaMemShellDetail::SetEventDescription(const string& _eventDescription)
{
    m_eventDescription = _eventDescription;
    m_eventDescriptionHasBeenSet = true;
}

bool JavaMemShellDetail::EventDescriptionHasBeenSet() const
{
    return m_eventDescriptionHasBeenSet;
}

string JavaMemShellDetail::GetSecurityAdvice() const
{
    return m_securityAdvice;
}

void JavaMemShellDetail::SetSecurityAdvice(const string& _securityAdvice)
{
    m_securityAdvice = _securityAdvice;
    m_securityAdviceHasBeenSet = true;
}

bool JavaMemShellDetail::SecurityAdviceHasBeenSet() const
{
    return m_securityAdviceHasBeenSet;
}

MachineExtraInfo JavaMemShellDetail::GetMachineExtraInfo() const
{
    return m_machineExtraInfo;
}

void JavaMemShellDetail::SetMachineExtraInfo(const MachineExtraInfo& _machineExtraInfo)
{
    m_machineExtraInfo = _machineExtraInfo;
    m_machineExtraInfoHasBeenSet = true;
}

bool JavaMemShellDetail::MachineExtraInfoHasBeenSet() const
{
    return m_machineExtraInfoHasBeenSet;
}

string JavaMemShellDetail::GetMachineState() const
{
    return m_machineState;
}

void JavaMemShellDetail::SetMachineState(const string& _machineState)
{
    m_machineState = _machineState;
    m_machineStateHasBeenSet = true;
}

bool JavaMemShellDetail::MachineStateHasBeenSet() const
{
    return m_machineStateHasBeenSet;
}

