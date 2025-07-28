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

#include <tencentcloud/mps/v20190612/model/SubtitlePosition.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

SubtitlePosition::SubtitlePosition() :
    m_centerYHasBeenSet(false)
{
}

CoreInternalOutcome SubtitlePosition::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CenterY") && !value["CenterY"].IsNull())
    {
        if (!value["CenterY"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitlePosition.CenterY` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_centerY = value["CenterY"].GetInt64();
        m_centerYHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SubtitlePosition::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_centerYHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CenterY";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_centerY, allocator);
    }

}


int64_t SubtitlePosition::GetCenterY() const
{
    return m_centerY;
}

void SubtitlePosition::SetCenterY(const int64_t& _centerY)
{
    m_centerY = _centerY;
    m_centerYHasBeenSet = true;
}

bool SubtitlePosition::CenterYHasBeenSet() const
{
    return m_centerYHasBeenSet;
}

