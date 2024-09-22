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

#include <tencentcloud/asr/v20190614/model/UsageByDateInfoData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Asr::V20190614::Model;
using namespace std;

UsageByDateInfoData::UsageByDateInfoData() :
    m_usageByDateInfoListHasBeenSet(false)
{
}

CoreInternalOutcome UsageByDateInfoData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UsageByDateInfoList") && !value["UsageByDateInfoList"].IsNull())
    {
        if (!value["UsageByDateInfoList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UsageByDateInfoData.UsageByDateInfoList` is not array type"));

        const rapidjson::Value &tmpValue = value["UsageByDateInfoList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            UsageByDateInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_usageByDateInfoList.push_back(item);
        }
        m_usageByDateInfoListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UsageByDateInfoData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_usageByDateInfoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsageByDateInfoList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_usageByDateInfoList.begin(); itr != m_usageByDateInfoList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<UsageByDateInfo> UsageByDateInfoData::GetUsageByDateInfoList() const
{
    return m_usageByDateInfoList;
}

void UsageByDateInfoData::SetUsageByDateInfoList(const vector<UsageByDateInfo>& _usageByDateInfoList)
{
    m_usageByDateInfoList = _usageByDateInfoList;
    m_usageByDateInfoListHasBeenSet = true;
}

bool UsageByDateInfoData::UsageByDateInfoListHasBeenSet() const
{
    return m_usageByDateInfoListHasBeenSet;
}

