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

#include <tencentcloud/vod/v20180717/model/AdaptiveDynamicStreamingTaskInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

AdaptiveDynamicStreamingTaskInput::AdaptiveDynamicStreamingTaskInput() :
    m_definitionHasBeenSet(false),
    m_watermarkSetHasBeenSet(false),
    m_traceWatermarkHasBeenSet(false),
    m_copyRightWatermarkHasBeenSet(false),
    m_subtitleSetHasBeenSet(false)
{
}

CoreInternalOutcome AdaptiveDynamicStreamingTaskInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Definition") && !value["Definition"].IsNull())
    {
        if (!value["Definition"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AdaptiveDynamicStreamingTaskInput.Definition` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_definition = value["Definition"].GetUint64();
        m_definitionHasBeenSet = true;
    }

    if (value.HasMember("WatermarkSet") && !value["WatermarkSet"].IsNull())
    {
        if (!value["WatermarkSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AdaptiveDynamicStreamingTaskInput.WatermarkSet` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `AdaptiveDynamicStreamingTaskInput.TraceWatermark` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `AdaptiveDynamicStreamingTaskInput.CopyRightWatermark` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_copyRightWatermark.Deserialize(value["CopyRightWatermark"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_copyRightWatermarkHasBeenSet = true;
    }

    if (value.HasMember("SubtitleSet") && !value["SubtitleSet"].IsNull())
    {
        if (!value["SubtitleSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AdaptiveDynamicStreamingTaskInput.SubtitleSet` is not array type"));

        const rapidjson::Value &tmpValue = value["SubtitleSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_subtitleSet.push_back((*itr).GetString());
        }
        m_subtitleSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AdaptiveDynamicStreamingTaskInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_subtitleSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubtitleSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_subtitleSet.begin(); itr != m_subtitleSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


uint64_t AdaptiveDynamicStreamingTaskInput::GetDefinition() const
{
    return m_definition;
}

void AdaptiveDynamicStreamingTaskInput::SetDefinition(const uint64_t& _definition)
{
    m_definition = _definition;
    m_definitionHasBeenSet = true;
}

bool AdaptiveDynamicStreamingTaskInput::DefinitionHasBeenSet() const
{
    return m_definitionHasBeenSet;
}

vector<WatermarkInput> AdaptiveDynamicStreamingTaskInput::GetWatermarkSet() const
{
    return m_watermarkSet;
}

void AdaptiveDynamicStreamingTaskInput::SetWatermarkSet(const vector<WatermarkInput>& _watermarkSet)
{
    m_watermarkSet = _watermarkSet;
    m_watermarkSetHasBeenSet = true;
}

bool AdaptiveDynamicStreamingTaskInput::WatermarkSetHasBeenSet() const
{
    return m_watermarkSetHasBeenSet;
}

TraceWatermarkInput AdaptiveDynamicStreamingTaskInput::GetTraceWatermark() const
{
    return m_traceWatermark;
}

void AdaptiveDynamicStreamingTaskInput::SetTraceWatermark(const TraceWatermarkInput& _traceWatermark)
{
    m_traceWatermark = _traceWatermark;
    m_traceWatermarkHasBeenSet = true;
}

bool AdaptiveDynamicStreamingTaskInput::TraceWatermarkHasBeenSet() const
{
    return m_traceWatermarkHasBeenSet;
}

CopyRightWatermarkInput AdaptiveDynamicStreamingTaskInput::GetCopyRightWatermark() const
{
    return m_copyRightWatermark;
}

void AdaptiveDynamicStreamingTaskInput::SetCopyRightWatermark(const CopyRightWatermarkInput& _copyRightWatermark)
{
    m_copyRightWatermark = _copyRightWatermark;
    m_copyRightWatermarkHasBeenSet = true;
}

bool AdaptiveDynamicStreamingTaskInput::CopyRightWatermarkHasBeenSet() const
{
    return m_copyRightWatermarkHasBeenSet;
}

vector<string> AdaptiveDynamicStreamingTaskInput::GetSubtitleSet() const
{
    return m_subtitleSet;
}

void AdaptiveDynamicStreamingTaskInput::SetSubtitleSet(const vector<string>& _subtitleSet)
{
    m_subtitleSet = _subtitleSet;
    m_subtitleSetHasBeenSet = true;
}

bool AdaptiveDynamicStreamingTaskInput::SubtitleSetHasBeenSet() const
{
    return m_subtitleSetHasBeenSet;
}

