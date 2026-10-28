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

#include <tencentcloud/goosefs/v20220519/model/UserQuotaInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Goosefs::V20220519::Model;
using namespace std;

UserQuotaInfo::UserQuotaInfo() :
    m_quotaIdHasBeenSet(false),
    m_quotaTypeHasBeenSet(false),
    m_quotaObjectNameHasBeenSet(false),
    m_quotaSizeLimitHasBeenSet(false),
    m_quotaSizeUsedHasBeenSet(false),
    m_quotaSizeUsedPercentHasBeenSet(false),
    m_quotaFilesLimitHasBeenSet(false),
    m_quotaFilesUsedHasBeenSet(false),
    m_quotaFilesUsedPercentHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome UserQuotaInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("QuotaId") && !value["QuotaId"].IsNull())
    {
        if (!value["QuotaId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserQuotaInfo.QuotaId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quotaId = string(value["QuotaId"].GetString());
        m_quotaIdHasBeenSet = true;
    }

    if (value.HasMember("QuotaType") && !value["QuotaType"].IsNull())
    {
        if (!value["QuotaType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserQuotaInfo.QuotaType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quotaType = string(value["QuotaType"].GetString());
        m_quotaTypeHasBeenSet = true;
    }

    if (value.HasMember("QuotaObjectName") && !value["QuotaObjectName"].IsNull())
    {
        if (!value["QuotaObjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserQuotaInfo.QuotaObjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quotaObjectName = string(value["QuotaObjectName"].GetString());
        m_quotaObjectNameHasBeenSet = true;
    }

    if (value.HasMember("QuotaSizeLimit") && !value["QuotaSizeLimit"].IsNull())
    {
        if (!value["QuotaSizeLimit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserQuotaInfo.QuotaSizeLimit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quotaSizeLimit = string(value["QuotaSizeLimit"].GetString());
        m_quotaSizeLimitHasBeenSet = true;
    }

    if (value.HasMember("QuotaSizeUsed") && !value["QuotaSizeUsed"].IsNull())
    {
        if (!value["QuotaSizeUsed"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserQuotaInfo.QuotaSizeUsed` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quotaSizeUsed = string(value["QuotaSizeUsed"].GetString());
        m_quotaSizeUsedHasBeenSet = true;
    }

    if (value.HasMember("QuotaSizeUsedPercent") && !value["QuotaSizeUsedPercent"].IsNull())
    {
        if (!value["QuotaSizeUsedPercent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserQuotaInfo.QuotaSizeUsedPercent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quotaSizeUsedPercent = string(value["QuotaSizeUsedPercent"].GetString());
        m_quotaSizeUsedPercentHasBeenSet = true;
    }

    if (value.HasMember("QuotaFilesLimit") && !value["QuotaFilesLimit"].IsNull())
    {
        if (!value["QuotaFilesLimit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserQuotaInfo.QuotaFilesLimit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quotaFilesLimit = string(value["QuotaFilesLimit"].GetString());
        m_quotaFilesLimitHasBeenSet = true;
    }

    if (value.HasMember("QuotaFilesUsed") && !value["QuotaFilesUsed"].IsNull())
    {
        if (!value["QuotaFilesUsed"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserQuotaInfo.QuotaFilesUsed` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quotaFilesUsed = string(value["QuotaFilesUsed"].GetString());
        m_quotaFilesUsedHasBeenSet = true;
    }

    if (value.HasMember("QuotaFilesUsedPercent") && !value["QuotaFilesUsedPercent"].IsNull())
    {
        if (!value["QuotaFilesUsedPercent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserQuotaInfo.QuotaFilesUsedPercent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quotaFilesUsedPercent = string(value["QuotaFilesUsedPercent"].GetString());
        m_quotaFilesUsedPercentHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserQuotaInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserQuotaInfo.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserQuotaInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UserQuotaInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_quotaIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuotaId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_quotaId.c_str(), allocator).Move(), allocator);
    }

    if (m_quotaTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuotaType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_quotaType.c_str(), allocator).Move(), allocator);
    }

    if (m_quotaObjectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuotaObjectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_quotaObjectName.c_str(), allocator).Move(), allocator);
    }

    if (m_quotaSizeLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuotaSizeLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_quotaSizeLimit.c_str(), allocator).Move(), allocator);
    }

    if (m_quotaSizeUsedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuotaSizeUsed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_quotaSizeUsed.c_str(), allocator).Move(), allocator);
    }

    if (m_quotaSizeUsedPercentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuotaSizeUsedPercent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_quotaSizeUsedPercent.c_str(), allocator).Move(), allocator);
    }

    if (m_quotaFilesLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuotaFilesLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_quotaFilesLimit.c_str(), allocator).Move(), allocator);
    }

    if (m_quotaFilesUsedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuotaFilesUsed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_quotaFilesUsed.c_str(), allocator).Move(), allocator);
    }

    if (m_quotaFilesUsedPercentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuotaFilesUsedPercent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_quotaFilesUsedPercent.c_str(), allocator).Move(), allocator);
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

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

}


