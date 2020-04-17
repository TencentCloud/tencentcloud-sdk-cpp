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

#include <tencentcloud/taf/v20200210/model/InputKolBspData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Taf::V20200210::Model;
using namespace rapidjson;
using namespace std;

InputKolBspData::InputKolBspData() :
    m_dataListHasBeenSet(false)
{
}

CoreInternalOutcome InputKolBspData::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("DataList") && !value["DataList"].IsNull())
    {
        if (!value["DataList"].IsArray())
            return CoreInternalOutcome(Error("response `InputKolBspData.DataList` is not array type"));

        const Value &tmpValue = value["DataList"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            InputKolDataList item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dataList.push_back(item);
        }
        m_dataListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InputKolBspData::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_dataListHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DataList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dataList.begin(); itr != m_dataList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<InputKolDataList> InputKolBspData::GetDataList() const
{
    return m_dataList;
}

void InputKolBspData::SetDataList(const vector<InputKolDataList>& _dataList)
{
    m_dataList = _dataList;
    m_dataListHasBeenSet = true;
}

bool InputKolBspData::DataListHasBeenSet() const
{
    return m_dataListHasBeenSet;
}

