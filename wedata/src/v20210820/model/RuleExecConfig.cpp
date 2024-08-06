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

#include <tencentcloud/wedata/v20210820/model/RuleExecConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

RuleExecConfig::RuleExecConfig() :
    m_queueNameHasBeenSet(false),
    m_executorGroupIdHasBeenSet(false),
    m_engineTypeHasBeenSet(false),
    m_dlcGroupNameHasBeenSet(false)
{
}

CoreInternalOutcome RuleExecConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("QueueName") && !value["QueueName"].IsNull())
    {
        if (!value["QueueName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleExecConfig.QueueName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queueName = string(value["QueueName"].GetString());
        m_queueNameHasBeenSet = true;
    }

    if (value.HasMember("ExecutorGroupId") && !value["ExecutorGroupId"].IsNull())
    {
        if (!value["ExecutorGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleExecConfig.ExecutorGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executorGroupId = string(value["ExecutorGroupId"].GetString());
        m_executorGroupIdHasBeenSet = true;
    }

    if (value.HasMember("EngineType") && !value["EngineType"].IsNull())
    {
        if (!value["EngineType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleExecConfig.EngineType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engineType = string(value["EngineType"].GetString());
        m_engineTypeHasBeenSet = true;
    }

    if (value.HasMember("DlcGroupName") && !value["DlcGroupName"].IsNull())
    {
        if (!value["DlcGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleExecConfig.DlcGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dlcGroupName = string(value["DlcGroupName"].GetString());
        m_dlcGroupNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RuleExecConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_queueNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueueName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_queueName.c_str(), allocator).Move(), allocator);
    }

    if (m_executorGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutorGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executorGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_engineTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_engineType.c_str(), allocator).Move(), allocator);
    }

    if (m_dlcGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DlcGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dlcGroupName.c_str(), allocator).Move(), allocator);
    }

}


string RuleExecConfig::GetQueueName() const
{
    return m_queueName;
}

void RuleExecConfig::SetQueueName(const string& _queueName)
{
    m_queueName = _queueName;
    m_queueNameHasBeenSet = true;
}

bool RuleExecConfig::QueueNameHasBeenSet() const
{
    return m_queueNameHasBeenSet;
}

string RuleExecConfig::GetExecutorGroupId() const
{
    return m_executorGroupId;
}

void RuleExecConfig::SetExecutorGroupId(const string& _executorGroupId)
{
    m_executorGroupId = _executorGroupId;
    m_executorGroupIdHasBeenSet = true;
}

bool RuleExecConfig::ExecutorGroupIdHasBeenSet() const
{
    return m_executorGroupIdHasBeenSet;
}

string RuleExecConfig::GetEngineType() const
{
    return m_engineType;
}

void RuleExecConfig::SetEngineType(const string& _engineType)
{
    m_engineType = _engineType;
    m_engineTypeHasBeenSet = true;
}

bool RuleExecConfig::EngineTypeHasBeenSet() const
{
    return m_engineTypeHasBeenSet;
}

string RuleExecConfig::GetDlcGroupName() const
{
    return m_dlcGroupName;
}

void RuleExecConfig::SetDlcGroupName(const string& _dlcGroupName)
{
    m_dlcGroupName = _dlcGroupName;
    m_dlcGroupNameHasBeenSet = true;
}

bool RuleExecConfig::DlcGroupNameHasBeenSet() const
{
    return m_dlcGroupNameHasBeenSet;
}

