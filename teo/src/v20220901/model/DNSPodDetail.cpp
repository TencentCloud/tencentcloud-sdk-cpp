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

#include <tencentcloud/teo/v20220901/model/DNSPodDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

DNSPodDetail::DNSPodDetail() :
    m_isFakeHasBeenSet(false)
{
}

CoreInternalOutcome DNSPodDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IsFake") && !value["IsFake"].IsNull())
    {
        if (!value["IsFake"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DNSPodDetail.IsFake` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isFake = value["IsFake"].GetInt64();
        m_isFakeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DNSPodDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_isFakeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsFake";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isFake, allocator);
    }

}


int64_t DNSPodDetail::GetIsFake() const
{
    return m_isFake;
}

void DNSPodDetail::SetIsFake(const int64_t& _isFake)
{
    m_isFake = _isFake;
    m_isFakeHasBeenSet = true;
}

bool DNSPodDetail::IsFakeHasBeenSet() const
{
    return m_isFakeHasBeenSet;
}

