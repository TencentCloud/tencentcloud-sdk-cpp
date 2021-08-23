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

#include <tencentcloud/mariadb/v20170312/model/DBBackupTimeConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mariadb::V20170312::Model;
using namespace std;

DBBackupTimeConfig::DBBackupTimeConfig() :
    m_instanceIdHasBeenSet(false),
    m_startBackupTimeHasBeenSet(false),
    m_endBackupTimeHasBeenSet(false)
{
}

CoreInternalOutcome DBBackupTimeConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBBackupTimeConfig.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("StartBackupTime") && !value["StartBackupTime"].IsNull())
    {
        if (!value["StartBackupTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBBackupTimeConfig.StartBackupTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startBackupTime = string(value["StartBackupTime"].GetString());
        m_startBackupTimeHasBeenSet = true;
    }

    if (value.HasMember("EndBackupTime") && !value["EndBackupTime"].IsNull())
    {
        if (!value["EndBackupTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBBackupTimeConfig.EndBackupTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endBackupTime = string(value["EndBackupTime"].GetString());
        m_endBackupTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DBBackupTimeConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_startBackupTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartBackupTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startBackupTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endBackupTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndBackupTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endBackupTime.c_str(), allocator).Move(), allocator);
    }

}


string DBBackupTimeConfig::GetInstanceId() const
{
    return m_instanceId;
}

void DBBackupTimeConfig::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DBBackupTimeConfig::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DBBackupTimeConfig::GetStartBackupTime() const
{
    return m_startBackupTime;
}

void DBBackupTimeConfig::SetStartBackupTime(const string& _startBackupTime)
{
    m_startBackupTime = _startBackupTime;
    m_startBackupTimeHasBeenSet = true;
}

bool DBBackupTimeConfig::StartBackupTimeHasBeenSet() const
{
    return m_startBackupTimeHasBeenSet;
}

string DBBackupTimeConfig::GetEndBackupTime() const
{
    return m_endBackupTime;
}

void DBBackupTimeConfig::SetEndBackupTime(const string& _endBackupTime)
{
    m_endBackupTime = _endBackupTime;
    m_endBackupTimeHasBeenSet = true;
}

bool DBBackupTimeConfig::EndBackupTimeHasBeenSet() const
{
    return m_endBackupTimeHasBeenSet;
}

