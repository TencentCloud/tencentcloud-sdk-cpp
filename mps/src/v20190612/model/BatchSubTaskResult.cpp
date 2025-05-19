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

#include <tencentcloud/mps/v20190612/model/BatchSubTaskResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

BatchSubTaskResult::BatchSubTaskResult() :
    m_inputInfosHasBeenSet(false),
    m_metadatasHasBeenSet(false),
    m_smartSubtitlesTaskResultHasBeenSet(false)
{
}

CoreInternalOutcome BatchSubTaskResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InputInfos") && !value["InputInfos"].IsNull())
    {
        if (!value["InputInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BatchSubTaskResult.InputInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["InputInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MediaInputInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_inputInfos.push_back(item);
        }
        m_inputInfosHasBeenSet = true;
    }

    if (value.HasMember("Metadatas") && !value["Metadatas"].IsNull())
    {
        if (!value["Metadatas"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BatchSubTaskResult.Metadatas` is not array type"));

        const rapidjson::Value &tmpValue = value["Metadatas"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MediaMetaData item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_metadatas.push_back(item);
        }
        m_metadatasHasBeenSet = true;
    }

    if (value.HasMember("SmartSubtitlesTaskResult") && !value["SmartSubtitlesTaskResult"].IsNull())
    {
        if (!value["SmartSubtitlesTaskResult"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BatchSubTaskResult.SmartSubtitlesTaskResult` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_smartSubtitlesTaskResult.Deserialize(value["SmartSubtitlesTaskResult"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_smartSubtitlesTaskResultHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BatchSubTaskResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_inputInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_inputInfos.begin(); itr != m_inputInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_metadatasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Metadatas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_metadatas.begin(); itr != m_metadatas.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_smartSubtitlesTaskResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SmartSubtitlesTaskResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_smartSubtitlesTaskResult.ToJsonObject(value[key.c_str()], allocator);
    }

}


vector<MediaInputInfo> BatchSubTaskResult::GetInputInfos() const
{
    return m_inputInfos;
}

void BatchSubTaskResult::SetInputInfos(const vector<MediaInputInfo>& _inputInfos)
{
    m_inputInfos = _inputInfos;
    m_inputInfosHasBeenSet = true;
}

bool BatchSubTaskResult::InputInfosHasBeenSet() const
{
    return m_inputInfosHasBeenSet;
}

vector<MediaMetaData> BatchSubTaskResult::GetMetadatas() const
{
    return m_metadatas;
}

void BatchSubTaskResult::SetMetadatas(const vector<MediaMetaData>& _metadatas)
{
    m_metadatas = _metadatas;
    m_metadatasHasBeenSet = true;
}

bool BatchSubTaskResult::MetadatasHasBeenSet() const
{
    return m_metadatasHasBeenSet;
}

BatchSmartSubtitlesResult BatchSubTaskResult::GetSmartSubtitlesTaskResult() const
{
    return m_smartSubtitlesTaskResult;
}

void BatchSubTaskResult::SetSmartSubtitlesTaskResult(const BatchSmartSubtitlesResult& _smartSubtitlesTaskResult)
{
    m_smartSubtitlesTaskResult = _smartSubtitlesTaskResult;
    m_smartSubtitlesTaskResultHasBeenSet = true;
}

bool BatchSubTaskResult::SmartSubtitlesTaskResultHasBeenSet() const
{
    return m_smartSubtitlesTaskResultHasBeenSet;
}