string UserQuotaInfo::GetQuotaId() const
{
    return m_quotaId;
}

void UserQuotaInfo::SetQuotaId(const string& _quotaId)
{
    m_quotaId = _quotaId;
    m_quotaIdHasBeenSet = true;
}

bool UserQuotaInfo::QuotaIdHasBeenSet() const
{
    return m_quotaIdHasBeenSet;
}

string UserQuotaInfo::GetQuotaType() const
{
    return m_quotaType;
}

void UserQuotaInfo::SetQuotaType(const string& _quotaType)
{
    m_quotaType = _quotaType;
    m_quotaTypeHasBeenSet = true;
}

bool UserQuotaInfo::QuotaTypeHasBeenSet() const
{
    return m_quotaTypeHasBeenSet;
}

string UserQuotaInfo::GetQuotaObjectName() const
{
    return m_quotaObjectName;
}

void UserQuotaInfo::SetQuotaObjectName(const string& _quotaObjectName)
{
    m_quotaObjectName = _quotaObjectName;
    m_quotaObjectNameHasBeenSet = true;
}

bool UserQuotaInfo::QuotaObjectNameHasBeenSet() const
{
    return m_quotaObjectNameHasBeenSet;
}

string UserQuotaInfo::GetQuotaSizeLimit() const
{
    return m_quotaSizeLimit;
}

void UserQuotaInfo::SetQuotaSizeLimit(const string& _quotaSizeLimit)
{
    m_quotaSizeLimit = _quotaSizeLimit;
    m_quotaSizeLimitHasBeenSet = true;
}

bool UserQuotaInfo::QuotaSizeLimitHasBeenSet() const
{
    return m_quotaSizeLimitHasBeenSet;
}

string UserQuotaInfo::GetQuotaSizeUsed() const
{
    return m_quotaSizeUsed;
}

void UserQuotaInfo::SetQuotaSizeUsed(const string& _quotaSizeUsed)
{
    m_quotaSizeUsed = _quotaSizeUsed;
    m_quotaSizeUsedHasBeenSet = true;
}

bool UserQuotaInfo::QuotaSizeUsedHasBeenSet() const
{
    return m_quotaSizeUsedHasBeenSet;
}

string UserQuotaInfo::GetQuotaSizeUsedPercent() const
{
    return m_quotaSizeUsedPercent;
}

void UserQuotaInfo::SetQuotaSizeUsedPercent(const string& _quotaSizeUsedPercent)
{
    m_quotaSizeUsedPercent = _quotaSizeUsedPercent;
    m_quotaSizeUsedPercentHasBeenSet = true;
}

bool UserQuotaInfo::QuotaSizeUsedPercentHasBeenSet() const
{
    return m_quotaSizeUsedPercentHasBeenSet;
}

string UserQuotaInfo::GetQuotaFilesLimit() const
{
    return m_quotaFilesLimit;
}

void UserQuotaInfo::SetQuotaFilesLimit(const string& _quotaFilesLimit)
{
    m_quotaFilesLimit = _quotaFilesLimit;
    m_quotaFilesLimitHasBeenSet = true;
}

bool UserQuotaInfo::QuotaFilesLimitHasBeenSet() const
{
    return m_quotaFilesLimitHasBeenSet;
}

string UserQuotaInfo::GetQuotaFilesUsed() const
{
    return m_quotaFilesUsed;
}

void UserQuotaInfo::SetQuotaFilesUsed(const string& _quotaFilesUsed)
{
    m_quotaFilesUsed = _quotaFilesUsed;
    m_quotaFilesUsedHasBeenSet = true;
}

bool UserQuotaInfo::QuotaFilesUsedHasBeenSet() const
{
    return m_quotaFilesUsedHasBeenSet;
}

string UserQuotaInfo::GetQuotaFilesUsedPercent() const
{
    return m_quotaFilesUsedPercent;
}

void UserQuotaInfo::SetQuotaFilesUsedPercent(const string& _quotaFilesUsedPercent)
{
    m_quotaFilesUsedPercent = _quotaFilesUsedPercent;
    m_quotaFilesUsedPercentHasBeenSet = true;
}

bool UserQuotaInfo::QuotaFilesUsedPercentHasBeenSet() const
{
    return m_quotaFilesUsedPercentHasBeenSet;
}

string UserQuotaInfo::GetCreateTime() const
{
    return m_createTime;
}

void UserQuotaInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool UserQuotaInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string UserQuotaInfo::GetModifyTime() const
{
    return m_modifyTime;
}

void UserQuotaInfo::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool UserQuotaInfo::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

string UserQuotaInfo::GetStatus() const
{
    return m_status;
}

void UserQuotaInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool UserQuotaInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

