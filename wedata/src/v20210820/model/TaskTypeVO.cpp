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

#include <tencentcloud/wedata/v20210820/model/TaskTypeVO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

TaskTypeVO::TaskTypeVO() :
    m_typeIdHasBeenSet(false),
    m_typeDescHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_sourceServerTypeHasBeenSet(false),
    m_targetServerTypeHasBeenSet(false),
    m_runJarNameHasBeenSet(false),
    m_killAbleHasBeenSet(false),
    m_typeSortHasBeenSet(false),
    m_inChargeHasBeenSet(false),
    m_brokerParallelismHasBeenSet(false),
    m_taskParallelismHasBeenSet(false),
    m_doRedoParallelismHasBeenSet(false),
    m_downgradePriorityTriesHasBeenSet(false),
    m_retryWaitHasBeenSet(false),
    m_retryLimitHasBeenSet(false),
    m_defaultAliveWaitHasBeenSet(false),
    m_pollingSecondsHasBeenSet(false),
    m_paramListHasBeenSet(false),
    m_taskTypeExtensionHasBeenSet(false),
    m_fileTypeHasBeenSet(false),
    m_selectFilePathHasBeenSet(false),
    m_excludeCommonLibHasBeenSet(false),
    m_postHooksHasBeenSet(false)
{
}

