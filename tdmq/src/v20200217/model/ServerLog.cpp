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

#include <tencentcloud/tdmq/v20200217/model/ServerLog.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

ServerLog::ServerLog() :
    m_saveTimeHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome ServerLog::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SaveTime") && !value["SaveTime"].IsNull())
    {
        if (!value["SaveTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerLog.SaveTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_saveTime = string(value["SaveTime"].GetString());
        m_saveTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerLog.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ServerLog::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_saveTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SaveTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_saveTime.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

}


string ServerLog::GetSaveTime() const
{
    return m_saveTime;
}

void ServerLog::SetSaveTime(const string& _saveTime)
{
    m_saveTime = _saveTime;
    m_saveTimeHasBeenSet = true;
}

bool ServerLog::SaveTimeHasBeenSet() const
{
    return m_saveTimeHasBeenSet;
}

string ServerLog::GetStatus() const
{
    return m_status;
}

void ServerLog::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ServerLog::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

