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

#include <tencentcloud/goosefs/v20220519/model/FilesetInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Goosefs::V20220519::Model;
using namespace std;

FilesetInfo::FilesetInfo() :
    m_fsetIdHasBeenSet(false),
    m_fsetNameHasBeenSet(false),
    m_fsetDirHasBeenSet(false),
    m_quotaSizeLimitHasBeenSet(false),
    m_quotaSizeUsedHasBeenSet(false),
    m_quotaSizeUsedPercentHasBeenSet(false),
    m_quotaFilesLimitHasBeenSet(false),
    m_quotaFilesUsedHasBeenSet(false),
    m_quotaFilesUsedPercentHasBeenSet(false),
    m_auditStateHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome FilesetInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FsetId") && !value["FsetId"].IsNull())
    {
        if (!value["FsetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FilesetInfo.FsetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fsetId = string(value["FsetId"].GetString());
        m_fsetIdHasBeenSet = true;
    }

    if (value.HasMember("FsetName") && !value["FsetName"].IsNull())
    {
        if (!value["FsetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FilesetInfo.FsetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fsetName = string(value["FsetName"].GetString());
        m_fsetNameHasBeenSet = true;
    }

    if (value.HasMember("FsetDir") && !value["FsetDir"].IsNull())
    {
        if (!value["FsetDir"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FilesetInfo.FsetDir` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fsetDir = string(value["FsetDir"].GetString());
        m_fsetDirHasBeenSet = true;
    }

    if (value.HasMember("QuotaSizeLimit") && !value["QuotaSizeLimit"].IsNull())
    {
        if (!value["QuotaSizeLimit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FilesetInfo.QuotaSizeLimit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quotaSizeLimit = string(value["QuotaSizeLimit"].GetString());
        m_quotaSizeLimitHasBeenSet = true;
    }

    if (value.HasMember("QuotaSizeUsed") && !value["QuotaSizeUsed"].IsNull())
    {
        if (!value["QuotaSizeUsed"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FilesetInfo.QuotaSizeUsed` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quotaSizeUsed = string(value["QuotaSizeUsed"].GetString());
        m_quotaSizeUsedHasBeenSet = true;
    }

    if (value.HasMember("QuotaSizeUsedPercent") && !value["QuotaSizeUsedPercent"].IsNull())
    {
        if (!value["QuotaSizeUsedPercent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FilesetInfo.QuotaSizeUsedPercent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quotaSizeUsedPercent = string(value["QuotaSizeUsedPercent"].GetString());
        m_quotaSizeUsedPercentHasBeenSet = true;
    }

    if (value.HasMember("QuotaFilesLimit") && !value["QuotaFilesLimit"].IsNull())
    {
        if (!value["QuotaFilesLimit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FilesetInfo.QuotaFilesLimit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quotaFilesLimit = string(value["QuotaFilesLimit"].GetString());
        m_quotaFilesLimitHasBeenSet = true;
    }

    if (value.HasMember("QuotaFilesUsed") && !value["QuotaFilesUsed"].IsNull())
    {
        if (!value["QuotaFilesUsed"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FilesetInfo.QuotaFilesUsed` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quotaFilesUsed = string(value["QuotaFilesUsed"].GetString());
        m_quotaFilesUsedHasBeenSet = true;
    }

    if (value.HasMember("QuotaFilesUsedPercent") && !value["QuotaFilesUsedPercent"].IsNull())
    {
        if (!value["QuotaFilesUsedPercent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FilesetInfo.QuotaFilesUsedPercent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quotaFilesUsedPercent = string(value["QuotaFilesUsedPercent"].GetString());
        m_quotaFilesUsedPercentHasBeenSet = true;
    }

    if (value.HasMember("AuditState") && !value["AuditState"].IsNull())
    {
        if (!value["AuditState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FilesetInfo.AuditState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_auditState = string(value["AuditState"].GetString());
        m_auditStateHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FilesetInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FilesetInfo.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FilesetInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FilesetInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fsetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FsetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fsetId.c_str(), allocator).Move(), allocator);
    }

    if (m_fsetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FsetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fsetName.c_str(), allocator).Move(), allocator);
    }

    if (m_fsetDirHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FsetDir";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fsetDir.c_str(), allocator).Move(), allocator);
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

    if (m_auditStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuditState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_auditState.c_str(), allocator).Move(), allocator);
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


string FilesetInfo::GetFsetId() const
{
    return m_fsetId;
}

void FilesetInfo::SetFsetId(const string& _fsetId)
{
    m_fsetId = _fsetId;
    m_fsetIdHasBeenSet = true;
}

bool FilesetInfo::FsetIdHasBeenSet() const
{
    return m_fsetIdHasBeenSet;
}

string FilesetInfo::GetFsetName() const
{
    return m_fsetName;
}

void FilesetInfo::SetFsetName(const string& _fsetName)
{
    m_fsetName = _fsetName;
    m_fsetNameHasBeenSet = true;
}

bool FilesetInfo::FsetNameHasBeenSet() const
{
    return m_fsetNameHasBeenSet;
}

string FilesetInfo::GetFsetDir() const
{
    return m_fsetDir;
}

void FilesetInfo::SetFsetDir(const string& _fsetDir)
{
    m_fsetDir = _fsetDir;
    m_fsetDirHasBeenSet = true;
}

bool FilesetInfo::FsetDirHasBeenSet() const
{
    return m_fsetDirHasBeenSet;
}

string FilesetInfo::GetQuotaSizeLimit() const
{
    return m_quotaSizeLimit;
}

void FilesetInfo::SetQuotaSizeLimit(const string& _quotaSizeLimit)
{
    m_quotaSizeLimit = _quotaSizeLimit;
    m_quotaSizeLimitHasBeenSet = true;
}

bool FilesetInfo::QuotaSizeLimitHasBeenSet() const
{
    return m_quotaSizeLimitHasBeenSet;
}

string FilesetInfo::GetQuotaSizeUsed() const
{
    return m_quotaSizeUsed;
}

void FilesetInfo::SetQuotaSizeUsed(const string& _quotaSizeUsed)
{
    m_quotaSizeUsed = _quotaSizeUsed;
    m_quotaSizeUsedHasBeenSet = true;
}

bool FilesetInfo::QuotaSizeUsedHasBeenSet() const
{
    return m_quotaSizeUsedHasBeenSet;
}

string FilesetInfo::GetQuotaSizeUsedPercent() const
{
    return m_quotaSizeUsedPercent;
}

void FilesetInfo::SetQuotaSizeUsedPercent(const string& _quotaSizeUsedPercent)
{
    m_quotaSizeUsedPercent = _quotaSizeUsedPercent;
    m_quotaSizeUsedPercentHasBeenSet = true;
}

bool FilesetInfo::QuotaSizeUsedPercentHasBeenSet() const
{
    return m_quotaSizeUsedPercentHasBeenSet;
}

string FilesetInfo::GetQuotaFilesLimit() const
{
    return m_quotaFilesLimit;
}

void FilesetInfo::SetQuotaFilesLimit(const string& _quotaFilesLimit)
{
    m_quotaFilesLimit = _quotaFilesLimit;
    m_quotaFilesLimitHasBeenSet = true;
}

bool FilesetInfo::QuotaFilesLimitHasBeenSet() const
{
    return m_quotaFilesLimitHasBeenSet;
}

string FilesetInfo::GetQuotaFilesUsed() const
{
    return m_quotaFilesUsed;
}

void FilesetInfo::SetQuotaFilesUsed(const string& _quotaFilesUsed)
{
    m_quotaFilesUsed = _quotaFilesUsed;
    m_quotaFilesUsedHasBeenSet = true;
}

bool FilesetInfo::QuotaFilesUsedHasBeenSet() const
{
    return m_quotaFilesUsedHasBeenSet;
}

string FilesetInfo::GetQuotaFilesUsedPercent() const
{
    return m_quotaFilesUsedPercent;
}

void FilesetInfo::SetQuotaFilesUsedPercent(const string& _quotaFilesUsedPercent)
{
    m_quotaFilesUsedPercent = _quotaFilesUsedPercent;
    m_quotaFilesUsedPercentHasBeenSet = true;
}

bool FilesetInfo::QuotaFilesUsedPercentHasBeenSet() const
{
    return m_quotaFilesUsedPercentHasBeenSet;
}

string FilesetInfo::GetAuditState() const
{
    return m_auditState;
}

void FilesetInfo::SetAuditState(const string& _auditState)
{
    m_auditState = _auditState;
    m_auditStateHasBeenSet = true;
}

bool FilesetInfo::AuditStateHasBeenSet() const
{
    return m_auditStateHasBeenSet;
}

string FilesetInfo::GetCreateTime() const
{
    return m_createTime;
}

void FilesetInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool FilesetInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string FilesetInfo::GetModifyTime() const
{
    return m_modifyTime;
}

void FilesetInfo::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool FilesetInfo::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

string FilesetInfo::GetStatus() const
{
    return m_status;
}

void FilesetInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool FilesetInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

