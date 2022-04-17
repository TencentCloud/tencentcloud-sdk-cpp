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

#include <tencentcloud/waf/v20180125/model/IpAccessControlData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

IpAccessControlData::IpAccessControlData() :
    m_resHasBeenSet(false),
    m_totalCountHasBeenSet(false)
{
}

CoreInternalOutcome IpAccessControlData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Res") && !value["Res"].IsNull())
    {
        if (!value["Res"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IpAccessControlData.Res` is not array type"));

        const rapidjson::Value &tmpValue = value["Res"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            IpAccessControlItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_res.push_back(item);
        }
        m_resHasBeenSet = true;
    }

    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `IpAccessControlData.TotalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetUint64();
        m_totalCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IpAccessControlData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Res";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_res.begin(); itr != m_res.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

}


vector<IpAccessControlItem> IpAccessControlData::GetRes() const
{
    return m_res;
}

void IpAccessControlData::SetRes(const vector<IpAccessControlItem>& _res)
{
    m_res = _res;
    m_resHasBeenSet = true;
}

bool IpAccessControlData::ResHasBeenSet() const
{
    return m_resHasBeenSet;
}

uint64_t IpAccessControlData::GetTotalCount() const
{
    return m_totalCount;
}

void IpAccessControlData::SetTotalCount(const uint64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool IpAccessControlData::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

