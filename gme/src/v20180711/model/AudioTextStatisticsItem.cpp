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

#include <tencentcloud/gme/v20180711/model/AudioTextStatisticsItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gme::V20180711::Model;
using namespace std;

AudioTextStatisticsItem::AudioTextStatisticsItem() :
    m_dataHasBeenSet(false)
{
}

CoreInternalOutcome AudioTextStatisticsItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Data") && !value["Data"].IsNull())
    {
        if (!value["Data"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `AudioTextStatisticsItem.Data` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_data = value["Data"].GetDouble();
        m_dataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AudioTextStatisticsItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Data";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_data, allocator);
    }

}


double AudioTextStatisticsItem::GetData() const
{
    return m_data;
}

void AudioTextStatisticsItem::SetData(const double& _data)
{
    m_data = _data;
    m_dataHasBeenSet = true;
}

bool AudioTextStatisticsItem::DataHasBeenSet() const
{
    return m_dataHasBeenSet;
}

