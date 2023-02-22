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

#include <tencentcloud/wedata/v20210820/model/RealTimeTaskSpeed.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

RealTimeTaskSpeed::RealTimeTaskSpeed() :
    m_recordsSpeedListHasBeenSet(false),
    m_bytesSpeedListHasBeenSet(false)
{
}

CoreInternalOutcome RealTimeTaskSpeed::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RecordsSpeedList") && !value["RecordsSpeedList"].IsNull())
    {
        if (!value["RecordsSpeedList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RealTimeTaskSpeed.RecordsSpeedList` is not array type"));

        const rapidjson::Value &tmpValue = value["RecordsSpeedList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RecordsSpeed item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_recordsSpeedList.push_back(item);
        }
        m_recordsSpeedListHasBeenSet = true;
    }

    if (value.HasMember("BytesSpeedList") && !value["BytesSpeedList"].IsNull())
    {
        if (!value["BytesSpeedList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RealTimeTaskSpeed.BytesSpeedList` is not array type"));

        const rapidjson::Value &tmpValue = value["BytesSpeedList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BytesSpeed item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_bytesSpeedList.push_back(item);
        }
        m_bytesSpeedListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RealTimeTaskSpeed::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_recordsSpeedListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordsSpeedList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_recordsSpeedList.begin(); itr != m_recordsSpeedList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_bytesSpeedListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BytesSpeedList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_bytesSpeedList.begin(); itr != m_bytesSpeedList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<RecordsSpeed> RealTimeTaskSpeed::GetRecordsSpeedList() const
{
    return m_recordsSpeedList;
}

void RealTimeTaskSpeed::SetRecordsSpeedList(const vector<RecordsSpeed>& _recordsSpeedList)
{
    m_recordsSpeedList = _recordsSpeedList;
    m_recordsSpeedListHasBeenSet = true;
}

bool RealTimeTaskSpeed::RecordsSpeedListHasBeenSet() const
{
    return m_recordsSpeedListHasBeenSet;
}

vector<BytesSpeed> RealTimeTaskSpeed::GetBytesSpeedList() const
{
    return m_bytesSpeedList;
}

void RealTimeTaskSpeed::SetBytesSpeedList(const vector<BytesSpeed>& _bytesSpeedList)
{
    m_bytesSpeedList = _bytesSpeedList;
    m_bytesSpeedListHasBeenSet = true;
}

bool RealTimeTaskSpeed::BytesSpeedListHasBeenSet() const
{
    return m_bytesSpeedListHasBeenSet;
}

