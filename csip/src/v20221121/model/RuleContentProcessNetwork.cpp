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

#include <tencentcloud/csip/v20221121/model/RuleContentProcessNetwork.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

RuleContentProcessNetwork::RuleContentProcessNetwork() :
    m_processHasBeenSet(false),
    m_dstIPHasBeenSet(false),
    m_parentProcessHasBeenSet(false),
    m_dstPortsHasBeenSet(false)
{
}

CoreInternalOutcome RuleContentProcessNetwork::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Process") && !value["Process"].IsNull())
    {
        if (!value["Process"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RuleContentProcessNetwork.Process` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_process.Deserialize(value["Process"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_processHasBeenSet = true;
    }

    if (value.HasMember("DstIP") && !value["DstIP"].IsNull())
    {
        if (!value["DstIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleContentProcessNetwork.DstIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dstIP = string(value["DstIP"].GetString());
        m_dstIPHasBeenSet = true;
    }

    if (value.HasMember("ParentProcess") && !value["ParentProcess"].IsNull())
    {
        if (!value["ParentProcess"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RuleContentProcessNetwork.ParentProcess` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_parentProcess.Deserialize(value["ParentProcess"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_parentProcessHasBeenSet = true;
    }

    if (value.HasMember("DstPorts") && !value["DstPorts"].IsNull())
    {
        if (!value["DstPorts"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RuleContentProcessNetwork.DstPorts` is not array type"));

        const rapidjson::Value &tmpValue = value["DstPorts"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_dstPorts.push_back((*itr).GetUint64());
        }
        m_dstPortsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RuleContentProcessNetwork::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_processHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Process";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_process.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_dstIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dstIP.c_str(), allocator).Move(), allocator);
    }

    if (m_parentProcessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentProcess";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_parentProcess.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_dstPortsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstPorts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dstPorts.begin(); itr != m_dstPorts.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

}


RuleContentProcessInfo RuleContentProcessNetwork::GetProcess() const
{
    return m_process;
}

void RuleContentProcessNetwork::SetProcess(const RuleContentProcessInfo& _process)
{
    m_process = _process;
    m_processHasBeenSet = true;
}

bool RuleContentProcessNetwork::ProcessHasBeenSet() const
{
    return m_processHasBeenSet;
}

string RuleContentProcessNetwork::GetDstIP() const
{
    return m_dstIP;
}

void RuleContentProcessNetwork::SetDstIP(const string& _dstIP)
{
    m_dstIP = _dstIP;
    m_dstIPHasBeenSet = true;
}

bool RuleContentProcessNetwork::DstIPHasBeenSet() const
{
    return m_dstIPHasBeenSet;
}

RuleContentProcessInfo RuleContentProcessNetwork::GetParentProcess() const
{
    return m_parentProcess;
}

void RuleContentProcessNetwork::SetParentProcess(const RuleContentProcessInfo& _parentProcess)
{
    m_parentProcess = _parentProcess;
    m_parentProcessHasBeenSet = true;
}

bool RuleContentProcessNetwork::ParentProcessHasBeenSet() const
{
    return m_parentProcessHasBeenSet;
}

vector<uint64_t> RuleContentProcessNetwork::GetDstPorts() const
{
    return m_dstPorts;
}

void RuleContentProcessNetwork::SetDstPorts(const vector<uint64_t>& _dstPorts)
{
    m_dstPorts = _dstPorts;
    m_dstPortsHasBeenSet = true;
}

bool RuleContentProcessNetwork::DstPortsHasBeenSet() const
{
    return m_dstPortsHasBeenSet;
}

