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

#include <tencentcloud/mps/v20190612/model/AIDubbingTaskInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

AIDubbingTaskInput::AIDubbingTaskInput() :
    m_definitionHasBeenSet(false),
    m_rawParameterHasBeenSet(false),
    m_overrideParameterHasBeenSet(false),
    m_outputStorageHasBeenSet(false),
    m_srcSubtitleInfoHasBeenSet(false),
    m_dstSubtitleInfosHasBeenSet(false),
    m_outputObjectPathHasBeenSet(false),
    m_extendedParameterHasBeenSet(false),
    m_dramaIdHasBeenSet(false)
{
}

CoreInternalOutcome AIDubbingTaskInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Definition") && !value["Definition"].IsNull())
    {
        if (!value["Definition"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AIDubbingTaskInput.Definition` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_definition = value["Definition"].GetInt64();
        m_definitionHasBeenSet = true;
    }

    if (value.HasMember("RawParameter") && !value["RawParameter"].IsNull())
    {
        if (!value["RawParameter"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AIDubbingTaskInput.RawParameter` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `AIDubbingTaskInput.OverrideParameter` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_overrideParameter.Deserialize(value["OverrideParameter"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_overrideParameterHasBeenSet = true;
    }

    if (value.HasMember("OutputStorage") && !value["OutputStorage"].IsNull())
    {
        if (!value["OutputStorage"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AIDubbingTaskInput.OutputStorage` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_outputStorage.Deserialize(value["OutputStorage"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_outputStorageHasBeenSet = true;
    }

    if (value.HasMember("SrcSubtitleInfo") && !value["SrcSubtitleInfo"].IsNull())
    {
        if (!value["SrcSubtitleInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AIDubbingTaskInput.SrcSubtitleInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_srcSubtitleInfo.Deserialize(value["SrcSubtitleInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_srcSubtitleInfoHasBeenSet = true;
    }

    if (value.HasMember("DstSubtitleInfos") && !value["DstSubtitleInfos"].IsNull())
    {
        if (!value["DstSubtitleInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AIDubbingTaskInput.DstSubtitleInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["DstSubtitleInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DstSubtitleInput item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dstSubtitleInfos.push_back(item);
        }
        m_dstSubtitleInfosHasBeenSet = true;
    }

    if (value.HasMember("OutputObjectPath") && !value["OutputObjectPath"].IsNull())
    {
        if (!value["OutputObjectPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIDubbingTaskInput.OutputObjectPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outputObjectPath = string(value["OutputObjectPath"].GetString());
        m_outputObjectPathHasBeenSet = true;
    }

    if (value.HasMember("ExtendedParameter") && !value["ExtendedParameter"].IsNull())
    {
        if (!value["ExtendedParameter"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIDubbingTaskInput.ExtendedParameter` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extendedParameter = string(value["ExtendedParameter"].GetString());
        m_extendedParameterHasBeenSet = true;
    }

    if (value.HasMember("DramaId") && !value["DramaId"].IsNull())
    {
        if (!value["DramaId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIDubbingTaskInput.DramaId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dramaId = string(value["DramaId"].GetString());
        m_dramaIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AIDubbingTaskInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_outputStorageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputStorage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_outputStorage.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_srcSubtitleInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcSubtitleInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_srcSubtitleInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_dstSubtitleInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstSubtitleInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dstSubtitleInfos.begin(); itr != m_dstSubtitleInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_outputObjectPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputObjectPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outputObjectPath.c_str(), allocator).Move(), allocator);
    }

    if (m_extendedParameterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtendedParameter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extendedParameter.c_str(), allocator).Move(), allocator);
    }

    if (m_dramaIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DramaId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dramaId.c_str(), allocator).Move(), allocator);
    }

}


int64_t AIDubbingTaskInput::GetDefinition() const
{
    return m_definition;
}

void AIDubbingTaskInput::SetDefinition(const int64_t& _definition)
{
    m_definition = _definition;
    m_definitionHasBeenSet = true;
}

bool AIDubbingTaskInput::DefinitionHasBeenSet() const
{
    return m_definitionHasBeenSet;
}

RawAIDubbingParameter AIDubbingTaskInput::GetRawParameter() const
{
    return m_rawParameter;
}

void AIDubbingTaskInput::SetRawParameter(const RawAIDubbingParameter& _rawParameter)
{
    m_rawParameter = _rawParameter;
    m_rawParameterHasBeenSet = true;
}

bool AIDubbingTaskInput::RawParameterHasBeenSet() const
{
    return m_rawParameterHasBeenSet;
}

OverrideAIDubbingParameter AIDubbingTaskInput::GetOverrideParameter() const
{
    return m_overrideParameter;
}

void AIDubbingTaskInput::SetOverrideParameter(const OverrideAIDubbingParameter& _overrideParameter)
{
    m_overrideParameter = _overrideParameter;
    m_overrideParameterHasBeenSet = true;
}

bool AIDubbingTaskInput::OverrideParameterHasBeenSet() const
{
    return m_overrideParameterHasBeenSet;
}

TaskOutputStorage AIDubbingTaskInput::GetOutputStorage() const
{
    return m_outputStorage;
}

void AIDubbingTaskInput::SetOutputStorage(const TaskOutputStorage& _outputStorage)
{
    m_outputStorage = _outputStorage;
    m_outputStorageHasBeenSet = true;
}

bool AIDubbingTaskInput::OutputStorageHasBeenSet() const
{
    return m_outputStorageHasBeenSet;
}

MediaInputInfo AIDubbingTaskInput::GetSrcSubtitleInfo() const
{
    return m_srcSubtitleInfo;
}

void AIDubbingTaskInput::SetSrcSubtitleInfo(const MediaInputInfo& _srcSubtitleInfo)
{
    m_srcSubtitleInfo = _srcSubtitleInfo;
    m_srcSubtitleInfoHasBeenSet = true;
}

bool AIDubbingTaskInput::SrcSubtitleInfoHasBeenSet() const
{
    return m_srcSubtitleInfoHasBeenSet;
}

vector<DstSubtitleInput> AIDubbingTaskInput::GetDstSubtitleInfos() const
{
    return m_dstSubtitleInfos;
}

void AIDubbingTaskInput::SetDstSubtitleInfos(const vector<DstSubtitleInput>& _dstSubtitleInfos)
{
    m_dstSubtitleInfos = _dstSubtitleInfos;
    m_dstSubtitleInfosHasBeenSet = true;
}

bool AIDubbingTaskInput::DstSubtitleInfosHasBeenSet() const
{
    return m_dstSubtitleInfosHasBeenSet;
}

string AIDubbingTaskInput::GetOutputObjectPath() const
{
    return m_outputObjectPath;
}

void AIDubbingTaskInput::SetOutputObjectPath(const string& _outputObjectPath)
{
    m_outputObjectPath = _outputObjectPath;
    m_outputObjectPathHasBeenSet = true;
}

bool AIDubbingTaskInput::OutputObjectPathHasBeenSet() const
{
    return m_outputObjectPathHasBeenSet;
}

string AIDubbingTaskInput::GetExtendedParameter() const
{
    return m_extendedParameter;
}

void AIDubbingTaskInput::SetExtendedParameter(const string& _extendedParameter)
{
    m_extendedParameter = _extendedParameter;
    m_extendedParameterHasBeenSet = true;
}

bool AIDubbingTaskInput::ExtendedParameterHasBeenSet() const
{
    return m_extendedParameterHasBeenSet;
}

string AIDubbingTaskInput::GetDramaId() const
{
    return m_dramaId;
}

void AIDubbingTaskInput::SetDramaId(const string& _dramaId)
{
    m_dramaId = _dramaId;
    m_dramaIdHasBeenSet = true;
}

bool AIDubbingTaskInput::DramaIdHasBeenSet() const
{
    return m_dramaIdHasBeenSet;
}

