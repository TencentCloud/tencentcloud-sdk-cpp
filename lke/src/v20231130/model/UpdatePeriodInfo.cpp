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

#include <tencentcloud/lke/v20231130/model/UpdatePeriodInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

UpdatePeriodInfo::UpdatePeriodInfo() :
    m_updatePeriodHHasBeenSet(false)
{
}

CoreInternalOutcome UpdatePeriodInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UpdatePeriodH") && !value["UpdatePeriodH"].IsNull())
    {
        if (!value["UpdatePeriodH"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UpdatePeriodInfo.UpdatePeriodH` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_updatePeriodH = value["UpdatePeriodH"].GetUint64();
        m_updatePeriodHHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UpdatePeriodInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_updatePeriodHHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatePeriodH";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updatePeriodH, allocator);
    }

}


uint64_t UpdatePeriodInfo::GetUpdatePeriodH() const
{
    return m_updatePeriodH;
}

void UpdatePeriodInfo::SetUpdatePeriodH(const uint64_t& _updatePeriodH)
{
    m_updatePeriodH = _updatePeriodH;
    m_updatePeriodHHasBeenSet = true;
}

bool UpdatePeriodInfo::UpdatePeriodHHasBeenSet() const
{
    return m_updatePeriodHHasBeenSet;
}

