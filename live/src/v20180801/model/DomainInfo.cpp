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

#include <tencentcloud/live/v20180801/model/DomainInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

DomainInfo::DomainInfo() :
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_bCNameHasBeenSet(false),
    m_targetDomainHasBeenSet(false),
    m_playTypeHasBeenSet(false),
    m_isDelayLiveHasBeenSet(false),
    m_currentCNameHasBeenSet(false),
    m_rentTagHasBeenSet(false),
    m_rentExpireTimeHasBeenSet(false),
    m_isMiniProgramLiveHasBeenSet(false)
{
}

CoreInternalOutcome DomainInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainInfo.Type` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetUint64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainInfo.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("BCName") && !value["BCName"].IsNull())
    {
        if (!value["BCName"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainInfo.BCName` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_bCName = value["BCName"].GetUint64();
        m_bCNameHasBeenSet = true;
    }

    if (value.HasMember("TargetDomain") && !value["TargetDomain"].IsNull())
    {
        if (!value["TargetDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainInfo.TargetDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetDomain = string(value["TargetDomain"].GetString());
        m_targetDomainHasBeenSet = true;
    }

    if (value.HasMember("PlayType") && !value["PlayType"].IsNull())
    {
        if (!value["PlayType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainInfo.PlayType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_playType = value["PlayType"].GetInt64();
        m_playTypeHasBeenSet = true;
    }

    if (value.HasMember("IsDelayLive") && !value["IsDelayLive"].IsNull())
    {
        if (!value["IsDelayLive"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainInfo.IsDelayLive` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isDelayLive = value["IsDelayLive"].GetInt64();
        m_isDelayLiveHasBeenSet = true;
    }

    if (value.HasMember("CurrentCName") && !value["CurrentCName"].IsNull())
    {
        if (!value["CurrentCName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainInfo.CurrentCName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_currentCName = string(value["CurrentCName"].GetString());
        m_currentCNameHasBeenSet = true;
    }

    if (value.HasMember("RentTag") && !value["RentTag"].IsNull())
    {
        if (!value["RentTag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainInfo.RentTag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rentTag = value["RentTag"].GetInt64();
        m_rentTagHasBeenSet = true;
    }

    if (value.HasMember("RentExpireTime") && !value["RentExpireTime"].IsNull())
    {
        if (!value["RentExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainInfo.RentExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rentExpireTime = string(value["RentExpireTime"].GetString());
        m_rentExpireTimeHasBeenSet = true;
    }

    if (value.HasMember("IsMiniProgramLive") && !value["IsMiniProgramLive"].IsNull())
    {
        if (!value["IsMiniProgramLive"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainInfo.IsMiniProgramLive` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isMiniProgramLive = value["IsMiniProgramLive"].GetInt64();
        m_isMiniProgramLiveHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DomainInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
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

    if (m_bCNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BCName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bCName, allocator);
    }

    if (m_targetDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_playTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlayType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_playType, allocator);
    }

    if (m_isDelayLiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDelayLive";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDelayLive, allocator);
    }

    if (m_currentCNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentCName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_currentCName.c_str(), allocator).Move(), allocator);
    }

    if (m_rentTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RentTag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rentTag, allocator);
    }

    if (m_rentExpireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RentExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rentExpireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_isMiniProgramLiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsMiniProgramLive";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isMiniProgramLive, allocator);
    }

}


string DomainInfo::GetName() const
{
    return m_name;
}

void DomainInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DomainInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t DomainInfo::GetType() const
{
    return m_type;
}

void DomainInfo::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DomainInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

uint64_t DomainInfo::GetStatus() const
{
    return m_status;
}

void DomainInfo::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DomainInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DomainInfo::GetCreateTime() const
{
    return m_createTime;
}

void DomainInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DomainInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t DomainInfo::GetBCName() const
{
    return m_bCName;
}

void DomainInfo::SetBCName(const uint64_t& _bCName)
{
    m_bCName = _bCName;
    m_bCNameHasBeenSet = true;
}

bool DomainInfo::BCNameHasBeenSet() const
{
    return m_bCNameHasBeenSet;
}

string DomainInfo::GetTargetDomain() const
{
    return m_targetDomain;
}

void DomainInfo::SetTargetDomain(const string& _targetDomain)
{
    m_targetDomain = _targetDomain;
    m_targetDomainHasBeenSet = true;
}

bool DomainInfo::TargetDomainHasBeenSet() const
{
    return m_targetDomainHasBeenSet;
}

int64_t DomainInfo::GetPlayType() const
{
    return m_playType;
}

void DomainInfo::SetPlayType(const int64_t& _playType)
{
    m_playType = _playType;
    m_playTypeHasBeenSet = true;
}

bool DomainInfo::PlayTypeHasBeenSet() const
{
    return m_playTypeHasBeenSet;
}

int64_t DomainInfo::GetIsDelayLive() const
{
    return m_isDelayLive;
}

void DomainInfo::SetIsDelayLive(const int64_t& _isDelayLive)
{
    m_isDelayLive = _isDelayLive;
    m_isDelayLiveHasBeenSet = true;
}

bool DomainInfo::IsDelayLiveHasBeenSet() const
{
    return m_isDelayLiveHasBeenSet;
}

string DomainInfo::GetCurrentCName() const
{
    return m_currentCName;
}

void DomainInfo::SetCurrentCName(const string& _currentCName)
{
    m_currentCName = _currentCName;
    m_currentCNameHasBeenSet = true;
}

bool DomainInfo::CurrentCNameHasBeenSet() const
{
    return m_currentCNameHasBeenSet;
}

int64_t DomainInfo::GetRentTag() const
{
    return m_rentTag;
}

void DomainInfo::SetRentTag(const int64_t& _rentTag)
{
    m_rentTag = _rentTag;
    m_rentTagHasBeenSet = true;
}

bool DomainInfo::RentTagHasBeenSet() const
{
    return m_rentTagHasBeenSet;
}

string DomainInfo::GetRentExpireTime() const
{
    return m_rentExpireTime;
}

void DomainInfo::SetRentExpireTime(const string& _rentExpireTime)
{
    m_rentExpireTime = _rentExpireTime;
    m_rentExpireTimeHasBeenSet = true;
}

bool DomainInfo::RentExpireTimeHasBeenSet() const
{
    return m_rentExpireTimeHasBeenSet;
}

int64_t DomainInfo::GetIsMiniProgramLive() const
{
    return m_isMiniProgramLive;
}

void DomainInfo::SetIsMiniProgramLive(const int64_t& _isMiniProgramLive)
{
    m_isMiniProgramLive = _isMiniProgramLive;
    m_isMiniProgramLiveHasBeenSet = true;
}

bool DomainInfo::IsMiniProgramLiveHasBeenSet() const
{
    return m_isMiniProgramLiveHasBeenSet;
}

