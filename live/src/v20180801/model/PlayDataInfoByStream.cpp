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

#include <tencentcloud/live/v20180801/model/PlayDataInfoByStream.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

PlayDataInfoByStream::PlayDataInfoByStream() :
    m_streamNameHasBeenSet(false),
    m_totalFluxHasBeenSet(false)
{
}

CoreInternalOutcome PlayDataInfoByStream::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StreamName") && !value["StreamName"].IsNull())
    {
        if (!value["StreamName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlayDataInfoByStream.StreamName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_streamName = string(value["StreamName"].GetString());
        m_streamNameHasBeenSet = true;
    }

    if (value.HasMember("TotalFlux") && !value["TotalFlux"].IsNull())
    {
        if (!value["TotalFlux"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `PlayDataInfoByStream.TotalFlux` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_totalFlux = value["TotalFlux"].GetDouble();
        m_totalFluxHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PlayDataInfoByStream::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_streamNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_streamName.c_str(), allocator).Move(), allocator);
    }

    if (m_totalFluxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalFlux";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalFlux, allocator);
    }

}


string PlayDataInfoByStream::GetStreamName() const
{
    return m_streamName;
}

void PlayDataInfoByStream::SetStreamName(const string& _streamName)
{
    m_streamName = _streamName;
    m_streamNameHasBeenSet = true;
}

bool PlayDataInfoByStream::StreamNameHasBeenSet() const
{
    return m_streamNameHasBeenSet;
}

double PlayDataInfoByStream::GetTotalFlux() const
{
    return m_totalFlux;
}

void PlayDataInfoByStream::SetTotalFlux(const double& _totalFlux)
{
    m_totalFlux = _totalFlux;
    m_totalFluxHasBeenSet = true;
}

bool PlayDataInfoByStream::TotalFluxHasBeenSet() const
{
    return m_totalFluxHasBeenSet;
}

