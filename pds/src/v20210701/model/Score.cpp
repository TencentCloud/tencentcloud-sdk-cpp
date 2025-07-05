/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/pds/v20210701/model/Score.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Pds::V20210701::Model;
using namespace std;

Score::Score() :
    m_starHasBeenSet(false)
{
}

CoreInternalOutcome Score::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Star") && !value["Star"].IsNull())
    {
        if (!value["Star"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Score.Star` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_star = value["Star"].GetInt64();
        m_starHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Score::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_starHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Star";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_star, allocator);
    }

}


int64_t Score::GetStar() const
{
    return m_star;
}

void Score::SetStar(const int64_t& _star)
{
    m_star = _star;
    m_starHasBeenSet = true;
}

bool Score::StarHasBeenSet() const
{
    return m_starHasBeenSet;
}

