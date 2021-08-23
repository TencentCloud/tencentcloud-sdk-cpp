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

#include <tencentcloud/batch/v20170312/model/OutputMappingConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Batch::V20170312::Model;
using namespace std;

OutputMappingConfig::OutputMappingConfig() :
    m_sceneHasBeenSet(false),
    m_workerNumHasBeenSet(false),
    m_workerPartSizeHasBeenSet(false)
{
}

CoreInternalOutcome OutputMappingConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Scene") && !value["Scene"].IsNull())
    {
        if (!value["Scene"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutputMappingConfig.Scene` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scene = string(value["Scene"].GetString());
        m_sceneHasBeenSet = true;
    }

    if (value.HasMember("WorkerNum") && !value["WorkerNum"].IsNull())
    {
        if (!value["WorkerNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OutputMappingConfig.WorkerNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_workerNum = value["WorkerNum"].GetInt64();
        m_workerNumHasBeenSet = true;
    }

    if (value.HasMember("WorkerPartSize") && !value["WorkerPartSize"].IsNull())
    {
        if (!value["WorkerPartSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OutputMappingConfig.WorkerPartSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_workerPartSize = value["WorkerPartSize"].GetInt64();
        m_workerPartSizeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OutputMappingConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sceneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scene";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scene.c_str(), allocator).Move(), allocator);
    }

    if (m_workerNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkerNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_workerNum, allocator);
    }

    if (m_workerPartSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkerPartSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_workerPartSize, allocator);
    }

}


string OutputMappingConfig::GetScene() const
{
    return m_scene;
}

void OutputMappingConfig::SetScene(const string& _scene)
{
    m_scene = _scene;
    m_sceneHasBeenSet = true;
}

bool OutputMappingConfig::SceneHasBeenSet() const
{
    return m_sceneHasBeenSet;
}

int64_t OutputMappingConfig::GetWorkerNum() const
{
    return m_workerNum;
}

void OutputMappingConfig::SetWorkerNum(const int64_t& _workerNum)
{
    m_workerNum = _workerNum;
    m_workerNumHasBeenSet = true;
}

bool OutputMappingConfig::WorkerNumHasBeenSet() const
{
    return m_workerNumHasBeenSet;
}

int64_t OutputMappingConfig::GetWorkerPartSize() const
{
    return m_workerPartSize;
}

void OutputMappingConfig::SetWorkerPartSize(const int64_t& _workerPartSize)
{
    m_workerPartSize = _workerPartSize;
    m_workerPartSizeHasBeenSet = true;
}

bool OutputMappingConfig::WorkerPartSizeHasBeenSet() const
{
    return m_workerPartSizeHasBeenSet;
}

