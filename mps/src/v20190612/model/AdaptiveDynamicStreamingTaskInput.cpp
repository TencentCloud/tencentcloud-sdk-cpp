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

#include <tencentcloud/mps/v20190612/model/AdaptiveDynamicStreamingTaskInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace rapidjson;
using namespace std;

AdaptiveDynamicStreamingTaskInput::AdaptiveDynamicStreamingTaskInput() :
    m_definitionHasBeenSet(false),
    m_watermarkSetHasBeenSet(false),
    m_outputStorageHasBeenSet(false),
    m_outputObjectPathHasBeenSet(false),
    m_subStreamObjectNameHasBeenSet(false),
    m_segmentObjectNameHasBeenSet(false)
{
}

CoreInternalOutcome AdaptiveDynamicStreamingTaskInput::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Definition") && !value["Definition"].IsNull())
    {
        if (!value["Definition"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `AdaptiveDynamicStreamingTaskInput.Definition` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_definition = value["Definition"].GetUint64();
        m_definitionHasBeenSet = true;
    }

    if (value.HasMember("WatermarkSet") && !value["WatermarkSet"].IsNull())
    {
        if (!value["WatermarkSet"].IsArray())
            return CoreInternalOutcome(Error("response `AdaptiveDynamicStreamingTaskInput.WatermarkSet` is not array type"));

        const Value &tmpValue = value["WatermarkSet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
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

    if (value.HasMember("OutputStorage") && !value["OutputStorage"].IsNull())
    {
        if (!value["OutputStorage"].IsObject())
        {
            return CoreInternalOutcome(Error("response `AdaptiveDynamicStreamingTaskInput.OutputStorage` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Error("response `AdaptiveDynamicStreamingTaskInput.OutputObjectPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outputObjectPath = string(value["OutputObjectPath"].GetString());
        m_outputObjectPathHasBeenSet = true;
    }

    if (value.HasMember("SubStreamObjectName") && !value["SubStreamObjectName"].IsNull())
    {
        if (!value["SubStreamObjectName"].IsString())
        {
            return CoreInternalOutcome(Error("response `AdaptiveDynamicStreamingTaskInput.SubStreamObjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subStreamObjectName = string(value["SubStreamObjectName"].GetString());
        m_subStreamObjectNameHasBeenSet = true;
    }

    if (value.HasMember("SegmentObjectName") && !value["SegmentObjectName"].IsNull())
    {
        if (!value["SegmentObjectName"].IsString())
        {
            return CoreInternalOutcome(Error("response `AdaptiveDynamicStreamingTaskInput.SegmentObjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_segmentObjectName = string(value["SegmentObjectName"].GetString());
        m_segmentObjectNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AdaptiveDynamicStreamingTaskInput::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_definitionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Definition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_definition, allocator);
    }

    if (m_watermarkSetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "WatermarkSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_watermarkSet.begin(); itr != m_watermarkSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_outputStorageHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OutputStorage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_outputStorage.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_outputObjectPathHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OutputObjectPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_outputObjectPath.c_str(), allocator).Move(), allocator);
    }

    if (m_subStreamObjectNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SubStreamObjectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_subStreamObjectName.c_str(), allocator).Move(), allocator);
    }

    if (m_segmentObjectNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SegmentObjectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_segmentObjectName.c_str(), allocator).Move(), allocator);
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

TaskOutputStorage AdaptiveDynamicStreamingTaskInput::GetOutputStorage() const
{
    return m_outputStorage;
}

void AdaptiveDynamicStreamingTaskInput::SetOutputStorage(const TaskOutputStorage& _outputStorage)
{
    m_outputStorage = _outputStorage;
    m_outputStorageHasBeenSet = true;
}

bool AdaptiveDynamicStreamingTaskInput::OutputStorageHasBeenSet() const
{
    return m_outputStorageHasBeenSet;
}

string AdaptiveDynamicStreamingTaskInput::GetOutputObjectPath() const
{
    return m_outputObjectPath;
}

void AdaptiveDynamicStreamingTaskInput::SetOutputObjectPath(const string& _outputObjectPath)
{
    m_outputObjectPath = _outputObjectPath;
    m_outputObjectPathHasBeenSet = true;
}

bool AdaptiveDynamicStreamingTaskInput::OutputObjectPathHasBeenSet() const
{
    return m_outputObjectPathHasBeenSet;
}

string AdaptiveDynamicStreamingTaskInput::GetSubStreamObjectName() const
{
    return m_subStreamObjectName;
}

void AdaptiveDynamicStreamingTaskInput::SetSubStreamObjectName(const string& _subStreamObjectName)
{
    m_subStreamObjectName = _subStreamObjectName;
    m_subStreamObjectNameHasBeenSet = true;
}

bool AdaptiveDynamicStreamingTaskInput::SubStreamObjectNameHasBeenSet() const
{
    return m_subStreamObjectNameHasBeenSet;
}

string AdaptiveDynamicStreamingTaskInput::GetSegmentObjectName() const
{
    return m_segmentObjectName;
}

void AdaptiveDynamicStreamingTaskInput::SetSegmentObjectName(const string& _segmentObjectName)
{
    m_segmentObjectName = _segmentObjectName;
    m_segmentObjectNameHasBeenSet = true;
}

bool AdaptiveDynamicStreamingTaskInput::SegmentObjectNameHasBeenSet() const
{
    return m_segmentObjectNameHasBeenSet;
}

