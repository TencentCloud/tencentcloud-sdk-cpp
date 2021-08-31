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

#include <tencentcloud/cwp/v20180228/model/StandardModeConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

StandardModeConfig::StandardModeConfig() :
    m_ttlHasBeenSet(false)
{
}

CoreInternalOutcome StandardModeConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Ttl") && !value["Ttl"].IsNull())
    {
        if (!value["Ttl"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `StandardModeConfig.Ttl` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ttl = value["Ttl"].GetUint64();
        m_ttlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StandardModeConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ttlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ttl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ttl, allocator);
    }

}


uint64_t StandardModeConfig::GetTtl() const
{
    return m_ttl;
}

void StandardModeConfig::SetTtl(const uint64_t& _ttl)
{
    m_ttl = _ttl;
    m_ttlHasBeenSet = true;
}

bool StandardModeConfig::TtlHasBeenSet() const
{
    return m_ttlHasBeenSet;
}

