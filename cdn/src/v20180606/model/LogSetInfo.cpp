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

#include <tencentcloud/cdn/v20180606/model/LogSetInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

LogSetInfo::LogSetInfo() :
    m_appIdHasBeenSet(false),
    m_channelHasBeenSet(false),
    m_logsetIdHasBeenSet(false),
    m_logsetNameHasBeenSet(false),
    m_isDefaultHasBeenSet(false),
    m_logsetSavePeriodHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_deletedHasBeenSet(false),
    m_regionEnHasBeenSet(false)
{
}

CoreInternalOutcome LogSetInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LogSetInfo.AppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetUint64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("Channel") && !value["Channel"].IsNull())
    {
        if (!value["Channel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogSetInfo.Channel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channel = string(value["Channel"].GetString());
        m_channelHasBeenSet = true;
    }

    if (value.HasMember("LogsetId") && !value["LogsetId"].IsNull())
    {
        if (!value["LogsetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogSetInfo.LogsetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logsetId = string(value["LogsetId"].GetString());
        m_logsetIdHasBeenSet = true;
    }

    if (value.HasMember("LogsetName") && !value["LogsetName"].IsNull())
    {
        if (!value["LogsetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogSetInfo.LogsetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logsetName = string(value["LogsetName"].GetString());
        m_logsetNameHasBeenSet = true;
    }

    if (value.HasMember("IsDefault") && !value["IsDefault"].IsNull())
    {
        if (!value["IsDefault"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LogSetInfo.IsDefault` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isDefault = value["IsDefault"].GetUint64();
        m_isDefaultHasBeenSet = true;
    }

    if (value.HasMember("LogsetSavePeriod") && !value["LogsetSavePeriod"].IsNull())
    {
        if (!value["LogsetSavePeriod"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LogSetInfo.LogsetSavePeriod` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_logsetSavePeriod = value["LogsetSavePeriod"].GetUint64();
        m_logsetSavePeriodHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogSetInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogSetInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
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

    if (value.HasMember("RegionEn") && !value["RegionEn"].IsNull())
    {
        if (!value["RegionEn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogSetInfo.RegionEn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionEn = string(value["RegionEn"].GetString());
        m_regionEnHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LogSetInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_channelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Channel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channel.c_str(), allocator).Move(), allocator);
    }

    if (m_logsetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogsetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logsetId.c_str(), allocator).Move(), allocator);
    }

    if (m_logsetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogsetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logsetName.c_str(), allocator).Move(), allocator);
    }

    if (m_isDefaultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDefault";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDefault, allocator);
    }

    if (m_logsetSavePeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogsetSavePeriod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_logsetSavePeriod, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_deletedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Deleted";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deleted.c_str(), allocator).Move(), allocator);
    }

    if (m_regionEnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionEn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionEn.c_str(), allocator).Move(), allocator);
    }

}


uint64_t LogSetInfo::GetAppId() const
{
    return m_appId;
}

void LogSetInfo::SetAppId(const uint64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool LogSetInfo::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string LogSetInfo::GetChannel() const
{
    return m_channel;
}

void LogSetInfo::SetChannel(const string& _channel)
{
    m_channel = _channel;
    m_channelHasBeenSet = true;
}

bool LogSetInfo::ChannelHasBeenSet() const
{
    return m_channelHasBeenSet;
}

string LogSetInfo::GetLogsetId() const
{
    return m_logsetId;
}

void LogSetInfo::SetLogsetId(const string& _logsetId)
{
    m_logsetId = _logsetId;
    m_logsetIdHasBeenSet = true;
}

bool LogSetInfo::LogsetIdHasBeenSet() const
{
    return m_logsetIdHasBeenSet;
}

string LogSetInfo::GetLogsetName() const
{
    return m_logsetName;
}

void LogSetInfo::SetLogsetName(const string& _logsetName)
{
    m_logsetName = _logsetName;
    m_logsetNameHasBeenSet = true;
}

bool LogSetInfo::LogsetNameHasBeenSet() const
{
    return m_logsetNameHasBeenSet;
}

uint64_t LogSetInfo::GetIsDefault() const
{
    return m_isDefault;
}

void LogSetInfo::SetIsDefault(const uint64_t& _isDefault)
{
    m_isDefault = _isDefault;
    m_isDefaultHasBeenSet = true;
}

bool LogSetInfo::IsDefaultHasBeenSet() const
{
    return m_isDefaultHasBeenSet;
}

uint64_t LogSetInfo::GetLogsetSavePeriod() const
{
    return m_logsetSavePeriod;
}

void LogSetInfo::SetLogsetSavePeriod(const uint64_t& _logsetSavePeriod)
{
    m_logsetSavePeriod = _logsetSavePeriod;
    m_logsetSavePeriodHasBeenSet = true;
}

bool LogSetInfo::LogsetSavePeriodHasBeenSet() const
{
    return m_logsetSavePeriodHasBeenSet;
}

string LogSetInfo::GetCreateTime() const
{
    return m_createTime;
}

void LogSetInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool LogSetInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string LogSetInfo::GetRegion() const
{
    return m_region;
}

void LogSetInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool LogSetInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
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

string LogSetInfo::GetRegionEn() const
{
    return m_regionEn;
}

void LogSetInfo::SetRegionEn(const string& _regionEn)
{
    m_regionEn = _regionEn;
    m_regionEnHasBeenSet = true;
}

bool LogSetInfo::RegionEnHasBeenSet() const
{
    return m_regionEnHasBeenSet;
}

