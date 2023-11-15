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

#include <tencentcloud/weilingwith/v20230427/model/DescribeAlarmLevelListRes.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

DescribeAlarmLevelListRes::DescribeAlarmLevelListRes() :
    m_alarmLevelSetHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAlarmLevelListRes::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AlarmLevelSet") && !value["AlarmLevelSet"].IsNull())
    {
        if (!value["AlarmLevelSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeAlarmLevelListRes.AlarmLevelSet` is not array type"));

        const rapidjson::Value &tmpValue = value["AlarmLevelSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AlarmLevelInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_alarmLevelSet.push_back(item);
        }
        m_alarmLevelSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeAlarmLevelListRes::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_alarmLevelSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmLevelSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_alarmLevelSet.begin(); itr != m_alarmLevelSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<AlarmLevelInfo> DescribeAlarmLevelListRes::GetAlarmLevelSet() const
{
    return m_alarmLevelSet;
}

void DescribeAlarmLevelListRes::SetAlarmLevelSet(const vector<AlarmLevelInfo>& _alarmLevelSet)
{
    m_alarmLevelSet = _alarmLevelSet;
    m_alarmLevelSetHasBeenSet = true;
}

bool DescribeAlarmLevelListRes::AlarmLevelSetHasBeenSet() const
{
    return m_alarmLevelSetHasBeenSet;
}

