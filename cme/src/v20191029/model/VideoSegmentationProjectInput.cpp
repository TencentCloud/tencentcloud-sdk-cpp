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

#include <tencentcloud/cme/v20191029/model/VideoSegmentationProjectInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cme::V20191029::Model;
using namespace std;

VideoSegmentationProjectInput::VideoSegmentationProjectInput() :
    m_aspectRatioHasBeenSet(false),
    m_processModelHasBeenSet(false)
{
}

CoreInternalOutcome VideoSegmentationProjectInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AspectRatio") && !value["AspectRatio"].IsNull())
    {
        if (!value["AspectRatio"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoSegmentationProjectInput.AspectRatio` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aspectRatio = string(value["AspectRatio"].GetString());
        m_aspectRatioHasBeenSet = true;
    }

    if (value.HasMember("ProcessModel") && !value["ProcessModel"].IsNull())
    {
        if (!value["ProcessModel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoSegmentationProjectInput.ProcessModel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processModel = string(value["ProcessModel"].GetString());
        m_processModelHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VideoSegmentationProjectInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_aspectRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AspectRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aspectRatio.c_str(), allocator).Move(), allocator);
    }

    if (m_processModelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessModel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_processModel.c_str(), allocator).Move(), allocator);
    }

}


string VideoSegmentationProjectInput::GetAspectRatio() const
{
    return m_aspectRatio;
}

void VideoSegmentationProjectInput::SetAspectRatio(const string& _aspectRatio)
{
    m_aspectRatio = _aspectRatio;
    m_aspectRatioHasBeenSet = true;
}

bool VideoSegmentationProjectInput::AspectRatioHasBeenSet() const
{
    return m_aspectRatioHasBeenSet;
}

string VideoSegmentationProjectInput::GetProcessModel() const
{
    return m_processModel;
}

void VideoSegmentationProjectInput::SetProcessModel(const string& _processModel)
{
    m_processModel = _processModel;
    m_processModelHasBeenSet = true;
}

bool VideoSegmentationProjectInput::ProcessModelHasBeenSet() const
{
    return m_processModelHasBeenSet;
}

