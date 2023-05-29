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

#include <tencentcloud/dlc/v20210125/model/SparkSessionBatchLog.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

SparkSessionBatchLog::SparkSessionBatchLog() :
    m_stepHasBeenSet(false),
    m_timeHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_operateHasBeenSet(false)
{
}

CoreInternalOutcome SparkSessionBatchLog::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Step") && !value["Step"].IsNull())
    {
        if (!value["Step"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SparkSessionBatchLog.Step` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_step = string(value["Step"].GetString());
        m_stepHasBeenSet = true;
    }

    if (value.HasMember("Time") && !value["Time"].IsNull())
    {
        if (!value["Time"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SparkSessionBatchLog.Time` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_time = string(value["Time"].GetString());
        m_timeHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SparkSessionBatchLog.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("Operate") && !value["Operate"].IsNull())
    {
        if (!value["Operate"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SparkSessionBatchLog.Operate` is not array type"));

        const rapidjson::Value &tmpValue = value["Operate"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SparkSessionBatchLogOperate item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_operate.push_back(item);
        }
        m_operateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SparkSessionBatchLog::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_stepHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Step";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_step.c_str(), allocator).Move(), allocator);
    }

    if (m_timeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_time.c_str(), allocator).Move(), allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_operateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_operate.begin(); itr != m_operate.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string SparkSessionBatchLog::GetStep() const
{
    return m_step;
}

void SparkSessionBatchLog::SetStep(const string& _step)
{
    m_step = _step;
    m_stepHasBeenSet = true;
}

bool SparkSessionBatchLog::StepHasBeenSet() const
{
    return m_stepHasBeenSet;
}

string SparkSessionBatchLog::GetTime() const
{
    return m_time;
}

void SparkSessionBatchLog::SetTime(const string& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool SparkSessionBatchLog::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

string SparkSessionBatchLog::GetMessage() const
{
    return m_message;
}

void SparkSessionBatchLog::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool SparkSessionBatchLog::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

vector<SparkSessionBatchLogOperate> SparkSessionBatchLog::GetOperate() const
{
    return m_operate;
}

void SparkSessionBatchLog::SetOperate(const vector<SparkSessionBatchLogOperate>& _operate)
{
    m_operate = _operate;
    m_operateHasBeenSet = true;
}

bool SparkSessionBatchLog::OperateHasBeenSet() const
{
    return m_operateHasBeenSet;
}

