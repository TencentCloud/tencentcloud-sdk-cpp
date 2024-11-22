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

#include <tencentcloud/live/v20180801/model/ModifyCasterRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

ModifyCasterRequest::ModifyCasterRequest() :
    m_casterIdHasBeenSet(false),
    m_casterNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_recordTemplateIdHasBeenSet(false),
    m_recordStatusHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_delayTimeHasBeenSet(false),
    m_transitionTypeHasBeenSet(false),
    m_pgmWidthHasBeenSet(false),
    m_pgmHeightHasBeenSet(false),
    m_pgmFpsHasBeenSet(false),
    m_pgmBitRateHasBeenSet(false),
    m_feeTypeHasBeenSet(false),
    m_recordTaskIdHasBeenSet(false),
    m_pgmAudioBitRateHasBeenSet(false)
{
}

string ModifyCasterRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_casterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CasterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_casterId, allocator);
    }

    if (m_casterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CasterName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_casterName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_recordTemplateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordTemplateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_recordTemplateId, allocator);
    }

    if (m_recordStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_recordStatus, allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_expireTime, allocator);
    }

    if (m_delayTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DelayTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_delayTime, allocator);
    }

    if (m_transitionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransitionType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_transitionType.c_str(), allocator).Move(), allocator);
    }

    if (m_pgmWidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PgmWidth";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pgmWidth, allocator);
    }

    if (m_pgmHeightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PgmHeight";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pgmHeight, allocator);
    }

    if (m_pgmFpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PgmFps";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pgmFps, allocator);
    }

    if (m_pgmBitRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PgmBitRate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pgmBitRate, allocator);
    }

    if (m_feeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FeeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_feeType, allocator);
    }

    if (m_recordTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordTaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_recordTaskId.c_str(), allocator).Move(), allocator);
    }

    if (m_pgmAudioBitRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PgmAudioBitRate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pgmAudioBitRate, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ModifyCasterRequest::GetCasterId() const
{
    return m_casterId;
}

void ModifyCasterRequest::SetCasterId(const uint64_t& _casterId)
{
    m_casterId = _casterId;
    m_casterIdHasBeenSet = true;
}

bool ModifyCasterRequest::CasterIdHasBeenSet() const
{
    return m_casterIdHasBeenSet;
}

string ModifyCasterRequest::GetCasterName() const
{
    return m_casterName;
}

void ModifyCasterRequest::SetCasterName(const string& _casterName)
{
    m_casterName = _casterName;
    m_casterNameHasBeenSet = true;
}

bool ModifyCasterRequest::CasterNameHasBeenSet() const
{
    return m_casterNameHasBeenSet;
}

string ModifyCasterRequest::GetDescription() const
{
    return m_description;
}

void ModifyCasterRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModifyCasterRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

uint64_t ModifyCasterRequest::GetRecordTemplateId() const
{
    return m_recordTemplateId;
}

void ModifyCasterRequest::SetRecordTemplateId(const uint64_t& _recordTemplateId)
{
    m_recordTemplateId = _recordTemplateId;
    m_recordTemplateIdHasBeenSet = true;
}

bool ModifyCasterRequest::RecordTemplateIdHasBeenSet() const
{
    return m_recordTemplateIdHasBeenSet;
}

uint64_t ModifyCasterRequest::GetRecordStatus() const
{
    return m_recordStatus;
}

void ModifyCasterRequest::SetRecordStatus(const uint64_t& _recordStatus)
{
    m_recordStatus = _recordStatus;
    m_recordStatusHasBeenSet = true;
}

bool ModifyCasterRequest::RecordStatusHasBeenSet() const
{
    return m_recordStatusHasBeenSet;
}

int64_t ModifyCasterRequest::GetExpireTime() const
{
    return m_expireTime;
}

void ModifyCasterRequest::SetExpireTime(const int64_t& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool ModifyCasterRequest::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

uint64_t ModifyCasterRequest::GetDelayTime() const
{
    return m_delayTime;
}

void ModifyCasterRequest::SetDelayTime(const uint64_t& _delayTime)
{
    m_delayTime = _delayTime;
    m_delayTimeHasBeenSet = true;
}

bool ModifyCasterRequest::DelayTimeHasBeenSet() const
{
    return m_delayTimeHasBeenSet;
}

string ModifyCasterRequest::GetTransitionType() const
{
    return m_transitionType;
}

void ModifyCasterRequest::SetTransitionType(const string& _transitionType)
{
    m_transitionType = _transitionType;
    m_transitionTypeHasBeenSet = true;
}

bool ModifyCasterRequest::TransitionTypeHasBeenSet() const
{
    return m_transitionTypeHasBeenSet;
}

uint64_t ModifyCasterRequest::GetPgmWidth() const
{
    return m_pgmWidth;
}

void ModifyCasterRequest::SetPgmWidth(const uint64_t& _pgmWidth)
{
    m_pgmWidth = _pgmWidth;
    m_pgmWidthHasBeenSet = true;
}

bool ModifyCasterRequest::PgmWidthHasBeenSet() const
{
    return m_pgmWidthHasBeenSet;
}

uint64_t ModifyCasterRequest::GetPgmHeight() const
{
    return m_pgmHeight;
}

void ModifyCasterRequest::SetPgmHeight(const uint64_t& _pgmHeight)
{
    m_pgmHeight = _pgmHeight;
    m_pgmHeightHasBeenSet = true;
}

bool ModifyCasterRequest::PgmHeightHasBeenSet() const
{
    return m_pgmHeightHasBeenSet;
}

uint64_t ModifyCasterRequest::GetPgmFps() const
{
    return m_pgmFps;
}

void ModifyCasterRequest::SetPgmFps(const uint64_t& _pgmFps)
{
    m_pgmFps = _pgmFps;
    m_pgmFpsHasBeenSet = true;
}

bool ModifyCasterRequest::PgmFpsHasBeenSet() const
{
    return m_pgmFpsHasBeenSet;
}

uint64_t ModifyCasterRequest::GetPgmBitRate() const
{
    return m_pgmBitRate;
}

void ModifyCasterRequest::SetPgmBitRate(const uint64_t& _pgmBitRate)
{
    m_pgmBitRate = _pgmBitRate;
    m_pgmBitRateHasBeenSet = true;
}

bool ModifyCasterRequest::PgmBitRateHasBeenSet() const
{
    return m_pgmBitRateHasBeenSet;
}

int64_t ModifyCasterRequest::GetFeeType() const
{
    return m_feeType;
}

void ModifyCasterRequest::SetFeeType(const int64_t& _feeType)
{
    m_feeType = _feeType;
    m_feeTypeHasBeenSet = true;
}

bool ModifyCasterRequest::FeeTypeHasBeenSet() const
{
    return m_feeTypeHasBeenSet;
}

string ModifyCasterRequest::GetRecordTaskId() const
{
    return m_recordTaskId;
}

void ModifyCasterRequest::SetRecordTaskId(const string& _recordTaskId)
{
    m_recordTaskId = _recordTaskId;
    m_recordTaskIdHasBeenSet = true;
}

bool ModifyCasterRequest::RecordTaskIdHasBeenSet() const
{
    return m_recordTaskIdHasBeenSet;
}

uint64_t ModifyCasterRequest::GetPgmAudioBitRate() const
{
    return m_pgmAudioBitRate;
}

void ModifyCasterRequest::SetPgmAudioBitRate(const uint64_t& _pgmAudioBitRate)
{
    m_pgmAudioBitRate = _pgmAudioBitRate;
    m_pgmAudioBitRateHasBeenSet = true;
}

bool ModifyCasterRequest::PgmAudioBitRateHasBeenSet() const
{
    return m_pgmAudioBitRateHasBeenSet;
}


