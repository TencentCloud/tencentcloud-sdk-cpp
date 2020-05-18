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
using namespace rapidjson;
using namespace std;

GameServerSessionQueueDestination::GameServerSessionQueueDestination() :
    m_destinationArnHasBeenSet(false)
{
}

CoreInternalOutcome GameServerSessionQueueDestination::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("DestinationArn") && !value["DestinationArn"].IsNull())
    {
        if (!value["DestinationArn"].IsString())
        {
            return CoreInternalOutcome(Error("response `GameServerSessionQueueDestination.DestinationArn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_destinationArn = string(value["DestinationArn"].GetString());
        m_destinationArnHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GameServerSessionQueueDestination::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_destinationArnHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DestinationArn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_destinationArn.c_str(), allocator).Move(), allocator);
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

