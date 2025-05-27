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

#include <tencentcloud/cynosdb/v20190107/model/GdnTaskInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

GdnTaskInfo::GdnTaskInfo() :
    m_gdnIdHasBeenSet(false),
    m_gdnNameHasBeenSet(false),
    m_primaryClusterIdHasBeenSet(false),
    m_primaryClusterRegionHasBeenSet(false),
    m_standbyClusterRegionHasBeenSet(false),
    m_standbyClusterIdHasBeenSet(false),
    m_standbyClusterNameHasBeenSet(false)
{
}

CoreInternalOutcome GdnTaskInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GdnId") && !value["GdnId"].IsNull())
    {
        if (!value["GdnId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GdnTaskInfo.GdnId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gdnId = string(value["GdnId"].GetString());
        m_gdnIdHasBeenSet = true;
    }

    if (value.HasMember("GdnName") && !value["GdnName"].IsNull())
    {
        if (!value["GdnName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GdnTaskInfo.GdnName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gdnName = string(value["GdnName"].GetString());
        m_gdnNameHasBeenSet = true;
    }

    if (value.HasMember("PrimaryClusterId") && !value["PrimaryClusterId"].IsNull())
    {
        if (!value["PrimaryClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GdnTaskInfo.PrimaryClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_primaryClusterId = string(value["PrimaryClusterId"].GetString());
        m_primaryClusterIdHasBeenSet = true;
    }

    if (value.HasMember("PrimaryClusterRegion") && !value["PrimaryClusterRegion"].IsNull())
    {
        if (!value["PrimaryClusterRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GdnTaskInfo.PrimaryClusterRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_primaryClusterRegion = string(value["PrimaryClusterRegion"].GetString());
        m_primaryClusterRegionHasBeenSet = true;
    }

    if (value.HasMember("StandbyClusterRegion") && !value["StandbyClusterRegion"].IsNull())
    {
        if (!value["StandbyClusterRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GdnTaskInfo.StandbyClusterRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_standbyClusterRegion = string(value["StandbyClusterRegion"].GetString());
        m_standbyClusterRegionHasBeenSet = true;
    }

    if (value.HasMember("StandbyClusterId") && !value["StandbyClusterId"].IsNull())
    {
        if (!value["StandbyClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GdnTaskInfo.StandbyClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_standbyClusterId = string(value["StandbyClusterId"].GetString());
        m_standbyClusterIdHasBeenSet = true;
    }

    if (value.HasMember("StandbyClusterName") && !value["StandbyClusterName"].IsNull())
    {
        if (!value["StandbyClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GdnTaskInfo.StandbyClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_standbyClusterName = string(value["StandbyClusterName"].GetString());
        m_standbyClusterNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GdnTaskInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_gdnIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GdnId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gdnId.c_str(), allocator).Move(), allocator);
    }

    if (m_gdnNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GdnName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gdnName.c_str(), allocator).Move(), allocator);
    }

    if (m_primaryClusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrimaryClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_primaryClusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_primaryClusterRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrimaryClusterRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_primaryClusterRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_standbyClusterRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StandbyClusterRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_standbyClusterRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_standbyClusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StandbyClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_standbyClusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_standbyClusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StandbyClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_standbyClusterName.c_str(), allocator).Move(), allocator);
    }

}


string GdnTaskInfo::GetGdnId() const
{
    return m_gdnId;
}

void GdnTaskInfo::SetGdnId(const string& _gdnId)
{
    m_gdnId = _gdnId;
    m_gdnIdHasBeenSet = true;
}

bool GdnTaskInfo::GdnIdHasBeenSet() const
{
    return m_gdnIdHasBeenSet;
}

string GdnTaskInfo::GetGdnName() const
{
    return m_gdnName;
}

void GdnTaskInfo::SetGdnName(const string& _gdnName)
{
    m_gdnName = _gdnName;
    m_gdnNameHasBeenSet = true;
}

bool GdnTaskInfo::GdnNameHasBeenSet() const
{
    return m_gdnNameHasBeenSet;
}

string GdnTaskInfo::GetPrimaryClusterId() const
{
    return m_primaryClusterId;
}

void GdnTaskInfo::SetPrimaryClusterId(const string& _primaryClusterId)
{
    m_primaryClusterId = _primaryClusterId;
    m_primaryClusterIdHasBeenSet = true;
}

bool GdnTaskInfo::PrimaryClusterIdHasBeenSet() const
{
    return m_primaryClusterIdHasBeenSet;
}

string GdnTaskInfo::GetPrimaryClusterRegion() const
{
    return m_primaryClusterRegion;
}

void GdnTaskInfo::SetPrimaryClusterRegion(const string& _primaryClusterRegion)
{
    m_primaryClusterRegion = _primaryClusterRegion;
    m_primaryClusterRegionHasBeenSet = true;
}

bool GdnTaskInfo::PrimaryClusterRegionHasBeenSet() const
{
    return m_primaryClusterRegionHasBeenSet;
}

string GdnTaskInfo::GetStandbyClusterRegion() const
{
    return m_standbyClusterRegion;
}

void GdnTaskInfo::SetStandbyClusterRegion(const string& _standbyClusterRegion)
{
    m_standbyClusterRegion = _standbyClusterRegion;
    m_standbyClusterRegionHasBeenSet = true;
}

bool GdnTaskInfo::StandbyClusterRegionHasBeenSet() const
{
    return m_standbyClusterRegionHasBeenSet;
}

string GdnTaskInfo::GetStandbyClusterId() const
{
    return m_standbyClusterId;
}

void GdnTaskInfo::SetStandbyClusterId(const string& _standbyClusterId)
{
    m_standbyClusterId = _standbyClusterId;
    m_standbyClusterIdHasBeenSet = true;
}

bool GdnTaskInfo::StandbyClusterIdHasBeenSet() const
{
    return m_standbyClusterIdHasBeenSet;
}

string GdnTaskInfo::GetStandbyClusterName() const
{
    return m_standbyClusterName;
}

void GdnTaskInfo::SetStandbyClusterName(const string& _standbyClusterName)
{
    m_standbyClusterName = _standbyClusterName;
    m_standbyClusterNameHasBeenSet = true;
}

bool GdnTaskInfo::StandbyClusterNameHasBeenSet() const
{
    return m_standbyClusterNameHasBeenSet;
}

