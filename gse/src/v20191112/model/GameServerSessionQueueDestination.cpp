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

#include <tencentcloud/gse/v20191112/model/GameServerSessionQueueDestination.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gse::V20191112::Model;
using namespace std;

GameServerSessionQueueDestination::GameServerSessionQueueDestination() :
    m_destinationArnHasBeenSet(false),
    m_fleetStatusHasBeenSet(false)
{
}

CoreInternalOutcome GameServerSessionQueueDestination::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DestinationArn") && !value["DestinationArn"].IsNull())
    {
        if (!value["DestinationArn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GameServerSessionQueueDestination.DestinationArn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_destinationArn = string(value["DestinationArn"].GetString());
        m_destinationArnHasBeenSet = true;
    }

    if (value.HasMember("FleetStatus") && !value["FleetStatus"].IsNull())
    {
        if (!value["FleetStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GameServerSessionQueueDestination.FleetStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fleetStatus = string(value["FleetStatus"].GetString());
        m_fleetStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GameServerSessionQueueDestination::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_destinationArnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestinationArn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_destinationArn.c_str(), allocator).Move(), allocator);
    }

    if (m_fleetStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FleetStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fleetStatus.c_str(), allocator).Move(), allocator);
    }

}


string GameServerSessionQueueDestination::GetDestinationArn() const
{
    return m_destinationArn;
}

void GameServerSessionQueueDestination::SetDestinationArn(const string& _destinationArn)
{
    m_destinationArn = _destinationArn;
    m_destinationArnHasBeenSet = true;
}

bool GameServerSessionQueueDestination::DestinationArnHasBeenSet() const
{
    return m_destinationArnHasBeenSet;
}

string GameServerSessionQueueDestination::GetFleetStatus() const
{
    return m_fleetStatus;
}

void GameServerSessionQueueDestination::SetFleetStatus(const string& _fleetStatus)
{
    m_fleetStatus = _fleetStatus;
    m_fleetStatusHasBeenSet = true;
}

bool GameServerSessionQueueDestination::FleetStatusHasBeenSet() const
{
    return m_fleetStatusHasBeenSet;
}

