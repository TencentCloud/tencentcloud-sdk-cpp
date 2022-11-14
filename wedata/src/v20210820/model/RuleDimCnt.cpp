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

#include <tencentcloud/wedata/v20210820/model/RuleDimCnt.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

RuleDimCnt::RuleDimCnt() :
    m_dimHasBeenSet(false),
    m_cntHasBeenSet(false)
{
}

CoreInternalOutcome RuleDimCnt::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Dim") && !value["Dim"].IsNull())
    {
        if (!value["Dim"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleDimCnt.Dim` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dim = value["Dim"].GetUint64();
        m_dimHasBeenSet = true;
    }

    if (value.HasMember("Cnt") && !value["Cnt"].IsNull())
    {
        if (!value["Cnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleDimCnt.Cnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cnt = value["Cnt"].GetUint64();
        m_cntHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RuleDimCnt::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dimHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Dim";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dim, allocator);
    }

    if (m_cntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cnt, allocator);
    }

}


uint64_t RuleDimCnt::GetDim() const
{
    return m_dim;
}

void RuleDimCnt::SetDim(const uint64_t& _dim)
{
    m_dim = _dim;
    m_dimHasBeenSet = true;
}

bool RuleDimCnt::DimHasBeenSet() const
{
    return m_dimHasBeenSet;
}

uint64_t RuleDimCnt::GetCnt() const
{
    return m_cnt;
}

void RuleDimCnt::SetCnt(const uint64_t& _cnt)
{
    m_cnt = _cnt;
    m_cntHasBeenSet = true;
}

bool RuleDimCnt::CntHasBeenSet() const
{
    return m_cntHasBeenSet;
}

