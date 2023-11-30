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

#include <tencentcloud/weilingwith/v20230427/model/AlarmStatusData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

AlarmStatusData::AlarmStatusData() :
    m_statusIDHasBeenSet(false),
    m_statusNameHasBeenSet(false),
    m_statusTypeHasBeenSet(false)
{
}

CoreInternalOutcome AlarmStatusData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StatusID") && !value["StatusID"].IsNull())
    {
        if (!value["StatusID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmStatusData.StatusID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusID = string(value["StatusID"].GetString());
        m_statusIDHasBeenSet = true;
    }

    if (value.HasMember("StatusName") && !value["StatusName"].IsNull())
    {
        if (!value["StatusName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmStatusData.StatusName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusName = string(value["StatusName"].GetString());
        m_statusNameHasBeenSet = true;
    }

    if (value.HasMember("StatusType") && !value["StatusType"].IsNull())
    {
        if (!value["StatusType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmStatusData.StatusType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusType = string(value["StatusType"].GetString());
        m_statusTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AlarmStatusData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_statusIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_statusID.c_str(), allocator).Move(), allocator);
    }

    if (m_statusNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_statusName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_statusType.c_str(), allocator).Move(), allocator);
    }

}


string AlarmStatusData::GetStatusID() const
{
    return m_statusID;
}

void AlarmStatusData::SetStatusID(const string& _statusID)
{
    m_statusID = _statusID;
    m_statusIDHasBeenSet = true;
}

bool AlarmStatusData::StatusIDHasBeenSet() const
{
    return m_statusIDHasBeenSet;
}

string AlarmStatusData::GetStatusName() const
{
    return m_statusName;
}

void AlarmStatusData::SetStatusName(const string& _statusName)
{
    m_statusName = _statusName;
    m_statusNameHasBeenSet = true;
}

bool AlarmStatusData::StatusNameHasBeenSet() const
{
    return m_statusNameHasBeenSet;
}

string AlarmStatusData::GetStatusType() const
{
    return m_statusType;
}

void AlarmStatusData::SetStatusType(const string& _statusType)
{
    m_statusType = _statusType;
    m_statusTypeHasBeenSet = true;
}

bool AlarmStatusData::StatusTypeHasBeenSet() const
{
    return m_statusTypeHasBeenSet;
}

