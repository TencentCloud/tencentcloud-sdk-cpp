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

#include <tencentcloud/taf/v20200210/model/OutputRecognizeTargetAudience.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Taf::V20200210::Model;
using namespace rapidjson;
using namespace std;

OutputRecognizeTargetAudience::OutputRecognizeTargetAudience() :
    m_codeHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

CoreInternalOutcome OutputRecognizeTargetAudience::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `OutputRecognizeTargetAudience.Code` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_code = value["Code"].GetInt64();
        m_codeHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `OutputRecognizeTargetAudience.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsArray())
            return CoreInternalOutcome(Error("response `OutputRecognizeTargetAudience.Value` is not array type"));

        const Value &tmpValue = value["Value"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            OutputRecognizeTargetAudienceValue item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_value.push_back(item);
        }
        m_valueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OutputRecognizeTargetAudience::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_codeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Code";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_code, allocator);
    }

    if (m_messageHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_value.begin(); itr != m_value.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t OutputRecognizeTargetAudience::GetCode() const
{
    return m_code;
}

void OutputRecognizeTargetAudience::SetCode(const int64_t& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool OutputRecognizeTargetAudience::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

string OutputRecognizeTargetAudience::GetMessage() const
{
    return m_message;
}

void OutputRecognizeTargetAudience::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool OutputRecognizeTargetAudience::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

vector<OutputRecognizeTargetAudienceValue> OutputRecognizeTargetAudience::GetValue() const
{
    return m_value;
}

void OutputRecognizeTargetAudience::SetValue(const vector<OutputRecognizeTargetAudienceValue>& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool OutputRecognizeTargetAudience::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

