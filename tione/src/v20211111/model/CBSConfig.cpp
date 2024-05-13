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

#include <tencentcloud/tione/v20211111/model/CBSConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

CBSConfig::CBSConfig() :
    m_volumeSizeInGBHasBeenSet(false)
{
}

CoreInternalOutcome CBSConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VolumeSizeInGB") && !value["VolumeSizeInGB"].IsNull())
    {
        if (!value["VolumeSizeInGB"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CBSConfig.VolumeSizeInGB` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_volumeSizeInGB = value["VolumeSizeInGB"].GetInt64();
        m_volumeSizeInGBHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CBSConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_volumeSizeInGBHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VolumeSizeInGB";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_volumeSizeInGB, allocator);
    }

}


int64_t CBSConfig::GetVolumeSizeInGB() const
{
    return m_volumeSizeInGB;
}

void CBSConfig::SetVolumeSizeInGB(const int64_t& _volumeSizeInGB)
{
    m_volumeSizeInGB = _volumeSizeInGB;
    m_volumeSizeInGBHasBeenSet = true;
}

bool CBSConfig::VolumeSizeInGBHasBeenSet() const
{
    return m_volumeSizeInGBHasBeenSet;
}

