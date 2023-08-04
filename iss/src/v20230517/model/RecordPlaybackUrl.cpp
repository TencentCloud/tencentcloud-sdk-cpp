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

#include <tencentcloud/iss/v20230517/model/RecordPlaybackUrl.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

RecordPlaybackUrl::RecordPlaybackUrl() :
    m_hlsHasBeenSet(false)
{
}

CoreInternalOutcome RecordPlaybackUrl::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Hls") && !value["Hls"].IsNull())
    {
        if (!value["Hls"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordPlaybackUrl.Hls` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hls = string(value["Hls"].GetString());
        m_hlsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RecordPlaybackUrl::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_hlsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Hls";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hls.c_str(), allocator).Move(), allocator);
    }

}


string RecordPlaybackUrl::GetHls() const
{
    return m_hls;
}

void RecordPlaybackUrl::SetHls(const string& _hls)
{
    m_hls = _hls;
    m_hlsHasBeenSet = true;
}

bool RecordPlaybackUrl::HlsHasBeenSet() const
{
    return m_hlsHasBeenSet;
}

