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

#include <tencentcloud/cynosdb/v20190107/model/DeliverSummary.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

DeliverSummary::DeliverSummary() :
    m_deliverTypeHasBeenSet(false),
    m_deliverSubTypeHasBeenSet(false),
    m_deliverConsumerHasBeenSet(false),
    m_deliverConsumerNameHasBeenSet(false)
{
}

CoreInternalOutcome DeliverSummary::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DeliverType") && !value["DeliverType"].IsNull())
    {
        if (!value["DeliverType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeliverSummary.DeliverType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deliverType = string(value["DeliverType"].GetString());
        m_deliverTypeHasBeenSet = true;
    }

    if (value.HasMember("DeliverSubType") && !value["DeliverSubType"].IsNull())
    {
        if (!value["DeliverSubType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeliverSummary.DeliverSubType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deliverSubType = string(value["DeliverSubType"].GetString());
        m_deliverSubTypeHasBeenSet = true;
    }

    if (value.HasMember("DeliverConsumer") && !value["DeliverConsumer"].IsNull())
    {
        if (!value["DeliverConsumer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeliverSummary.DeliverConsumer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deliverConsumer = string(value["DeliverConsumer"].GetString());
        m_deliverConsumerHasBeenSet = true;
    }

    if (value.HasMember("DeliverConsumerName") && !value["DeliverConsumerName"].IsNull())
    {
        if (!value["DeliverConsumerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeliverSummary.DeliverConsumerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deliverConsumerName = string(value["DeliverConsumerName"].GetString());
        m_deliverConsumerNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeliverSummary::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_deliverTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeliverType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deliverType.c_str(), allocator).Move(), allocator);
    }

    if (m_deliverSubTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeliverSubType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deliverSubType.c_str(), allocator).Move(), allocator);
    }

    if (m_deliverConsumerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeliverConsumer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deliverConsumer.c_str(), allocator).Move(), allocator);
    }

    if (m_deliverConsumerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeliverConsumerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deliverConsumerName.c_str(), allocator).Move(), allocator);
    }

}


string DeliverSummary::GetDeliverType() const
{
    return m_deliverType;
}

void DeliverSummary::SetDeliverType(const string& _deliverType)
{
    m_deliverType = _deliverType;
    m_deliverTypeHasBeenSet = true;
}

bool DeliverSummary::DeliverTypeHasBeenSet() const
{
    return m_deliverTypeHasBeenSet;
}

string DeliverSummary::GetDeliverSubType() const
{
    return m_deliverSubType;
}

void DeliverSummary::SetDeliverSubType(const string& _deliverSubType)
{
    m_deliverSubType = _deliverSubType;
    m_deliverSubTypeHasBeenSet = true;
}

bool DeliverSummary::DeliverSubTypeHasBeenSet() const
{
    return m_deliverSubTypeHasBeenSet;
}

string DeliverSummary::GetDeliverConsumer() const
{
    return m_deliverConsumer;
}

void DeliverSummary::SetDeliverConsumer(const string& _deliverConsumer)
{
    m_deliverConsumer = _deliverConsumer;
    m_deliverConsumerHasBeenSet = true;
}

bool DeliverSummary::DeliverConsumerHasBeenSet() const
{
    return m_deliverConsumerHasBeenSet;
}

string DeliverSummary::GetDeliverConsumerName() const
{
    return m_deliverConsumerName;
}

void DeliverSummary::SetDeliverConsumerName(const string& _deliverConsumerName)
{
    m_deliverConsumerName = _deliverConsumerName;
    m_deliverConsumerNameHasBeenSet = true;
}

bool DeliverSummary::DeliverConsumerNameHasBeenSet() const
{
    return m_deliverConsumerNameHasBeenSet;
}

