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
using namespace rapidjson;
using namespace std;

CommonMixInputParam::CommonMixInputParam() :
    m_inputStreamNameHasBeenSet(false),
    m_layoutParamsHasBeenSet(false),
    m_cropParamsHasBeenSet(false)
{
}

CoreInternalOutcome CommonMixInputParam::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("InputStreamName") && !value["InputStreamName"].IsNull())
    {
        if (!value["InputStreamName"].IsString())
        {
            return CoreInternalOutcome(Error("response `CommonMixInputParam.InputStreamName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inputStreamName = string(value["InputStreamName"].GetString());
        m_inputStreamNameHasBeenSet = true;
    }

    if (value.HasMember("LayoutParams") && !value["LayoutParams"].IsNull())
    {
        if (!value["LayoutParams"].IsObject())
        {
            return CoreInternalOutcome(Error("response `CommonMixInputParam.LayoutParams` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Error("response `CommonMixInputParam.CropParams` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cropParams.Deserialize(value["CropParams"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cropParamsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CommonMixInputParam::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_inputStreamNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InputStreamName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_inputStreamName.c_str(), allocator).Move(), allocator);
    }

    if (m_layoutParamsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LayoutParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_layoutParams.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_cropParamsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CropParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_cropParams.ToJsonObject(value[key.c_str()], allocator);
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

