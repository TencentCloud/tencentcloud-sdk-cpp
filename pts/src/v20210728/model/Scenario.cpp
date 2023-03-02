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

#include <tencentcloud/pts/v20210728/model/Scenario.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Pts::V20210728::Model;
using namespace std;

Scenario::Scenario() :
    m_scenarioIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_loadHasBeenSet(false),
    m_encodedScriptsHasBeenSet(false),
    m_configsHasBeenSet(false),
    m_extensionsHasBeenSet(false),
    m_datasetsHasBeenSet(false),
    m_sLAIdHasBeenSet(false),
    m_cronIdHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_subAccountUinHasBeenSet(false),
    m_testScriptsHasBeenSet(false),
    m_protocolsHasBeenSet(false),
    m_requestFilesHasBeenSet(false),
    m_sLAPolicyHasBeenSet(false),
    m_pluginsHasBeenSet(false),
    m_domainNameConfigHasBeenSet(false),
    m_notificationHooksHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_projectNameHasBeenSet(false)
{
}

CoreInternalOutcome Scenario::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ScenarioId") && !value["ScenarioId"].IsNull())
    {
        if (!value["ScenarioId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Scenario.ScenarioId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scenarioId = string(value["ScenarioId"].GetString());
        m_scenarioIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Scenario.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Scenario.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Scenario.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Scenario.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Load") && !value["Load"].IsNull())
    {
        if (!value["Load"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Scenario.Load` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_load.Deserialize(value["Load"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_loadHasBeenSet = true;
    }

    if (value.HasMember("EncodedScripts") && !value["EncodedScripts"].IsNull())
    {
        if (!value["EncodedScripts"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Scenario.EncodedScripts` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_encodedScripts = string(value["EncodedScripts"].GetString());
        m_encodedScriptsHasBeenSet = true;
    }

    if (value.HasMember("Configs") && !value["Configs"].IsNull())
    {
        if (!value["Configs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Scenario.Configs` is not array type"));

        const rapidjson::Value &tmpValue = value["Configs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_configs.push_back((*itr).GetString());
        }
        m_configsHasBeenSet = true;
    }

    if (value.HasMember("Extensions") && !value["Extensions"].IsNull())
    {
        if (!value["Extensions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Scenario.Extensions` is not array type"));

        const rapidjson::Value &tmpValue = value["Extensions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_extensions.push_back((*itr).GetString());
        }
        m_extensionsHasBeenSet = true;
    }

    if (value.HasMember("Datasets") && !value["Datasets"].IsNull())
    {
        if (!value["Datasets"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Scenario.Datasets` is not array type"));

        const rapidjson::Value &tmpValue = value["Datasets"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TestData item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_datasets.push_back(item);
        }
        m_datasetsHasBeenSet = true;
    }

    if (value.HasMember("SLAId") && !value["SLAId"].IsNull())
    {
        if (!value["SLAId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Scenario.SLAId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sLAId = string(value["SLAId"].GetString());
        m_sLAIdHasBeenSet = true;
    }

    if (value.HasMember("CronId") && !value["CronId"].IsNull())
    {
        if (!value["CronId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Scenario.CronId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cronId = string(value["CronId"].GetString());
        m_cronIdHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Scenario.CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(value["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("UpdatedAt") && !value["UpdatedAt"].IsNull())
    {
        if (!value["UpdatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Scenario.UpdatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedAt = string(value["UpdatedAt"].GetString());
        m_updatedAtHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Scenario.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Scenario.AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Scenario.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("SubAccountUin") && !value["SubAccountUin"].IsNull())
    {
        if (!value["SubAccountUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Scenario.SubAccountUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subAccountUin = string(value["SubAccountUin"].GetString());
        m_subAccountUinHasBeenSet = true;
    }

    if (value.HasMember("TestScripts") && !value["TestScripts"].IsNull())
    {
        if (!value["TestScripts"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Scenario.TestScripts` is not array type"));

        const rapidjson::Value &tmpValue = value["TestScripts"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ScriptInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_testScripts.push_back(item);
        }
        m_testScriptsHasBeenSet = true;
    }

    if (value.HasMember("Protocols") && !value["Protocols"].IsNull())
    {
        if (!value["Protocols"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Scenario.Protocols` is not array type"));

        const rapidjson::Value &tmpValue = value["Protocols"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ProtocolInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_protocols.push_back(item);
        }
        m_protocolsHasBeenSet = true;
    }

    if (value.HasMember("RequestFiles") && !value["RequestFiles"].IsNull())
    {
        if (!value["RequestFiles"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Scenario.RequestFiles` is not array type"));

        const rapidjson::Value &tmpValue = value["RequestFiles"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FileInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_requestFiles.push_back(item);
        }
        m_requestFilesHasBeenSet = true;
    }

    if (value.HasMember("SLAPolicy") && !value["SLAPolicy"].IsNull())
    {
        if (!value["SLAPolicy"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Scenario.SLAPolicy` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sLAPolicy.Deserialize(value["SLAPolicy"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sLAPolicyHasBeenSet = true;
    }

    if (value.HasMember("Plugins") && !value["Plugins"].IsNull())
    {
        if (!value["Plugins"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Scenario.Plugins` is not array type"));

        const rapidjson::Value &tmpValue = value["Plugins"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FileInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_plugins.push_back(item);
        }
        m_pluginsHasBeenSet = true;
    }

    if (value.HasMember("DomainNameConfig") && !value["DomainNameConfig"].IsNull())
    {
        if (!value["DomainNameConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Scenario.DomainNameConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_domainNameConfig.Deserialize(value["DomainNameConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_domainNameConfigHasBeenSet = true;
    }

    if (value.HasMember("NotificationHooks") && !value["NotificationHooks"].IsNull())
    {
        if (!value["NotificationHooks"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Scenario.NotificationHooks` is not array type"));

        const rapidjson::Value &tmpValue = value["NotificationHooks"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            NotificationHook item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_notificationHooks.push_back(item);
        }
        m_notificationHooksHasBeenSet = true;
    }

    if (value.HasMember("Owner") && !value["Owner"].IsNull())
    {
        if (!value["Owner"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Scenario.Owner` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_owner = string(value["Owner"].GetString());
        m_ownerHasBeenSet = true;
    }

    if (value.HasMember("ProjectName") && !value["ProjectName"].IsNull())
    {
        if (!value["ProjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Scenario.ProjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectName = string(value["ProjectName"].GetString());
        m_projectNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Scenario::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_scenarioIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScenarioId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scenarioId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_loadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Load";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_load.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_encodedScriptsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncodedScripts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_encodedScripts.c_str(), allocator).Move(), allocator);
    }

    if (m_configsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Configs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_configs.begin(); itr != m_configs.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_extensionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Extensions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_extensions.begin(); itr != m_extensions.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_datasetsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Datasets";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_datasets.begin(); itr != m_datasets.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_sLAIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SLAId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sLAId.c_str(), allocator).Move(), allocator);
    }

    if (m_cronIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CronId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cronId.c_str(), allocator).Move(), allocator);
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdAt.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedAt.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_subAccountUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAccountUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subAccountUin.c_str(), allocator).Move(), allocator);
    }

    if (m_testScriptsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TestScripts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_testScripts.begin(); itr != m_testScripts.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_protocolsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocols";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_protocols.begin(); itr != m_protocols.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_requestFilesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestFiles";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_requestFiles.begin(); itr != m_requestFiles.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_sLAPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SLAPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sLAPolicy.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_pluginsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Plugins";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_plugins.begin(); itr != m_plugins.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_domainNameConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainNameConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_domainNameConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_notificationHooksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotificationHooks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_notificationHooks.begin(); itr != m_notificationHooks.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_ownerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Owner";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_owner.c_str(), allocator).Move(), allocator);
    }

    if (m_projectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectName.c_str(), allocator).Move(), allocator);
    }

}


string Scenario::GetScenarioId() const
{
    return m_scenarioId;
}

void Scenario::SetScenarioId(const string& _scenarioId)
{
    m_scenarioId = _scenarioId;
    m_scenarioIdHasBeenSet = true;
}

bool Scenario::ScenarioIdHasBeenSet() const
{
    return m_scenarioIdHasBeenSet;
}

string Scenario::GetName() const
{
    return m_name;
}

void Scenario::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Scenario::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string Scenario::GetDescription() const
{
    return m_description;
}

void Scenario::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool Scenario::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string Scenario::GetType() const
{
    return m_type;
}

void Scenario::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool Scenario::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t Scenario::GetStatus() const
{
    return m_status;
}

void Scenario::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool Scenario::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

Load Scenario::GetLoad() const
{
    return m_load;
}

void Scenario::SetLoad(const Load& _load)
{
    m_load = _load;
    m_loadHasBeenSet = true;
}

bool Scenario::LoadHasBeenSet() const
{
    return m_loadHasBeenSet;
}

string Scenario::GetEncodedScripts() const
{
    return m_encodedScripts;
}

void Scenario::SetEncodedScripts(const string& _encodedScripts)
{
    m_encodedScripts = _encodedScripts;
    m_encodedScriptsHasBeenSet = true;
}

bool Scenario::EncodedScriptsHasBeenSet() const
{
    return m_encodedScriptsHasBeenSet;
}

vector<string> Scenario::GetConfigs() const
{
    return m_configs;
}

void Scenario::SetConfigs(const vector<string>& _configs)
{
    m_configs = _configs;
    m_configsHasBeenSet = true;
}

bool Scenario::ConfigsHasBeenSet() const
{
    return m_configsHasBeenSet;
}

vector<string> Scenario::GetExtensions() const
{
    return m_extensions;
}

void Scenario::SetExtensions(const vector<string>& _extensions)
{
    m_extensions = _extensions;
    m_extensionsHasBeenSet = true;
}

bool Scenario::ExtensionsHasBeenSet() const
{
    return m_extensionsHasBeenSet;
}

vector<TestData> Scenario::GetDatasets() const
{
    return m_datasets;
}

void Scenario::SetDatasets(const vector<TestData>& _datasets)
{
    m_datasets = _datasets;
    m_datasetsHasBeenSet = true;
}

bool Scenario::DatasetsHasBeenSet() const
{
    return m_datasetsHasBeenSet;
}

string Scenario::GetSLAId() const
{
    return m_sLAId;
}

void Scenario::SetSLAId(const string& _sLAId)
{
    m_sLAId = _sLAId;
    m_sLAIdHasBeenSet = true;
}

bool Scenario::SLAIdHasBeenSet() const
{
    return m_sLAIdHasBeenSet;
}

string Scenario::GetCronId() const
{
    return m_cronId;
}

void Scenario::SetCronId(const string& _cronId)
{
    m_cronId = _cronId;
    m_cronIdHasBeenSet = true;
}

bool Scenario::CronIdHasBeenSet() const
{
    return m_cronIdHasBeenSet;
}

string Scenario::GetCreatedAt() const
{
    return m_createdAt;
}

void Scenario::SetCreatedAt(const string& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool Scenario::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

string Scenario::GetUpdatedAt() const
{
    return m_updatedAt;
}

void Scenario::SetUpdatedAt(const string& _updatedAt)
{
    m_updatedAt = _updatedAt;
    m_updatedAtHasBeenSet = true;
}

bool Scenario::UpdatedAtHasBeenSet() const
{
    return m_updatedAtHasBeenSet;
}

string Scenario::GetProjectId() const
{
    return m_projectId;
}

void Scenario::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool Scenario::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

int64_t Scenario::GetAppId() const
{
    return m_appId;
}

void Scenario::SetAppId(const int64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool Scenario::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string Scenario::GetUin() const
{
    return m_uin;
}

void Scenario::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool Scenario::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string Scenario::GetSubAccountUin() const
{
    return m_subAccountUin;
}

void Scenario::SetSubAccountUin(const string& _subAccountUin)
{
    m_subAccountUin = _subAccountUin;
    m_subAccountUinHasBeenSet = true;
}

bool Scenario::SubAccountUinHasBeenSet() const
{
    return m_subAccountUinHasBeenSet;
}

vector<ScriptInfo> Scenario::GetTestScripts() const
{
    return m_testScripts;
}

void Scenario::SetTestScripts(const vector<ScriptInfo>& _testScripts)
{
    m_testScripts = _testScripts;
    m_testScriptsHasBeenSet = true;
}

bool Scenario::TestScriptsHasBeenSet() const
{
    return m_testScriptsHasBeenSet;
}

vector<ProtocolInfo> Scenario::GetProtocols() const
{
    return m_protocols;
}

void Scenario::SetProtocols(const vector<ProtocolInfo>& _protocols)
{
    m_protocols = _protocols;
    m_protocolsHasBeenSet = true;
}

bool Scenario::ProtocolsHasBeenSet() const
{
    return m_protocolsHasBeenSet;
}

vector<FileInfo> Scenario::GetRequestFiles() const
{
    return m_requestFiles;
}

void Scenario::SetRequestFiles(const vector<FileInfo>& _requestFiles)
{
    m_requestFiles = _requestFiles;
    m_requestFilesHasBeenSet = true;
}

bool Scenario::RequestFilesHasBeenSet() const
{
    return m_requestFilesHasBeenSet;
}

SLAPolicy Scenario::GetSLAPolicy() const
{
    return m_sLAPolicy;
}

void Scenario::SetSLAPolicy(const SLAPolicy& _sLAPolicy)
{
    m_sLAPolicy = _sLAPolicy;
    m_sLAPolicyHasBeenSet = true;
}

bool Scenario::SLAPolicyHasBeenSet() const
{
    return m_sLAPolicyHasBeenSet;
}

vector<FileInfo> Scenario::GetPlugins() const
{
    return m_plugins;
}

void Scenario::SetPlugins(const vector<FileInfo>& _plugins)
{
    m_plugins = _plugins;
    m_pluginsHasBeenSet = true;
}

bool Scenario::PluginsHasBeenSet() const
{
    return m_pluginsHasBeenSet;
}

DomainNameConfig Scenario::GetDomainNameConfig() const
{
    return m_domainNameConfig;
}

void Scenario::SetDomainNameConfig(const DomainNameConfig& _domainNameConfig)
{
    m_domainNameConfig = _domainNameConfig;
    m_domainNameConfigHasBeenSet = true;
}

bool Scenario::DomainNameConfigHasBeenSet() const
{
    return m_domainNameConfigHasBeenSet;
}

vector<NotificationHook> Scenario::GetNotificationHooks() const
{
    return m_notificationHooks;
}

void Scenario::SetNotificationHooks(const vector<NotificationHook>& _notificationHooks)
{
    m_notificationHooks = _notificationHooks;
    m_notificationHooksHasBeenSet = true;
}

bool Scenario::NotificationHooksHasBeenSet() const
{
    return m_notificationHooksHasBeenSet;
}

string Scenario::GetOwner() const
{
    return m_owner;
}

void Scenario::SetOwner(const string& _owner)
{
    m_owner = _owner;
    m_ownerHasBeenSet = true;
}

bool Scenario::OwnerHasBeenSet() const
{
    return m_ownerHasBeenSet;
}

string Scenario::GetProjectName() const
{
    return m_projectName;
}

void Scenario::SetProjectName(const string& _projectName)
{
    m_projectName = _projectName;
    m_projectNameHasBeenSet = true;
}

bool Scenario::ProjectNameHasBeenSet() const
{
    return m_projectNameHasBeenSet;
}

