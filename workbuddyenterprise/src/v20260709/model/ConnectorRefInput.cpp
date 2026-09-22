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

#include <tencentcloud/workbuddyenterprise/v20260709/model/ConnectorRefInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Workbuddyenterprise::V20260709::Model;
using namespace std;

ConnectorRefInput::ConnectorRefInput() :
    m_connectorIdHasBeenSet(false)
{
}

CoreInternalOutcome ConnectorRefInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ConnectorId") && !value["ConnectorId"].IsNull())
    {
        if (!value["ConnectorId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConnectorRefInput.ConnectorId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_connectorId = string(value["ConnectorId"].GetString());
        m_connectorIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConnectorRefInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_connectorIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectorId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_connectorId.c_str(), allocator).Move(), allocator);
    }

}


string ConnectorRefInput::GetConnectorId() const
{
    return m_connectorId;
}

void ConnectorRefInput::SetConnectorId(const string& _connectorId)
{
    m_connectorId = _connectorId;
    m_connectorIdHasBeenSet = true;
}

bool ConnectorRefInput::ConnectorIdHasBeenSet() const
{
    return m_connectorIdHasBeenSet;
}

