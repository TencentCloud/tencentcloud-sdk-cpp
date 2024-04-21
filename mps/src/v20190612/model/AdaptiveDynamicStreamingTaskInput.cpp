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
using namespace std;

AdaptiveDynamicStreamingTaskInput::AdaptiveDynamicStreamingTaskInput() :
    m_definitionHasBeenSet(false),
    m_watermarkSetHasBeenSet(false),
    m_outputStorageHasBeenSet(false),
    m_outputObjectPathHasBeenSet(false),
    m_subStreamObjectNameHasBeenSet(false),
    m_segmentObjectNameHasBeenSet(false),
    m_addOnSubtitlesHasBeenSet(false),
    m_drmInfoHasBeenSet(false),
    m_definitionTypeHasBeenSet(false)
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

    if (value.HasMember("OutputStorage") && !value["OutputStorage"].IsNull())
    {
        if (!value["OutputStorage"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AdaptiveDynamicStreamingTaskInput.OutputStorage` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `AdaptiveDynamicStreamingTaskInput.OutputObjectPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outputObjectPath = string(value["OutputObjectPath"].GetString());
        m_outputObjectPathHasBeenSet = true;
    }

    if (value.HasMember("SubStreamObjectName") && !value["SubStreamObjectName"].IsNull())
    {
        if (!value["SubStreamObjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdaptiveDynamicStreamingTaskInput.SubStreamObjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subStreamObjectName = string(value["SubStreamObjectName"].GetString());
        m_subStreamObjectNameHasBeenSet = true;
    }

    if (value.HasMember("SegmentObjectName") && !value["SegmentObjectName"].IsNull())
    {
        if (!value["SegmentObjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdaptiveDynamicStreamingTaskInput.SegmentObjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_segmentObjectName = string(value["SegmentObjectName"].GetString());
        m_segmentObjectNameHasBeenSet = true;
    }

    if (value.HasMember("AddOnSubtitles") && !value["AddOnSubtitles"].IsNull())
    {
        if (!value["AddOnSubtitles"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AdaptiveDynamicStreamingTaskInput.AddOnSubtitles` is not array type"));

        const rapidjson::Value &tmpValue = value["AddOnSubtitles"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AddOnSubtitle item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_addOnSubtitles.push_back(item);
        }
        m_addOnSubtitlesHasBeenSet = true;
    }

    if (value.HasMember("DrmInfo") && !value["DrmInfo"].IsNull())
    {
        if (!value["DrmInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AdaptiveDynamicStreamingTaskInput.DrmInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_drmInfo.Deserialize(value["DrmInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_drmInfoHasBeenSet = true;
    }

    if (value.HasMember("DefinitionType") && !value["DefinitionType"].IsNull())
    {
        if (!value["DefinitionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdaptiveDynamicStreamingTaskInput.DefinitionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_definitionType = string(value["DefinitionType"].GetString());
        m_definitionTypeHasBeenSet = true;
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

    if (m_subStreamObjectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubStreamObjectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subStreamObjectName.c_str(), allocator).Move(), allocator);
    }

    if (m_segmentObjectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SegmentObjectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_segmentObjectName.c_str(), allocator).Move(), allocator);
    }

    if (m_addOnSubtitlesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddOnSubtitles";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_addOnSubtitles.begin(); itr != m_addOnSubtitles.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_drmInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrmInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_drmInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_definitionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefinitionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_definitionType.c_str(), allocator).Move(), allocator);
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

vector<AddOnSubtitle> AdaptiveDynamicStreamingTaskInput::GetAddOnSubtitles() const
{
    return m_addOnSubtitles;
}

void AdaptiveDynamicStreamingTaskInput::SetAddOnSubtitles(const vector<AddOnSubtitle>& _addOnSubtitles)
{
    m_addOnSubtitles = _addOnSubtitles;
    m_addOnSubtitlesHasBeenSet = true;
}

bool AdaptiveDynamicStreamingTaskInput::AddOnSubtitlesHasBeenSet() const
{
    return m_addOnSubtitlesHasBeenSet;
}

DrmInfo AdaptiveDynamicStreamingTaskInput::GetDrmInfo() const
{
    return m_drmInfo;
}

void AdaptiveDynamicStreamingTaskInput::SetDrmInfo(const DrmInfo& _drmInfo)
{
    m_drmInfo = _drmInfo;
    m_drmInfoHasBeenSet = true;
}

bool AdaptiveDynamicStreamingTaskInput::DrmInfoHasBeenSet() const
{
    return m_drmInfoHasBeenSet;
}

string AdaptiveDynamicStreamingTaskInput::GetDefinitionType() const
{
    return m_definitionType;
}

void AdaptiveDynamicStreamingTaskInput::SetDefinitionType(const string& _definitionType)
{
    m_definitionType = _definitionType;
    m_definitionTypeHasBeenSet = true;
}

bool AdaptiveDynamicStreamingTaskInput::DefinitionTypeHasBeenSet() const
{
    return m_definitionTypeHasBeenSet;
}

