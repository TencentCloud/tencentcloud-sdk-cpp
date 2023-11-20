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

#include <tencentcloud/waf/v20180125/model/AccessHistogramItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

AccessHistogramItem::AccessHistogramItem() :
    m_bTimeHasBeenSet(false),
    m_countHasBeenSet(false),
    m_beginTimeHasBeenSet(false)
{
}

CoreInternalOutcome AccessHistogramItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BTime") && !value["BTime"].IsNull())
    {
        if (!value["BTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AccessHistogramItem.BTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bTime = value["BTime"].GetInt64();
        m_bTimeHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AccessHistogramItem.Count` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetInt64();
        m_countHasBeenSet = true;
    }

    if (value.HasMember("BeginTime") && !value["BeginTime"].IsNull())
    {
        if (!value["BeginTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AccessHistogramItem.BeginTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_beginTime = value["BeginTime"].GetInt64();
        m_beginTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AccessHistogramItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_bTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bTime, allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

    if (m_beginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeginTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_beginTime, allocator);
    }

}


int64_t AccessHistogramItem::GetBTime() const
{
    return m_bTime;
}

void AccessHistogramItem::SetBTime(const int64_t& _bTime)
{
    m_bTime = _bTime;
    m_bTimeHasBeenSet = true;
}

bool AccessHistogramItem::BTimeHasBeenSet() const
{
    return m_bTimeHasBeenSet;
}

int64_t AccessHistogramItem::GetCount() const
{
    return m_count;
}

void AccessHistogramItem::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool AccessHistogramItem::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

int64_t AccessHistogramItem::GetBeginTime() const
{
    return m_beginTime;
}

void AccessHistogramItem::SetBeginTime(const int64_t& _beginTime)
{
    m_beginTime = _beginTime;
    m_beginTimeHasBeenSet = true;
}

bool AccessHistogramItem::BeginTimeHasBeenSet() const
{
    return m_beginTimeHasBeenSet;
}

