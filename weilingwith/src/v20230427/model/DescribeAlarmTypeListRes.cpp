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

#include <tencentcloud/weilingwith/v20230427/model/DescribeAlarmTypeListRes.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

DescribeAlarmTypeListRes::DescribeAlarmTypeListRes() :
    m_alarmTypeSetHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAlarmTypeListRes::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AlarmTypeSet") && !value["AlarmTypeSet"].IsNull())
    {
        if (!value["AlarmTypeSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeAlarmTypeListRes.AlarmTypeSet` is not array type"));

        const rapidjson::Value &tmpValue = value["AlarmTypeSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AlarmTypeDetailInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_alarmTypeSet.push_back(item);
        }
        m_alarmTypeSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeAlarmTypeListRes::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_alarmTypeSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmTypeSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_alarmTypeSet.begin(); itr != m_alarmTypeSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<AlarmTypeDetailInfo> DescribeAlarmTypeListRes::GetAlarmTypeSet() const
{
    return m_alarmTypeSet;
}

void DescribeAlarmTypeListRes::SetAlarmTypeSet(const vector<AlarmTypeDetailInfo>& _alarmTypeSet)
{
    m_alarmTypeSet = _alarmTypeSet;
    m_alarmTypeSetHasBeenSet = true;
}

bool DescribeAlarmTypeListRes::AlarmTypeSetHasBeenSet() const
{
    return m_alarmTypeSetHasBeenSet;
}

