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

#include <tencentcloud/kms/v20190118/model/DestinationSyncConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Kms::V20190118::Model;
using namespace std;

DestinationSyncConfig::DestinationSyncConfig() :
    m_destinationRegionHasBeenSet(false),
    m_hsmClusterIdHasBeenSet(false)
{
}

CoreInternalOutcome DestinationSyncConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DestinationRegion") && !value["DestinationRegion"].IsNull())
    {
        if (!value["DestinationRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DestinationSyncConfig.DestinationRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_destinationRegion = string(value["DestinationRegion"].GetString());
        m_destinationRegionHasBeenSet = true;
    }

    if (value.HasMember("HsmClusterId") && !value["HsmClusterId"].IsNull())
    {
        if (!value["HsmClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DestinationSyncConfig.HsmClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hsmClusterId = string(value["HsmClusterId"].GetString());
        m_hsmClusterIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DestinationSyncConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_destinationRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestinationRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_destinationRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_hsmClusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HsmClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hsmClusterId.c_str(), allocator).Move(), allocator);
    }

}


string DestinationSyncConfig::GetDestinationRegion() const
{
    return m_destinationRegion;
}

void DestinationSyncConfig::SetDestinationRegion(const string& _destinationRegion)
{
    m_destinationRegion = _destinationRegion;
    m_destinationRegionHasBeenSet = true;
}

bool DestinationSyncConfig::DestinationRegionHasBeenSet() const
{
    return m_destinationRegionHasBeenSet;
}

string DestinationSyncConfig::GetHsmClusterId() const
{
    return m_hsmClusterId;
}

void DestinationSyncConfig::SetHsmClusterId(const string& _hsmClusterId)
{
    m_hsmClusterId = _hsmClusterId;
    m_hsmClusterIdHasBeenSet = true;
}

bool DestinationSyncConfig::HsmClusterIdHasBeenSet() const
{
    return m_hsmClusterIdHasBeenSet;
}

