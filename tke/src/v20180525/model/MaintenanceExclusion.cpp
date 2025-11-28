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

#include <tencentcloud/tke/v20180525/model/MaintenanceExclusion.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

MaintenanceExclusion::MaintenanceExclusion() :
    m_nameHasBeenSet(false),
    m_startAtHasBeenSet(false),
    m_endAtHasBeenSet(false),
    m_iDHasBeenSet(false)
{
}

CoreInternalOutcome MaintenanceExclusion::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MaintenanceExclusion.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("StartAt") && !value["StartAt"].IsNull())
    {
        if (!value["StartAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MaintenanceExclusion.StartAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startAt = string(value["StartAt"].GetString());
        m_startAtHasBeenSet = true;
    }

    if (value.HasMember("EndAt") && !value["EndAt"].IsNull())
    {
        if (!value["EndAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MaintenanceExclusion.EndAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endAt = string(value["EndAt"].GetString());
        m_endAtHasBeenSet = true;
    }

    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MaintenanceExclusion.ID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_iD = value["ID"].GetInt64();
        m_iDHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MaintenanceExclusion::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_startAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startAt.c_str(), allocator).Move(), allocator);
    }

    if (m_endAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endAt.c_str(), allocator).Move(), allocator);
    }

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iD, allocator);
    }

}


string MaintenanceExclusion::GetName() const
{
    return m_name;
}

void MaintenanceExclusion::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool MaintenanceExclusion::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string MaintenanceExclusion::GetStartAt() const
{
    return m_startAt;
}

void MaintenanceExclusion::SetStartAt(const string& _startAt)
{
    m_startAt = _startAt;
    m_startAtHasBeenSet = true;
}

bool MaintenanceExclusion::StartAtHasBeenSet() const
{
    return m_startAtHasBeenSet;
}

string MaintenanceExclusion::GetEndAt() const
{
    return m_endAt;
}

void MaintenanceExclusion::SetEndAt(const string& _endAt)
{
    m_endAt = _endAt;
    m_endAtHasBeenSet = true;
}

bool MaintenanceExclusion::EndAtHasBeenSet() const
{
    return m_endAtHasBeenSet;
}

int64_t MaintenanceExclusion::GetID() const
{
    return m_iD;
}

void MaintenanceExclusion::SetID(const int64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool MaintenanceExclusion::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

