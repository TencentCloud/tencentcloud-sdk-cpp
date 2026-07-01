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

#include <tencentcloud/csip/v20221121/model/RuleContentCmdLine.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

RuleContentCmdLine::RuleContentCmdLine() :
    m_processHasBeenSet(false),
    m_parentProcessHasBeenSet(false),
    m_ancestorProcessHasBeenSet(false)
{
}

CoreInternalOutcome RuleContentCmdLine::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Process") && !value["Process"].IsNull())
    {
        if (!value["Process"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RuleContentCmdLine.Process` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_process.Deserialize(value["Process"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_processHasBeenSet = true;
    }

    if (value.HasMember("ParentProcess") && !value["ParentProcess"].IsNull())
    {
        if (!value["ParentProcess"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RuleContentCmdLine.ParentProcess` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_parentProcess.Deserialize(value["ParentProcess"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_parentProcessHasBeenSet = true;
    }

    if (value.HasMember("AncestorProcess") && !value["AncestorProcess"].IsNull())
    {
        if (!value["AncestorProcess"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RuleContentCmdLine.AncestorProcess` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_ancestorProcess.Deserialize(value["AncestorProcess"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ancestorProcessHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RuleContentCmdLine::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_processHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Process";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_process.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_parentProcessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentProcess";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_parentProcess.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_ancestorProcessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AncestorProcess";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ancestorProcess.ToJsonObject(value[key.c_str()], allocator);
    }

}


RuleContentProcessInfo RuleContentCmdLine::GetProcess() const
{
    return m_process;
}

void RuleContentCmdLine::SetProcess(const RuleContentProcessInfo& _process)
{
    m_process = _process;
    m_processHasBeenSet = true;
}

bool RuleContentCmdLine::ProcessHasBeenSet() const
{
    return m_processHasBeenSet;
}

RuleContentProcessInfo RuleContentCmdLine::GetParentProcess() const
{
    return m_parentProcess;
}

void RuleContentCmdLine::SetParentProcess(const RuleContentProcessInfo& _parentProcess)
{
    m_parentProcess = _parentProcess;
    m_parentProcessHasBeenSet = true;
}

bool RuleContentCmdLine::ParentProcessHasBeenSet() const
{
    return m_parentProcessHasBeenSet;
}

RuleContentProcessInfo RuleContentCmdLine::GetAncestorProcess() const
{
    return m_ancestorProcess;
}

void RuleContentCmdLine::SetAncestorProcess(const RuleContentProcessInfo& _ancestorProcess)
{
    m_ancestorProcess = _ancestorProcess;
    m_ancestorProcessHasBeenSet = true;
}

bool RuleContentCmdLine::AncestorProcessHasBeenSet() const
{
    return m_ancestorProcessHasBeenSet;
}

