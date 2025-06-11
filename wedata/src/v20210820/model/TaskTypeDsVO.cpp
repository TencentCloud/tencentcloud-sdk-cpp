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

#include <tencentcloud/wedata/v20210820/model/TaskTypeDsVO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

TaskTypeDsVO::TaskTypeDsVO() :
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

CoreInternalOutcome TaskTypeDsVO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TypeId") && !value["TypeId"].IsNull())
    {
        if (!value["TypeId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTypeDsVO.TypeId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_typeId = value["TypeId"].GetInt64();
        m_typeIdHasBeenSet = true;
    }

    if (value.HasMember("TypeDesc") && !value["TypeDesc"].IsNull())
    {
        if (!value["TypeDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTypeDsVO.TypeDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_typeDesc = string(value["TypeDesc"].GetString());
        m_typeDescHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTypeDsVO.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("SourceServerType") && !value["SourceServerType"].IsNull())
    {
        if (!value["SourceServerType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTypeDsVO.SourceServerType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceServerType = string(value["SourceServerType"].GetString());
        m_sourceServerTypeHasBeenSet = true;
    }

    if (value.HasMember("TargetServerType") && !value["TargetServerType"].IsNull())
    {
        if (!value["TargetServerType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTypeDsVO.TargetServerType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetServerType = string(value["TargetServerType"].GetString());
        m_targetServerTypeHasBeenSet = true;
    }

    if (value.HasMember("RunJarName") && !value["RunJarName"].IsNull())
    {
        if (!value["RunJarName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTypeDsVO.RunJarName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runJarName = string(value["RunJarName"].GetString());
        m_runJarNameHasBeenSet = true;
    }

    if (value.HasMember("KillAble") && !value["KillAble"].IsNull())
    {
        if (!value["KillAble"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTypeDsVO.KillAble` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_killAble = value["KillAble"].GetInt64();
        m_killAbleHasBeenSet = true;
    }

    if (value.HasMember("TypeSort") && !value["TypeSort"].IsNull())
    {
        if (!value["TypeSort"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTypeDsVO.TypeSort` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_typeSort = string(value["TypeSort"].GetString());
        m_typeSortHasBeenSet = true;
    }

    if (value.HasMember("InCharge") && !value["InCharge"].IsNull())
    {
        if (!value["InCharge"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTypeDsVO.InCharge` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inCharge = string(value["InCharge"].GetString());
        m_inChargeHasBeenSet = true;
    }

    if (value.HasMember("BrokerParallelism") && !value["BrokerParallelism"].IsNull())
    {
        if (!value["BrokerParallelism"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTypeDsVO.BrokerParallelism` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_brokerParallelism = value["BrokerParallelism"].GetInt64();
        m_brokerParallelismHasBeenSet = true;
    }

    if (value.HasMember("TaskParallelism") && !value["TaskParallelism"].IsNull())
    {
        if (!value["TaskParallelism"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTypeDsVO.TaskParallelism` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskParallelism = value["TaskParallelism"].GetInt64();
        m_taskParallelismHasBeenSet = true;
    }

    if (value.HasMember("DoRedoParallelism") && !value["DoRedoParallelism"].IsNull())
    {
        if (!value["DoRedoParallelism"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTypeDsVO.DoRedoParallelism` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_doRedoParallelism = value["DoRedoParallelism"].GetInt64();
        m_doRedoParallelismHasBeenSet = true;
    }

    if (value.HasMember("DowngradePriorityTries") && !value["DowngradePriorityTries"].IsNull())
    {
        if (!value["DowngradePriorityTries"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTypeDsVO.DowngradePriorityTries` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_downgradePriorityTries = value["DowngradePriorityTries"].GetInt64();
        m_downgradePriorityTriesHasBeenSet = true;
    }

    if (value.HasMember("RetryWait") && !value["RetryWait"].IsNull())
    {
        if (!value["RetryWait"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTypeDsVO.RetryWait` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_retryWait = value["RetryWait"].GetInt64();
        m_retryWaitHasBeenSet = true;
    }

    if (value.HasMember("RetryLimit") && !value["RetryLimit"].IsNull())
    {
        if (!value["RetryLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTypeDsVO.RetryLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_retryLimit = value["RetryLimit"].GetInt64();
        m_retryLimitHasBeenSet = true;
    }

    if (value.HasMember("DefaultAliveWait") && !value["DefaultAliveWait"].IsNull())
    {
        if (!value["DefaultAliveWait"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTypeDsVO.DefaultAliveWait` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_defaultAliveWait = value["DefaultAliveWait"].GetInt64();
        m_defaultAliveWaitHasBeenSet = true;
    }

    if (value.HasMember("PollingSeconds") && !value["PollingSeconds"].IsNull())
    {
        if (!value["PollingSeconds"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTypeDsVO.PollingSeconds` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pollingSeconds = value["PollingSeconds"].GetInt64();
        m_pollingSecondsHasBeenSet = true;
    }

    if (value.HasMember("ParamList") && !value["ParamList"].IsNull())
    {
        if (!value["ParamList"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTypeDsVO.ParamList` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paramList = string(value["ParamList"].GetString());
        m_paramListHasBeenSet = true;
    }

    if (value.HasMember("TaskTypeExtension") && !value["TaskTypeExtension"].IsNull())
    {
        if (!value["TaskTypeExtension"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaskTypeDsVO.TaskTypeExtension` is not array type"));

        const rapidjson::Value &tmpValue = value["TaskTypeExtension"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TaskTypeExtParamDsVO item;
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
            return CoreInternalOutcome(Core::Error("response `TaskTypeDsVO.FileType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileType = string(value["FileType"].GetString());
        m_fileTypeHasBeenSet = true;
    }

    if (value.HasMember("SelectFilePath") && !value["SelectFilePath"].IsNull())
    {
        if (!value["SelectFilePath"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTypeDsVO.SelectFilePath` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_selectFilePath = value["SelectFilePath"].GetBool();
        m_selectFilePathHasBeenSet = true;
    }

    if (value.HasMember("ExcludeCommonLib") && !value["ExcludeCommonLib"].IsNull())
    {
        if (!value["ExcludeCommonLib"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTypeDsVO.ExcludeCommonLib` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_excludeCommonLib = value["ExcludeCommonLib"].GetBool();
        m_excludeCommonLibHasBeenSet = true;
    }

    if (value.HasMember("PostHooks") && !value["PostHooks"].IsNull())
    {
        if (!value["PostHooks"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskTypeDsVO.PostHooks` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_postHooks = string(value["PostHooks"].GetString());
        m_postHooksHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskTypeDsVO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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


int64_t TaskTypeDsVO::GetTypeId() const
{
    return m_typeId;
}

void TaskTypeDsVO::SetTypeId(const int64_t& _typeId)
{
    m_typeId = _typeId;
    m_typeIdHasBeenSet = true;
}

bool TaskTypeDsVO::TypeIdHasBeenSet() const
{
    return m_typeIdHasBeenSet;
}

string TaskTypeDsVO::GetTypeDesc() const
{
    return m_typeDesc;
}

void TaskTypeDsVO::SetTypeDesc(const string& _typeDesc)
{
    m_typeDesc = _typeDesc;
    m_typeDescHasBeenSet = true;
}

bool TaskTypeDsVO::TypeDescHasBeenSet() const
{
    return m_typeDescHasBeenSet;
}

string TaskTypeDsVO::GetCreateTime() const
{
    return m_createTime;
}

void TaskTypeDsVO::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool TaskTypeDsVO::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string TaskTypeDsVO::GetSourceServerType() const
{
    return m_sourceServerType;
}

void TaskTypeDsVO::SetSourceServerType(const string& _sourceServerType)
{
    m_sourceServerType = _sourceServerType;
    m_sourceServerTypeHasBeenSet = true;
}

bool TaskTypeDsVO::SourceServerTypeHasBeenSet() const
{
    return m_sourceServerTypeHasBeenSet;
}

string TaskTypeDsVO::GetTargetServerType() const
{
    return m_targetServerType;
}

void TaskTypeDsVO::SetTargetServerType(const string& _targetServerType)
{
    m_targetServerType = _targetServerType;
    m_targetServerTypeHasBeenSet = true;
}

bool TaskTypeDsVO::TargetServerTypeHasBeenSet() const
{
    return m_targetServerTypeHasBeenSet;
}

string TaskTypeDsVO::GetRunJarName() const
{
    return m_runJarName;
}

void TaskTypeDsVO::SetRunJarName(const string& _runJarName)
{
    m_runJarName = _runJarName;
    m_runJarNameHasBeenSet = true;
}

bool TaskTypeDsVO::RunJarNameHasBeenSet() const
{
    return m_runJarNameHasBeenSet;
}

int64_t TaskTypeDsVO::GetKillAble() const
{
    return m_killAble;
}

void TaskTypeDsVO::SetKillAble(const int64_t& _killAble)
{
    m_killAble = _killAble;
    m_killAbleHasBeenSet = true;
}

bool TaskTypeDsVO::KillAbleHasBeenSet() const
{
    return m_killAbleHasBeenSet;
}

string TaskTypeDsVO::GetTypeSort() const
{
    return m_typeSort;
}

void TaskTypeDsVO::SetTypeSort(const string& _typeSort)
{
    m_typeSort = _typeSort;
    m_typeSortHasBeenSet = true;
}

bool TaskTypeDsVO::TypeSortHasBeenSet() const
{
    return m_typeSortHasBeenSet;
}

string TaskTypeDsVO::GetInCharge() const
{
    return m_inCharge;
}

void TaskTypeDsVO::SetInCharge(const string& _inCharge)
{
    m_inCharge = _inCharge;
    m_inChargeHasBeenSet = true;
}

bool TaskTypeDsVO::InChargeHasBeenSet() const
{
    return m_inChargeHasBeenSet;
}

int64_t TaskTypeDsVO::GetBrokerParallelism() const
{
    return m_brokerParallelism;
}

void TaskTypeDsVO::SetBrokerParallelism(const int64_t& _brokerParallelism)
{
    m_brokerParallelism = _brokerParallelism;
    m_brokerParallelismHasBeenSet = true;
}

bool TaskTypeDsVO::BrokerParallelismHasBeenSet() const
{
    return m_brokerParallelismHasBeenSet;
}

int64_t TaskTypeDsVO::GetTaskParallelism() const
{
    return m_taskParallelism;
}

void TaskTypeDsVO::SetTaskParallelism(const int64_t& _taskParallelism)
{
    m_taskParallelism = _taskParallelism;
    m_taskParallelismHasBeenSet = true;
}

bool TaskTypeDsVO::TaskParallelismHasBeenSet() const
{
    return m_taskParallelismHasBeenSet;
}

int64_t TaskTypeDsVO::GetDoRedoParallelism() const
{
    return m_doRedoParallelism;
}

void TaskTypeDsVO::SetDoRedoParallelism(const int64_t& _doRedoParallelism)
{
    m_doRedoParallelism = _doRedoParallelism;
    m_doRedoParallelismHasBeenSet = true;
}

bool TaskTypeDsVO::DoRedoParallelismHasBeenSet() const
{
    return m_doRedoParallelismHasBeenSet;
}

int64_t TaskTypeDsVO::GetDowngradePriorityTries() const
{
    return m_downgradePriorityTries;
}

void TaskTypeDsVO::SetDowngradePriorityTries(const int64_t& _downgradePriorityTries)
{
    m_downgradePriorityTries = _downgradePriorityTries;
    m_downgradePriorityTriesHasBeenSet = true;
}

bool TaskTypeDsVO::DowngradePriorityTriesHasBeenSet() const
{
    return m_downgradePriorityTriesHasBeenSet;
}

int64_t TaskTypeDsVO::GetRetryWait() const
{
    return m_retryWait;
}

void TaskTypeDsVO::SetRetryWait(const int64_t& _retryWait)
{
    m_retryWait = _retryWait;
    m_retryWaitHasBeenSet = true;
}

bool TaskTypeDsVO::RetryWaitHasBeenSet() const
{
    return m_retryWaitHasBeenSet;
}

int64_t TaskTypeDsVO::GetRetryLimit() const
{
    return m_retryLimit;
}

void TaskTypeDsVO::SetRetryLimit(const int64_t& _retryLimit)
{
    m_retryLimit = _retryLimit;
    m_retryLimitHasBeenSet = true;
}

bool TaskTypeDsVO::RetryLimitHasBeenSet() const
{
    return m_retryLimitHasBeenSet;
}

int64_t TaskTypeDsVO::GetDefaultAliveWait() const
{
    return m_defaultAliveWait;
}

void TaskTypeDsVO::SetDefaultAliveWait(const int64_t& _defaultAliveWait)
{
    m_defaultAliveWait = _defaultAliveWait;
    m_defaultAliveWaitHasBeenSet = true;
}

bool TaskTypeDsVO::DefaultAliveWaitHasBeenSet() const
{
    return m_defaultAliveWaitHasBeenSet;
}

int64_t TaskTypeDsVO::GetPollingSeconds() const
{
    return m_pollingSeconds;
}

void TaskTypeDsVO::SetPollingSeconds(const int64_t& _pollingSeconds)
{
    m_pollingSeconds = _pollingSeconds;
    m_pollingSecondsHasBeenSet = true;
}

bool TaskTypeDsVO::PollingSecondsHasBeenSet() const
{
    return m_pollingSecondsHasBeenSet;
}

string TaskTypeDsVO::GetParamList() const
{
    return m_paramList;
}

void TaskTypeDsVO::SetParamList(const string& _paramList)
{
    m_paramList = _paramList;
    m_paramListHasBeenSet = true;
}

bool TaskTypeDsVO::ParamListHasBeenSet() const
{
    return m_paramListHasBeenSet;
}

vector<TaskTypeExtParamDsVO> TaskTypeDsVO::GetTaskTypeExtension() const
{
    return m_taskTypeExtension;
}

void TaskTypeDsVO::SetTaskTypeExtension(const vector<TaskTypeExtParamDsVO>& _taskTypeExtension)
{
    m_taskTypeExtension = _taskTypeExtension;
    m_taskTypeExtensionHasBeenSet = true;
}

bool TaskTypeDsVO::TaskTypeExtensionHasBeenSet() const
{
    return m_taskTypeExtensionHasBeenSet;
}

string TaskTypeDsVO::GetFileType() const
{
    return m_fileType;
}

void TaskTypeDsVO::SetFileType(const string& _fileType)
{
    m_fileType = _fileType;
    m_fileTypeHasBeenSet = true;
}

bool TaskTypeDsVO::FileTypeHasBeenSet() const
{
    return m_fileTypeHasBeenSet;
}

bool TaskTypeDsVO::GetSelectFilePath() const
{
    return m_selectFilePath;
}

void TaskTypeDsVO::SetSelectFilePath(const bool& _selectFilePath)
{
    m_selectFilePath = _selectFilePath;
    m_selectFilePathHasBeenSet = true;
}

bool TaskTypeDsVO::SelectFilePathHasBeenSet() const
{
    return m_selectFilePathHasBeenSet;
}

bool TaskTypeDsVO::GetExcludeCommonLib() const
{
    return m_excludeCommonLib;
}

void TaskTypeDsVO::SetExcludeCommonLib(const bool& _excludeCommonLib)
{
    m_excludeCommonLib = _excludeCommonLib;
    m_excludeCommonLibHasBeenSet = true;
}

bool TaskTypeDsVO::ExcludeCommonLibHasBeenSet() const
{
    return m_excludeCommonLibHasBeenSet;
}

string TaskTypeDsVO::GetPostHooks() const
{
    return m_postHooks;
}

void TaskTypeDsVO::SetPostHooks(const string& _postHooks)
{
    m_postHooks = _postHooks;
    m_postHooksHasBeenSet = true;
}

bool TaskTypeDsVO::PostHooksHasBeenSet() const
{
    return m_postHooksHasBeenSet;
}

