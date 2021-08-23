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

#include <tencentcloud/live/v20180801/model/HlsSpecialParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

HlsSpecialParam::HlsSpecialParam() :
    m_flowContinueDurationHasBeenSet(false)
{
}

CoreInternalOutcome HlsSpecialParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FlowContinueDuration") && !value["FlowContinueDuration"].IsNull())
    {
        if (!value["FlowContinueDuration"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HlsSpecialParam.FlowContinueDuration` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_flowContinueDuration = value["FlowContinueDuration"].GetUint64();
        m_flowContinueDurationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HlsSpecialParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_flowContinueDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowContinueDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_flowContinueDuration, allocator);
    }

}


uint64_t HlsSpecialParam::GetFlowContinueDuration() const
{
    return m_flowContinueDuration;
}

void HlsSpecialParam::SetFlowContinueDuration(const uint64_t& _flowContinueDuration)
{
    m_flowContinueDuration = _flowContinueDuration;
    m_flowContinueDurationHasBeenSet = true;
}

bool HlsSpecialParam::FlowContinueDurationHasBeenSet() const
{
    return m_flowContinueDurationHasBeenSet;
}

