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

#include <tencentcloud/dnspod/v20210323/model/SnapshotPageInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dnspod::V20210323::Model;
using namespace std;

SnapshotPageInfo::SnapshotPageInfo() :
    m_totalHasBeenSet(false)
{
}

CoreInternalOutcome SnapshotPageInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Total") && !value["Total"].IsNull())
    {
        if (!value["Total"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotPageInfo.Total` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_total = value["Total"].GetUint64();
        m_totalHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SnapshotPageInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_total, allocator);
    }

}


uint64_t SnapshotPageInfo::GetTotal() const
{
    return m_total;
}

void SnapshotPageInfo::SetTotal(const uint64_t& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool SnapshotPageInfo::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

