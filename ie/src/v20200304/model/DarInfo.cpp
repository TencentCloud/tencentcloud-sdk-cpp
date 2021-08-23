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

#include <tencentcloud/ie/v20200304/model/DarInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ie::V20200304::Model;
using namespace std;

DarInfo::DarInfo() :
    m_fillModeHasBeenSet(false)
{
}

CoreInternalOutcome DarInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FillMode") && !value["FillMode"].IsNull())
    {
        if (!value["FillMode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DarInfo.FillMode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_fillMode = value["FillMode"].GetUint64();
        m_fillModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DarInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fillModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FillMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fillMode, allocator);
    }

}


uint64_t DarInfo::GetFillMode() const
{
    return m_fillMode;
}

void DarInfo::SetFillMode(const uint64_t& _fillMode)
{
    m_fillMode = _fillMode;
    m_fillModeHasBeenSet = true;
}

bool DarInfo::FillModeHasBeenSet() const
{
    return m_fillModeHasBeenSet;
}

