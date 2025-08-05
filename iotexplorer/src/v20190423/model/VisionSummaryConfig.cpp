/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/iotexplorer/v20190423/model/VisionSummaryConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

VisionSummaryConfig::VisionSummaryConfig() :
    m_outputLangHasBeenSet(false),
    m_alternativeOutputLangHasBeenSet(false),
    m_multiCameraLayoutHasBeenSet(false)
{
}

CoreInternalOutcome VisionSummaryConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OutputLang") && !value["OutputLang"].IsNull())
    {
        if (!value["OutputLang"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VisionSummaryConfig.OutputLang` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outputLang = string(value["OutputLang"].GetString());
        m_outputLangHasBeenSet = true;
    }

    if (value.HasMember("AlternativeOutputLang") && !value["AlternativeOutputLang"].IsNull())
    {
        if (!value["AlternativeOutputLang"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VisionSummaryConfig.AlternativeOutputLang` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alternativeOutputLang = string(value["AlternativeOutputLang"].GetString());
        m_alternativeOutputLangHasBeenSet = true;
    }

    if (value.HasMember("MultiCameraLayout") && !value["MultiCameraLayout"].IsNull())
    {
        if (!value["MultiCameraLayout"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VisionSummaryConfig.MultiCameraLayout` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_multiCameraLayout = string(value["MultiCameraLayout"].GetString());
        m_multiCameraLayoutHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VisionSummaryConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_outputLangHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputLang";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outputLang.c_str(), allocator).Move(), allocator);
    }

    if (m_alternativeOutputLangHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlternativeOutputLang";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alternativeOutputLang.c_str(), allocator).Move(), allocator);
    }

    if (m_multiCameraLayoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MultiCameraLayout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_multiCameraLayout.c_str(), allocator).Move(), allocator);
    }

}


string VisionSummaryConfig::GetOutputLang() const
{
    return m_outputLang;
}

void VisionSummaryConfig::SetOutputLang(const string& _outputLang)
{
    m_outputLang = _outputLang;
    m_outputLangHasBeenSet = true;
}

bool VisionSummaryConfig::OutputLangHasBeenSet() const
{
    return m_outputLangHasBeenSet;
}

string VisionSummaryConfig::GetAlternativeOutputLang() const
{
    return m_alternativeOutputLang;
}

void VisionSummaryConfig::SetAlternativeOutputLang(const string& _alternativeOutputLang)
{
    m_alternativeOutputLang = _alternativeOutputLang;
    m_alternativeOutputLangHasBeenSet = true;
}

bool VisionSummaryConfig::AlternativeOutputLangHasBeenSet() const
{
    return m_alternativeOutputLangHasBeenSet;
}

string VisionSummaryConfig::GetMultiCameraLayout() const
{
    return m_multiCameraLayout;
}

void VisionSummaryConfig::SetMultiCameraLayout(const string& _multiCameraLayout)
{
    m_multiCameraLayout = _multiCameraLayout;
    m_multiCameraLayoutHasBeenSet = true;
}

bool VisionSummaryConfig::MultiCameraLayoutHasBeenSet() const
{
    return m_multiCameraLayoutHasBeenSet;
}

