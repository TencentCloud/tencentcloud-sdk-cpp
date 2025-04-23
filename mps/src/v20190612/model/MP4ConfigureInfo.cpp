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

#include <tencentcloud/mps/v20190612/model/MP4ConfigureInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

MP4ConfigureInfo::MP4ConfigureInfo() :
    m_intervalHasBeenSet(false)
{
}

CoreInternalOutcome MP4ConfigureInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Interval") && !value["Interval"].IsNull())
    {
        if (!value["Interval"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MP4ConfigureInfo.Interval` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_interval = value["Interval"].GetInt64();
        m_intervalHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MP4ConfigureInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_intervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Interval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_interval, allocator);
    }

}


int64_t MP4ConfigureInfo::GetInterval() const
{
    return m_interval;
}

void MP4ConfigureInfo::SetInterval(const int64_t& _interval)
{
    m_interval = _interval;
    m_intervalHasBeenSet = true;
}

bool MP4ConfigureInfo::IntervalHasBeenSet() const
{
    return m_intervalHasBeenSet;
}

