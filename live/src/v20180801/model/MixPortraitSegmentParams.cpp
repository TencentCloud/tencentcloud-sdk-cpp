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

#include <tencentcloud/live/v20180801/model/MixPortraitSegmentParams.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

MixPortraitSegmentParams::MixPortraitSegmentParams() :
    m_colorHasBeenSet(false)
{
}

CoreInternalOutcome MixPortraitSegmentParams::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Color") && !value["Color"].IsNull())
    {
        if (!value["Color"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MixPortraitSegmentParams.Color` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_color = string(value["Color"].GetString());
        m_colorHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MixPortraitSegmentParams::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_colorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Color";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_color.c_str(), allocator).Move(), allocator);
    }

}


string MixPortraitSegmentParams::GetColor() const
{
    return m_color;
}

void MixPortraitSegmentParams::SetColor(const string& _color)
{
    m_color = _color;
    m_colorHasBeenSet = true;
}

bool MixPortraitSegmentParams::ColorHasBeenSet() const
{
    return m_colorHasBeenSet;
}

