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

#include <tencentcloud/wedata/v20210820/model/CodeTemplateDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

CodeTemplateDetail::CodeTemplateDetail() :
    m_projectIdHasBeenSet(false),
    m_codeTemplateNameHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_codeTemplateDescHasBeenSet(false),
    m_folderIdHasBeenSet(false),
    m_folderNameHasBeenSet(false),
    m_inChargeHasBeenSet(false),
    m_inChargeIdHasBeenSet(false),
    m_extHasBeenSet(false),
    m_codeTemplateIdHasBeenSet(false),
    m_lastUpdateTimeHasBeenSet(false),
    m_updateUserHasBeenSet(false),
    m_updateUserIdHasBeenSet(false),
    m_brokerIpHasBeenSet(false),
    m_resourceGroupHasBeenSet(false),
    m_submitHasBeenSet(false),
    m_scriptChangeHasBeenSet(false),
    m_contentHasBeenSet(false)
{
}

CoreInternalOutcome CodeTemplateDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeTemplateDetail.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("CodeTemplateName") && !value["CodeTemplateName"].IsNull())
    {
        if (!value["CodeTemplateName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeTemplateDetail.CodeTemplateName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_codeTemplateName = string(value["CodeTemplateName"].GetString());
        m_codeTemplateNameHasBeenSet = true;
    }

    if (value.HasMember("TaskType") && !value["TaskType"].IsNull())
    {
        if (!value["TaskType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CodeTemplateDetail.TaskType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskType = value["TaskType"].GetInt64();
        m_taskTypeHasBeenSet = true;
    }

    if (value.HasMember("CodeTemplateDesc") && !value["CodeTemplateDesc"].IsNull())
    {
        if (!value["CodeTemplateDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeTemplateDetail.CodeTemplateDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_codeTemplateDesc = string(value["CodeTemplateDesc"].GetString());
        m_codeTemplateDescHasBeenSet = true;
    }

    if (value.HasMember("FolderId") && !value["FolderId"].IsNull())
    {
        if (!value["FolderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeTemplateDetail.FolderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_folderId = string(value["FolderId"].GetString());
        m_folderIdHasBeenSet = true;
    }

    if (value.HasMember("FolderName") && !value["FolderName"].IsNull())
    {
        if (!value["FolderName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeTemplateDetail.FolderName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_folderName = string(value["FolderName"].GetString());
        m_folderNameHasBeenSet = true;
    }

    if (value.HasMember("InCharge") && !value["InCharge"].IsNull())
    {
        if (!value["InCharge"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeTemplateDetail.InCharge` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inCharge = string(value["InCharge"].GetString());
        m_inChargeHasBeenSet = true;
    }

    if (value.HasMember("InChargeId") && !value["InChargeId"].IsNull())
    {
        if (!value["InChargeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeTemplateDetail.InChargeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inChargeId = string(value["InChargeId"].GetString());
        m_inChargeIdHasBeenSet = true;
    }

    if (value.HasMember("Ext") && !value["Ext"].IsNull())
    {
        if (!value["Ext"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CodeTemplateDetail.Ext` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_ext.Deserialize(value["Ext"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_extHasBeenSet = true;
    }

    if (value.HasMember("CodeTemplateId") && !value["CodeTemplateId"].IsNull())
    {
        if (!value["CodeTemplateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeTemplateDetail.CodeTemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_codeTemplateId = string(value["CodeTemplateId"].GetString());
        m_codeTemplateIdHasBeenSet = true;
    }

    if (value.HasMember("LastUpdateTime") && !value["LastUpdateTime"].IsNull())
    {
        if (!value["LastUpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeTemplateDetail.LastUpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastUpdateTime = string(value["LastUpdateTime"].GetString());
        m_lastUpdateTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateUser") && !value["UpdateUser"].IsNull())
    {
        if (!value["UpdateUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeTemplateDetail.UpdateUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateUser = string(value["UpdateUser"].GetString());
        m_updateUserHasBeenSet = true;
    }

    if (value.HasMember("UpdateUserId") && !value["UpdateUserId"].IsNull())
    {
        if (!value["UpdateUserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeTemplateDetail.UpdateUserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateUserId = string(value["UpdateUserId"].GetString());
        m_updateUserIdHasBeenSet = true;
    }

    if (value.HasMember("BrokerIp") && !value["BrokerIp"].IsNull())
    {
        if (!value["BrokerIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeTemplateDetail.BrokerIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_brokerIp = string(value["BrokerIp"].GetString());
        m_brokerIpHasBeenSet = true;
    }

    if (value.HasMember("ResourceGroup") && !value["ResourceGroup"].IsNull())
    {
        if (!value["ResourceGroup"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeTemplateDetail.ResourceGroup` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceGroup = string(value["ResourceGroup"].GetString());
        m_resourceGroupHasBeenSet = true;
    }

    if (value.HasMember("Submit") && !value["Submit"].IsNull())
    {
        if (!value["Submit"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CodeTemplateDetail.Submit` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_submit = value["Submit"].GetBool();
        m_submitHasBeenSet = true;
    }

    if (value.HasMember("ScriptChange") && !value["ScriptChange"].IsNull())
    {
        if (!value["ScriptChange"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CodeTemplateDetail.ScriptChange` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_scriptChange = value["ScriptChange"].GetBool();
        m_scriptChangeHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeTemplateDetail.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CodeTemplateDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_codeTemplateNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeTemplateName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_codeTemplateName.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskType, allocator);
    }

    if (m_codeTemplateDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeTemplateDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_codeTemplateDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_folderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FolderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_folderId.c_str(), allocator).Move(), allocator);
    }

    if (m_folderNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FolderName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_folderName.c_str(), allocator).Move(), allocator);
    }

    if (m_inChargeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InCharge";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inCharge.c_str(), allocator).Move(), allocator);
    }

    if (m_inChargeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InChargeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inChargeId.c_str(), allocator).Move(), allocator);
    }

    if (m_extHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ext";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ext.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_codeTemplateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeTemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_codeTemplateId.c_str(), allocator).Move(), allocator);
    }

    if (m_lastUpdateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastUpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastUpdateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateUser.c_str(), allocator).Move(), allocator);
    }

    if (m_updateUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateUserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateUserId.c_str(), allocator).Move(), allocator);
    }

    if (m_brokerIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BrokerIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_brokerIp.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceGroup.c_str(), allocator).Move(), allocator);
    }

    if (m_submitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Submit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_submit, allocator);
    }

    if (m_scriptChangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScriptChange";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scriptChange, allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

}


string CodeTemplateDetail::GetProjectId() const
{
    return m_projectId;
}

void CodeTemplateDetail::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CodeTemplateDetail::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string CodeTemplateDetail::GetCodeTemplateName() const
{
    return m_codeTemplateName;
}

void CodeTemplateDetail::SetCodeTemplateName(const string& _codeTemplateName)
{
    m_codeTemplateName = _codeTemplateName;
    m_codeTemplateNameHasBeenSet = true;
}

bool CodeTemplateDetail::CodeTemplateNameHasBeenSet() const
{
    return m_codeTemplateNameHasBeenSet;
}

int64_t CodeTemplateDetail::GetTaskType() const
{
    return m_taskType;
}

void CodeTemplateDetail::SetTaskType(const int64_t& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool CodeTemplateDetail::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

string CodeTemplateDetail::GetCodeTemplateDesc() const
{
    return m_codeTemplateDesc;
}

void CodeTemplateDetail::SetCodeTemplateDesc(const string& _codeTemplateDesc)
{
    m_codeTemplateDesc = _codeTemplateDesc;
    m_codeTemplateDescHasBeenSet = true;
}

bool CodeTemplateDetail::CodeTemplateDescHasBeenSet() const
{
    return m_codeTemplateDescHasBeenSet;
}

string CodeTemplateDetail::GetFolderId() const
{
    return m_folderId;
}

void CodeTemplateDetail::SetFolderId(const string& _folderId)
{
    m_folderId = _folderId;
    m_folderIdHasBeenSet = true;
}

bool CodeTemplateDetail::FolderIdHasBeenSet() const
{
    return m_folderIdHasBeenSet;
}

string CodeTemplateDetail::GetFolderName() const
{
    return m_folderName;
}

void CodeTemplateDetail::SetFolderName(const string& _folderName)
{
    m_folderName = _folderName;
    m_folderNameHasBeenSet = true;
}

bool CodeTemplateDetail::FolderNameHasBeenSet() const
{
    return m_folderNameHasBeenSet;
}

string CodeTemplateDetail::GetInCharge() const
{
    return m_inCharge;
}

void CodeTemplateDetail::SetInCharge(const string& _inCharge)
{
    m_inCharge = _inCharge;
    m_inChargeHasBeenSet = true;
}

bool CodeTemplateDetail::InChargeHasBeenSet() const
{
    return m_inChargeHasBeenSet;
}

string CodeTemplateDetail::GetInChargeId() const
{
    return m_inChargeId;
}

void CodeTemplateDetail::SetInChargeId(const string& _inChargeId)
{
    m_inChargeId = _inChargeId;
    m_inChargeIdHasBeenSet = true;
}

bool CodeTemplateDetail::InChargeIdHasBeenSet() const
{
    return m_inChargeIdHasBeenSet;
}

TaskExtDsVO CodeTemplateDetail::GetExt() const
{
    return m_ext;
}

void CodeTemplateDetail::SetExt(const TaskExtDsVO& _ext)
{
    m_ext = _ext;
    m_extHasBeenSet = true;
}

bool CodeTemplateDetail::ExtHasBeenSet() const
{
    return m_extHasBeenSet;
}

string CodeTemplateDetail::GetCodeTemplateId() const
{
    return m_codeTemplateId;
}

void CodeTemplateDetail::SetCodeTemplateId(const string& _codeTemplateId)
{
    m_codeTemplateId = _codeTemplateId;
    m_codeTemplateIdHasBeenSet = true;
}

bool CodeTemplateDetail::CodeTemplateIdHasBeenSet() const
{
    return m_codeTemplateIdHasBeenSet;
}

string CodeTemplateDetail::GetLastUpdateTime() const
{
    return m_lastUpdateTime;
}

void CodeTemplateDetail::SetLastUpdateTime(const string& _lastUpdateTime)
{
    m_lastUpdateTime = _lastUpdateTime;
    m_lastUpdateTimeHasBeenSet = true;
}

bool CodeTemplateDetail::LastUpdateTimeHasBeenSet() const
{
    return m_lastUpdateTimeHasBeenSet;
}

string CodeTemplateDetail::GetUpdateUser() const
{
    return m_updateUser;
}

void CodeTemplateDetail::SetUpdateUser(const string& _updateUser)
{
    m_updateUser = _updateUser;
    m_updateUserHasBeenSet = true;
}

bool CodeTemplateDetail::UpdateUserHasBeenSet() const
{
    return m_updateUserHasBeenSet;
}

string CodeTemplateDetail::GetUpdateUserId() const
{
    return m_updateUserId;
}

void CodeTemplateDetail::SetUpdateUserId(const string& _updateUserId)
{
    m_updateUserId = _updateUserId;
    m_updateUserIdHasBeenSet = true;
}

bool CodeTemplateDetail::UpdateUserIdHasBeenSet() const
{
    return m_updateUserIdHasBeenSet;
}

string CodeTemplateDetail::GetBrokerIp() const
{
    return m_brokerIp;
}

void CodeTemplateDetail::SetBrokerIp(const string& _brokerIp)
{
    m_brokerIp = _brokerIp;
    m_brokerIpHasBeenSet = true;
}

bool CodeTemplateDetail::BrokerIpHasBeenSet() const
{
    return m_brokerIpHasBeenSet;
}

string CodeTemplateDetail::GetResourceGroup() const
{
    return m_resourceGroup;
}

void CodeTemplateDetail::SetResourceGroup(const string& _resourceGroup)
{
    m_resourceGroup = _resourceGroup;
    m_resourceGroupHasBeenSet = true;
}

bool CodeTemplateDetail::ResourceGroupHasBeenSet() const
{
    return m_resourceGroupHasBeenSet;
}

bool CodeTemplateDetail::GetSubmit() const
{
    return m_submit;
}

void CodeTemplateDetail::SetSubmit(const bool& _submit)
{
    m_submit = _submit;
    m_submitHasBeenSet = true;
}

bool CodeTemplateDetail::SubmitHasBeenSet() const
{
    return m_submitHasBeenSet;
}

bool CodeTemplateDetail::GetScriptChange() const
{
    return m_scriptChange;
}

void CodeTemplateDetail::SetScriptChange(const bool& _scriptChange)
{
    m_scriptChange = _scriptChange;
    m_scriptChangeHasBeenSet = true;
}

bool CodeTemplateDetail::ScriptChangeHasBeenSet() const
{
    return m_scriptChangeHasBeenSet;
}

string CodeTemplateDetail::GetContent() const
{
    return m_content;
}

void CodeTemplateDetail::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool CodeTemplateDetail::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

