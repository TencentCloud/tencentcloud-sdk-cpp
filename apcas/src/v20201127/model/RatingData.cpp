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

#include <tencentcloud/apcas/v20201127/model/RatingData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apcas::V20201127::Model;
using namespace rapidjson;
using namespace std;

RatingData::RatingData() :
    m_rankHasBeenSet(false)
{
}

CoreInternalOutcome RatingData::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Rank") && !value["Rank"].IsNull())
    {
        if (!value["Rank"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `RatingData.Rank` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rank = value["Rank"].GetInt64();
        m_rankHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RatingData::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_rankHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Rank";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rank, allocator);
    }

}


int64_t RatingData::GetRank() const
{
    return m_rank;
}

void RatingData::SetRank(const int64_t& _rank)
{
    m_rank = _rank;
    m_rankHasBeenSet = true;
}

bool RatingData::RankHasBeenSet() const
{
    return m_rankHasBeenSet;
}

