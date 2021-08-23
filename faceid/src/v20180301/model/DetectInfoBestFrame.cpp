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

#include <tencentcloud/faceid/v20180301/model/DetectInfoBestFrame.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

DetectInfoBestFrame::DetectInfoBestFrame() :
    m_bestFrameHasBeenSet(false),
    m_bestFramesHasBeenSet(false)
{
}

CoreInternalOutcome DetectInfoBestFrame::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BestFrame") && !value["BestFrame"].IsNull())
    {
        if (!value["BestFrame"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DetectInfoBestFrame.BestFrame` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bestFrame = string(value["BestFrame"].GetString());
        m_bestFrameHasBeenSet = true;
    }

    if (value.HasMember("BestFrames") && !value["BestFrames"].IsNull())
    {
        if (!value["BestFrames"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DetectInfoBestFrame.BestFrames` is not array type"));

        const rapidjson::Value &tmpValue = value["BestFrames"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_bestFrames.push_back((*itr).GetString());
        }
        m_bestFramesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DetectInfoBestFrame::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_bestFrameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BestFrame";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bestFrame.c_str(), allocator).Move(), allocator);
    }

    if (m_bestFramesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BestFrames";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_bestFrames.begin(); itr != m_bestFrames.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string DetectInfoBestFrame::GetBestFrame() const
{
    return m_bestFrame;
}

void DetectInfoBestFrame::SetBestFrame(const string& _bestFrame)
{
    m_bestFrame = _bestFrame;
    m_bestFrameHasBeenSet = true;
}

bool DetectInfoBestFrame::BestFrameHasBeenSet() const
{
    return m_bestFrameHasBeenSet;
}

vector<string> DetectInfoBestFrame::GetBestFrames() const
{
    return m_bestFrames;
}

void DetectInfoBestFrame::SetBestFrames(const vector<string>& _bestFrames)
{
    m_bestFrames = _bestFrames;
    m_bestFramesHasBeenSet = true;
}

bool DetectInfoBestFrame::BestFramesHasBeenSet() const
{
    return m_bestFramesHasBeenSet;
}

