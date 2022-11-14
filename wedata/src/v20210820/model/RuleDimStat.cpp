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

#include <tencentcloud/wedata/v20210820/model/RuleDimStat.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

RuleDimStat::RuleDimStat() :
    m_totalCntHasBeenSet(false),
    m_dimCntListHasBeenSet(false)
{
}

CoreInternalOutcome RuleDimStat::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TotalCnt") && !value["TotalCnt"].IsNull())
    {
        if (!value["TotalCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleDimStat.TotalCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCnt = value["TotalCnt"].GetUint64();
        m_totalCntHasBeenSet = true;
    }

    if (value.HasMember("DimCntList") && !value["DimCntList"].IsNull())
    {
        if (!value["DimCntList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RuleDimStat.DimCntList` is not array type"));

        const rapidjson::Value &tmpValue = value["DimCntList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RuleDimCnt item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dimCntList.push_back(item);
        }
        m_dimCntListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RuleDimStat::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCnt, allocator);
    }

    if (m_dimCntListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DimCntList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dimCntList.begin(); itr != m_dimCntList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


uint64_t RuleDimStat::GetTotalCnt() const
{
    return m_totalCnt;
}

void RuleDimStat::SetTotalCnt(const uint64_t& _totalCnt)
{
    m_totalCnt = _totalCnt;
    m_totalCntHasBeenSet = true;
}

bool RuleDimStat::TotalCntHasBeenSet() const
{
    return m_totalCntHasBeenSet;
}

vector<RuleDimCnt> RuleDimStat::GetDimCntList() const
{
    return m_dimCntList;
}

void RuleDimStat::SetDimCntList(const vector<RuleDimCnt>& _dimCntList)
{
    m_dimCntList = _dimCntList;
    m_dimCntListHasBeenSet = true;
}

bool RuleDimStat::DimCntListHasBeenSet() const
{
    return m_dimCntListHasBeenSet;
}

