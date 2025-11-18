/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/apm/v20210622/model/AgentOperationConfigView.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apm::V20210622::Model;
using namespace std;

AgentOperationConfigView::AgentOperationConfigView() :
    m_retentionValidHasBeenSet(false),
    m_ignoreOperationHasBeenSet(false),
    m_retentionOperationHasBeenSet(false)
{
}

CoreInternalOutcome AgentOperationConfigView::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RetentionValid") && !value["RetentionValid"].IsNull())
    {
        if (!value["RetentionValid"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AgentOperationConfigView.RetentionValid` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_retentionValid = value["RetentionValid"].GetBool();
        m_retentionValidHasBeenSet = true;
    }

    if (value.HasMember("IgnoreOperation") && !value["IgnoreOperation"].IsNull())
    {
        if (!value["IgnoreOperation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentOperationConfigView.IgnoreOperation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ignoreOperation = string(value["IgnoreOperation"].GetString());
        m_ignoreOperationHasBeenSet = true;
    }

    if (value.HasMember("RetentionOperation") && !value["RetentionOperation"].IsNull())
    {
        if (!value["RetentionOperation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentOperationConfigView.RetentionOperation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_retentionOperation = string(value["RetentionOperation"].GetString());
        m_retentionOperationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AgentOperationConfigView::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_retentionValidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetentionValid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_retentionValid, allocator);
    }

    if (m_ignoreOperationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IgnoreOperation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ignoreOperation.c_str(), allocator).Move(), allocator);
    }

    if (m_retentionOperationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetentionOperation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_retentionOperation.c_str(), allocator).Move(), allocator);
    }

}


bool AgentOperationConfigView::GetRetentionValid() const
{
    return m_retentionValid;
}

void AgentOperationConfigView::SetRetentionValid(const bool& _retentionValid)
{
    m_retentionValid = _retentionValid;
    m_retentionValidHasBeenSet = true;
}

bool AgentOperationConfigView::RetentionValidHasBeenSet() const
{
    return m_retentionValidHasBeenSet;
}

string AgentOperationConfigView::GetIgnoreOperation() const
{
    return m_ignoreOperation;
}

void AgentOperationConfigView::SetIgnoreOperation(const string& _ignoreOperation)
{
    m_ignoreOperation = _ignoreOperation;
    m_ignoreOperationHasBeenSet = true;
}

bool AgentOperationConfigView::IgnoreOperationHasBeenSet() const
{
    return m_ignoreOperationHasBeenSet;
}

string AgentOperationConfigView::GetRetentionOperation() const
{
    return m_retentionOperation;
}

void AgentOperationConfigView::SetRetentionOperation(const string& _retentionOperation)
{
    m_retentionOperation = _retentionOperation;
    m_retentionOperationHasBeenSet = true;
}

bool AgentOperationConfigView::RetentionOperationHasBeenSet() const
{
    return m_retentionOperationHasBeenSet;
}

