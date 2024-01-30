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

#include <tencentcloud/csip/v20221121/model/TaskAdvanceCFG.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

TaskAdvanceCFG::TaskAdvanceCFG() :
    m_portRiskHasBeenSet(false),
    m_vulRiskHasBeenSet(false),
    m_weakPwdRiskHasBeenSet(false),
    m_cFGRiskHasBeenSet(false)
{
}

CoreInternalOutcome TaskAdvanceCFG::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PortRisk") && !value["PortRisk"].IsNull())
    {
        if (!value["PortRisk"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaskAdvanceCFG.PortRisk` is not array type"));

        const rapidjson::Value &tmpValue = value["PortRisk"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PortRiskAdvanceCFGParamItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_portRisk.push_back(item);
        }
        m_portRiskHasBeenSet = true;
    }

    if (value.HasMember("VulRisk") && !value["VulRisk"].IsNull())
    {
        if (!value["VulRisk"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaskAdvanceCFG.VulRisk` is not array type"));

        const rapidjson::Value &tmpValue = value["VulRisk"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TaskCenterVulRiskInputParam item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_vulRisk.push_back(item);
        }
        m_vulRiskHasBeenSet = true;
    }

    if (value.HasMember("WeakPwdRisk") && !value["WeakPwdRisk"].IsNull())
    {
        if (!value["WeakPwdRisk"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaskAdvanceCFG.WeakPwdRisk` is not array type"));

        const rapidjson::Value &tmpValue = value["WeakPwdRisk"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TaskCenterWeakPwdRiskInputParam item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_weakPwdRisk.push_back(item);
        }
        m_weakPwdRiskHasBeenSet = true;
    }

    if (value.HasMember("CFGRisk") && !value["CFGRisk"].IsNull())
    {
        if (!value["CFGRisk"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaskAdvanceCFG.CFGRisk` is not array type"));

        const rapidjson::Value &tmpValue = value["CFGRisk"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TaskCenterCFGRiskInputParam item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_cFGRisk.push_back(item);
        }
        m_cFGRiskHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskAdvanceCFG::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_portRiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PortRisk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_portRisk.begin(); itr != m_portRisk.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_vulRiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulRisk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_vulRisk.begin(); itr != m_vulRisk.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_weakPwdRiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WeakPwdRisk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_weakPwdRisk.begin(); itr != m_weakPwdRisk.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_cFGRiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CFGRisk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_cFGRisk.begin(); itr != m_cFGRisk.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<PortRiskAdvanceCFGParamItem> TaskAdvanceCFG::GetPortRisk() const
{
    return m_portRisk;
}

void TaskAdvanceCFG::SetPortRisk(const vector<PortRiskAdvanceCFGParamItem>& _portRisk)
{
    m_portRisk = _portRisk;
    m_portRiskHasBeenSet = true;
}

bool TaskAdvanceCFG::PortRiskHasBeenSet() const
{
    return m_portRiskHasBeenSet;
}

vector<TaskCenterVulRiskInputParam> TaskAdvanceCFG::GetVulRisk() const
{
    return m_vulRisk;
}

void TaskAdvanceCFG::SetVulRisk(const vector<TaskCenterVulRiskInputParam>& _vulRisk)
{
    m_vulRisk = _vulRisk;
    m_vulRiskHasBeenSet = true;
}

bool TaskAdvanceCFG::VulRiskHasBeenSet() const
{
    return m_vulRiskHasBeenSet;
}

vector<TaskCenterWeakPwdRiskInputParam> TaskAdvanceCFG::GetWeakPwdRisk() const
{
    return m_weakPwdRisk;
}

void TaskAdvanceCFG::SetWeakPwdRisk(const vector<TaskCenterWeakPwdRiskInputParam>& _weakPwdRisk)
{
    m_weakPwdRisk = _weakPwdRisk;
    m_weakPwdRiskHasBeenSet = true;
}

bool TaskAdvanceCFG::WeakPwdRiskHasBeenSet() const
{
    return m_weakPwdRiskHasBeenSet;
}

vector<TaskCenterCFGRiskInputParam> TaskAdvanceCFG::GetCFGRisk() const
{
    return m_cFGRisk;
}

void TaskAdvanceCFG::SetCFGRisk(const vector<TaskCenterCFGRiskInputParam>& _cFGRisk)
{
    m_cFGRisk = _cFGRisk;
    m_cFGRiskHasBeenSet = true;
}

bool TaskAdvanceCFG::CFGRiskHasBeenSet() const
{
    return m_cFGRiskHasBeenSet;
}

