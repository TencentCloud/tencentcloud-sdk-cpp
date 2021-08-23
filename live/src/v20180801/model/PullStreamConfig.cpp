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

#include <tencentcloud/live/v20180801/model/PullStreamConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

PullStreamConfig::PullStreamConfig() :
    m_configIdHasBeenSet(false),
    m_fromUrlHasBeenSet(false),
    m_toUrlHasBeenSet(false),
    m_areaNameHasBeenSet(false),
    m_ispNameHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome PullStreamConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ConfigId") && !value["ConfigId"].IsNull())
    {
        if (!value["ConfigId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PullStreamConfig.ConfigId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configId = string(value["ConfigId"].GetString());
        m_configIdHasBeenSet = true;
    }

    if (value.HasMember("FromUrl") && !value["FromUrl"].IsNull())
    {
        if (!value["FromUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PullStreamConfig.FromUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fromUrl = string(value["FromUrl"].GetString());
        m_fromUrlHasBeenSet = true;
    }

    if (value.HasMember("ToUrl") && !value["ToUrl"].IsNull())
    {
        if (!value["ToUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PullStreamConfig.ToUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_toUrl = string(value["ToUrl"].GetString());
        m_toUrlHasBeenSet = true;
    }

    if (value.HasMember("AreaName") && !value["AreaName"].IsNull())
    {
        if (!value["AreaName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PullStreamConfig.AreaName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_areaName = string(value["AreaName"].GetString());
        m_areaNameHasBeenSet = true;
    }

    if (value.HasMember("IspName") && !value["IspName"].IsNull())
    {
        if (!value["IspName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PullStreamConfig.IspName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ispName = string(value["IspName"].GetString());
        m_ispNameHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PullStreamConfig.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PullStreamConfig.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PullStreamConfig.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PullStreamConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_configIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configId.c_str(), allocator).Move(), allocator);
    }

    if (m_fromUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FromUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fromUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_toUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_toUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_areaNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AreaName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_areaName.c_str(), allocator).Move(), allocator);
    }

    if (m_ispNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IspName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ispName.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

}


string PullStreamConfig::GetConfigId() const
{
    return m_configId;
}

void PullStreamConfig::SetConfigId(const string& _configId)
{
    m_configId = _configId;
    m_configIdHasBeenSet = true;
}

bool PullStreamConfig::ConfigIdHasBeenSet() const
{
    return m_configIdHasBeenSet;
}

string PullStreamConfig::GetFromUrl() const
{
    return m_fromUrl;
}

void PullStreamConfig::SetFromUrl(const string& _fromUrl)
{
    m_fromUrl = _fromUrl;
    m_fromUrlHasBeenSet = true;
}

bool PullStreamConfig::FromUrlHasBeenSet() const
{
    return m_fromUrlHasBeenSet;
}

string PullStreamConfig::GetToUrl() const
{
    return m_toUrl;
}

void PullStreamConfig::SetToUrl(const string& _toUrl)
{
    m_toUrl = _toUrl;
    m_toUrlHasBeenSet = true;
}

bool PullStreamConfig::ToUrlHasBeenSet() const
{
    return m_toUrlHasBeenSet;
}

string PullStreamConfig::GetAreaName() const
{
    return m_areaName;
}

void PullStreamConfig::SetAreaName(const string& _areaName)
{
    m_areaName = _areaName;
    m_areaNameHasBeenSet = true;
}

bool PullStreamConfig::AreaNameHasBeenSet() const
{
    return m_areaNameHasBeenSet;
}

string PullStreamConfig::GetIspName() const
{
    return m_ispName;
}

void PullStreamConfig::SetIspName(const string& _ispName)
{
    m_ispName = _ispName;
    m_ispNameHasBeenSet = true;
}

bool PullStreamConfig::IspNameHasBeenSet() const
{
    return m_ispNameHasBeenSet;
}

string PullStreamConfig::GetStartTime() const
{
    return m_startTime;
}

void PullStreamConfig::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool PullStreamConfig::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string PullStreamConfig::GetEndTime() const
{
    return m_endTime;
}

void PullStreamConfig::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool PullStreamConfig::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string PullStreamConfig::GetStatus() const
{
    return m_status;
}

void PullStreamConfig::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool PullStreamConfig::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

