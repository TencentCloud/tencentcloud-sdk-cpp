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

#include <tencentcloud/rce/v20201103/model/OuntputDescribeDataListInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rce::V20201103::Model;
using namespace std;

OuntputDescribeDataListInfo::OuntputDescribeDataListInfo() :
    m_countHasBeenSet(false),
    m_listHasBeenSet(false)
{
}

CoreInternalOutcome OuntputDescribeDataListInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OuntputDescribeDataListInfo.Count` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetInt64();
        m_countHasBeenSet = true;
    }

    if (value.HasMember("List") && !value["List"].IsNull())
    {
        if (!value["List"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OuntputDescribeDataListInfo.List` is not array type"));

        const rapidjson::Value &tmpValue = value["List"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            OutputDescribeDataListFront item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_list.push_back(item);
        }
        m_listHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OuntputDescribeDataListInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

    if (m_listHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "List";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_list.begin(); itr != m_list.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t OuntputDescribeDataListInfo::GetCount() const
{
    return m_count;
}

void OuntputDescribeDataListInfo::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool OuntputDescribeDataListInfo::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

vector<OutputDescribeDataListFront> OuntputDescribeDataListInfo::GetList() const
{
    return m_list;
}

void OuntputDescribeDataListInfo::SetList(const vector<OutputDescribeDataListFront>& _list)
{
    m_list = _list;
    m_listHasBeenSet = true;
}

bool OuntputDescribeDataListInfo::ListHasBeenSet() const
{
    return m_listHasBeenSet;
}

