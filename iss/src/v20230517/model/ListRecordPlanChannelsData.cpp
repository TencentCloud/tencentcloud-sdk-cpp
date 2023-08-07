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

#include <tencentcloud/iss/v20230517/model/ListRecordPlanChannelsData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

ListRecordPlanChannelsData::ListRecordPlanChannelsData() :
    m_listHasBeenSet(false)
{
}

CoreInternalOutcome ListRecordPlanChannelsData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("List") && !value["List"].IsNull())
    {
        if (!value["List"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ListRecordPlanChannelsData.List` is not array type"));

        const rapidjson::Value &tmpValue = value["List"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_list.push_back((*itr).GetString());
        }
        m_listHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ListRecordPlanChannelsData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_listHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "List";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_list.begin(); itr != m_list.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


vector<string> ListRecordPlanChannelsData::GetList() const
{
    return m_list;
}

void ListRecordPlanChannelsData::SetList(const vector<string>& _list)
{
    m_list = _list;
    m_listHasBeenSet = true;
}

bool ListRecordPlanChannelsData::ListHasBeenSet() const
{
    return m_listHasBeenSet;
}

