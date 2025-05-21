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

#include <tencentcloud/tse/v20201207/model/GovernanceAlias.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

GovernanceAlias::GovernanceAlias() :
    m_aliasHasBeenSet(false),
    m_aliasNamespaceHasBeenSet(false),
    m_serviceHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_idHasBeenSet(false),
    m_editableHasBeenSet(false),
    m_metadatasHasBeenSet(false)
{
}

CoreInternalOutcome GovernanceAlias::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Alias") && !value["Alias"].IsNull())
    {
        if (!value["Alias"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceAlias.Alias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alias = string(value["Alias"].GetString());
        m_aliasHasBeenSet = true;
    }

    if (value.HasMember("AliasNamespace") && !value["AliasNamespace"].IsNull())
    {
        if (!value["AliasNamespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceAlias.AliasNamespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aliasNamespace = string(value["AliasNamespace"].GetString());
        m_aliasNamespaceHasBeenSet = true;
    }

    if (value.HasMember("Service") && !value["Service"].IsNull())
    {
        if (!value["Service"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceAlias.Service` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_service = string(value["Service"].GetString());
        m_serviceHasBeenSet = true;
    }

    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceAlias.Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(value["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }

    if (value.HasMember("Comment") && !value["Comment"].IsNull())
    {
        if (!value["Comment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceAlias.Comment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comment = string(value["Comment"].GetString());
        m_commentHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceAlias.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceAlias.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceAlias.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Editable") && !value["Editable"].IsNull())
    {
        if (!value["Editable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `GovernanceAlias.Editable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_editable = value["Editable"].GetBool();
        m_editableHasBeenSet = true;
    }

    if (value.HasMember("Metadatas") && !value["Metadatas"].IsNull())
    {
        if (!value["Metadatas"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GovernanceAlias.Metadatas` is not array type"));

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

void GovernanceAlias::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_aliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Alias";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alias.c_str(), allocator).Move(), allocator);
    }

    if (m_aliasNamespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AliasNamespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aliasNamespace.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Service";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_service.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_commentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_comment.c_str(), allocator).Move(), allocator);
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

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_editableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Editable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_editable, allocator);
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


string GovernanceAlias::GetAlias() const
{
    return m_alias;
}

void GovernanceAlias::SetAlias(const string& _alias)
{
    m_alias = _alias;
    m_aliasHasBeenSet = true;
}

bool GovernanceAlias::AliasHasBeenSet() const
{
    return m_aliasHasBeenSet;
}

string GovernanceAlias::GetAliasNamespace() const
{
    return m_aliasNamespace;
}

void GovernanceAlias::SetAliasNamespace(const string& _aliasNamespace)
{
    m_aliasNamespace = _aliasNamespace;
    m_aliasNamespaceHasBeenSet = true;
}

bool GovernanceAlias::AliasNamespaceHasBeenSet() const
{
    return m_aliasNamespaceHasBeenSet;
}

string GovernanceAlias::GetService() const
{
    return m_service;
}

void GovernanceAlias::SetService(const string& _service)
{
    m_service = _service;
    m_serviceHasBeenSet = true;
}

bool GovernanceAlias::ServiceHasBeenSet() const
{
    return m_serviceHasBeenSet;
}

string GovernanceAlias::GetNamespace() const
{
    return m_namespace;
}

void GovernanceAlias::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool GovernanceAlias::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string GovernanceAlias::GetComment() const
{
    return m_comment;
}

void GovernanceAlias::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool GovernanceAlias::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

string GovernanceAlias::GetCreateTime() const
{
    return m_createTime;
}

void GovernanceAlias::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool GovernanceAlias::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string GovernanceAlias::GetModifyTime() const
{
    return m_modifyTime;
}

void GovernanceAlias::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool GovernanceAlias::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

string GovernanceAlias::GetId() const
{
    return m_id;
}

void GovernanceAlias::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool GovernanceAlias::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

bool GovernanceAlias::GetEditable() const
{
    return m_editable;
}

void GovernanceAlias::SetEditable(const bool& _editable)
{
    m_editable = _editable;
    m_editableHasBeenSet = true;
}

bool GovernanceAlias::EditableHasBeenSet() const
{
    return m_editableHasBeenSet;
}

vector<Metadata> GovernanceAlias::GetMetadatas() const
{
    return m_metadatas;
}

void GovernanceAlias::SetMetadatas(const vector<Metadata>& _metadatas)
{
    m_metadatas = _metadatas;
    m_metadatasHasBeenSet = true;
}

bool GovernanceAlias::MetadatasHasBeenSet() const
{
    return m_metadatasHasBeenSet;
}

