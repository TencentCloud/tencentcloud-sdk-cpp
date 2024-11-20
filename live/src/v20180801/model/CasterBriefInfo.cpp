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

#include <tencentcloud/live/v20180801/model/CasterBriefInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

CasterBriefInfo::CasterBriefInfo() :
    m_casterIdHasBeenSet(false),
    m_casterNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_startBillingTimeHasBeenSet(false),
    m_stopBillingTimeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_feeTypeHasBeenSet(false)
{
}

CoreInternalOutcome CasterBriefInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CasterId") && !value["CasterId"].IsNull())
    {
        if (!value["CasterId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CasterBriefInfo.CasterId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_casterId = value["CasterId"].GetUint64();
        m_casterIdHasBeenSet = true;
    }

    if (value.HasMember("CasterName") && !value["CasterName"].IsNull())
    {
        if (!value["CasterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CasterBriefInfo.CasterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_casterName = string(value["CasterName"].GetString());
        m_casterNameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CasterBriefInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("StartBillingTime") && !value["StartBillingTime"].IsNull())
    {
        if (!value["StartBillingTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CasterBriefInfo.StartBillingTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_startBillingTime = value["StartBillingTime"].GetUint64();
        m_startBillingTimeHasBeenSet = true;
    }

    if (value.HasMember("StopBillingTime") && !value["StopBillingTime"].IsNull())
    {
        if (!value["StopBillingTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CasterBriefInfo.StopBillingTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_stopBillingTime = value["StopBillingTime"].GetUint64();
        m_stopBillingTimeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CasterBriefInfo.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CasterBriefInfo.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CasterBriefInfo.ExpireTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = value["ExpireTime"].GetInt64();
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("FeeType") && !value["FeeType"].IsNull())
    {
        if (!value["FeeType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CasterBriefInfo.FeeType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_feeType = value["FeeType"].GetInt64();
        m_feeTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CasterBriefInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_casterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CasterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_casterId, allocator);
    }

    if (m_casterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CasterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_casterName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_startBillingTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartBillingTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startBillingTime, allocator);
    }

    if (m_stopBillingTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StopBillingTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_stopBillingTime, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expireTime, allocator);
    }

    if (m_feeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FeeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_feeType, allocator);
    }

}


uint64_t CasterBriefInfo::GetCasterId() const
{
    return m_casterId;
}

void CasterBriefInfo::SetCasterId(const uint64_t& _casterId)
{
    m_casterId = _casterId;
    m_casterIdHasBeenSet = true;
}

bool CasterBriefInfo::CasterIdHasBeenSet() const
{
    return m_casterIdHasBeenSet;
}

string CasterBriefInfo::GetCasterName() const
{
    return m_casterName;
}

void CasterBriefInfo::SetCasterName(const string& _casterName)
{
    m_casterName = _casterName;
    m_casterNameHasBeenSet = true;
}

bool CasterBriefInfo::CasterNameHasBeenSet() const
{
    return m_casterNameHasBeenSet;
}

string CasterBriefInfo::GetDescription() const
{
    return m_description;
}

void CasterBriefInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CasterBriefInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

uint64_t CasterBriefInfo::GetStartBillingTime() const
{
    return m_startBillingTime;
}

void CasterBriefInfo::SetStartBillingTime(const uint64_t& _startBillingTime)
{
    m_startBillingTime = _startBillingTime;
    m_startBillingTimeHasBeenSet = true;
}

bool CasterBriefInfo::StartBillingTimeHasBeenSet() const
{
    return m_startBillingTimeHasBeenSet;
}

uint64_t CasterBriefInfo::GetStopBillingTime() const
{
    return m_stopBillingTime;
}

void CasterBriefInfo::SetStopBillingTime(const uint64_t& _stopBillingTime)
{
    m_stopBillingTime = _stopBillingTime;
    m_stopBillingTimeHasBeenSet = true;
}

bool CasterBriefInfo::StopBillingTimeHasBeenSet() const
{
    return m_stopBillingTimeHasBeenSet;
}

uint64_t CasterBriefInfo::GetCreateTime() const
{
    return m_createTime;
}

void CasterBriefInfo::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool CasterBriefInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t CasterBriefInfo::GetStatus() const
{
    return m_status;
}

void CasterBriefInfo::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CasterBriefInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t CasterBriefInfo::GetExpireTime() const
{
    return m_expireTime;
}

void CasterBriefInfo::SetExpireTime(const int64_t& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool CasterBriefInfo::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

int64_t CasterBriefInfo::GetFeeType() const
{
    return m_feeType;
}

void CasterBriefInfo::SetFeeType(const int64_t& _feeType)
{
    m_feeType = _feeType;
    m_feeTypeHasBeenSet = true;
}

bool CasterBriefInfo::FeeTypeHasBeenSet() const
{
    return m_feeTypeHasBeenSet;
}

