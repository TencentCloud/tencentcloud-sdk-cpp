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

#include <tencentcloud/wedata/v20210820/model/InstanceLifeCycleVO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

InstanceLifeCycleVO::InstanceLifeCycleVO() :
    m_instanceKeyHasBeenSet(false),
    m_instanceStateHasBeenSet(false),
    m_lifeRoundNumHasBeenSet(false),
    m_runTypeHasBeenSet(false),
    m_triesHasBeenSet(false),
    m_lifeCycleDetailListHasBeenSet(false),
    m_codeFileNameHasBeenSet(false),
    m_executionJobIdHasBeenSet(false),
    m_brokerIpHasBeenSet(false),
    m_originFileNameHasBeenSet(false),
    m_logTypeHasBeenSet(false),
    m_costTimeHasBeenSet(false)
{
}

CoreInternalOutcome InstanceLifeCycleVO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceKey") && !value["InstanceKey"].IsNull())
    {
        if (!value["InstanceKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLifeCycleVO.InstanceKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceKey = string(value["InstanceKey"].GetString());
        m_instanceKeyHasBeenSet = true;
    }

    if (value.HasMember("InstanceState") && !value["InstanceState"].IsNull())
    {
        if (!value["InstanceState"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLifeCycleVO.InstanceState` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceState = value["InstanceState"].GetUint64();
        m_instanceStateHasBeenSet = true;
    }

    if (value.HasMember("LifeRoundNum") && !value["LifeRoundNum"].IsNull())
    {
        if (!value["LifeRoundNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLifeCycleVO.LifeRoundNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_lifeRoundNum = value["LifeRoundNum"].GetUint64();
        m_lifeRoundNumHasBeenSet = true;
    }

    if (value.HasMember("RunType") && !value["RunType"].IsNull())
    {
        if (!value["RunType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLifeCycleVO.RunType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runType = string(value["RunType"].GetString());
        m_runTypeHasBeenSet = true;
    }

    if (value.HasMember("Tries") && !value["Tries"].IsNull())
    {
        if (!value["Tries"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLifeCycleVO.Tries` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_tries = value["Tries"].GetUint64();
        m_triesHasBeenSet = true;
    }

    if (value.HasMember("LifeCycleDetailList") && !value["LifeCycleDetailList"].IsNull())
    {
        if (!value["LifeCycleDetailList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceLifeCycleVO.LifeCycleDetailList` is not array type"));

        const rapidjson::Value &tmpValue = value["LifeCycleDetailList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            InstanceLifeDetailDto item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_lifeCycleDetailList.push_back(item);
        }
        m_lifeCycleDetailListHasBeenSet = true;
    }

    if (value.HasMember("CodeFileName") && !value["CodeFileName"].IsNull())
    {
        if (!value["CodeFileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLifeCycleVO.CodeFileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_codeFileName = string(value["CodeFileName"].GetString());
        m_codeFileNameHasBeenSet = true;
    }

    if (value.HasMember("ExecutionJobId") && !value["ExecutionJobId"].IsNull())
    {
        if (!value["ExecutionJobId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLifeCycleVO.ExecutionJobId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executionJobId = string(value["ExecutionJobId"].GetString());
        m_executionJobIdHasBeenSet = true;
    }

    if (value.HasMember("BrokerIp") && !value["BrokerIp"].IsNull())
    {
        if (!value["BrokerIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLifeCycleVO.BrokerIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_brokerIp = string(value["BrokerIp"].GetString());
        m_brokerIpHasBeenSet = true;
    }

    if (value.HasMember("OriginFileName") && !value["OriginFileName"].IsNull())
    {
        if (!value["OriginFileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLifeCycleVO.OriginFileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originFileName = string(value["OriginFileName"].GetString());
        m_originFileNameHasBeenSet = true;
    }

    if (value.HasMember("LogType") && !value["LogType"].IsNull())
    {
        if (!value["LogType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLifeCycleVO.LogType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logType = string(value["LogType"].GetString());
        m_logTypeHasBeenSet = true;
    }

    if (value.HasMember("CostTime") && !value["CostTime"].IsNull())
    {
        if (!value["CostTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceLifeCycleVO.CostTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_costTime = string(value["CostTime"].GetString());
        m_costTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceLifeCycleVO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceKey.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceState, allocator);
    }

    if (m_lifeRoundNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LifeRoundNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lifeRoundNum, allocator);
    }

    if (m_runTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runType.c_str(), allocator).Move(), allocator);
    }

    if (m_triesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tries";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tries, allocator);
    }

    if (m_lifeCycleDetailListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LifeCycleDetailList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_lifeCycleDetailList.begin(); itr != m_lifeCycleDetailList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_codeFileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeFileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_codeFileName.c_str(), allocator).Move(), allocator);
    }

    if (m_executionJobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionJobId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executionJobId.c_str(), allocator).Move(), allocator);
    }

    if (m_brokerIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BrokerIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_brokerIp.c_str(), allocator).Move(), allocator);
    }

    if (m_originFileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginFileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originFileName.c_str(), allocator).Move(), allocator);
    }

    if (m_logTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logType.c_str(), allocator).Move(), allocator);
    }

    if (m_costTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CostTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_costTime.c_str(), allocator).Move(), allocator);
    }

}


