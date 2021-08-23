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

#include <tencentcloud/gme/v20180711/model/VoiceMessageStatisticsItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gme::V20180711::Model;
using namespace std;

VoiceMessageStatisticsItem::VoiceMessageStatisticsItem() :
    m_dauHasBeenSet(false)
{
}

CoreInternalOutcome VoiceMessageStatisticsItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Dau") && !value["Dau"].IsNull())
    {
        if (!value["Dau"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VoiceMessageStatisticsItem.Dau` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dau = value["Dau"].GetUint64();
        m_dauHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VoiceMessageStatisticsItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dauHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Dau";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dau, allocator);
    }

}


uint64_t VoiceMessageStatisticsItem::GetDau() const
{
    return m_dau;
}

void VoiceMessageStatisticsItem::SetDau(const uint64_t& _dau)
{
    m_dau = _dau;
    m_dauHasBeenSet = true;
}

bool VoiceMessageStatisticsItem::DauHasBeenSet() const
{
    return m_dauHasBeenSet;
}

