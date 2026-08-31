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

#include <tencentcloud/ioa/v20220601/model/DeviceVideoCardBrief.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ioa::V20220601::Model;
using namespace std;

DeviceVideoCardBrief::DeviceVideoCardBrief() :
    m_videoCardNameHasBeenSet(false)
{
}

CoreInternalOutcome DeviceVideoCardBrief::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VideoCardName") && !value["VideoCardName"].IsNull())
    {
        if (!value["VideoCardName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceVideoCardBrief.VideoCardName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_videoCardName = string(value["VideoCardName"].GetString());
        m_videoCardNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeviceVideoCardBrief::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_videoCardNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoCardName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_videoCardName.c_str(), allocator).Move(), allocator);
    }

}


string DeviceVideoCardBrief::GetVideoCardName() const
{
    return m_videoCardName;
}

void DeviceVideoCardBrief::SetVideoCardName(const string& _videoCardName)
{
    m_videoCardName = _videoCardName;
    m_videoCardNameHasBeenSet = true;
}

bool DeviceVideoCardBrief::VideoCardNameHasBeenSet() const
{
    return m_videoCardNameHasBeenSet;
}

