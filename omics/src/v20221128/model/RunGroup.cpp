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

#include <tencentcloud/omics/v20221128/model/RunGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Omics::V20221128::Model;
using namespace std;

RunGroup::RunGroup() :
    m_runGroupIdHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_applicationIdHasBeenSet(false),
    m_applicationNameHasBeenSet(false),
    m_applicationTypeHasBeenSet(false),
    m_applicationVersionHasBeenSet(false),
    m_accessModeHasBeenSet(false),
    m_environmentIdHasBeenSet(false),
    m_environmentNameHasBeenSet(false),
    m_tableIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_workDirHasBeenSet(false),
    m_inputHasBeenSet(false),
    m_inputTypeHasBeenSet(false),
    m_inputCosUriHasBeenSet(false),
    m_inputTemplateIdHasBeenSet(false),
    m_optionHasBeenSet(false),
    m_nFOptionHasBeenSet(false),
    m_volumesHasBeenSet(false),
    m_totalRunHasBeenSet(false),
    m_runStatusCountsHasBeenSet(false),
    m_executionTimeHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_resultNotifyHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_creatorHasBeenSet(false),
    m_creatorIdHasBeenSet(false)
{
}

CoreInternalOutcome RunGroup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RunGroupId") && !value["RunGroupId"].IsNull())
    {
        if (!value["RunGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunGroup.RunGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runGroupId = string(value["RunGroupId"].GetString());
        m_runGroupIdHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunGroup.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("ProjectName") && !value["ProjectName"].IsNull())
    {
        if (!value["ProjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunGroup.ProjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectName = string(value["ProjectName"].GetString());
        m_projectNameHasBeenSet = true;
    }

    if (value.HasMember("ApplicationId") && !value["ApplicationId"].IsNull())
    {
        if (!value["ApplicationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunGroup.ApplicationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationId = string(value["ApplicationId"].GetString());
        m_applicationIdHasBeenSet = true;
    }

    if (value.HasMember("ApplicationName") && !value["ApplicationName"].IsNull())
    {
        if (!value["ApplicationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunGroup.ApplicationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationName = string(value["ApplicationName"].GetString());
        m_applicationNameHasBeenSet = true;
    }

    if (value.HasMember("ApplicationType") && !value["ApplicationType"].IsNull())
    {
        if (!value["ApplicationType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunGroup.ApplicationType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationType = string(value["ApplicationType"].GetString());
        m_applicationTypeHasBeenSet = true;
    }

    if (value.HasMember("ApplicationVersion") && !value["ApplicationVersion"].IsNull())
    {
        if (!value["ApplicationVersion"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RunGroup.ApplicationVersion` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_applicationVersion.Deserialize(value["ApplicationVersion"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_applicationVersionHasBeenSet = true;
    }

    if (value.HasMember("AccessMode") && !value["AccessMode"].IsNull())
    {
        if (!value["AccessMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunGroup.AccessMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessMode = string(value["AccessMode"].GetString());
        m_accessModeHasBeenSet = true;
    }

    if (value.HasMember("EnvironmentId") && !value["EnvironmentId"].IsNull())
    {
        if (!value["EnvironmentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunGroup.EnvironmentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_environmentId = string(value["EnvironmentId"].GetString());
        m_environmentIdHasBeenSet = true;
    }

    if (value.HasMember("EnvironmentName") && !value["EnvironmentName"].IsNull())
    {
        if (!value["EnvironmentName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunGroup.EnvironmentName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_environmentName = string(value["EnvironmentName"].GetString());
        m_environmentNameHasBeenSet = true;
    }

    if (value.HasMember("TableId") && !value["TableId"].IsNull())
    {
        if (!value["TableId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunGroup.TableId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableId = string(value["TableId"].GetString());
        m_tableIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunGroup.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunGroup.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunGroup.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunGroup.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("WorkDir") && !value["WorkDir"].IsNull())
    {
        if (!value["WorkDir"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunGroup.WorkDir` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workDir = string(value["WorkDir"].GetString());
        m_workDirHasBeenSet = true;
    }

    if (value.HasMember("Input") && !value["Input"].IsNull())
    {
        if (!value["Input"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunGroup.Input` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_input = string(value["Input"].GetString());
        m_inputHasBeenSet = true;
    }

    if (value.HasMember("InputType") && !value["InputType"].IsNull())
    {
        if (!value["InputType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunGroup.InputType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inputType = string(value["InputType"].GetString());
        m_inputTypeHasBeenSet = true;
    }

    if (value.HasMember("InputCosUri") && !value["InputCosUri"].IsNull())
    {
        if (!value["InputCosUri"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunGroup.InputCosUri` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inputCosUri = string(value["InputCosUri"].GetString());
        m_inputCosUriHasBeenSet = true;
    }

    if (value.HasMember("InputTemplateId") && !value["InputTemplateId"].IsNull())
    {
        if (!value["InputTemplateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunGroup.InputTemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inputTemplateId = string(value["InputTemplateId"].GetString());
        m_inputTemplateIdHasBeenSet = true;
    }

    if (value.HasMember("Option") && !value["Option"].IsNull())
    {
        if (!value["Option"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RunGroup.Option` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_option.Deserialize(value["Option"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_optionHasBeenSet = true;
    }

    if (value.HasMember("NFOption") && !value["NFOption"].IsNull())
    {
        if (!value["NFOption"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RunGroup.NFOption` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_nFOption.Deserialize(value["NFOption"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_nFOptionHasBeenSet = true;
    }

    if (value.HasMember("Volumes") && !value["Volumes"].IsNull())
    {
        if (!value["Volumes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RunGroup.Volumes` is not array type"));

        const rapidjson::Value &tmpValue = value["Volumes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VolumeInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_volumes.push_back(item);
        }
        m_volumesHasBeenSet = true;
    }

    if (value.HasMember("TotalRun") && !value["TotalRun"].IsNull())
    {
        if (!value["TotalRun"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RunGroup.TotalRun` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalRun = value["TotalRun"].GetUint64();
        m_totalRunHasBeenSet = true;
    }

    if (value.HasMember("RunStatusCounts") && !value["RunStatusCounts"].IsNull())
    {
        if (!value["RunStatusCounts"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RunGroup.RunStatusCounts` is not array type"));

        const rapidjson::Value &tmpValue = value["RunStatusCounts"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RunStatusCount item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_runStatusCounts.push_back(item);
        }
        m_runStatusCountsHasBeenSet = true;
    }

    if (value.HasMember("ExecutionTime") && !value["ExecutionTime"].IsNull())
    {
        if (!value["ExecutionTime"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RunGroup.ExecutionTime` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_executionTime.Deserialize(value["ExecutionTime"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_executionTimeHasBeenSet = true;
    }

    if (value.HasMember("ErrorMessage") && !value["ErrorMessage"].IsNull())
    {
        if (!value["ErrorMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunGroup.ErrorMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorMessage = string(value["ErrorMessage"].GetString());
        m_errorMessageHasBeenSet = true;
    }

    if (value.HasMember("ResultNotify") && !value["ResultNotify"].IsNull())
    {
        if (!value["ResultNotify"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunGroup.ResultNotify` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resultNotify = string(value["ResultNotify"].GetString());
        m_resultNotifyHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunGroup.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunGroup.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Creator") && !value["Creator"].IsNull())
    {
        if (!value["Creator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunGroup.Creator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creator = string(value["Creator"].GetString());
        m_creatorHasBeenSet = true;
    }

    if (value.HasMember("CreatorId") && !value["CreatorId"].IsNull())
    {
        if (!value["CreatorId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunGroup.CreatorId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creatorId = string(value["CreatorId"].GetString());
        m_creatorIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RunGroup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_runGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_projectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectName.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationId.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationName.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationType.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_applicationVersion.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_accessModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessMode.c_str(), allocator).Move(), allocator);
    }

    if (m_environmentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvironmentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_environmentId.c_str(), allocator).Move(), allocator);
    }

    if (m_environmentNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvironmentName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_environmentName.c_str(), allocator).Move(), allocator);
    }

    if (m_tableIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableId.c_str(), allocator).Move(), allocator);
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

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_workDirHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkDir";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workDir.c_str(), allocator).Move(), allocator);
    }

    if (m_inputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Input";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_input.c_str(), allocator).Move(), allocator);
    }

    if (m_inputTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inputType.c_str(), allocator).Move(), allocator);
    }

    if (m_inputCosUriHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputCosUri";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inputCosUri.c_str(), allocator).Move(), allocator);
    }

    if (m_inputTemplateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputTemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inputTemplateId.c_str(), allocator).Move(), allocator);
    }

    if (m_optionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Option";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_option.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_nFOptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NFOption";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_nFOption.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_volumesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Volumes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_volumes.begin(); itr != m_volumes.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_totalRunHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalRun";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalRun, allocator);
    }

    if (m_runStatusCountsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunStatusCounts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_runStatusCounts.begin(); itr != m_runStatusCounts.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_executionTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_executionTime.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_errorMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_resultNotifyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultNotify";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resultNotify.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_creatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Creator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creator.c_str(), allocator).Move(), allocator);
    }

    if (m_creatorIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatorId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creatorId.c_str(), allocator).Move(), allocator);
    }

}


string RunGroup::GetRunGroupId() const
{
    return m_runGroupId;
}

void RunGroup::SetRunGroupId(const string& _runGroupId)
{
    m_runGroupId = _runGroupId;
    m_runGroupIdHasBeenSet = true;
}

bool RunGroup::RunGroupIdHasBeenSet() const
{
    return m_runGroupIdHasBeenSet;
}

string RunGroup::GetProjectId() const
{
    return m_projectId;
}

void RunGroup::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool RunGroup::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string RunGroup::GetProjectName() const
{
    return m_projectName;
}

void RunGroup::SetProjectName(const string& _projectName)
{
    m_projectName = _projectName;
    m_projectNameHasBeenSet = true;
}

bool RunGroup::ProjectNameHasBeenSet() const
{
    return m_projectNameHasBeenSet;
}

string RunGroup::GetApplicationId() const
{
    return m_applicationId;
}

void RunGroup::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool RunGroup::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

string RunGroup::GetApplicationName() const
{
    return m_applicationName;
}

void RunGroup::SetApplicationName(const string& _applicationName)
{
    m_applicationName = _applicationName;
    m_applicationNameHasBeenSet = true;
}

bool RunGroup::ApplicationNameHasBeenSet() const
{
    return m_applicationNameHasBeenSet;
}

string RunGroup::GetApplicationType() const
{
    return m_applicationType;
}

void RunGroup::SetApplicationType(const string& _applicationType)
{
    m_applicationType = _applicationType;
    m_applicationTypeHasBeenSet = true;
}

bool RunGroup::ApplicationTypeHasBeenSet() const
{
    return m_applicationTypeHasBeenSet;
}

ApplicationVersion RunGroup::GetApplicationVersion() const
{
    return m_applicationVersion;
}

void RunGroup::SetApplicationVersion(const ApplicationVersion& _applicationVersion)
{
    m_applicationVersion = _applicationVersion;
    m_applicationVersionHasBeenSet = true;
}

bool RunGroup::ApplicationVersionHasBeenSet() const
{
    return m_applicationVersionHasBeenSet;
}

string RunGroup::GetAccessMode() const
{
    return m_accessMode;
}

void RunGroup::SetAccessMode(const string& _accessMode)
{
    m_accessMode = _accessMode;
    m_accessModeHasBeenSet = true;
}

bool RunGroup::AccessModeHasBeenSet() const
{
    return m_accessModeHasBeenSet;
}

string RunGroup::GetEnvironmentId() const
{
    return m_environmentId;
}

void RunGroup::SetEnvironmentId(const string& _environmentId)
{
    m_environmentId = _environmentId;
    m_environmentIdHasBeenSet = true;
}

bool RunGroup::EnvironmentIdHasBeenSet() const
{
    return m_environmentIdHasBeenSet;
}

string RunGroup::GetEnvironmentName() const
{
    return m_environmentName;
}

void RunGroup::SetEnvironmentName(const string& _environmentName)
{
    m_environmentName = _environmentName;
    m_environmentNameHasBeenSet = true;
}

bool RunGroup::EnvironmentNameHasBeenSet() const
{
    return m_environmentNameHasBeenSet;
}

string RunGroup::GetTableId() const
{
    return m_tableId;
}

void RunGroup::SetTableId(const string& _tableId)
{
    m_tableId = _tableId;
    m_tableIdHasBeenSet = true;
}

bool RunGroup::TableIdHasBeenSet() const
{
    return m_tableIdHasBeenSet;
}

string RunGroup::GetName() const
{
    return m_name;
}

void RunGroup::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool RunGroup::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string RunGroup::GetDescription() const
{
    return m_description;
}

void RunGroup::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool RunGroup::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string RunGroup::GetStatus() const
{
    return m_status;
}

void RunGroup::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool RunGroup::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string RunGroup::GetType() const
{
    return m_type;
}

void RunGroup::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool RunGroup::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string RunGroup::GetWorkDir() const
{
    return m_workDir;
}

void RunGroup::SetWorkDir(const string& _workDir)
{
    m_workDir = _workDir;
    m_workDirHasBeenSet = true;
}

bool RunGroup::WorkDirHasBeenSet() const
{
    return m_workDirHasBeenSet;
}

string RunGroup::GetInput() const
{
    return m_input;
}

void RunGroup::SetInput(const string& _input)
{
    m_input = _input;
    m_inputHasBeenSet = true;
}

bool RunGroup::InputHasBeenSet() const
{
    return m_inputHasBeenSet;
}

string RunGroup::GetInputType() const
{
    return m_inputType;
}

void RunGroup::SetInputType(const string& _inputType)
{
    m_inputType = _inputType;
    m_inputTypeHasBeenSet = true;
}

bool RunGroup::InputTypeHasBeenSet() const
{
    return m_inputTypeHasBeenSet;
}

string RunGroup::GetInputCosUri() const
{
    return m_inputCosUri;
}

void RunGroup::SetInputCosUri(const string& _inputCosUri)
{
    m_inputCosUri = _inputCosUri;
    m_inputCosUriHasBeenSet = true;
}

bool RunGroup::InputCosUriHasBeenSet() const
{
    return m_inputCosUriHasBeenSet;
}

string RunGroup::GetInputTemplateId() const
{
    return m_inputTemplateId;
}

void RunGroup::SetInputTemplateId(const string& _inputTemplateId)
{
    m_inputTemplateId = _inputTemplateId;
    m_inputTemplateIdHasBeenSet = true;
}

bool RunGroup::InputTemplateIdHasBeenSet() const
{
    return m_inputTemplateIdHasBeenSet;
}

RunOption RunGroup::GetOption() const
{
    return m_option;
}

void RunGroup::SetOption(const RunOption& _option)
{
    m_option = _option;
    m_optionHasBeenSet = true;
}

bool RunGroup::OptionHasBeenSet() const
{
    return m_optionHasBeenSet;
}

NFOption RunGroup::GetNFOption() const
{
    return m_nFOption;
}

void RunGroup::SetNFOption(const NFOption& _nFOption)
{
    m_nFOption = _nFOption;
    m_nFOptionHasBeenSet = true;
}

bool RunGroup::NFOptionHasBeenSet() const
{
    return m_nFOptionHasBeenSet;
}

vector<VolumeInfo> RunGroup::GetVolumes() const
{
    return m_volumes;
}

void RunGroup::SetVolumes(const vector<VolumeInfo>& _volumes)
{
    m_volumes = _volumes;
    m_volumesHasBeenSet = true;
}

bool RunGroup::VolumesHasBeenSet() const
{
    return m_volumesHasBeenSet;
}

uint64_t RunGroup::GetTotalRun() const
{
    return m_totalRun;
}

void RunGroup::SetTotalRun(const uint64_t& _totalRun)
{
    m_totalRun = _totalRun;
    m_totalRunHasBeenSet = true;
}

bool RunGroup::TotalRunHasBeenSet() const
{
    return m_totalRunHasBeenSet;
}

vector<RunStatusCount> RunGroup::GetRunStatusCounts() const
{
    return m_runStatusCounts;
}

void RunGroup::SetRunStatusCounts(const vector<RunStatusCount>& _runStatusCounts)
{
    m_runStatusCounts = _runStatusCounts;
    m_runStatusCountsHasBeenSet = true;
}

bool RunGroup::RunStatusCountsHasBeenSet() const
{
    return m_runStatusCountsHasBeenSet;
}

ExecutionTime RunGroup::GetExecutionTime() const
{
    return m_executionTime;
}

void RunGroup::SetExecutionTime(const ExecutionTime& _executionTime)
{
    m_executionTime = _executionTime;
    m_executionTimeHasBeenSet = true;
}

bool RunGroup::ExecutionTimeHasBeenSet() const
{
    return m_executionTimeHasBeenSet;
}

string RunGroup::GetErrorMessage() const
{
    return m_errorMessage;
}

void RunGroup::SetErrorMessage(const string& _errorMessage)
{
    m_errorMessage = _errorMessage;
    m_errorMessageHasBeenSet = true;
}

bool RunGroup::ErrorMessageHasBeenSet() const
{
    return m_errorMessageHasBeenSet;
}

string RunGroup::GetResultNotify() const
{
    return m_resultNotify;
}

void RunGroup::SetResultNotify(const string& _resultNotify)
{
    m_resultNotify = _resultNotify;
    m_resultNotifyHasBeenSet = true;
}

bool RunGroup::ResultNotifyHasBeenSet() const
{
    return m_resultNotifyHasBeenSet;
}

string RunGroup::GetCreateTime() const
{
    return m_createTime;
}

void RunGroup::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool RunGroup::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string RunGroup::GetUpdateTime() const
{
    return m_updateTime;
}

void RunGroup::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool RunGroup::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string RunGroup::GetCreator() const
{
    return m_creator;
}

void RunGroup::SetCreator(const string& _creator)
{
    m_creator = _creator;
    m_creatorHasBeenSet = true;
}

bool RunGroup::CreatorHasBeenSet() const
{
    return m_creatorHasBeenSet;
}

string RunGroup::GetCreatorId() const
{
    return m_creatorId;
}

void RunGroup::SetCreatorId(const string& _creatorId)
{
    m_creatorId = _creatorId;
    m_creatorIdHasBeenSet = true;
}

bool RunGroup::CreatorIdHasBeenSet() const
{
    return m_creatorIdHasBeenSet;
}

