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

#include <tencentcloud/cwp/v20180228/model/RaspRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

RaspRule::RaspRule() :
    m_idHasBeenSet(false),
    m_uRLRegexpHasBeenSet(false),
    m_vulVulsIDHasBeenSet(false),
    m_vulVulsNameHasBeenSet(false),
    m_cveIDHasBeenSet(false),
    m_supportDefenseHasBeenSet(false),
    m_whiteTypeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_modifyTimeHasBeenSet(false)
{
}

CoreInternalOutcome RaspRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RaspRule.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("URLRegexp") && !value["URLRegexp"].IsNull())
    {
        if (!value["URLRegexp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspRule.URLRegexp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uRLRegexp = string(value["URLRegexp"].GetString());
        m_uRLRegexpHasBeenSet = true;
    }

    if (value.HasMember("VulVulsID") && !value["VulVulsID"].IsNull())
    {
        if (!value["VulVulsID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RaspRule.VulVulsID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vulVulsID = value["VulVulsID"].GetUint64();
        m_vulVulsIDHasBeenSet = true;
    }

    if (value.HasMember("VulVulsName") && !value["VulVulsName"].IsNull())
    {
        if (!value["VulVulsName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspRule.VulVulsName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vulVulsName = string(value["VulVulsName"].GetString());
        m_vulVulsNameHasBeenSet = true;
    }

    if (value.HasMember("CveID") && !value["CveID"].IsNull())
    {
        if (!value["CveID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspRule.CveID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cveID = string(value["CveID"].GetString());
        m_cveIDHasBeenSet = true;
    }

    if (value.HasMember("SupportDefense") && !value["SupportDefense"].IsNull())
    {
        if (!value["SupportDefense"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RaspRule.SupportDefense` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_supportDefense = value["SupportDefense"].GetUint64();
        m_supportDefenseHasBeenSet = true;
    }

    if (value.HasMember("WhiteType") && !value["WhiteType"].IsNull())
    {
        if (!value["WhiteType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RaspRule.WhiteType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_whiteType = value["WhiteType"].GetUint64();
        m_whiteTypeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RaspRule.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspRule.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RaspRule.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RaspRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_uRLRegexpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "URLRegexp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uRLRegexp.c_str(), allocator).Move(), allocator);
    }

    if (m_vulVulsIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulVulsID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulVulsID, allocator);
    }

    if (m_vulVulsNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulVulsName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vulVulsName.c_str(), allocator).Move(), allocator);
    }

    if (m_cveIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CveID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cveID.c_str(), allocator).Move(), allocator);
    }

    if (m_supportDefenseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportDefense";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_supportDefense, allocator);
    }

    if (m_whiteTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WhiteType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_whiteType, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyTime.c_str(), allocator).Move(), allocator);
    }

}


uint64_t RaspRule::GetId() const
{
    return m_id;
}

void RaspRule::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool RaspRule::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string RaspRule::GetURLRegexp() const
{
    return m_uRLRegexp;
}

void RaspRule::SetURLRegexp(const string& _uRLRegexp)
{
    m_uRLRegexp = _uRLRegexp;
    m_uRLRegexpHasBeenSet = true;
}

bool RaspRule::URLRegexpHasBeenSet() const
{
    return m_uRLRegexpHasBeenSet;
}

uint64_t RaspRule::GetVulVulsID() const
{
    return m_vulVulsID;
}

void RaspRule::SetVulVulsID(const uint64_t& _vulVulsID)
{
    m_vulVulsID = _vulVulsID;
    m_vulVulsIDHasBeenSet = true;
}

bool RaspRule::VulVulsIDHasBeenSet() const
{
    return m_vulVulsIDHasBeenSet;
}

string RaspRule::GetVulVulsName() const
{
    return m_vulVulsName;
}

void RaspRule::SetVulVulsName(const string& _vulVulsName)
{
    m_vulVulsName = _vulVulsName;
    m_vulVulsNameHasBeenSet = true;
}

bool RaspRule::VulVulsNameHasBeenSet() const
{
    return m_vulVulsNameHasBeenSet;
}

string RaspRule::GetCveID() const
{
    return m_cveID;
}

void RaspRule::SetCveID(const string& _cveID)
{
    m_cveID = _cveID;
    m_cveIDHasBeenSet = true;
}

bool RaspRule::CveIDHasBeenSet() const
{
    return m_cveIDHasBeenSet;
}

uint64_t RaspRule::GetSupportDefense() const
{
    return m_supportDefense;
}

void RaspRule::SetSupportDefense(const uint64_t& _supportDefense)
{
    m_supportDefense = _supportDefense;
    m_supportDefenseHasBeenSet = true;
}

bool RaspRule::SupportDefenseHasBeenSet() const
{
    return m_supportDefenseHasBeenSet;
}

uint64_t RaspRule::GetWhiteType() const
{
    return m_whiteType;
}

void RaspRule::SetWhiteType(const uint64_t& _whiteType)
{
    m_whiteType = _whiteType;
    m_whiteTypeHasBeenSet = true;
}

bool RaspRule::WhiteTypeHasBeenSet() const
{
    return m_whiteTypeHasBeenSet;
}

uint64_t RaspRule::GetStatus() const
{
    return m_status;
}

void RaspRule::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool RaspRule::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string RaspRule::GetCreateTime() const
{
    return m_createTime;
}

void RaspRule::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool RaspRule::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string RaspRule::GetModifyTime() const
{
    return m_modifyTime;
}

void RaspRule::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool RaspRule::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

