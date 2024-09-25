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

#include <tencentcloud/omics/v20221128/model/RunOption.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Omics::V20221128::Model;
using namespace std;

RunOption::RunOption() :
    m_failureModeHasBeenSet(false),
    m_useCallCacheHasBeenSet(false),
    m_useErrorOnHoldHasBeenSet(false),
    m_finalWorkflowOutputsDirHasBeenSet(false),
    m_useRelativeOutputPathsHasBeenSet(false),
    m_addRunInfoToOutputDirHasBeenSet(false)
{
}

CoreInternalOutcome RunOption::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FailureMode") && !value["FailureMode"].IsNull())
    {
        if (!value["FailureMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunOption.FailureMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failureMode = string(value["FailureMode"].GetString());
        m_failureModeHasBeenSet = true;
    }

    if (value.HasMember("UseCallCache") && !value["UseCallCache"].IsNull())
    {
        if (!value["UseCallCache"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RunOption.UseCallCache` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_useCallCache = value["UseCallCache"].GetBool();
        m_useCallCacheHasBeenSet = true;
    }

    if (value.HasMember("UseErrorOnHold") && !value["UseErrorOnHold"].IsNull())
    {
        if (!value["UseErrorOnHold"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RunOption.UseErrorOnHold` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_useErrorOnHold = value["UseErrorOnHold"].GetBool();
        m_useErrorOnHoldHasBeenSet = true;
    }

    if (value.HasMember("FinalWorkflowOutputsDir") && !value["FinalWorkflowOutputsDir"].IsNull())
    {
        if (!value["FinalWorkflowOutputsDir"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunOption.FinalWorkflowOutputsDir` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_finalWorkflowOutputsDir = string(value["FinalWorkflowOutputsDir"].GetString());
        m_finalWorkflowOutputsDirHasBeenSet = true;
    }

    if (value.HasMember("UseRelativeOutputPaths") && !value["UseRelativeOutputPaths"].IsNull())
    {
        if (!value["UseRelativeOutputPaths"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RunOption.UseRelativeOutputPaths` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_useRelativeOutputPaths = value["UseRelativeOutputPaths"].GetBool();
        m_useRelativeOutputPathsHasBeenSet = true;
    }

    if (value.HasMember("AddRunInfoToOutputDir") && !value["AddRunInfoToOutputDir"].IsNull())
    {
        if (!value["AddRunInfoToOutputDir"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RunOption.AddRunInfoToOutputDir` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_addRunInfoToOutputDir = value["AddRunInfoToOutputDir"].GetBool();
        m_addRunInfoToOutputDirHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RunOption::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_failureModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailureMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_failureMode.c_str(), allocator).Move(), allocator);
    }

    if (m_useCallCacheHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UseCallCache";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_useCallCache, allocator);
    }

    if (m_useErrorOnHoldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UseErrorOnHold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_useErrorOnHold, allocator);
    }

    if (m_finalWorkflowOutputsDirHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FinalWorkflowOutputsDir";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_finalWorkflowOutputsDir.c_str(), allocator).Move(), allocator);
    }

    if (m_useRelativeOutputPathsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UseRelativeOutputPaths";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_useRelativeOutputPaths, allocator);
    }

    if (m_addRunInfoToOutputDirHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddRunInfoToOutputDir";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_addRunInfoToOutputDir, allocator);
    }

}


string RunOption::GetFailureMode() const
{
    return m_failureMode;
}

void RunOption::SetFailureMode(const string& _failureMode)
{
    m_failureMode = _failureMode;
    m_failureModeHasBeenSet = true;
}

bool RunOption::FailureModeHasBeenSet() const
{
    return m_failureModeHasBeenSet;
}

bool RunOption::GetUseCallCache() const
{
    return m_useCallCache;
}

void RunOption::SetUseCallCache(const bool& _useCallCache)
{
    m_useCallCache = _useCallCache;
    m_useCallCacheHasBeenSet = true;
}

bool RunOption::UseCallCacheHasBeenSet() const
{
    return m_useCallCacheHasBeenSet;
}

bool RunOption::GetUseErrorOnHold() const
{
    return m_useErrorOnHold;
}

void RunOption::SetUseErrorOnHold(const bool& _useErrorOnHold)
{
    m_useErrorOnHold = _useErrorOnHold;
    m_useErrorOnHoldHasBeenSet = true;
}

bool RunOption::UseErrorOnHoldHasBeenSet() const
{
    return m_useErrorOnHoldHasBeenSet;
}

string RunOption::GetFinalWorkflowOutputsDir() const
{
    return m_finalWorkflowOutputsDir;
}

void RunOption::SetFinalWorkflowOutputsDir(const string& _finalWorkflowOutputsDir)
{
    m_finalWorkflowOutputsDir = _finalWorkflowOutputsDir;
    m_finalWorkflowOutputsDirHasBeenSet = true;
}

bool RunOption::FinalWorkflowOutputsDirHasBeenSet() const
{
    return m_finalWorkflowOutputsDirHasBeenSet;
}

bool RunOption::GetUseRelativeOutputPaths() const
{
    return m_useRelativeOutputPaths;
}

void RunOption::SetUseRelativeOutputPaths(const bool& _useRelativeOutputPaths)
{
    m_useRelativeOutputPaths = _useRelativeOutputPaths;
    m_useRelativeOutputPathsHasBeenSet = true;
}

bool RunOption::UseRelativeOutputPathsHasBeenSet() const
{
    return m_useRelativeOutputPathsHasBeenSet;
}

bool RunOption::GetAddRunInfoToOutputDir() const
{
    return m_addRunInfoToOutputDir;
}

void RunOption::SetAddRunInfoToOutputDir(const bool& _addRunInfoToOutputDir)
{
    m_addRunInfoToOutputDir = _addRunInfoToOutputDir;
    m_addRunInfoToOutputDirHasBeenSet = true;
}

bool RunOption::AddRunInfoToOutputDirHasBeenSet() const
{
    return m_addRunInfoToOutputDirHasBeenSet;
}

