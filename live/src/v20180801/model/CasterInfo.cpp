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

#include <tencentcloud/live/v20180801/model/CasterInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

CasterInfo::CasterInfo() :
    m_casterIdHasBeenSet(false),
    m_casterNameHasBeenSet(false),
    m_startLiveTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_delayTimeHasBeenSet(false),
    m_pgmWidthHasBeenSet(false),
    m_pgmHeightHasBeenSet(false),
    m_pgmFpsHasBeenSet(false),
    m_pgmBitRateHasBeenSet(false),
    m_pgmAudioBitRateHasBeenSet(false),
    m_feeTypeHasBeenSet(false),
    m_recordTemplateIdHasBeenSet(false),
    m_recordStatusHasBeenSet(false),
    m_recordTaskIdHasBeenSet(false)
{
}

CoreInternalOutcome CasterInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CasterId") && !value["CasterId"].IsNull())
    {
        if (!value["CasterId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CasterInfo.CasterId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_casterId = value["CasterId"].GetUint64();
        m_casterIdHasBeenSet = true;
    }

    if (value.HasMember("CasterName") && !value["CasterName"].IsNull())
    {
        if (!value["CasterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CasterInfo.CasterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_casterName = string(value["CasterName"].GetString());
        m_casterNameHasBeenSet = true;
    }

    if (value.HasMember("StartLiveTime") && !value["StartLiveTime"].IsNull())
    {
        if (!value["StartLiveTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CasterInfo.StartLiveTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_startLiveTime = value["StartLiveTime"].GetUint64();
        m_startLiveTimeHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CasterInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CasterInfo.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CasterInfo.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CasterInfo.ExpireTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = value["ExpireTime"].GetInt64();
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("DelayTime") && !value["DelayTime"].IsNull())
    {
        if (!value["DelayTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CasterInfo.DelayTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_delayTime = value["DelayTime"].GetUint64();
        m_delayTimeHasBeenSet = true;
    }

    if (value.HasMember("PgmWidth") && !value["PgmWidth"].IsNull())
    {
        if (!value["PgmWidth"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CasterInfo.PgmWidth` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_pgmWidth = value["PgmWidth"].GetUint64();
        m_pgmWidthHasBeenSet = true;
    }

    if (value.HasMember("PgmHeight") && !value["PgmHeight"].IsNull())
    {
        if (!value["PgmHeight"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CasterInfo.PgmHeight` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_pgmHeight = value["PgmHeight"].GetUint64();
        m_pgmHeightHasBeenSet = true;
    }

    if (value.HasMember("PgmFps") && !value["PgmFps"].IsNull())
    {
        if (!value["PgmFps"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CasterInfo.PgmFps` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_pgmFps = value["PgmFps"].GetUint64();
        m_pgmFpsHasBeenSet = true;
    }

    if (value.HasMember("PgmBitRate") && !value["PgmBitRate"].IsNull())
    {
        if (!value["PgmBitRate"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CasterInfo.PgmBitRate` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_pgmBitRate = value["PgmBitRate"].GetUint64();
        m_pgmBitRateHasBeenSet = true;
    }

    if (value.HasMember("PgmAudioBitRate") && !value["PgmAudioBitRate"].IsNull())
    {
        if (!value["PgmAudioBitRate"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CasterInfo.PgmAudioBitRate` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_pgmAudioBitRate = value["PgmAudioBitRate"].GetUint64();
        m_pgmAudioBitRateHasBeenSet = true;
    }

    if (value.HasMember("FeeType") && !value["FeeType"].IsNull())
    {
        if (!value["FeeType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CasterInfo.FeeType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_feeType = value["FeeType"].GetInt64();
        m_feeTypeHasBeenSet = true;
    }

    if (value.HasMember("RecordTemplateId") && !value["RecordTemplateId"].IsNull())
    {
        if (!value["RecordTemplateId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CasterInfo.RecordTemplateId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_recordTemplateId = value["RecordTemplateId"].GetUint64();
        m_recordTemplateIdHasBeenSet = true;
    }

    if (value.HasMember("RecordStatus") && !value["RecordStatus"].IsNull())
    {
        if (!value["RecordStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CasterInfo.RecordStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_recordStatus = value["RecordStatus"].GetUint64();
        m_recordStatusHasBeenSet = true;
    }

    if (value.HasMember("RecordTaskId") && !value["RecordTaskId"].IsNull())
    {
        if (!value["RecordTaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CasterInfo.RecordTaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordTaskId = string(value["RecordTaskId"].GetString());
        m_recordTaskIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CasterInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_startLiveTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartLiveTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startLiveTime, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
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

    if (m_delayTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DelayTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_delayTime, allocator);
    }

    if (m_pgmWidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PgmWidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pgmWidth, allocator);
    }

    if (m_pgmHeightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PgmHeight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pgmHeight, allocator);
    }

    if (m_pgmFpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PgmFps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pgmFps, allocator);
    }

    if (m_pgmBitRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PgmBitRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pgmBitRate, allocator);
    }

    if (m_pgmAudioBitRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PgmAudioBitRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pgmAudioBitRate, allocator);
    }

    if (m_feeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FeeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_feeType, allocator);
    }

    if (m_recordTemplateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordTemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_recordTemplateId, allocator);
    }

    if (m_recordStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_recordStatus, allocator);
    }

    if (m_recordTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordTaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recordTaskId.c_str(), allocator).Move(), allocator);
    }

}


uint64_t CasterInfo::GetCasterId() const
{
    return m_casterId;
}

void CasterInfo::SetCasterId(const uint64_t& _casterId)
{
    m_casterId = _casterId;
    m_casterIdHasBeenSet = true;
}

bool CasterInfo::CasterIdHasBeenSet() const
{
    return m_casterIdHasBeenSet;
}

string CasterInfo::GetCasterName() const
{
    return m_casterName;
}

void CasterInfo::SetCasterName(const string& _casterName)
{
    m_casterName = _casterName;
    m_casterNameHasBeenSet = true;
}

bool CasterInfo::CasterNameHasBeenSet() const
{
    return m_casterNameHasBeenSet;
}

uint64_t CasterInfo::GetStartLiveTime() const
{
    return m_startLiveTime;
}

void CasterInfo::SetStartLiveTime(const uint64_t& _startLiveTime)
{
    m_startLiveTime = _startLiveTime;
    m_startLiveTimeHasBeenSet = true;
}

bool CasterInfo::StartLiveTimeHasBeenSet() const
{
    return m_startLiveTimeHasBeenSet;
}

string CasterInfo::GetDescription() const
{
    return m_description;
}

void CasterInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CasterInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

uint64_t CasterInfo::GetCreateTime() const
{
    return m_createTime;
}

void CasterInfo::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool CasterInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t CasterInfo::GetStatus() const
{
    return m_status;
}

void CasterInfo::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CasterInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t CasterInfo::GetExpireTime() const
{
    return m_expireTime;
}

void CasterInfo::SetExpireTime(const int64_t& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool CasterInfo::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

uint64_t CasterInfo::GetDelayTime() const
{
    return m_delayTime;
}

void CasterInfo::SetDelayTime(const uint64_t& _delayTime)
{
    m_delayTime = _delayTime;
    m_delayTimeHasBeenSet = true;
}

bool CasterInfo::DelayTimeHasBeenSet() const
{
    return m_delayTimeHasBeenSet;
}

uint64_t CasterInfo::GetPgmWidth() const
{
    return m_pgmWidth;
}

void CasterInfo::SetPgmWidth(const uint64_t& _pgmWidth)
{
    m_pgmWidth = _pgmWidth;
    m_pgmWidthHasBeenSet = true;
}

bool CasterInfo::PgmWidthHasBeenSet() const
{
    return m_pgmWidthHasBeenSet;
}

uint64_t CasterInfo::GetPgmHeight() const
{
    return m_pgmHeight;
}

void CasterInfo::SetPgmHeight(const uint64_t& _pgmHeight)
{
    m_pgmHeight = _pgmHeight;
    m_pgmHeightHasBeenSet = true;
}

bool CasterInfo::PgmHeightHasBeenSet() const
{
    return m_pgmHeightHasBeenSet;
}

uint64_t CasterInfo::GetPgmFps() const
{
    return m_pgmFps;
}

void CasterInfo::SetPgmFps(const uint64_t& _pgmFps)
{
    m_pgmFps = _pgmFps;
    m_pgmFpsHasBeenSet = true;
}

bool CasterInfo::PgmFpsHasBeenSet() const
{
    return m_pgmFpsHasBeenSet;
}

uint64_t CasterInfo::GetPgmBitRate() const
{
    return m_pgmBitRate;
}

void CasterInfo::SetPgmBitRate(const uint64_t& _pgmBitRate)
{
    m_pgmBitRate = _pgmBitRate;
    m_pgmBitRateHasBeenSet = true;
}

bool CasterInfo::PgmBitRateHasBeenSet() const
{
    return m_pgmBitRateHasBeenSet;
}

uint64_t CasterInfo::GetPgmAudioBitRate() const
{
    return m_pgmAudioBitRate;
}

void CasterInfo::SetPgmAudioBitRate(const uint64_t& _pgmAudioBitRate)
{
    m_pgmAudioBitRate = _pgmAudioBitRate;
    m_pgmAudioBitRateHasBeenSet = true;
}

bool CasterInfo::PgmAudioBitRateHasBeenSet() const
{
    return m_pgmAudioBitRateHasBeenSet;
}

int64_t CasterInfo::GetFeeType() const
{
    return m_feeType;
}

void CasterInfo::SetFeeType(const int64_t& _feeType)
{
    m_feeType = _feeType;
    m_feeTypeHasBeenSet = true;
}

bool CasterInfo::FeeTypeHasBeenSet() const
{
    return m_feeTypeHasBeenSet;
}

uint64_t CasterInfo::GetRecordTemplateId() const
{
    return m_recordTemplateId;
}

void CasterInfo::SetRecordTemplateId(const uint64_t& _recordTemplateId)
{
    m_recordTemplateId = _recordTemplateId;
    m_recordTemplateIdHasBeenSet = true;
}

bool CasterInfo::RecordTemplateIdHasBeenSet() const
{
    return m_recordTemplateIdHasBeenSet;
}

uint64_t CasterInfo::GetRecordStatus() const
{
    return m_recordStatus;
}

void CasterInfo::SetRecordStatus(const uint64_t& _recordStatus)
{
    m_recordStatus = _recordStatus;
    m_recordStatusHasBeenSet = true;
}

bool CasterInfo::RecordStatusHasBeenSet() const
{
    return m_recordStatusHasBeenSet;
}

string CasterInfo::GetRecordTaskId() const
{
    return m_recordTaskId;
}

void CasterInfo::SetRecordTaskId(const string& _recordTaskId)
{
    m_recordTaskId = _recordTaskId;
    m_recordTaskIdHasBeenSet = true;
}

bool CasterInfo::RecordTaskIdHasBeenSet() const
{
    return m_recordTaskIdHasBeenSet;
}

