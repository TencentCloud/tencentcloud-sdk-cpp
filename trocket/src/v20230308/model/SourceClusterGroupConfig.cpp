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

#include <tencentcloud/trocket/v20230308/model/SourceClusterGroupConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trocket::V20230308::Model;
using namespace std;

SourceClusterGroupConfig::SourceClusterGroupConfig() :
    m_groupNameHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_importedHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_importStatusHasBeenSet(false),
    m_namespaceV4HasBeenSet(false),
    m_groupNameV4HasBeenSet(false),
    m_fullNamespaceV4HasBeenSet(false),
    m_consumeMessageOrderlyHasBeenSet(false)
{
}

CoreInternalOutcome SourceClusterGroupConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SourceClusterGroupConfig.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SourceClusterGroupConfig.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("Imported") && !value["Imported"].IsNull())
    {
        if (!value["Imported"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SourceClusterGroupConfig.Imported` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_imported = value["Imported"].GetBool();
        m_importedHasBeenSet = true;
    }

    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SourceClusterGroupConfig.Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(value["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }

    if (value.HasMember("ImportStatus") && !value["ImportStatus"].IsNull())
    {
        if (!value["ImportStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SourceClusterGroupConfig.ImportStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_importStatus = string(value["ImportStatus"].GetString());
        m_importStatusHasBeenSet = true;
    }

    if (value.HasMember("NamespaceV4") && !value["NamespaceV4"].IsNull())
    {
        if (!value["NamespaceV4"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SourceClusterGroupConfig.NamespaceV4` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespaceV4 = string(value["NamespaceV4"].GetString());
        m_namespaceV4HasBeenSet = true;
    }

    if (value.HasMember("GroupNameV4") && !value["GroupNameV4"].IsNull())
    {
        if (!value["GroupNameV4"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SourceClusterGroupConfig.GroupNameV4` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupNameV4 = string(value["GroupNameV4"].GetString());
        m_groupNameV4HasBeenSet = true;
    }

    if (value.HasMember("FullNamespaceV4") && !value["FullNamespaceV4"].IsNull())
    {
        if (!value["FullNamespaceV4"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SourceClusterGroupConfig.FullNamespaceV4` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fullNamespaceV4 = string(value["FullNamespaceV4"].GetString());
        m_fullNamespaceV4HasBeenSet = true;
    }

    if (value.HasMember("ConsumeMessageOrderly") && !value["ConsumeMessageOrderly"].IsNull())
    {
        if (!value["ConsumeMessageOrderly"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SourceClusterGroupConfig.ConsumeMessageOrderly` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_consumeMessageOrderly = value["ConsumeMessageOrderly"].GetBool();
        m_consumeMessageOrderlyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SourceClusterGroupConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_importedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Imported";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_imported, allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_importStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImportStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_importStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceV4HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamespaceV4";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespaceV4.c_str(), allocator).Move(), allocator);
    }

    if (m_groupNameV4HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupNameV4";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupNameV4.c_str(), allocator).Move(), allocator);
    }

    if (m_fullNamespaceV4HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FullNamespaceV4";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fullNamespaceV4.c_str(), allocator).Move(), allocator);
    }

    if (m_consumeMessageOrderlyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumeMessageOrderly";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_consumeMessageOrderly, allocator);
    }

}


string SourceClusterGroupConfig::GetGroupName() const
{
    return m_groupName;
}

void SourceClusterGroupConfig::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool SourceClusterGroupConfig::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

string SourceClusterGroupConfig::GetRemark() const
{
    return m_remark;
}

void SourceClusterGroupConfig::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool SourceClusterGroupConfig::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

bool SourceClusterGroupConfig::GetImported() const
{
    return m_imported;
}

void SourceClusterGroupConfig::SetImported(const bool& _imported)
{
    m_imported = _imported;
    m_importedHasBeenSet = true;
}

bool SourceClusterGroupConfig::ImportedHasBeenSet() const
{
    return m_importedHasBeenSet;
}

string SourceClusterGroupConfig::GetNamespace() const
{
    return m_namespace;
}

void SourceClusterGroupConfig::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool SourceClusterGroupConfig::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string SourceClusterGroupConfig::GetImportStatus() const
{
    return m_importStatus;
}

void SourceClusterGroupConfig::SetImportStatus(const string& _importStatus)
{
    m_importStatus = _importStatus;
    m_importStatusHasBeenSet = true;
}

bool SourceClusterGroupConfig::ImportStatusHasBeenSet() const
{
    return m_importStatusHasBeenSet;
}

string SourceClusterGroupConfig::GetNamespaceV4() const
{
    return m_namespaceV4;
}

void SourceClusterGroupConfig::SetNamespaceV4(const string& _namespaceV4)
{
    m_namespaceV4 = _namespaceV4;
    m_namespaceV4HasBeenSet = true;
}

bool SourceClusterGroupConfig::NamespaceV4HasBeenSet() const
{
    return m_namespaceV4HasBeenSet;
}

string SourceClusterGroupConfig::GetGroupNameV4() const
{
    return m_groupNameV4;
}

void SourceClusterGroupConfig::SetGroupNameV4(const string& _groupNameV4)
{
    m_groupNameV4 = _groupNameV4;
    m_groupNameV4HasBeenSet = true;
}

bool SourceClusterGroupConfig::GroupNameV4HasBeenSet() const
{
    return m_groupNameV4HasBeenSet;
}

string SourceClusterGroupConfig::GetFullNamespaceV4() const
{
    return m_fullNamespaceV4;
}

void SourceClusterGroupConfig::SetFullNamespaceV4(const string& _fullNamespaceV4)
{
    m_fullNamespaceV4 = _fullNamespaceV4;
    m_fullNamespaceV4HasBeenSet = true;
}

bool SourceClusterGroupConfig::FullNamespaceV4HasBeenSet() const
{
    return m_fullNamespaceV4HasBeenSet;
}

bool SourceClusterGroupConfig::GetConsumeMessageOrderly() const
{
    return m_consumeMessageOrderly;
}

void SourceClusterGroupConfig::SetConsumeMessageOrderly(const bool& _consumeMessageOrderly)
{
    m_consumeMessageOrderly = _consumeMessageOrderly;
    m_consumeMessageOrderlyHasBeenSet = true;
}

bool SourceClusterGroupConfig::ConsumeMessageOrderlyHasBeenSet() const
{
    return m_consumeMessageOrderlyHasBeenSet;
}

