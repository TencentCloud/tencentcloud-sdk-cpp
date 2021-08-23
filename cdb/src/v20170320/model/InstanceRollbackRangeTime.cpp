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

#include <tencentcloud/cdb/v20170320/model/InstanceRollbackRangeTime.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

InstanceRollbackRangeTime::InstanceRollbackRangeTime() :
    m_codeHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_timesHasBeenSet(false)
{
}

CoreInternalOutcome InstanceRollbackRangeTime::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceRollbackRangeTime.Code` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_code = value["Code"].GetInt64();
        m_codeHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceRollbackRangeTime.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceRollbackRangeTime.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("Times") && !value["Times"].IsNull())
    {
        if (!value["Times"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InstanceRollbackRangeTime.Times` is not array type"));

        const rapidjson::Value &tmpValue = value["Times"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RollbackTimeRange item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_times.push_back(item);
        }
        m_timesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceRollbackRangeTime::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_codeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Code";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_code, allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_timesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Times";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_times.begin(); itr != m_times.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t InstanceRollbackRangeTime::GetCode() const
{
    return m_code;
}

void InstanceRollbackRangeTime::SetCode(const int64_t& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool InstanceRollbackRangeTime::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

string InstanceRollbackRangeTime::GetMessage() const
{
    return m_message;
}

void InstanceRollbackRangeTime::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool InstanceRollbackRangeTime::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

string InstanceRollbackRangeTime::GetInstanceId() const
{
    return m_instanceId;
}

void InstanceRollbackRangeTime::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool InstanceRollbackRangeTime::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

vector<RollbackTimeRange> InstanceRollbackRangeTime::GetTimes() const
{
    return m_times;
}

void InstanceRollbackRangeTime::SetTimes(const vector<RollbackTimeRange>& _times)
{
    m_times = _times;
    m_timesHasBeenSet = true;
}

bool InstanceRollbackRangeTime::TimesHasBeenSet() const
{
    return m_timesHasBeenSet;
}

