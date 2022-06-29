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

#include <tencentcloud/ssa/v20180608/model/DescribeSocCheckResultListRspRsp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssa::V20180608::Model;
using namespace std;

DescribeSocCheckResultListRspRsp::DescribeSocCheckResultListRspRsp() :
    m_listHasBeenSet(false),
    m_totalHasBeenSet(false),
    m_lowTotalHasBeenSet(false),
    m_middleTotalHasBeenSet(false),
    m_highTotalHasBeenSet(false),
    m_normalTotalHasBeenSet(false)
{
}

CoreInternalOutcome DescribeSocCheckResultListRspRsp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("List") && !value["List"].IsNull())
    {
        if (!value["List"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeSocCheckResultListRspRsp.List` is not array type"));

        const rapidjson::Value &tmpValue = value["List"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SocCheckResult item;
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

    if (value.HasMember("Total") && !value["Total"].IsNull())
    {
        if (!value["Total"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeSocCheckResultListRspRsp.Total` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_total = value["Total"].GetInt64();
        m_totalHasBeenSet = true;
    }

    if (value.HasMember("LowTotal") && !value["LowTotal"].IsNull())
    {
        if (!value["LowTotal"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeSocCheckResultListRspRsp.LowTotal` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lowTotal = value["LowTotal"].GetInt64();
        m_lowTotalHasBeenSet = true;
    }

    if (value.HasMember("MiddleTotal") && !value["MiddleTotal"].IsNull())
    {
        if (!value["MiddleTotal"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeSocCheckResultListRspRsp.MiddleTotal` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_middleTotal = value["MiddleTotal"].GetInt64();
        m_middleTotalHasBeenSet = true;
    }

    if (value.HasMember("HighTotal") && !value["HighTotal"].IsNull())
    {
        if (!value["HighTotal"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeSocCheckResultListRspRsp.HighTotal` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_highTotal = value["HighTotal"].GetInt64();
        m_highTotalHasBeenSet = true;
    }

    if (value.HasMember("NormalTotal") && !value["NormalTotal"].IsNull())
    {
        if (!value["NormalTotal"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeSocCheckResultListRspRsp.NormalTotal` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_normalTotal = value["NormalTotal"].GetInt64();
        m_normalTotalHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeSocCheckResultListRspRsp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_total, allocator);
    }

    if (m_lowTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LowTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lowTotal, allocator);
    }

    if (m_middleTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MiddleTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_middleTotal, allocator);
    }

    if (m_highTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HighTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_highTotal, allocator);
    }

    if (m_normalTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NormalTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_normalTotal, allocator);
    }

}


vector<SocCheckResult> DescribeSocCheckResultListRspRsp::GetList() const
{
    return m_list;
}

void DescribeSocCheckResultListRspRsp::SetList(const vector<SocCheckResult>& _list)
{
    m_list = _list;
    m_listHasBeenSet = true;
}

bool DescribeSocCheckResultListRspRsp::ListHasBeenSet() const
{
    return m_listHasBeenSet;
}

int64_t DescribeSocCheckResultListRspRsp::GetTotal() const
{
    return m_total;
}

void DescribeSocCheckResultListRspRsp::SetTotal(const int64_t& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool DescribeSocCheckResultListRspRsp::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

int64_t DescribeSocCheckResultListRspRsp::GetLowTotal() const
{
    return m_lowTotal;
}

void DescribeSocCheckResultListRspRsp::SetLowTotal(const int64_t& _lowTotal)
{
    m_lowTotal = _lowTotal;
    m_lowTotalHasBeenSet = true;
}

bool DescribeSocCheckResultListRspRsp::LowTotalHasBeenSet() const
{
    return m_lowTotalHasBeenSet;
}

int64_t DescribeSocCheckResultListRspRsp::GetMiddleTotal() const
{
    return m_middleTotal;
}

void DescribeSocCheckResultListRspRsp::SetMiddleTotal(const int64_t& _middleTotal)
{
    m_middleTotal = _middleTotal;
    m_middleTotalHasBeenSet = true;
}

bool DescribeSocCheckResultListRspRsp::MiddleTotalHasBeenSet() const
{
    return m_middleTotalHasBeenSet;
}

int64_t DescribeSocCheckResultListRspRsp::GetHighTotal() const
{
    return m_highTotal;
}

void DescribeSocCheckResultListRspRsp::SetHighTotal(const int64_t& _highTotal)
{
    m_highTotal = _highTotal;
    m_highTotalHasBeenSet = true;
}

bool DescribeSocCheckResultListRspRsp::HighTotalHasBeenSet() const
{
    return m_highTotalHasBeenSet;
}

int64_t DescribeSocCheckResultListRspRsp::GetNormalTotal() const
{
    return m_normalTotal;
}

void DescribeSocCheckResultListRspRsp::SetNormalTotal(const int64_t& _normalTotal)
{
    m_normalTotal = _normalTotal;
    m_normalTotalHasBeenSet = true;
}

bool DescribeSocCheckResultListRspRsp::NormalTotalHasBeenSet() const
{
    return m_normalTotalHasBeenSet;
}

