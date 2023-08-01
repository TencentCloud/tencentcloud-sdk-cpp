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

#include <tencentcloud/live/v20180801/model/CommonMixInputParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

CommonMixInputParam::CommonMixInputParam() :
    m_inputStreamNameHasBeenSet(false),
    m_layoutParamsHasBeenSet(false),
    m_cropParamsHasBeenSet(false),
    m_portraitSegmentParamsHasBeenSet(false)
{
}

CoreInternalOutcome CommonMixInputParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InputStreamName") && !value["InputStreamName"].IsNull())
    {
        if (!value["InputStreamName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CommonMixInputParam.InputStreamName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inputStreamName = string(value["InputStreamName"].GetString());
        m_inputStreamNameHasBeenSet = true;
    }

    if (value.HasMember("LayoutParams") && !value["LayoutParams"].IsNull())
    {
        if (!value["LayoutParams"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CommonMixInputParam.LayoutParams` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_layoutParams.Deserialize(value["LayoutParams"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_layoutParamsHasBeenSet = true;
    }

    if (value.HasMember("CropParams") && !value["CropParams"].IsNull())
    {
        if (!value["CropParams"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CommonMixInputParam.CropParams` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cropParams.Deserialize(value["CropParams"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cropParamsHasBeenSet = true;
    }

    if (value.HasMember("PortraitSegmentParams") && !value["PortraitSegmentParams"].IsNull())
    {
        if (!value["PortraitSegmentParams"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CommonMixInputParam.PortraitSegmentParams` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_portraitSegmentParams.Deserialize(value["PortraitSegmentParams"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_portraitSegmentParamsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CommonMixInputParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_inputStreamNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputStreamName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inputStreamName.c_str(), allocator).Move(), allocator);
    }

    if (m_layoutParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LayoutParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_layoutParams.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_cropParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CropParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cropParams.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_portraitSegmentParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PortraitSegmentParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_portraitSegmentParams.ToJsonObject(value[key.c_str()], allocator);
    }

}


string CommonMixInputParam::GetInputStreamName() const
{
    return m_inputStreamName;
}

void CommonMixInputParam::SetInputStreamName(const string& _inputStreamName)
{
    m_inputStreamName = _inputStreamName;
    m_inputStreamNameHasBeenSet = true;
}

bool CommonMixInputParam::InputStreamNameHasBeenSet() const
{
    return m_inputStreamNameHasBeenSet;
}

CommonMixLayoutParams CommonMixInputParam::GetLayoutParams() const
{
    return m_layoutParams;
}

void CommonMixInputParam::SetLayoutParams(const CommonMixLayoutParams& _layoutParams)
{
    m_layoutParams = _layoutParams;
    m_layoutParamsHasBeenSet = true;
}

bool CommonMixInputParam::LayoutParamsHasBeenSet() const
{
    return m_layoutParamsHasBeenSet;
}

CommonMixCropParams CommonMixInputParam::GetCropParams() const
{
    return m_cropParams;
}

void CommonMixInputParam::SetCropParams(const CommonMixCropParams& _cropParams)
{
    m_cropParams = _cropParams;
    m_cropParamsHasBeenSet = true;
}

bool CommonMixInputParam::CropParamsHasBeenSet() const
{
    return m_cropParamsHasBeenSet;
}

MixPortraitSegmentParams CommonMixInputParam::GetPortraitSegmentParams() const
{
    return m_portraitSegmentParams;
}

void CommonMixInputParam::SetPortraitSegmentParams(const MixPortraitSegmentParams& _portraitSegmentParams)
{
    m_portraitSegmentParams = _portraitSegmentParams;
    m_portraitSegmentParamsHasBeenSet = true;
}

bool CommonMixInputParam::PortraitSegmentParamsHasBeenSet() const
{
    return m_portraitSegmentParamsHasBeenSet;
}