CoreInternalOutcome TaskTypeVO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TypeId") && !value["TypeId"].IsNull())
    {
        if (!value["TypeId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTypeVO.TypeId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_typeId = value["TypeId"].GetInt64();
        m_typeIdHasBeenSet = true;
    }

    if (value.HasMember("TypeDesc") && !value["TypeDesc"].IsNull())
    {
        if (!value["TypeDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTypeVO.TypeDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_typeDesc = string(value["TypeDesc"].GetString());
        m_typeDescHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTypeVO.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("SourceServerType") && !value["SourceServerType"].IsNull())
    {
        if (!value["SourceServerType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTypeVO.SourceServerType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceServerType = string(value["SourceServerType"].GetString());
        m_sourceServerTypeHasBeenSet = true;
    }

    if (value.HasMember("TargetServerType") && !value["TargetServerType"].IsNull())
    {
        if (!value["TargetServerType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTypeVO.TargetServerType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetServerType = string(value["TargetServerType"].GetString());
        m_targetServerTypeHasBeenSet = true;
    }

    if (value.HasMember("RunJarName") && !value["RunJarName"].IsNull())
    {
        if (!value["RunJarName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTypeVO.RunJarName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runJarName = string(value["RunJarName"].GetString());
        m_runJarNameHasBeenSet = true;
    }

    if (value.HasMember("KillAble") && !value["KillAble"].IsNull())
    {
        if (!value["KillAble"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTypeVO.KillAble` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_killAble = value["KillAble"].GetInt64();
        m_killAbleHasBeenSet = true;
    }

    if (value.HasMember("TypeSort") && !value["TypeSort"].IsNull())
    {
        if (!value["TypeSort"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTypeVO.TypeSort` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_typeSort = string(value["TypeSort"].GetString());
        m_typeSortHasBeenSet = true;
    }

    if (value.HasMember("InCharge") && !value["InCharge"].IsNull())
    {
        if (!value["InCharge"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTypeVO.InCharge` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inCharge = string(value["InCharge"].GetString());
        m_inChargeHasBeenSet = true;
    }

    if (value.HasMember("BrokerParallelism") && !value["BrokerParallelism"].IsNull())
    {
        if (!value["BrokerParallelism"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTypeVO.BrokerParallelism` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_brokerParallelism = value["BrokerParallelism"].GetInt64();
        m_brokerParallelismHasBeenSet = true;
    }

    if (value.HasMember("TaskParallelism") && !value["TaskParallelism"].IsNull())
    {
        if (!value["TaskParallelism"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTypeVO.TaskParallelism` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskParallelism = value["TaskParallelism"].GetInt64();
        m_taskParallelismHasBeenSet = true;
    }

    if (value.HasMember("DoRedoParallelism") && !value["DoRedoParallelism"].IsNull())
    {
        if (!value["DoRedoParallelism"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTypeVO.DoRedoParallelism` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_doRedoParallelism = value["DoRedoParallelism"].GetInt64();
        m_doRedoParallelismHasBeenSet = true;
    }

    if (value.HasMember("DowngradePriorityTries") && !value["DowngradePriorityTries"].IsNull())
    {
        if (!value["DowngradePriorityTries"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTypeVO.DowngradePriorityTries` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_downgradePriorityTries = value["DowngradePriorityTries"].GetInt64();
        m_downgradePriorityTriesHasBeenSet = true;
    }

    if (value.HasMember("RetryWait") && !value["RetryWait"].IsNull())
    {
        if (!value["RetryWait"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTypeVO.RetryWait` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_retryWait = value["RetryWait"].GetInt64();
        m_retryWaitHasBeenSet = true;
    }

    if (value.HasMember("RetryLimit") && !value["RetryLimit"].IsNull())
    {
        if (!value["RetryLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTypeVO.RetryLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_retryLimit = value["RetryLimit"].GetInt64();
        m_retryLimitHasBeenSet = true;
    }

    if (value.HasMember("DefaultAliveWait") && !value["DefaultAliveWait"].IsNull())
    {
        if (!value["DefaultAliveWait"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTypeVO.DefaultAliveWait` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_defaultAliveWait = value["DefaultAliveWait"].GetInt64();
        m_defaultAliveWaitHasBeenSet = true;
    }

    if (value.HasMember("PollingSeconds") && !value["PollingSeconds"].IsNull())
    {
        if (!value["PollingSeconds"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTypeVO.PollingSeconds` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pollingSeconds = value["PollingSeconds"].GetInt64();
        m_pollingSecondsHasBeenSet = true;
    }

    if (value.HasMember("ParamList") && !value["ParamList"].IsNull())
    {
        if (!value["ParamList"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTypeVO.ParamList` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paramList = string(value["ParamList"].GetString());
        m_paramListHasBeenSet = true;
    }

    if (value.HasMember("TaskTypeExtension") && !value["TaskTypeExtension"].IsNull())
    {
        if (!value["TaskTypeExtension"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaskTypeVO.TaskTypeExtension` is not array type"));

        const rapidjson::Value &tmpValue = value["TaskTypeExtension"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TaskTypeExtParamVO item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_taskTypeExtension.push_back(item);
        }
        m_taskTypeExtensionHasBeenSet = true;
    }

    if (value.HasMember("FileType") && !value["FileType"].IsNull())
    {
        if (!value["FileType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTypeVO.FileType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileType = string(value["FileType"].GetString());
        m_fileTypeHasBeenSet = true;
    }

    if (value.HasMember("SelectFilePath") && !value["SelectFilePath"].IsNull())
    {
        if (!value["SelectFilePath"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTypeVO.SelectFilePath` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_selectFilePath = value["SelectFilePath"].GetBool();
        m_selectFilePathHasBeenSet = true;
    }

    if (value.HasMember("ExcludeCommonLib") && !value["ExcludeCommonLib"].IsNull())
    {
        if (!value["ExcludeCommonLib"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTypeVO.ExcludeCommonLib` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_excludeCommonLib = value["ExcludeCommonLib"].GetBool();
        m_excludeCommonLibHasBeenSet = true;
    }

    if (value.HasMember("PostHooks") && !value["PostHooks"].IsNull())
    {
        if (!value["PostHooks"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTypeVO.PostHooks` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_postHooks = string(value["PostHooks"].GetString());
        m_postHooksHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskTypeVO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TypeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_typeId, allocator);
    }

    if (m_typeDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TypeDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_typeDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceServerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceServerType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceServerType.c_str(), allocator).Move(), allocator);
    }

    if (m_targetServerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetServerType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetServerType.c_str(), allocator).Move(), allocator);
    }

    if (m_runJarNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunJarName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runJarName.c_str(), allocator).Move(), allocator);
    }

    if (m_killAbleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KillAble";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_killAble, allocator);
    }

    if (m_typeSortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TypeSort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_typeSort.c_str(), allocator).Move(), allocator);
    }

    if (m_inChargeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InCharge";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inCharge.c_str(), allocator).Move(), allocator);
    }

    if (m_brokerParallelismHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BrokerParallelism";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_brokerParallelism, allocator);
    }

    if (m_taskParallelismHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskParallelism";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskParallelism, allocator);
    }

    if (m_doRedoParallelismHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DoRedoParallelism";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_doRedoParallelism, allocator);
    }

    if (m_downgradePriorityTriesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DowngradePriorityTries";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_downgradePriorityTries, allocator);
    }

    if (m_retryWaitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetryWait";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_retryWait, allocator);
    }

    if (m_retryLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetryLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_retryLimit, allocator);
    }

    if (m_defaultAliveWaitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultAliveWait";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_defaultAliveWait, allocator);
    }

    if (m_pollingSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PollingSeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pollingSeconds, allocator);
    }

    if (m_paramListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paramList.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTypeExtensionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskTypeExtension";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_taskTypeExtension.begin(); itr != m_taskTypeExtension.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_fileTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileType.c_str(), allocator).Move(), allocator);
    }

    if (m_selectFilePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SelectFilePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_selectFilePath, allocator);
    }

    if (m_excludeCommonLibHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExcludeCommonLib";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_excludeCommonLib, allocator);
    }

    if (m_postHooksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PostHooks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_postHooks.c_str(), allocator).Move(), allocator);
    }

}


int64_t TaskTypeVO::GetTypeId() const
{
    return m_typeId;
}

void TaskTypeVO::SetTypeId(const int64_t& _typeId)
{
    m_typeId = _typeId;
    m_typeIdHasBeenSet = true;
}

bool TaskTypeVO::TypeIdHasBeenSet() const
{
    return m_typeIdHasBeenSet;
}

string TaskTypeVO::GetTypeDesc() const
{
    return m_typeDesc;
}

void TaskTypeVO::SetTypeDesc(const string& _typeDesc)
{
    m_typeDesc = _typeDesc;
    m_typeDescHasBeenSet = true;
}

bool TaskTypeVO::TypeDescHasBeenSet() const
{
    return m_typeDescHasBeenSet;
}

string TaskTypeVO::GetCreateTime() const
{
    return m_createTime;
}

void TaskTypeVO::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool TaskTypeVO::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string TaskTypeVO::GetSourceServerType() const
{
    return m_sourceServerType;
}

void TaskTypeVO::SetSourceServerType(const string& _sourceServerType)
{
    m_sourceServerType = _sourceServerType;
    m_sourceServerTypeHasBeenSet = true;
}

bool TaskTypeVO::SourceServerTypeHasBeenSet() const
{
    return m_sourceServerTypeHasBeenSet;
}

string TaskTypeVO::GetTargetServerType() const
{
    return m_targetServerType;
}

void TaskTypeVO::SetTargetServerType(const string& _targetServerType)
{
    m_targetServerType = _targetServerType;
    m_targetServerTypeHasBeenSet = true;
}

bool TaskTypeVO::TargetServerTypeHasBeenSet() const
{
    return m_targetServerTypeHasBeenSet;
}

string TaskTypeVO::GetRunJarName() const
{
    return m_runJarName;
}

void TaskTypeVO::SetRunJarName(const string& _runJarName)
{
    m_runJarName = _runJarName;
    m_runJarNameHasBeenSet = true;
}

bool TaskTypeVO::RunJarNameHasBeenSet() const
{
    return m_runJarNameHasBeenSet;
}

int64_t TaskTypeVO::GetKillAble() const
{
    return m_killAble;
}

void TaskTypeVO::SetKillAble(const int64_t& _killAble)
{
    m_killAble = _killAble;
    m_killAbleHasBeenSet = true;
}

bool TaskTypeVO::KillAbleHasBeenSet() const
{
    return m_killAbleHasBeenSet;
}

string TaskTypeVO::GetTypeSort() const
{
    return m_typeSort;
}

void TaskTypeVO::SetTypeSort(const string& _typeSort)
{
    m_typeSort = _typeSort;
    m_typeSortHasBeenSet = true;
}

bool TaskTypeVO::TypeSortHasBeenSet() const
{
    return m_typeSortHasBeenSet;
}

string TaskTypeVO::GetInCharge() const
{
    return m_inCharge;
}

void TaskTypeVO::SetInCharge(const string& _inCharge)
{
    m_inCharge = _inCharge;
    m_inChargeHasBeenSet = true;
}

bool TaskTypeVO::InChargeHasBeenSet() const
{
    return m_inChargeHasBeenSet;
}

int64_t TaskTypeVO::GetBrokerParallelism() const
{
    return m_brokerParallelism;
}

void TaskTypeVO::SetBrokerParallelism(const int64_t& _brokerParallelism)
{
    m_brokerParallelism = _brokerParallelism;
    m_brokerParallelismHasBeenSet = true;
}

bool TaskTypeVO::BrokerParallelismHasBeenSet() const
{
    return m_brokerParallelismHasBeenSet;
}

int64_t TaskTypeVO::GetTaskParallelism() const
{
    return m_taskParallelism;
}

void TaskTypeVO::SetTaskParallelism(const int64_t& _taskParallelism)
{
    m_taskParallelism = _taskParallelism;
    m_taskParallelismHasBeenSet = true;
}

bool TaskTypeVO::TaskParallelismHasBeenSet() const
{
    return m_taskParallelismHasBeenSet;
}

int64_t TaskTypeVO::GetDoRedoParallelism() const
{
    return m_doRedoParallelism;
}

void TaskTypeVO::SetDoRedoParallelism(const int64_t& _doRedoParallelism)
{
    m_doRedoParallelism = _doRedoParallelism;
    m_doRedoParallelismHasBeenSet = true;
}

bool TaskTypeVO::DoRedoParallelismHasBeenSet() const
{
    return m_doRedoParallelismHasBeenSet;
}

int64_t TaskTypeVO::GetDowngradePriorityTries() const
{
    return m_downgradePriorityTries;
}

void TaskTypeVO::SetDowngradePriorityTries(const int64_t& _downgradePriorityTries)
{
    m_downgradePriorityTries = _downgradePriorityTries;
    m_downgradePriorityTriesHasBeenSet = true;
}

bool TaskTypeVO::DowngradePriorityTriesHasBeenSet() const
{
    return m_downgradePriorityTriesHasBeenSet;
}

int64_t TaskTypeVO::GetRetryWait() const
{
    return m_retryWait;
}

void TaskTypeVO::SetRetryWait(const int64_t& _retryWait)
{
    m_retryWait = _retryWait;
    m_retryWaitHasBeenSet = true;
}

bool TaskTypeVO::RetryWaitHasBeenSet() const
{
    return m_retryWaitHasBeenSet;
}

int64_t TaskTypeVO::GetRetryLimit() const
{
    return m_retryLimit;
}

void TaskTypeVO::SetRetryLimit(const int64_t& _retryLimit)
{
    m_retryLimit = _retryLimit;
    m_retryLimitHasBeenSet = true;
}

bool TaskTypeVO::RetryLimitHasBeenSet() const
{
    return m_retryLimitHasBeenSet;
}

int64_t TaskTypeVO::GetDefaultAliveWait() const
{
    return m_defaultAliveWait;
}

void TaskTypeVO::SetDefaultAliveWait(const int64_t& _defaultAliveWait)
{
    m_defaultAliveWait = _defaultAliveWait;
    m_defaultAliveWaitHasBeenSet = true;
}

bool TaskTypeVO::DefaultAliveWaitHasBeenSet() const
{
    return m_defaultAliveWaitHasBeenSet;
}

int64_t TaskTypeVO::GetPollingSeconds() const
{
    return m_pollingSeconds;
}

void TaskTypeVO::SetPollingSeconds(const int64_t& _pollingSeconds)
{
    m_pollingSeconds = _pollingSeconds;
    m_pollingSecondsHasBeenSet = true;
}

bool TaskTypeVO::PollingSecondsHasBeenSet() const
{
    return m_pollingSecondsHasBeenSet;
}

string TaskTypeVO::GetParamList() const
{
    return m_paramList;
}

void TaskTypeVO::SetParamList(const string& _paramList)
{
    m_paramList = _paramList;
    m_paramListHasBeenSet = true;
}

bool TaskTypeVO::ParamListHasBeenSet() const
{
    return m_paramListHasBeenSet;
}

vector<TaskTypeExtParamVO> TaskTypeVO::GetTaskTypeExtension() const
{
    return m_taskTypeExtension;
}

void TaskTypeVO::SetTaskTypeExtension(const vector<TaskTypeExtParamVO>& _taskTypeExtension)
{
    m_taskTypeExtension = _taskTypeExtension;
    m_taskTypeExtensionHasBeenSet = true;
}

bool TaskTypeVO::TaskTypeExtensionHasBeenSet() const
{
    return m_taskTypeExtensionHasBeenSet;
}

string TaskTypeVO::GetFileType() const
{
    return m_fileType;
}

void TaskTypeVO::SetFileType(const string& _fileType)
{
    m_fileType = _fileType;
    m_fileTypeHasBeenSet = true;
}

bool TaskTypeVO::FileTypeHasBeenSet() const
{
    return m_fileTypeHasBeenSet;
}

bool TaskTypeVO::GetSelectFilePath() const
{
    return m_selectFilePath;
}

void TaskTypeVO::SetSelectFilePath(const bool& _selectFilePath)
{
    m_selectFilePath = _selectFilePath;
    m_selectFilePathHasBeenSet = true;
}

bool TaskTypeVO::SelectFilePathHasBeenSet() const
{
    return m_selectFilePathHasBeenSet;
}

bool TaskTypeVO::GetExcludeCommonLib() const
{
    return m_excludeCommonLib;
}

void TaskTypeVO::SetExcludeCommonLib(const bool& _excludeCommonLib)
{
    m_excludeCommonLib = _excludeCommonLib;
    m_excludeCommonLibHasBeenSet = true;
}

bool TaskTypeVO::ExcludeCommonLibHasBeenSet() const
{
    return m_excludeCommonLibHasBeenSet;
}

string TaskTypeVO::GetPostHooks() const
{
    return m_postHooks;
}

void TaskTypeVO::SetPostHooks(const string& _postHooks)
{
    m_postHooks = _postHooks;
    m_postHooksHasBeenSet = true;
}

bool TaskTypeVO::PostHooksHasBeenSet() const
{
    return m_postHooksHasBeenSet;
}

