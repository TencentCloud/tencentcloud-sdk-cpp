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

#include <tencentcloud/teo/v20220901/model/TimingDataRecord.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

TimingDataRecord::TimingDataRecord() :
    m_typeKeyHasBeenSet(false),
    m_typeValueHasBeenSet(false)
{
}

CoreInternalOutcome TimingDataRecord::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TypeKey") && !value["TypeKey"].IsNull())
    {
        if (!value["TypeKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimingDataRecord.TypeKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_typeKey = string(value["TypeKey"].GetString());
        m_typeKeyHasBeenSet = true;
    }

    if (value.HasMember("TypeValue") && !value["TypeValue"].IsNull())
    {
        if (!value["TypeValue"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TimingDataRecord.TypeValue` is not array type"));

        const rapidjson::Value &tmpValue = value["TypeValue"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TimingTypeValue item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_typeValue.push_back(item);
        }
        m_typeValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TimingDataRecord::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TypeKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_typeKey.c_str(), allocator).Move(), allocator);
    }

    if (m_typeValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TypeValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_typeValue.begin(); itr != m_typeValue.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string TimingDataRecord::GetTypeKey() const
{
    return m_typeKey;
}

void TimingDataRecord::SetTypeKey(const string& _typeKey)
{
    m_typeKey = _typeKey;
    m_typeKeyHasBeenSet = true;
}

bool TimingDataRecord::TypeKeyHasBeenSet() const
{
    return m_typeKeyHasBeenSet;
}

vector<TimingTypeValue> TimingDataRecord::GetTypeValue() const
{
    return m_typeValue;
}

void TimingDataRecord::SetTypeValue(const vector<TimingTypeValue>& _typeValue)
{
    m_typeValue = _typeValue;
    m_typeValueHasBeenSet = true;
}

bool TimingDataRecord::TypeValueHasBeenSet() const
{
    return m_typeValueHasBeenSet;
}

