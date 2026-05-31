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

#include <tencentcloud/iotexplorer/v20190423/model/SeeDetectContinuousResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

SeeDetectContinuousResult::SeeDetectContinuousResult() :
    m_isContinuousInRangeHasBeenSet(false)
{
}

CoreInternalOutcome SeeDetectContinuousResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IsContinuousInRange") && !value["IsContinuousInRange"].IsNull())
    {
        if (!value["IsContinuousInRange"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SeeDetectContinuousResult.IsContinuousInRange` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isContinuousInRange = value["IsContinuousInRange"].GetBool();
        m_isContinuousInRangeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SeeDetectContinuousResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_isContinuousInRangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsContinuousInRange";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isContinuousInRange, allocator);
    }

}


bool SeeDetectContinuousResult::GetIsContinuousInRange() const
{
    return m_isContinuousInRange;
}

void SeeDetectContinuousResult::SetIsContinuousInRange(const bool& _isContinuousInRange)
{
    m_isContinuousInRange = _isContinuousInRange;
    m_isContinuousInRangeHasBeenSet = true;
}

bool SeeDetectContinuousResult::IsContinuousInRangeHasBeenSet() const
{
    return m_isContinuousInRangeHasBeenSet;
}

