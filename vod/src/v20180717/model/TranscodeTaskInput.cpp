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

#include <tencentcloud/vod/v20180717/model/TranscodeTaskInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

TranscodeTaskInput::TranscodeTaskInput() :
    m_definitionHasBeenSet(false),
    m_watermarkSetHasBeenSet(false),
    m_traceWatermarkHasBeenSet(false),
    m_copyRightWatermarkHasBeenSet(false),
    m_mosaicSetHasBeenSet(false),
    m_headTailSetHasBeenSet(false),
    m_startTimeOffsetHasBeenSet(false),
    m_endTimeOffsetHasBeenSet(false)
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

    if (value.HasMember("TraceWatermark") && !value["TraceWatermark"].IsNull())
    {
        if (!value["TraceWatermark"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TranscodeTaskInput.TraceWatermark` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_traceWatermark.Deserialize(value["TraceWatermark"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_traceWatermarkHasBeenSet = true;
    }

    if (value.HasMember("CopyRightWatermark") && !value["CopyRightWatermark"].IsNull())
    {
        if (!value["CopyRightWatermark"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TranscodeTaskInput.CopyRightWatermark` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_copyRightWatermark.Deserialize(value["CopyRightWatermark"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_copyRightWatermarkHasBeenSet = true;
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

    if (value.HasMember("HeadTailSet") && !value["HeadTailSet"].IsNull())
    {
        if (!value["HeadTailSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TranscodeTaskInput.HeadTailSet` is not array type"));

        const rapidjson::Value &tmpValue = value["HeadTailSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            HeadTailTaskInput item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_headTailSet.push_back(item);
        }
        m_headTailSetHasBeenSet = true;
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

    if (m_traceWatermarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TraceWatermark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_traceWatermark.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_copyRightWatermarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CopyRightWatermark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_copyRightWatermark.ToJsonObject(value[key.c_str()], allocator);
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

    if (m_headTailSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HeadTailSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_headTailSet.begin(); itr != m_headTailSet.end(); ++itr, ++i)
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

TraceWatermarkInput TranscodeTaskInput::GetTraceWatermark() const
{
    return m_traceWatermark;
}

void TranscodeTaskInput::SetTraceWatermark(const TraceWatermarkInput& _traceWatermark)
{
    m_traceWatermark = _traceWatermark;
    m_traceWatermarkHasBeenSet = true;
}

bool TranscodeTaskInput::TraceWatermarkHasBeenSet() const
{
    return m_traceWatermarkHasBeenSet;
}

CopyRightWatermarkInput TranscodeTaskInput::GetCopyRightWatermark() const
{
    return m_copyRightWatermark;
}

void TranscodeTaskInput::SetCopyRightWatermark(const CopyRightWatermarkInput& _copyRightWatermark)
{
    m_copyRightWatermark = _copyRightWatermark;
    m_copyRightWatermarkHasBeenSet = true;
}

bool TranscodeTaskInput::CopyRightWatermarkHasBeenSet() const
{
    return m_copyRightWatermarkHasBeenSet;
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

vector<HeadTailTaskInput> TranscodeTaskInput::GetHeadTailSet() const
{
    return m_headTailSet;
}

void TranscodeTaskInput::SetHeadTailSet(const vector<HeadTailTaskInput>& _headTailSet)
{
    m_headTailSet = _headTailSet;
    m_headTailSetHasBeenSet = true;
}

bool TranscodeTaskInput::HeadTailSetHasBeenSet() const
{
    return m_headTailSetHasBeenSet;
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

