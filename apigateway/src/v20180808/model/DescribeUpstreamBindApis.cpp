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

#include <tencentcloud/apigateway/v20180808/model/DescribeUpstreamBindApis.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apigateway::V20180808::Model;
using namespace std;

DescribeUpstreamBindApis::DescribeUpstreamBindApis() :
    m_totalCountHasBeenSet(false),
    m_bindApiSetHasBeenSet(false)
{
}

CoreInternalOutcome DescribeUpstreamBindApis::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeUpstreamBindApis.TotalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetUint64();
        m_totalCountHasBeenSet = true;
    }

    if (value.HasMember("BindApiSet") && !value["BindApiSet"].IsNull())
    {
        if (!value["BindApiSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeUpstreamBindApis.BindApiSet` is not array type"));

        const rapidjson::Value &tmpValue = value["BindApiSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BindApiInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_bindApiSet.push_back(item);
        }
        m_bindApiSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeUpstreamBindApis::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_bindApiSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindApiSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_bindApiSet.begin(); itr != m_bindApiSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


uint64_t DescribeUpstreamBindApis::GetTotalCount() const
{
    return m_totalCount;
}

void DescribeUpstreamBindApis::SetTotalCount(const uint64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool DescribeUpstreamBindApis::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

vector<BindApiInfo> DescribeUpstreamBindApis::GetBindApiSet() const
{
    return m_bindApiSet;
}

void DescribeUpstreamBindApis::SetBindApiSet(const vector<BindApiInfo>& _bindApiSet)
{
    m_bindApiSet = _bindApiSet;
    m_bindApiSetHasBeenSet = true;
}

bool DescribeUpstreamBindApis::BindApiSetHasBeenSet() const
{
    return m_bindApiSetHasBeenSet;
}

