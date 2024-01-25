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

#include <tencentcloud/wedata/v20210820/model/ParamDsRequest.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

ParamDsRequest::ParamDsRequest() :
    m_paramKeyHasBeenSet(false),
    m_paramTypeHasBeenSet(false),
    m_paramDefineHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_operatorNameHasBeenSet(false),
    m_workflowIdHasBeenSet(false),
    m_sqlContentHasBeenSet(false),
    m_curRunDateHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_keyWordsHasBeenSet(false),
    m_myVersionHasBeenSet(false),
    m_upstreamHasBeenSet(false),
    m_paramDescriptionHasBeenSet(false),
    m_paramDefineTestHasBeenSet(false),
    m_updateFlagHasBeenSet(false)
{
}

CoreInternalOutcome ParamDsRequest::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ParamKey") && !value["ParamKey"].IsNull())
    {
        if (!value["ParamKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParamDsRequest.ParamKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paramKey = string(value["ParamKey"].GetString());
        m_paramKeyHasBeenSet = true;
    }

    if (value.HasMember("ParamType") && !value["ParamType"].IsNull())
    {
        if (!value["ParamType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParamDsRequest.ParamType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paramType = string(value["ParamType"].GetString());
        m_paramTypeHasBeenSet = true;
    }

    if (value.HasMember("ParamDefine") && !value["ParamDefine"].IsNull())
    {
        if (!value["ParamDefine"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParamDsRequest.ParamDefine` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paramDefine = string(value["ParamDefine"].GetString());
        m_paramDefineHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParamDsRequest.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("OperatorName") && !value["OperatorName"].IsNull())
    {
        if (!value["OperatorName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParamDsRequest.OperatorName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operatorName = string(value["OperatorName"].GetString());
        m_operatorNameHasBeenSet = true;
    }

    if (value.HasMember("WorkflowId") && !value["WorkflowId"].IsNull())
    {
        if (!value["WorkflowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParamDsRequest.WorkflowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowId = string(value["WorkflowId"].GetString());
        m_workflowIdHasBeenSet = true;
    }

    if (value.HasMember("SqlContent") && !value["SqlContent"].IsNull())
    {
        if (!value["SqlContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParamDsRequest.SqlContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sqlContent = string(value["SqlContent"].GetString());
        m_sqlContentHasBeenSet = true;
    }

    if (value.HasMember("CurRunDate") && !value["CurRunDate"].IsNull())
    {
        if (!value["CurRunDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParamDsRequest.CurRunDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_curRunDate = string(value["CurRunDate"].GetString());
        m_curRunDateHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParamDsRequest.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParamDsRequest.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("KeyWords") && !value["KeyWords"].IsNull())
    {
        if (!value["KeyWords"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParamDsRequest.KeyWords` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyWords = string(value["KeyWords"].GetString());
        m_keyWordsHasBeenSet = true;
    }

    if (value.HasMember("MyVersion") && !value["MyVersion"].IsNull())
    {
        if (!value["MyVersion"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ParamDsRequest.MyVersion` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_myVersion = value["MyVersion"].GetInt64();
        m_myVersionHasBeenSet = true;
    }

    if (value.HasMember("Upstream") && !value["Upstream"].IsNull())
    {
        if (!value["Upstream"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ParamDsRequest.Upstream` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_upstream = value["Upstream"].GetBool();
        m_upstreamHasBeenSet = true;
    }

    if (value.HasMember("ParamDescription") && !value["ParamDescription"].IsNull())
    {
        if (!value["ParamDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParamDsRequest.ParamDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paramDescription = string(value["ParamDescription"].GetString());
        m_paramDescriptionHasBeenSet = true;
    }

    if (value.HasMember("ParamDefineTest") && !value["ParamDefineTest"].IsNull())
    {
        if (!value["ParamDefineTest"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParamDsRequest.ParamDefineTest` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paramDefineTest = string(value["ParamDefineTest"].GetString());
        m_paramDefineTestHasBeenSet = true;
    }

    if (value.HasMember("UpdateFlag") && !value["UpdateFlag"].IsNull())
    {
        if (!value["UpdateFlag"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ParamDsRequest.UpdateFlag` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_updateFlag = value["UpdateFlag"].GetBool();
        m_updateFlagHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ParamDsRequest::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_paramKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paramKey.c_str(), allocator).Move(), allocator);
    }

    if (m_paramTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paramType.c_str(), allocator).Move(), allocator);
    }

    if (m_paramDefineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamDefine";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paramDefine.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperatorName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operatorName.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowId.c_str(), allocator).Move(), allocator);
    }

    if (m_sqlContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SqlContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sqlContent.c_str(), allocator).Move(), allocator);
    }

    if (m_curRunDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurRunDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_curRunDate.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_keyWordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyWords";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyWords.c_str(), allocator).Move(), allocator);
    }

    if (m_myVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MyVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_myVersion, allocator);
    }

    if (m_upstreamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Upstream";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_upstream, allocator);
    }

    if (m_paramDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paramDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_paramDefineTestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamDefineTest";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paramDefineTest.c_str(), allocator).Move(), allocator);
    }

    if (m_updateFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateFlag, allocator);
    }

}


string ParamDsRequest::GetParamKey() const
{
    return m_paramKey;
}

void ParamDsRequest::SetParamKey(const string& _paramKey)
{
    m_paramKey = _paramKey;
    m_paramKeyHasBeenSet = true;
}

bool ParamDsRequest::ParamKeyHasBeenSet() const
{
    return m_paramKeyHasBeenSet;
}

string ParamDsRequest::GetParamType() const
{
    return m_paramType;
}

void ParamDsRequest::SetParamType(const string& _paramType)
{
    m_paramType = _paramType;
    m_paramTypeHasBeenSet = true;
}

bool ParamDsRequest::ParamTypeHasBeenSet() const
{
    return m_paramTypeHasBeenSet;
}

string ParamDsRequest::GetParamDefine() const
{
    return m_paramDefine;
}

void ParamDsRequest::SetParamDefine(const string& _paramDefine)
{
    m_paramDefine = _paramDefine;
    m_paramDefineHasBeenSet = true;
}

bool ParamDsRequest::ParamDefineHasBeenSet() const
{
    return m_paramDefineHasBeenSet;
}

string ParamDsRequest::GetProjectId() const
{
    return m_projectId;
}

void ParamDsRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ParamDsRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string ParamDsRequest::GetOperatorName() const
{
    return m_operatorName;
}

void ParamDsRequest::SetOperatorName(const string& _operatorName)
{
    m_operatorName = _operatorName;
    m_operatorNameHasBeenSet = true;
}

bool ParamDsRequest::OperatorNameHasBeenSet() const
{
    return m_operatorNameHasBeenSet;
}

string ParamDsRequest::GetWorkflowId() const
{
    return m_workflowId;
}

void ParamDsRequest::SetWorkflowId(const string& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool ParamDsRequest::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}

string ParamDsRequest::GetSqlContent() const
{
    return m_sqlContent;
}

void ParamDsRequest::SetSqlContent(const string& _sqlContent)
{
    m_sqlContent = _sqlContent;
    m_sqlContentHasBeenSet = true;
}

bool ParamDsRequest::SqlContentHasBeenSet() const
{
    return m_sqlContentHasBeenSet;
}

string ParamDsRequest::GetCurRunDate() const
{
    return m_curRunDate;
}

void ParamDsRequest::SetCurRunDate(const string& _curRunDate)
{
    m_curRunDate = _curRunDate;
    m_curRunDateHasBeenSet = true;
}

bool ParamDsRequest::CurRunDateHasBeenSet() const
{
    return m_curRunDateHasBeenSet;
}

string ParamDsRequest::GetStartTime() const
{
    return m_startTime;
}

void ParamDsRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool ParamDsRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string ParamDsRequest::GetTaskId() const
{
    return m_taskId;
}

void ParamDsRequest::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool ParamDsRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string ParamDsRequest::GetKeyWords() const
{
    return m_keyWords;
}

void ParamDsRequest::SetKeyWords(const string& _keyWords)
{
    m_keyWords = _keyWords;
    m_keyWordsHasBeenSet = true;
}

bool ParamDsRequest::KeyWordsHasBeenSet() const
{
    return m_keyWordsHasBeenSet;
}

int64_t ParamDsRequest::GetMyVersion() const
{
    return m_myVersion;
}

void ParamDsRequest::SetMyVersion(const int64_t& _myVersion)
{
    m_myVersion = _myVersion;
    m_myVersionHasBeenSet = true;
}

bool ParamDsRequest::MyVersionHasBeenSet() const
{
    return m_myVersionHasBeenSet;
}

bool ParamDsRequest::GetUpstream() const
{
    return m_upstream;
}

void ParamDsRequest::SetUpstream(const bool& _upstream)
{
    m_upstream = _upstream;
    m_upstreamHasBeenSet = true;
}

bool ParamDsRequest::UpstreamHasBeenSet() const
{
    return m_upstreamHasBeenSet;
}

string ParamDsRequest::GetParamDescription() const
{
    return m_paramDescription;
}

void ParamDsRequest::SetParamDescription(const string& _paramDescription)
{
    m_paramDescription = _paramDescription;
    m_paramDescriptionHasBeenSet = true;
}

bool ParamDsRequest::ParamDescriptionHasBeenSet() const
{
    return m_paramDescriptionHasBeenSet;
}

string ParamDsRequest::GetParamDefineTest() const
{
    return m_paramDefineTest;
}

void ParamDsRequest::SetParamDefineTest(const string& _paramDefineTest)
{
    m_paramDefineTest = _paramDefineTest;
    m_paramDefineTestHasBeenSet = true;
}

bool ParamDsRequest::ParamDefineTestHasBeenSet() const
{
    return m_paramDefineTestHasBeenSet;
}

bool ParamDsRequest::GetUpdateFlag() const
{
    return m_updateFlag;
}

void ParamDsRequest::SetUpdateFlag(const bool& _updateFlag)
{
    m_updateFlag = _updateFlag;
    m_updateFlagHasBeenSet = true;
}

bool ParamDsRequest::UpdateFlagHasBeenSet() const
{
    return m_updateFlagHasBeenSet;
}

