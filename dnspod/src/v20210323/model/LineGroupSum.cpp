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

#include <tencentcloud/dnspod/v20210323/model/LineGroupSum.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dnspod::V20210323::Model;
using namespace std;

LineGroupSum::LineGroupSum() :
    m_nowTotalHasBeenSet(false),
    m_totalHasBeenSet(false),
    m_availableCountHasBeenSet(false)
{
}

CoreInternalOutcome LineGroupSum::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NowTotal") && !value["NowTotal"].IsNull())
    {
        if (!value["NowTotal"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LineGroupSum.NowTotal` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_nowTotal = value["NowTotal"].GetUint64();
        m_nowTotalHasBeenSet = true;
    }

    if (value.HasMember("Total") && !value["Total"].IsNull())
    {
        if (!value["Total"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LineGroupSum.Total` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_total = value["Total"].GetUint64();
        m_totalHasBeenSet = true;
    }

    if (value.HasMember("AvailableCount") && !value["AvailableCount"].IsNull())
    {
        if (!value["AvailableCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LineGroupSum.AvailableCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_availableCount = value["AvailableCount"].GetUint64();
        m_availableCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LineGroupSum::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nowTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NowTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nowTotal, allocator);
    }

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_total, allocator);
    }

    if (m_availableCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvailableCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_availableCount, allocator);
    }

}


uint64_t LineGroupSum::GetNowTotal() const
{
    return m_nowTotal;
}

void LineGroupSum::SetNowTotal(const uint64_t& _nowTotal)
{
    m_nowTotal = _nowTotal;
    m_nowTotalHasBeenSet = true;
}

bool LineGroupSum::NowTotalHasBeenSet() const
{
    return m_nowTotalHasBeenSet;
}

uint64_t LineGroupSum::GetTotal() const
{
    return m_total;
}

void LineGroupSum::SetTotal(const uint64_t& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool LineGroupSum::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

uint64_t LineGroupSum::GetAvailableCount() const
{
    return m_availableCount;
}

void LineGroupSum::SetAvailableCount(const uint64_t& _availableCount)
{
    m_availableCount = _availableCount;
    m_availableCountHasBeenSet = true;
}

bool LineGroupSum::AvailableCountHasBeenSet() const
{
    return m_availableCountHasBeenSet;
}

