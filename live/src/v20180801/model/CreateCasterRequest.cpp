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

#include <tencentcloud/live/v20180801/model/CreateCasterRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

CreateCasterRequest::CreateCasterRequest() :
    m_casterNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_delayTimeHasBeenSet(false),
    m_transitionTypeHasBeenSet(false),
    m_pgmWidthHasBeenSet(false),
    m_pgmHeightHasBeenSet(false),
    m_pgmFpsHasBeenSet(false),
    m_pgmBitRateHasBeenSet(false),
    m_feeTypeHasBeenSet(false),
    m_pgmAudioBitRateHasBeenSet(false)
{
}

string CreateCasterRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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


string CreateCasterRequest::GetCasterName() const
{
    return m_casterName;
}

void CreateCasterRequest::SetCasterName(const string& _casterName)
{
    m_casterName = _casterName;
    m_casterNameHasBeenSet = true;
}

bool CreateCasterRequest::CasterNameHasBeenSet() const
{
    return m_casterNameHasBeenSet;
}

string CreateCasterRequest::GetDescription() const
{
    return m_description;
}

void CreateCasterRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateCasterRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t CreateCasterRequest::GetExpireTime() const
{
    return m_expireTime;
}

void CreateCasterRequest::SetExpireTime(const int64_t& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool CreateCasterRequest::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

uint64_t CreateCasterRequest::GetDelayTime() const
{
    return m_delayTime;
}

void CreateCasterRequest::SetDelayTime(const uint64_t& _delayTime)
{
    m_delayTime = _delayTime;
    m_delayTimeHasBeenSet = true;
}

bool CreateCasterRequest::DelayTimeHasBeenSet() const
{
    return m_delayTimeHasBeenSet;
}

string CreateCasterRequest::GetTransitionType() const
{
    return m_transitionType;
}

void CreateCasterRequest::SetTransitionType(const string& _transitionType)
{
    m_transitionType = _transitionType;
    m_transitionTypeHasBeenSet = true;
}

bool CreateCasterRequest::TransitionTypeHasBeenSet() const
{
    return m_transitionTypeHasBeenSet;
}

uint64_t CreateCasterRequest::GetPgmWidth() const
{
    return m_pgmWidth;
}

void CreateCasterRequest::SetPgmWidth(const uint64_t& _pgmWidth)
{
    m_pgmWidth = _pgmWidth;
    m_pgmWidthHasBeenSet = true;
}

bool CreateCasterRequest::PgmWidthHasBeenSet() const
{
    return m_pgmWidthHasBeenSet;
}

uint64_t CreateCasterRequest::GetPgmHeight() const
{
    return m_pgmHeight;
}

void CreateCasterRequest::SetPgmHeight(const uint64_t& _pgmHeight)
{
    m_pgmHeight = _pgmHeight;
    m_pgmHeightHasBeenSet = true;
}

bool CreateCasterRequest::PgmHeightHasBeenSet() const
{
    return m_pgmHeightHasBeenSet;
}

uint64_t CreateCasterRequest::GetPgmFps() const
{
    return m_pgmFps;
}

void CreateCasterRequest::SetPgmFps(const uint64_t& _pgmFps)
{
    m_pgmFps = _pgmFps;
    m_pgmFpsHasBeenSet = true;
}

bool CreateCasterRequest::PgmFpsHasBeenSet() const
{
    return m_pgmFpsHasBeenSet;
}

uint64_t CreateCasterRequest::GetPgmBitRate() const
{
    return m_pgmBitRate;
}

void CreateCasterRequest::SetPgmBitRate(const uint64_t& _pgmBitRate)
{
    m_pgmBitRate = _pgmBitRate;
    m_pgmBitRateHasBeenSet = true;
}

bool CreateCasterRequest::PgmBitRateHasBeenSet() const
{
    return m_pgmBitRateHasBeenSet;
}

int64_t CreateCasterRequest::GetFeeType() const
{
    return m_feeType;
}

void CreateCasterRequest::SetFeeType(const int64_t& _feeType)
{
    m_feeType = _feeType;
    m_feeTypeHasBeenSet = true;
}

bool CreateCasterRequest::FeeTypeHasBeenSet() const
{
    return m_feeTypeHasBeenSet;
}

uint64_t CreateCasterRequest::GetPgmAudioBitRate() const
{
    return m_pgmAudioBitRate;
}

void CreateCasterRequest::SetPgmAudioBitRate(const uint64_t& _pgmAudioBitRate)
{
    m_pgmAudioBitRate = _pgmAudioBitRate;
    m_pgmAudioBitRateHasBeenSet = true;
}

bool CreateCasterRequest::PgmAudioBitRateHasBeenSet() const
{
    return m_pgmAudioBitRateHasBeenSet;
}


