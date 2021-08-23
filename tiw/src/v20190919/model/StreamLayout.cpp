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

#include <tencentcloud/tiw/v20190919/model/StreamLayout.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tiw::V20190919::Model;
using namespace std;

StreamLayout::StreamLayout() :
    m_layoutParamsHasBeenSet(false),
    m_inputStreamIdHasBeenSet(false),
    m_backgroundColorHasBeenSet(false),
    m_fillModeHasBeenSet(false)
{
}

CoreInternalOutcome StreamLayout::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LayoutParams") && !value["LayoutParams"].IsNull())
    {
        if (!value["LayoutParams"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `StreamLayout.LayoutParams` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_layoutParams.Deserialize(value["LayoutParams"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_layoutParamsHasBeenSet = true;
    }

    if (value.HasMember("InputStreamId") && !value["InputStreamId"].IsNull())
    {
        if (!value["InputStreamId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StreamLayout.InputStreamId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inputStreamId = string(value["InputStreamId"].GetString());
        m_inputStreamIdHasBeenSet = true;
    }

    if (value.HasMember("BackgroundColor") && !value["BackgroundColor"].IsNull())
    {
        if (!value["BackgroundColor"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StreamLayout.BackgroundColor` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backgroundColor = string(value["BackgroundColor"].GetString());
        m_backgroundColorHasBeenSet = true;
    }

    if (value.HasMember("FillMode") && !value["FillMode"].IsNull())
    {
        if (!value["FillMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StreamLayout.FillMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fillMode = value["FillMode"].GetInt64();
        m_fillModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StreamLayout::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_layoutParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LayoutParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_layoutParams.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_inputStreamIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputStreamId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inputStreamId.c_str(), allocator).Move(), allocator);
    }

    if (m_backgroundColorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackgroundColor";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backgroundColor.c_str(), allocator).Move(), allocator);
    }

    if (m_fillModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FillMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fillMode, allocator);
    }

}


LayoutParams StreamLayout::GetLayoutParams() const
{
    return m_layoutParams;
}

void StreamLayout::SetLayoutParams(const LayoutParams& _layoutParams)
{
    m_layoutParams = _layoutParams;
    m_layoutParamsHasBeenSet = true;
}

bool StreamLayout::LayoutParamsHasBeenSet() const
{
    return m_layoutParamsHasBeenSet;
}

string StreamLayout::GetInputStreamId() const
{
    return m_inputStreamId;
}

void StreamLayout::SetInputStreamId(const string& _inputStreamId)
{
    m_inputStreamId = _inputStreamId;
    m_inputStreamIdHasBeenSet = true;
}

bool StreamLayout::InputStreamIdHasBeenSet() const
{
    return m_inputStreamIdHasBeenSet;
}

string StreamLayout::GetBackgroundColor() const
{
    return m_backgroundColor;
}

void StreamLayout::SetBackgroundColor(const string& _backgroundColor)
{
    m_backgroundColor = _backgroundColor;
    m_backgroundColorHasBeenSet = true;
}

bool StreamLayout::BackgroundColorHasBeenSet() const
{
    return m_backgroundColorHasBeenSet;
}

int64_t StreamLayout::GetFillMode() const
{
    return m_fillMode;
}

void StreamLayout::SetFillMode(const int64_t& _fillMode)
{
    m_fillMode = _fillMode;
    m_fillModeHasBeenSet = true;
}

bool StreamLayout::FillModeHasBeenSet() const
{
    return m_fillModeHasBeenSet;
}

