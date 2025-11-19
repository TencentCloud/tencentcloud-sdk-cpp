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
    m_multiCameraLayoutHasBeenSet(false),
    m_detectTypesHasBeenSet(false),
    m_customDetectQueriesHasBeenSet(false)
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

    if (value.HasMember("DetectTypes") && !value["DetectTypes"].IsNull())
    {
        if (!value["DetectTypes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VisionSummaryConfig.DetectTypes` is not array type"));

        const rapidjson::Value &tmpValue = value["DetectTypes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_detectTypes.push_back((*itr).GetString());
        }
        m_detectTypesHasBeenSet = true;
    }

    if (value.HasMember("CustomDetectQueries") && !value["CustomDetectQueries"].IsNull())
    {
        if (!value["CustomDetectQueries"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VisionSummaryConfig.CustomDetectQueries` is not array type"));

        const rapidjson::Value &tmpValue = value["CustomDetectQueries"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VisionCustomDetectQuery item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_customDetectQueries.push_back(item);
        }
        m_customDetectQueriesHasBeenSet = true;
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

    if (m_detectTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetectTypes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_detectTypes.begin(); itr != m_detectTypes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_customDetectQueriesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomDetectQueries";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_customDetectQueries.begin(); itr != m_customDetectQueries.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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

vector<string> VisionSummaryConfig::GetDetectTypes() const
{
    return m_detectTypes;
}

void VisionSummaryConfig::SetDetectTypes(const vector<string>& _detectTypes)
{
    m_detectTypes = _detectTypes;
    m_detectTypesHasBeenSet = true;
}

bool VisionSummaryConfig::DetectTypesHasBeenSet() const
{
    return m_detectTypesHasBeenSet;
}

vector<VisionCustomDetectQuery> VisionSummaryConfig::GetCustomDetectQueries() const
{
    return m_customDetectQueries;
}

void VisionSummaryConfig::SetCustomDetectQueries(const vector<VisionCustomDetectQuery>& _customDetectQueries)
{
    m_customDetectQueries = _customDetectQueries;
    m_customDetectQueriesHasBeenSet = true;
}

bool VisionSummaryConfig::CustomDetectQueriesHasBeenSet() const
{
    return m_customDetectQueriesHasBeenSet;
}

