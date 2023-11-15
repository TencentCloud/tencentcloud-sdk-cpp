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

#include <tencentcloud/weilingwith/v20230427/model/DeviceTypeSet.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

DeviceTypeSet::DeviceTypeSet() :
    m_setHasBeenSet(false)
{
}

CoreInternalOutcome DeviceTypeSet::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Set") && !value["Set"].IsNull())
    {
        if (!value["Set"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DeviceTypeSet.Set` is not array type"));

        const rapidjson::Value &tmpValue = value["Set"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DeviceType item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_set.push_back(item);
        }
        m_setHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeviceTypeSet::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_setHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Set";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_set.begin(); itr != m_set.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<DeviceType> DeviceTypeSet::GetSet() const
{
    return m_set;
}

void DeviceTypeSet::SetSet(const vector<DeviceType>& _set)
{
    m_set = _set;
    m_setHasBeenSet = true;
}

bool DeviceTypeSet::SetHasBeenSet() const
{
    return m_setHasBeenSet;
}

