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

#include <tencentcloud/tiw/v20190919/model/Canvas.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tiw::V20190919::Model;
using namespace std;

Canvas::Canvas() :
    m_layoutParamsHasBeenSet(false),
    m_backgroundColorHasBeenSet(false)
{
}

CoreInternalOutcome Canvas::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LayoutParams") && !value["LayoutParams"].IsNull())
    {
        if (!value["LayoutParams"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Canvas.LayoutParams` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_layoutParams.Deserialize(value["LayoutParams"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_layoutParamsHasBeenSet = true;
    }

    if (value.HasMember("BackgroundColor") && !value["BackgroundColor"].IsNull())
    {
        if (!value["BackgroundColor"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Canvas.BackgroundColor` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backgroundColor = string(value["BackgroundColor"].GetString());
        m_backgroundColorHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Canvas::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_layoutParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LayoutParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_layoutParams.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_backgroundColorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackgroundColor";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backgroundColor.c_str(), allocator).Move(), allocator);
    }

}


LayoutParams Canvas::GetLayoutParams() const
{
    return m_layoutParams;
}

void Canvas::SetLayoutParams(const LayoutParams& _layoutParams)
{
    m_layoutParams = _layoutParams;
    m_layoutParamsHasBeenSet = true;
}

bool Canvas::LayoutParamsHasBeenSet() const
{
    return m_layoutParamsHasBeenSet;
}

string Canvas::GetBackgroundColor() const
{
    return m_backgroundColor;
}

void Canvas::SetBackgroundColor(const string& _backgroundColor)
{
    m_backgroundColor = _backgroundColor;
    m_backgroundColorHasBeenSet = true;
}

bool Canvas::BackgroundColorHasBeenSet() const
{
    return m_backgroundColorHasBeenSet;
}

