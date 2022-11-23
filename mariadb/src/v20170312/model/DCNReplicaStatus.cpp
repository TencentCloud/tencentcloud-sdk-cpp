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

#include <tencentcloud/mariadb/v20170312/model/DCNReplicaStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mariadb::V20170312::Model;
using namespace std;

DCNReplicaStatus::DCNReplicaStatus() :
    m_statusHasBeenSet(false),
    m_delayHasBeenSet(false)
{
}

CoreInternalOutcome DCNReplicaStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DCNReplicaStatus.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Delay") && !value["Delay"].IsNull())
    {
        if (!value["Delay"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DCNReplicaStatus.Delay` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_delay = value["Delay"].GetInt64();
        m_delayHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DCNReplicaStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_delayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Delay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_delay, allocator);
    }

}


string DCNReplicaStatus::GetStatus() const
{
    return m_status;
}

void DCNReplicaStatus::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DCNReplicaStatus::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t DCNReplicaStatus::GetDelay() const
{
    return m_delay;
}

void DCNReplicaStatus::SetDelay(const int64_t& _delay)
{
    m_delay = _delay;
    m_delayHasBeenSet = true;
}

bool DCNReplicaStatus::DelayHasBeenSet() const
{
    return m_delayHasBeenSet;
}

