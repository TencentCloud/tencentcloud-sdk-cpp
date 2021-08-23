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

#include <tencentcloud/mps/v20190612/model/TranscodeTaskInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

TranscodeTaskInput::TranscodeTaskInput() :
    m_definitionHasBeenSet(false),
    m_rawParameterHasBeenSet(false),
    m_overrideParameterHasBeenSet(false),
    m_watermarkSetHasBeenSet(false),
    m_mosaicSetHasBeenSet(false),
    m_startTimeOffsetHasBeenSet(false),
    m_endTimeOffsetHasBeenSet(false),
    m_outputStorageHasBeenSet(false),
    m_outputObjectPathHasBeenSet(false),
    m_segmentObjectNameHasBeenSet(false),
    m_objectNumberFormatHasBeenSet(false),
    m_headTailParameterHasBeenSet(false)
{
}

CoreInternalOutcome TranscodeTaskInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Definition") && !value["Definition"].IsNull())
    {
        if (!value["Definition"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TranscodeTaskInput.Definition` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_definition = value["Definition"].GetUint64();
        m_definitionHasBeenSet = true;
    }

    if (value.HasMember("RawParameter") && !value["RawParameter"].IsNull())
    {
        if (!value["RawParameter"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TranscodeTaskInput.RawParameter` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_rawParameter.Deserialize(value["RawParameter"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_rawParameterHasBeenSet = true;
    }

    if (value.HasMember("OverrideParameter") && !value["OverrideParameter"].IsNull())
    {
        if (!value["OverrideParameter"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TranscodeTaskInput.OverrideParameter` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_overrideParameter.Deserialize(value["OverrideParameter"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_overrideParameterHasBeenSet = true;
    }

    if (value.HasMember("WatermarkSet") && !value["WatermarkSet"].IsNull())
    {
        if (!value["WatermarkSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TranscodeTaskInput.WatermarkSet` is not array type"));

        const rapidjson::Value &tmpValue = value["WatermarkSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            WatermarkInput item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_watermarkSet.push_back(item);
        }
        m_watermarkSetHasBeenSet = true;
    }

    if (value.HasMember("MosaicSet") && !value["MosaicSet"].IsNull())
    {
        if (!value["MosaicSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TranscodeTaskInput.MosaicSet` is not array type"));

        const rapidjson::Value &tmpValue = value["MosaicSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MosaicInput item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_mosaicSet.push_back(item);
        }
        m_mosaicSetHasBeenSet = true;
    }

    if (value.HasMember("StartTimeOffset") && !value["StartTimeOffset"].IsNull())
    {
        if (!value["StartTimeOffset"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TranscodeTaskInput.StartTimeOffset` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_startTimeOffset = value["StartTimeOffset"].GetDouble();
        m_startTimeOffsetHasBeenSet = true;
    }

    if (value.HasMember("EndTimeOffset") && !value["EndTimeOffset"].IsNull())
    {
        if (!value["EndTimeOffset"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TranscodeTaskInput.EndTimeOffset` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_endTimeOffset = value["EndTimeOffset"].GetDouble();
        m_endTimeOffsetHasBeenSet = true;
    }

    if (value.HasMember("OutputStorage") && !value["OutputStorage"].IsNull())
    {
        if (!value["OutputStorage"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TranscodeTaskInput.OutputStorage` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_outputStorage.Deserialize(value["OutputStorage"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_outputStorageHasBeenSet = true;
    }

    if (value.HasMember("OutputObjectPath") && !value["OutputObjectPath"].IsNull())
    {
        if (!value["OutputObjectPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TranscodeTaskInput.OutputObjectPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outputObjectPath = string(value["OutputObjectPath"].GetString());
        m_outputObjectPathHasBeenSet = true;
    }

    if (value.HasMember("SegmentObjectName") && !value["SegmentObjectName"].IsNull())
    {
        if (!value["SegmentObjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TranscodeTaskInput.SegmentObjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_segmentObjectName = string(value["SegmentObjectName"].GetString());
        m_segmentObjectNameHasBeenSet = true;
    }

    if (value.HasMember("ObjectNumberFormat") && !value["ObjectNumberFormat"].IsNull())
    {
        if (!value["ObjectNumberFormat"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TranscodeTaskInput.ObjectNumberFormat` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_objectNumberFormat.Deserialize(value["ObjectNumberFormat"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_objectNumberFormatHasBeenSet = true;
    }

    if (value.HasMember("HeadTailParameter") && !value["HeadTailParameter"].IsNull())
    {
        if (!value["HeadTailParameter"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TranscodeTaskInput.HeadTailParameter` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_headTailParameter.Deserialize(value["HeadTailParameter"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_headTailParameterHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TranscodeTaskInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_definitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Definition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_definition, allocator);
    }

    if (m_rawParameterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RawParameter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_rawParameter.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_overrideParameterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OverrideParameter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_overrideParameter.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_watermarkSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WatermarkSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_watermarkSet.begin(); itr != m_watermarkSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_mosaicSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MosaicSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_mosaicSet.begin(); itr != m_mosaicSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_startTimeOffsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTimeOffset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTimeOffset, allocator);
    }

    if (m_endTimeOffsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTimeOffset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endTimeOffset, allocator);
    }

    if (m_outputStorageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputStorage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_outputStorage.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_outputObjectPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputObjectPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outputObjectPath.c_str(), allocator).Move(), allocator);
    }

    if (m_segmentObjectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SegmentObjectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_segmentObjectName.c_str(), allocator).Move(), allocator);
    }

    if (m_objectNumberFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObjectNumberFormat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_objectNumberFormat.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_headTailParameterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HeadTailParameter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_headTailParameter.ToJsonObject(value[key.c_str()], allocator);
    }

}


uint64_t TranscodeTaskInput::GetDefinition() const
{
    return m_definition;
}

void TranscodeTaskInput::SetDefinition(const uint64_t& _definition)
{
    m_definition = _definition;
    m_definitionHasBeenSet = true;
}

bool TranscodeTaskInput::DefinitionHasBeenSet() const
{
    return m_definitionHasBeenSet;
}

RawTranscodeParameter TranscodeTaskInput::GetRawParameter() const
{
    return m_rawParameter;
}

void TranscodeTaskInput::SetRawParameter(const RawTranscodeParameter& _rawParameter)
{
    m_rawParameter = _rawParameter;
    m_rawParameterHasBeenSet = true;
}

bool TranscodeTaskInput::RawParameterHasBeenSet() const
{
    return m_rawParameterHasBeenSet;
}

OverrideTranscodeParameter TranscodeTaskInput::GetOverrideParameter() const
{
    return m_overrideParameter;
}

void TranscodeTaskInput::SetOverrideParameter(const OverrideTranscodeParameter& _overrideParameter)
{
    m_overrideParameter = _overrideParameter;
    m_overrideParameterHasBeenSet = true;
}

bool TranscodeTaskInput::OverrideParameterHasBeenSet() const
{
    return m_overrideParameterHasBeenSet;
}

vector<WatermarkInput> TranscodeTaskInput::GetWatermarkSet() const
{
    return m_watermarkSet;
}

void TranscodeTaskInput::SetWatermarkSet(const vector<WatermarkInput>& _watermarkSet)
{
    m_watermarkSet = _watermarkSet;
    m_watermarkSetHasBeenSet = true;
}

bool TranscodeTaskInput::WatermarkSetHasBeenSet() const
{
    return m_watermarkSetHasBeenSet;
}

vector<MosaicInput> TranscodeTaskInput::GetMosaicSet() const
{
    return m_mosaicSet;
}

void TranscodeTaskInput::SetMosaicSet(const vector<MosaicInput>& _mosaicSet)
{
    m_mosaicSet = _mosaicSet;
    m_mosaicSetHasBeenSet = true;
}

bool TranscodeTaskInput::MosaicSetHasBeenSet() const
{
    return m_mosaicSetHasBeenSet;
}

double TranscodeTaskInput::GetStartTimeOffset() const
{
    return m_startTimeOffset;
}

void TranscodeTaskInput::SetStartTimeOffset(const double& _startTimeOffset)
{
    m_startTimeOffset = _startTimeOffset;
    m_startTimeOffsetHasBeenSet = true;
}

bool TranscodeTaskInput::StartTimeOffsetHasBeenSet() const
{
    return m_startTimeOffsetHasBeenSet;
}

double TranscodeTaskInput::GetEndTimeOffset() const
{
    return m_endTimeOffset;
}

void TranscodeTaskInput::SetEndTimeOffset(const double& _endTimeOffset)
{
    m_endTimeOffset = _endTimeOffset;
    m_endTimeOffsetHasBeenSet = true;
}

bool TranscodeTaskInput::EndTimeOffsetHasBeenSet() const
{
    return m_endTimeOffsetHasBeenSet;
}

TaskOutputStorage TranscodeTaskInput::GetOutputStorage() const
{
    return m_outputStorage;
}

void TranscodeTaskInput::SetOutputStorage(const TaskOutputStorage& _outputStorage)
{
    m_outputStorage = _outputStorage;
    m_outputStorageHasBeenSet = true;
}

bool TranscodeTaskInput::OutputStorageHasBeenSet() const
{
    return m_outputStorageHasBeenSet;
}

string TranscodeTaskInput::GetOutputObjectPath() const
{
    return m_outputObjectPath;
}

void TranscodeTaskInput::SetOutputObjectPath(const string& _outputObjectPath)
{
    m_outputObjectPath = _outputObjectPath;
    m_outputObjectPathHasBeenSet = true;
}

bool TranscodeTaskInput::OutputObjectPathHasBeenSet() const
{
    return m_outputObjectPathHasBeenSet;
}

string TranscodeTaskInput::GetSegmentObjectName() const
{
    return m_segmentObjectName;
}

void TranscodeTaskInput::SetSegmentObjectName(const string& _segmentObjectName)
{
    m_segmentObjectName = _segmentObjectName;
    m_segmentObjectNameHasBeenSet = true;
}

bool TranscodeTaskInput::SegmentObjectNameHasBeenSet() const
{
    return m_segmentObjectNameHasBeenSet;
}

NumberFormat TranscodeTaskInput::GetObjectNumberFormat() const
{
    return m_objectNumberFormat;
}

void TranscodeTaskInput::SetObjectNumberFormat(const NumberFormat& _objectNumberFormat)
{
    m_objectNumberFormat = _objectNumberFormat;
    m_objectNumberFormatHasBeenSet = true;
}

bool TranscodeTaskInput::ObjectNumberFormatHasBeenSet() const
{
    return m_objectNumberFormatHasBeenSet;
}

HeadTailParameter TranscodeTaskInput::GetHeadTailParameter() const
{
    return m_headTailParameter;
}

void TranscodeTaskInput::SetHeadTailParameter(const HeadTailParameter& _headTailParameter)
{
    m_headTailParameter = _headTailParameter;
    m_headTailParameterHasBeenSet = true;
}

bool TranscodeTaskInput::HeadTailParameterHasBeenSet() const
{
    return m_headTailParameterHasBeenSet;
}

