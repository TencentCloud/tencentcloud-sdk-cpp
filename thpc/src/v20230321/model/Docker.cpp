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

#include <tencentcloud/thpc/v20230321/model/Docker.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Thpc::V20230321::Model;
using namespace std;

Docker::Docker() :
    m_imageHasBeenSet(false),
    m_runArgsHasBeenSet(false)
{
}

CoreInternalOutcome Docker::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Image") && !value["Image"].IsNull())
    {
        if (!value["Image"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Docker.Image` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_image = string(value["Image"].GetString());
        m_imageHasBeenSet = true;
    }

    if (value.HasMember("RunArgs") && !value["RunArgs"].IsNull())
    {
        if (!value["RunArgs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Docker.RunArgs` is not array type"));

        const rapidjson::Value &tmpValue = value["RunArgs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_runArgs.push_back((*itr).GetString());
        }
        m_runArgsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Docker::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_imageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Image";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_image.c_str(), allocator).Move(), allocator);
    }

    if (m_runArgsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunArgs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_runArgs.begin(); itr != m_runArgs.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string Docker::GetImage() const
{
    return m_image;
}

void Docker::SetImage(const string& _image)
{
    m_image = _image;
    m_imageHasBeenSet = true;
}

bool Docker::ImageHasBeenSet() const
{
    return m_imageHasBeenSet;
}

vector<string> Docker::GetRunArgs() const
{
    return m_runArgs;
}

void Docker::SetRunArgs(const vector<string>& _runArgs)
{
    m_runArgs = _runArgs;
    m_runArgsHasBeenSet = true;
}

bool Docker::RunArgsHasBeenSet() const
{
    return m_runArgsHasBeenSet;
}

