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

#include <tencentcloud/cls/v20201016/model/HistogramInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

HistogramInfo::HistogramInfo() :
    m_countHasBeenSet(false),
    m_bTimeHasBeenSet(false)
{
}

CoreInternalOutcome HistogramInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HistogramInfo.Count` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetInt64();
        m_countHasBeenSet = true;
    }

    if (value.HasMember("BTime") && !value["BTime"].IsNull())
    {
        if (!value["BTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HistogramInfo.BTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bTime = value["BTime"].GetInt64();
        m_bTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HistogramInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

    if (m_bTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bTime, allocator);
    }

}


int64_t HistogramInfo::GetCount() const
{
    return m_count;
}

void HistogramInfo::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool HistogramInfo::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

int64_t HistogramInfo::GetBTime() const
{
    return m_bTime;
}

void HistogramInfo::SetBTime(const int64_t& _bTime)
{
    m_bTime = _bTime;
    m_bTimeHasBeenSet = true;
}

bool HistogramInfo::BTimeHasBeenSet() const
{
    return m_bTimeHasBeenSet;
}

