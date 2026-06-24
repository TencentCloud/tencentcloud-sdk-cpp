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

#include <tencentcloud/waf/v20180125/model/IntentDetectResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

IntentDetectResult::IntentDetectResult() :
    m_isUnSafeHasBeenSet(false)
{
}

CoreInternalOutcome IntentDetectResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IsUnSafe") && !value["IsUnSafe"].IsNull())
    {
        if (!value["IsUnSafe"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `IntentDetectResult.IsUnSafe` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isUnSafe = value["IsUnSafe"].GetUint64();
        m_isUnSafeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IntentDetectResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_isUnSafeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsUnSafe";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isUnSafe, allocator);
    }

}


uint64_t IntentDetectResult::GetIsUnSafe() const
{
    return m_isUnSafe;
}

void IntentDetectResult::SetIsUnSafe(const uint64_t& _isUnSafe)
{
    m_isUnSafe = _isUnSafe;
    m_isUnSafeHasBeenSet = true;
}

bool IntentDetectResult::IsUnSafeHasBeenSet() const
{
    return m_isUnSafeHasBeenSet;
}

