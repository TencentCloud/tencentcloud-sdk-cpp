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

#include <tencentcloud/dayu/v20180709/model/KeyValueRecord.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dayu::V20180709::Model;
using namespace rapidjson;
using namespace std;

KeyValueRecord::KeyValueRecord() :
    m_recordHasBeenSet(false)
{
}

CoreInternalOutcome KeyValueRecord::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Record") && !value["Record"].IsNull())
    {
        if (!value["Record"].IsArray())
            return CoreInternalOutcome(Error("response `KeyValueRecord.Record` is not array type"));

        const Value &tmpValue = value["Record"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KeyValue item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_record.push_back(item);
        }
        m_recordHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KeyValueRecord::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_recordHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Record";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_record.begin(); itr != m_record.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<KeyValue> KeyValueRecord::GetRecord() const
{
    return m_record;
}

void KeyValueRecord::SetRecord(const vector<KeyValue>& _record)
{
    m_record = _record;
    m_recordHasBeenSet = true;
}

bool KeyValueRecord::RecordHasBeenSet() const
{
    return m_recordHasBeenSet;
}

