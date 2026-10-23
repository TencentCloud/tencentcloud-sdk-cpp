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

#include <tencentcloud/teo/v20220901/model/StatisticsRecord.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

StatisticsRecord::StatisticsRecord() :
    m_recordHasBeenSet(false)
{
}

CoreInternalOutcome StatisticsRecord::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Record") && !value["Record"].IsNull())
    {
        if (!value["Record"].IsArray())
            return CoreInternalOutcome(Core::Error("response `StatisticsRecord.Record` is not array type"));

        const rapidjson::Value &tmpValue = value["Record"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_record.push_back((*itr).GetString());
        }
        m_recordHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StatisticsRecord::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_recordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Record";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_record.begin(); itr != m_record.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


vector<string> StatisticsRecord::GetRecord() const
{
    return m_record;
}

void StatisticsRecord::SetRecord(const vector<string>& _record)
{
    m_record = _record;
    m_recordHasBeenSet = true;
}

bool StatisticsRecord::RecordHasBeenSet() const
{
    return m_recordHasBeenSet;
}

