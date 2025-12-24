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

#include <tencentcloud/dbs/v20211108/model/ConnectTestResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbs::V20211108::Model;
using namespace std;

ConnectTestResult::ConnectTestResult() :
    m_taskIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_isPassHasBeenSet(false),
    m_addrHasBeenSet(false),
    m_sNatIpHasBeenSet(false),
    m_testItemsHasBeenSet(false)
{
}

CoreInternalOutcome ConnectTestResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ConnectTestResult.TaskId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = value["TaskId"].GetInt64();
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConnectTestResult.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("IsPass") && !value["IsPass"].IsNull())
    {
        if (!value["IsPass"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ConnectTestResult.IsPass` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isPass = value["IsPass"].GetInt64();
        m_isPassHasBeenSet = true;
    }

    if (value.HasMember("Addr") && !value["Addr"].IsNull())
    {
        if (!value["Addr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConnectTestResult.Addr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addr = string(value["Addr"].GetString());
        m_addrHasBeenSet = true;
    }

    if (value.HasMember("SNatIp") && !value["SNatIp"].IsNull())
    {
        if (!value["SNatIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConnectTestResult.SNatIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sNatIp = string(value["SNatIp"].GetString());
        m_sNatIpHasBeenSet = true;
    }

    if (value.HasMember("TestItems") && !value["TestItems"].IsNull())
    {
        if (!value["TestItems"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ConnectTestResult.TestItems` is not array type"));

        const rapidjson::Value &tmpValue = value["TestItems"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TestItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_testItems.push_back(item);
        }
        m_testItemsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConnectTestResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskId, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_isPassHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPass";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isPass, allocator);
    }

    if (m_addrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Addr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_addr.c_str(), allocator).Move(), allocator);
    }

    if (m_sNatIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SNatIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sNatIp.c_str(), allocator).Move(), allocator);
    }

    if (m_testItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TestItems";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_testItems.begin(); itr != m_testItems.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t ConnectTestResult::GetTaskId() const
{
    return m_taskId;
}

void ConnectTestResult::SetTaskId(const int64_t& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool ConnectTestResult::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string ConnectTestResult::GetStatus() const
{
    return m_status;
}

void ConnectTestResult::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ConnectTestResult::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t ConnectTestResult::GetIsPass() const
{
    return m_isPass;
}

void ConnectTestResult::SetIsPass(const int64_t& _isPass)
{
    m_isPass = _isPass;
    m_isPassHasBeenSet = true;
}

bool ConnectTestResult::IsPassHasBeenSet() const
{
    return m_isPassHasBeenSet;
}

string ConnectTestResult::GetAddr() const
{
    return m_addr;
}

void ConnectTestResult::SetAddr(const string& _addr)
{
    m_addr = _addr;
    m_addrHasBeenSet = true;
}

bool ConnectTestResult::AddrHasBeenSet() const
{
    return m_addrHasBeenSet;
}

string ConnectTestResult::GetSNatIp() const
{
    return m_sNatIp;
}

void ConnectTestResult::SetSNatIp(const string& _sNatIp)
{
    m_sNatIp = _sNatIp;
    m_sNatIpHasBeenSet = true;
}

bool ConnectTestResult::SNatIpHasBeenSet() const
{
    return m_sNatIpHasBeenSet;
}

vector<TestItem> ConnectTestResult::GetTestItems() const
{
    return m_testItems;
}

void ConnectTestResult::SetTestItems(const vector<TestItem>& _testItems)
{
    m_testItems = _testItems;
    m_testItemsHasBeenSet = true;
}

bool ConnectTestResult::TestItemsHasBeenSet() const
{
    return m_testItemsHasBeenSet;
}

