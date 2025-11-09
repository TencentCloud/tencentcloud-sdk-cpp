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

#include <tencentcloud/ags/v20250920/model/NetworkConfiguration.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ags::V20250920::Model;
using namespace std;

NetworkConfiguration::NetworkConfiguration() :
    m_networkModeHasBeenSet(false)
{
}

CoreInternalOutcome NetworkConfiguration::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NetworkMode") && !value["NetworkMode"].IsNull())
    {
        if (!value["NetworkMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkConfiguration.NetworkMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_networkMode = string(value["NetworkMode"].GetString());
        m_networkModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NetworkConfiguration::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_networkModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_networkMode.c_str(), allocator).Move(), allocator);
    }

}


string NetworkConfiguration::GetNetworkMode() const
{
    return m_networkMode;
}

void NetworkConfiguration::SetNetworkMode(const string& _networkMode)
{
    m_networkMode = _networkMode;
    m_networkModeHasBeenSet = true;
}

bool NetworkConfiguration::NetworkModeHasBeenSet() const
{
    return m_networkModeHasBeenSet;
}

