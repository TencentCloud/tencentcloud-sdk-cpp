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

#include <tencentcloud/tse/v20201207/model/GovernanceServiceContract.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

GovernanceServiceContract::GovernanceServiceContract() :
    m_nameHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_iDHasBeenSet(false),
    m_serviceHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_revisionHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_interfacesHasBeenSet(false),
    m_metadatasHasBeenSet(false)
{
}

CoreInternalOutcome GovernanceServiceContract::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceServiceContract.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceServiceContract.Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(value["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceServiceContract.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceServiceContract.ID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iD = string(value["ID"].GetString());
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("Service") && !value["Service"].IsNull())
    {
        if (!value["Service"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceServiceContract.Service` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_service = string(value["Service"].GetString());
        m_serviceHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceServiceContract.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("Revision") && !value["Revision"].IsNull())
    {
        if (!value["Revision"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceServiceContract.Revision` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_revision = string(value["Revision"].GetString());
        m_revisionHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceServiceContract.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceServiceContract.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceServiceContract.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("Interfaces") && !value["Interfaces"].IsNull())
    {
        if (!value["Interfaces"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GovernanceServiceContract.Interfaces` is not array type"));

        const rapidjson::Value &tmpValue = value["Interfaces"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            GovernanceInterfaceDescription item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_interfaces.push_back(item);
        }
        m_interfacesHasBeenSet = true;
    }

    if (value.HasMember("Metadatas") && !value["Metadatas"].IsNull())
    {
        if (!value["Metadatas"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GovernanceServiceContract.Metadatas` is not array type"));

        const rapidjson::Value &tmpValue = value["Metadatas"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Metadata item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_metadatas.push_back(item);
        }
        m_metadatasHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GovernanceServiceContract::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iD.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Service";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_service.c_str(), allocator).Move(), allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_revisionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Revision";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_revision.c_str(), allocator).Move(), allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
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

    if (m_interfacesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Interfaces";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_interfaces.begin(); itr != m_interfaces.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_metadatasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Metadatas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_metadatas.begin(); itr != m_metadatas.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string GovernanceServiceContract::GetName() const
{
    return m_name;
}

void GovernanceServiceContract::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool GovernanceServiceContract::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string GovernanceServiceContract::GetNamespace() const
{
    return m_namespace;
}

void GovernanceServiceContract::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool GovernanceServiceContract::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string GovernanceServiceContract::GetProtocol() const
{
    return m_protocol;
}

void GovernanceServiceContract::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool GovernanceServiceContract::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string GovernanceServiceContract::GetID() const
{
    return m_iD;
}

void GovernanceServiceContract::SetID(const string& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool GovernanceServiceContract::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string GovernanceServiceContract::GetService() const
{
    return m_service;
}

void GovernanceServiceContract::SetService(const string& _service)
{
    m_service = _service;
    m_serviceHasBeenSet = true;
}

bool GovernanceServiceContract::ServiceHasBeenSet() const
{
    return m_serviceHasBeenSet;
}

string GovernanceServiceContract::GetVersion() const
{
    return m_version;
}

void GovernanceServiceContract::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool GovernanceServiceContract::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string GovernanceServiceContract::GetRevision() const
{
    return m_revision;
}

void GovernanceServiceContract::SetRevision(const string& _revision)
{
    m_revision = _revision;
    m_revisionHasBeenSet = true;
}

bool GovernanceServiceContract::RevisionHasBeenSet() const
{
    return m_revisionHasBeenSet;
}

string GovernanceServiceContract::GetContent() const
{
    return m_content;
}

void GovernanceServiceContract::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool GovernanceServiceContract::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

string GovernanceServiceContract::GetCreateTime() const
{
    return m_createTime;
}

void GovernanceServiceContract::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool GovernanceServiceContract::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string GovernanceServiceContract::GetModifyTime() const
{
    return m_modifyTime;
}

void GovernanceServiceContract::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool GovernanceServiceContract::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

vector<GovernanceInterfaceDescription> GovernanceServiceContract::GetInterfaces() const
{
    return m_interfaces;
}

void GovernanceServiceContract::SetInterfaces(const vector<GovernanceInterfaceDescription>& _interfaces)
{
    m_interfaces = _interfaces;
    m_interfacesHasBeenSet = true;
}

bool GovernanceServiceContract::InterfacesHasBeenSet() const
{
    return m_interfacesHasBeenSet;
}

vector<Metadata> GovernanceServiceContract::GetMetadatas() const
{
    return m_metadatas;
}

void GovernanceServiceContract::SetMetadatas(const vector<Metadata>& _metadatas)
{
    m_metadatas = _metadatas;
    m_metadatasHasBeenSet = true;
}

bool GovernanceServiceContract::MetadatasHasBeenSet() const
{
    return m_metadatasHasBeenSet;
}