string InstanceLifeCycleVO::GetInstanceKey() const
{
    return m_instanceKey;
}

void InstanceLifeCycleVO::SetInstanceKey(const string& _instanceKey)
{
    m_instanceKey = _instanceKey;
    m_instanceKeyHasBeenSet = true;
}

bool InstanceLifeCycleVO::InstanceKeyHasBeenSet() const
{
    return m_instanceKeyHasBeenSet;
}

uint64_t InstanceLifeCycleVO::GetInstanceState() const
{
    return m_instanceState;
}

void InstanceLifeCycleVO::SetInstanceState(const uint64_t& _instanceState)
{
    m_instanceState = _instanceState;
    m_instanceStateHasBeenSet = true;
}

bool InstanceLifeCycleVO::InstanceStateHasBeenSet() const
{
    return m_instanceStateHasBeenSet;
}

uint64_t InstanceLifeCycleVO::GetLifeRoundNum() const
{
    return m_lifeRoundNum;
}

void InstanceLifeCycleVO::SetLifeRoundNum(const uint64_t& _lifeRoundNum)
{
    m_lifeRoundNum = _lifeRoundNum;
    m_lifeRoundNumHasBeenSet = true;
}

bool InstanceLifeCycleVO::LifeRoundNumHasBeenSet() const
{
    return m_lifeRoundNumHasBeenSet;
}

string InstanceLifeCycleVO::GetRunType() const
{
    return m_runType;
}

void InstanceLifeCycleVO::SetRunType(const string& _runType)
{
    m_runType = _runType;
    m_runTypeHasBeenSet = true;
}

bool InstanceLifeCycleVO::RunTypeHasBeenSet() const
{
    return m_runTypeHasBeenSet;
}

uint64_t InstanceLifeCycleVO::GetTries() const
{
    return m_tries;
}

void InstanceLifeCycleVO::SetTries(const uint64_t& _tries)
{
    m_tries = _tries;
    m_triesHasBeenSet = true;
}

bool InstanceLifeCycleVO::TriesHasBeenSet() const
{
    return m_triesHasBeenSet;
}

vector<InstanceLifeDetailDto> InstanceLifeCycleVO::GetLifeCycleDetailList() const
{
    return m_lifeCycleDetailList;
}

void InstanceLifeCycleVO::SetLifeCycleDetailList(const vector<InstanceLifeDetailDto>& _lifeCycleDetailList)
{
    m_lifeCycleDetailList = _lifeCycleDetailList;
    m_lifeCycleDetailListHasBeenSet = true;
}

bool InstanceLifeCycleVO::LifeCycleDetailListHasBeenSet() const
{
    return m_lifeCycleDetailListHasBeenSet;
}

string InstanceLifeCycleVO::GetCodeFileName() const
{
    return m_codeFileName;
}

void InstanceLifeCycleVO::SetCodeFileName(const string& _codeFileName)
{
    m_codeFileName = _codeFileName;
    m_codeFileNameHasBeenSet = true;
}

bool InstanceLifeCycleVO::CodeFileNameHasBeenSet() const
{
    return m_codeFileNameHasBeenSet;
}

string InstanceLifeCycleVO::GetExecutionJobId() const
{
    return m_executionJobId;
}

void InstanceLifeCycleVO::SetExecutionJobId(const string& _executionJobId)
{
    m_executionJobId = _executionJobId;
    m_executionJobIdHasBeenSet = true;
}

bool InstanceLifeCycleVO::ExecutionJobIdHasBeenSet() const
{
    return m_executionJobIdHasBeenSet;
}

string InstanceLifeCycleVO::GetBrokerIp() const
{
    return m_brokerIp;
}

void InstanceLifeCycleVO::SetBrokerIp(const string& _brokerIp)
{
    m_brokerIp = _brokerIp;
    m_brokerIpHasBeenSet = true;
}

bool InstanceLifeCycleVO::BrokerIpHasBeenSet() const
{
    return m_brokerIpHasBeenSet;
}

string InstanceLifeCycleVO::GetOriginFileName() const
{
    return m_originFileName;
}

void InstanceLifeCycleVO::SetOriginFileName(const string& _originFileName)
{
    m_originFileName = _originFileName;
    m_originFileNameHasBeenSet = true;
}

bool InstanceLifeCycleVO::OriginFileNameHasBeenSet() const
{
    return m_originFileNameHasBeenSet;
}

string InstanceLifeCycleVO::GetLogType() const
{
    return m_logType;
}

void InstanceLifeCycleVO::SetLogType(const string& _logType)
{
    m_logType = _logType;
    m_logTypeHasBeenSet = true;
}

bool InstanceLifeCycleVO::LogTypeHasBeenSet() const
{
    return m_logTypeHasBeenSet;
}

string InstanceLifeCycleVO::GetCostTime() const
{
    return m_costTime;
}

void InstanceLifeCycleVO::SetCostTime(const string& _costTime)
{
    m_costTime = _costTime;
    m_costTimeHasBeenSet = true;
}

bool InstanceLifeCycleVO::CostTimeHasBeenSet() const
{
    return m_costTimeHasBeenSet;
}

