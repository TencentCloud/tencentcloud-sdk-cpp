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

#include <tencentcloud/cdb/v20170320/model/LogToCLSConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

LogToCLSConfig::LogToCLSConfig() :
    m_statusHasBeenSet(false),
    m_logSetIdHasBeenSet(false),
    m_logTopicIdHasBeenSet(false),
    m_clsRegionHasBeenSet(false)
{
}

CoreInternalOutcome LogToCLSConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogToCLSConfig.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("LogSetId") && !value["LogSetId"].IsNull())
    {
        if (!value["LogSetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogToCLSConfig.LogSetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logSetId = string(value["LogSetId"].GetString());
        m_logSetIdHasBeenSet = true;
    }

    if (value.HasMember("LogTopicId") && !value["LogTopicId"].IsNull())
    {
        if (!value["LogTopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogToCLSConfig.LogTopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logTopicId = string(value["LogTopicId"].GetString());
        m_logTopicIdHasBeenSet = true;
    }

    if (value.HasMember("ClsRegion") && !value["ClsRegion"].IsNull())
    {
        if (!value["ClsRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogToCLSConfig.ClsRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clsRegion = string(value["ClsRegion"].GetString());
        m_clsRegionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LogToCLSConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_logSetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogSetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logSetId.c_str(), allocator).Move(), allocator);
    }

    if (m_logTopicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogTopicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logTopicId.c_str(), allocator).Move(), allocator);
    }

    if (m_clsRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClsRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clsRegion.c_str(), allocator).Move(), allocator);
    }

}


string LogToCLSConfig::GetStatus() const
{
    return m_status;
}

void LogToCLSConfig::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool LogToCLSConfig::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string LogToCLSConfig::GetLogSetId() const
{
    return m_logSetId;
}

void LogToCLSConfig::SetLogSetId(const string& _logSetId)
{
    m_logSetId = _logSetId;
    m_logSetIdHasBeenSet = true;
}

bool LogToCLSConfig::LogSetIdHasBeenSet() const
{
    return m_logSetIdHasBeenSet;
}

string LogToCLSConfig::GetLogTopicId() const
{
    return m_logTopicId;
}

void LogToCLSConfig::SetLogTopicId(const string& _logTopicId)
{
    m_logTopicId = _logTopicId;
    m_logTopicIdHasBeenSet = true;
}

bool LogToCLSConfig::LogTopicIdHasBeenSet() const
{
    return m_logTopicIdHasBeenSet;
}

string LogToCLSConfig::GetClsRegion() const
{
    return m_clsRegion;
}

void LogToCLSConfig::SetClsRegion(const string& _clsRegion)
{
    m_clsRegion = _clsRegion;
    m_clsRegionHasBeenSet = true;
}

bool LogToCLSConfig::ClsRegionHasBeenSet() const
{
    return m_clsRegionHasBeenSet;
}

