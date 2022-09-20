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

#include <tencentcloud/teo/v20220901/model/LogSetInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

LogSetInfo::LogSetInfo() :
    m_logSetRegionHasBeenSet(false),
    m_logSetNameHasBeenSet(false),
    m_logSetIdHasBeenSet(false),
    m_deletedHasBeenSet(false)
{
}

CoreInternalOutcome LogSetInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LogSetRegion") && !value["LogSetRegion"].IsNull())
    {
        if (!value["LogSetRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogSetInfo.LogSetRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logSetRegion = string(value["LogSetRegion"].GetString());
        m_logSetRegionHasBeenSet = true;
    }

    if (value.HasMember("LogSetName") && !value["LogSetName"].IsNull())
    {
        if (!value["LogSetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogSetInfo.LogSetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logSetName = string(value["LogSetName"].GetString());
        m_logSetNameHasBeenSet = true;
    }

    if (value.HasMember("LogSetId") && !value["LogSetId"].IsNull())
    {
        if (!value["LogSetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogSetInfo.LogSetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logSetId = string(value["LogSetId"].GetString());
        m_logSetIdHasBeenSet = true;
    }

    if (value.HasMember("Deleted") && !value["Deleted"].IsNull())
    {
        if (!value["Deleted"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogSetInfo.Deleted` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deleted = string(value["Deleted"].GetString());
        m_deletedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LogSetInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_logSetRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogSetRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logSetRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_logSetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogSetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logSetName.c_str(), allocator).Move(), allocator);
    }

    if (m_logSetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogSetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logSetId.c_str(), allocator).Move(), allocator);
    }

    if (m_deletedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Deleted";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deleted.c_str(), allocator).Move(), allocator);
    }

}


string LogSetInfo::GetLogSetRegion() const
{
    return m_logSetRegion;
}

void LogSetInfo::SetLogSetRegion(const string& _logSetRegion)
{
    m_logSetRegion = _logSetRegion;
    m_logSetRegionHasBeenSet = true;
}

bool LogSetInfo::LogSetRegionHasBeenSet() const
{
    return m_logSetRegionHasBeenSet;
}

string LogSetInfo::GetLogSetName() const
{
    return m_logSetName;
}

void LogSetInfo::SetLogSetName(const string& _logSetName)
{
    m_logSetName = _logSetName;
    m_logSetNameHasBeenSet = true;
}

bool LogSetInfo::LogSetNameHasBeenSet() const
{
    return m_logSetNameHasBeenSet;
}

string LogSetInfo::GetLogSetId() const
{
    return m_logSetId;
}

void LogSetInfo::SetLogSetId(const string& _logSetId)
{
    m_logSetId = _logSetId;
    m_logSetIdHasBeenSet = true;
}

bool LogSetInfo::LogSetIdHasBeenSet() const
{
    return m_logSetIdHasBeenSet;
}

string LogSetInfo::GetDeleted() const
{
    return m_deleted;
}

void LogSetInfo::SetDeleted(const string& _deleted)
{
    m_deleted = _deleted;
    m_deletedHasBeenSet = true;
}

bool LogSetInfo::DeletedHasBeenSet() const
{
    return m_deletedHasBeenSet;
}

