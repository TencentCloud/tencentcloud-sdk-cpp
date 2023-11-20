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
    m_importStatusHasBeenSet(false)
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

