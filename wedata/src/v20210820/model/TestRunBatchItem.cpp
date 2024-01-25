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

#include <tencentcloud/wedata/v20210820/model/TestRunBatchItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

TestRunBatchItem::TestRunBatchItem() :
    m_instanceKeyHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_currRunDateHasBeenSet(false)
{
}

CoreInternalOutcome TestRunBatchItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceKey") && !value["InstanceKey"].IsNull())
    {
        if (!value["InstanceKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TestRunBatchItem.InstanceKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceKey = string(value["InstanceKey"].GetString());
        m_instanceKeyHasBeenSet = true;
    }

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TestRunBatchItem.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("CurrRunDate") && !value["CurrRunDate"].IsNull())
    {
        if (!value["CurrRunDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TestRunBatchItem.CurrRunDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_currRunDate = string(value["CurrRunDate"].GetString());
        m_currRunDateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TestRunBatchItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceKey.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_currRunDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrRunDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_currRunDate.c_str(), allocator).Move(), allocator);
    }

}


string TestRunBatchItem::GetInstanceKey() const
{
    return m_instanceKey;
}

void TestRunBatchItem::SetInstanceKey(const string& _instanceKey)
{
    m_instanceKey = _instanceKey;
    m_instanceKeyHasBeenSet = true;
}

bool TestRunBatchItem::InstanceKeyHasBeenSet() const
{
    return m_instanceKeyHasBeenSet;
}

string TestRunBatchItem::GetTaskId() const
{
    return m_taskId;
}

void TestRunBatchItem::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool TestRunBatchItem::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string TestRunBatchItem::GetCurrRunDate() const
{
    return m_currRunDate;
}

void TestRunBatchItem::SetCurrRunDate(const string& _currRunDate)
{
    m_currRunDate = _currRunDate;
    m_currRunDateHasBeenSet = true;
}

bool TestRunBatchItem::CurrRunDateHasBeenSet() const
{
    return m_currRunDateHasBeenSet;
}

