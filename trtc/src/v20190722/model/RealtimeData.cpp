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

#include <tencentcloud/trtc/v20190722/model/RealtimeData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace rapidjson;
using namespace std;

RealtimeData::RealtimeData() :
    m_contentHasBeenSet(false),
    m_dataTypeHasBeenSet(false)
{
}

CoreInternalOutcome RealtimeData::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsArray())
            return CoreInternalOutcome(Error("response `RealtimeData.Content` is not array type"));

        const Value &tmpValue = value["Content"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TimeValue item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_content.push_back(item);
        }
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("DataType") && !value["DataType"].IsNull())
    {
        if (!value["DataType"].IsString())
        {
            return CoreInternalOutcome(Error("response `RealtimeData.DataType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataType = string(value["DataType"].GetString());
        m_dataTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RealtimeData::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_contentHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_content.begin(); itr != m_content.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_dataTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DataType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_dataType.c_str(), allocator).Move(), allocator);
    }

}


vector<TimeValue> RealtimeData::GetContent() const
{
    return m_content;
}

void RealtimeData::SetContent(const vector<TimeValue>& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool RealtimeData::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

string RealtimeData::GetDataType() const
{
    return m_dataType;
}

void RealtimeData::SetDataType(const string& _dataType)
{
    m_dataType = _dataType;
    m_dataTypeHasBeenSet = true;
}

bool RealtimeData::DataTypeHasBeenSet() const
{
    return m_dataTypeHasBeenSet;
}

