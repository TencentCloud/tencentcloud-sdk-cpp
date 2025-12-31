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

#include <tencentcloud/vod/v20180717/model/SceneAigcImageTaskInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

SceneAigcImageTaskInput::SceneAigcImageTaskInput() :
    m_sceneInfoHasBeenSet(false),
    m_fileInfosHasBeenSet(false),
    m_outputConfigHasBeenSet(false)
{
}

CoreInternalOutcome SceneAigcImageTaskInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SceneInfo") && !value["SceneInfo"].IsNull())
    {
        if (!value["SceneInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SceneAigcImageTaskInput.SceneInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sceneInfo.Deserialize(value["SceneInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sceneInfoHasBeenSet = true;
    }

    if (value.HasMember("FileInfos") && !value["FileInfos"].IsNull())
    {
        if (!value["FileInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SceneAigcImageTaskInput.FileInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["FileInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SceneAigcImageTaskInputFileInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_fileInfos.push_back(item);
        }
        m_fileInfosHasBeenSet = true;
    }

    if (value.HasMember("OutputConfig") && !value["OutputConfig"].IsNull())
    {
        if (!value["OutputConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SceneAigcImageTaskInput.OutputConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_outputConfig.Deserialize(value["OutputConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_outputConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SceneAigcImageTaskInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sceneInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SceneInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sceneInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_fileInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_fileInfos.begin(); itr != m_fileInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_outputConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_outputConfig.ToJsonObject(value[key.c_str()], allocator);
    }

}


AigcImageSceneInfo SceneAigcImageTaskInput::GetSceneInfo() const
{
    return m_sceneInfo;
}

void SceneAigcImageTaskInput::SetSceneInfo(const AigcImageSceneInfo& _sceneInfo)
{
    m_sceneInfo = _sceneInfo;
    m_sceneInfoHasBeenSet = true;
}

bool SceneAigcImageTaskInput::SceneInfoHasBeenSet() const
{
    return m_sceneInfoHasBeenSet;
}

vector<SceneAigcImageTaskInputFileInfo> SceneAigcImageTaskInput::GetFileInfos() const
{
    return m_fileInfos;
}

void SceneAigcImageTaskInput::SetFileInfos(const vector<SceneAigcImageTaskInputFileInfo>& _fileInfos)
{
    m_fileInfos = _fileInfos;
    m_fileInfosHasBeenSet = true;
}

bool SceneAigcImageTaskInput::FileInfosHasBeenSet() const
{
    return m_fileInfosHasBeenSet;
}

SceneAigcImageOutputConfig SceneAigcImageTaskInput::GetOutputConfig() const
{
    return m_outputConfig;
}

void SceneAigcImageTaskInput::SetOutputConfig(const SceneAigcImageOutputConfig& _outputConfig)
{
    m_outputConfig = _outputConfig;
    m_outputConfigHasBeenSet = true;
}

bool SceneAigcImageTaskInput::OutputConfigHasBeenSet() const
{
    return m_outputConfigHasBeenSet;
}

